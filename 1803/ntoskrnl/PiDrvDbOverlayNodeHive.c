/*
 * XREFs of PiDrvDbOverlayNodeHive @ 0x14073CE80
 * Callers:
 *     PiDrvDbInit @ 0x140622800 (PiDrvDbInit.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 *     PiDrvDbUnloadHive @ 0x140578894 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x1405788DC (PiDrvDbLoadHive.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14073C89C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14073DAB4 (PiDrvDbResolveNodeFilePaths.c)
 */

__int64 __fastcall PiDrvDbOverlayNodeHive(const UNICODE_STRING *a1, const WCHAR *a2)
{
  char v3; // r12
  wchar_t **v4; // rsi
  unsigned int v5; // r14d
  int appended; // ebx
  unsigned __int16 i; // cx
  UNICODE_STRING Destination; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v3 = 0;
  Handle = 0LL;
  v4 = 0LL;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  RtlInitUnicodeString(&Destination, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  if ( !wcsicmp(a2, L"SYSTEM") )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&a1[2];
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( appended < 0 )
      goto LABEL_20;
    v4 = off_1407F9DD8;
    v5 = 5;
LABEL_17:
    appended = SysCtxRegOpenKey(0LL, 2147483650LL, (__int64)a2, 0, 0x2001Fu, (__int64)&Handle);
    if ( appended >= 0 )
    {
      appended = PiDrvDbResolveNodeFilePaths(a1, KeyHandle);
      if ( appended >= 0 )
        appended = PiDrvDbOverlayCopyKeys((__int64)KeyHandle, 0LL, (char *)Handle, 0LL, 0, (const WCHAR *)v4, v5);
    }
    goto LABEL_20;
  }
  Destination.MaximumLength = DestinationString.Length + a1[3].MaximumLength;
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExpAllocateStringRoutine(Destination.MaximumLength);
  if ( !Destination.Buffer )
  {
LABEL_5:
    appended = -1073741670;
    goto LABEL_20;
  }
  appended = RtlAppendUnicodeStringToString(&Destination, a1 + 3);
  if ( appended >= 0 )
  {
    for ( i = Destination.Length; i > 2u; Destination.Length = i )
    {
      if ( Destination.Buffer[((unsigned __int64)i >> 1) - 1] == 92 )
        break;
      i -= 2;
    }
    appended = RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    if ( appended >= 0 )
    {
      UnicodeString.MaximumLength = DestinationString.Length + a1[2].MaximumLength;
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)ExpAllocateStringRoutine(UnicodeString.MaximumLength);
      if ( UnicodeString.Buffer )
      {
        appended = RtlAppendUnicodeStringToString(&UnicodeString, a1 + 2);
        if ( appended < 0 )
          goto LABEL_20;
        appended = RtlAppendUnicodeStringToString(&UnicodeString, &DestinationString);
        if ( appended < 0 )
          goto LABEL_20;
        appended = PiDrvDbLoadHive(&UnicodeString, &Destination, 0x2000, &KeyHandle);
        if ( appended < 0 )
          goto LABEL_20;
        v3 = 1;
        if ( !wcsicmp(a2, L"SOFTWARE") )
        {
          v4 = off_1407F9770;
          v5 = 3;
        }
        goto LABEL_17;
      }
      goto LABEL_5;
    }
  }
LABEL_20:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    PiDrvDbUnloadHive(&UnicodeString, 0LL);
  RtlFreeAnsiString(&Destination);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)appended;
}
