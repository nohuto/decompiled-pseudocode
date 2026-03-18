/*
 * XREFs of PiDevCfgConfigureDeviceLocation @ 0x140592C98
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceClass @ 0x14069E850 (PpDevCfgProcessDeviceClass.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x14014FD00 (PnpDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     IopReplaceSeperatorWithPound @ 0x1404466F0 (IopReplaceSeperatorWithPound.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     NtQueryKey @ 0x140507B00 (NtQueryKey.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140592E90 (PiDevCfgConfigureDeviceKeys.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140695C74 (PnpOpenFirstMatchingSubKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // edi
  wchar_t *Buffer; // rsi
  int CachedContextBaseKey; // ebx
  NTSTATUS v11; // eax
  int v12; // eax
  _QWORD *v13; // r15
  int v14; // eax
  int v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  HANDLE v18; // [rsp+30h] [rbp-A9h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-A1h] BYREF
  int v20; // [rsp+40h] [rbp-99h] BYREF
  const wchar_t *v21; // [rsp+48h] [rbp-91h]
  HANDLE Handle; // [rsp+50h] [rbp-89h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-81h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-39h] BYREF
  void *v27; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-29h]
  _BYTE KeyInformation[12]; // [rsp+B8h] [rbp-21h] BYREF
  int v30; // [rsp+C4h] [rbp-15h]

  v4 = 0;
  v28 = a1;
  KeyHandle = 0LL;
  v23 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !*(_QWORD *)(a2 + 64) )
    goto LABEL_6;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v27);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_7;
  v20 = 3145774;
  v21 = L"Control\\DeviceLocations";
  ObjectAttributes.RootDirectory = v27;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
  KeyHandle = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  CachedContextBaseKey = v11;
  if ( v11 == -1073741772 )
    goto LABEL_6;
  if ( v11 < 0 )
    goto LABEL_7;
  CachedContextBaseKey = NtQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( CachedContextBaseKey < 0 )
    goto LABEL_7;
  if ( !v30 )
    goto LABEL_6;
  v12 = PnpOpenFirstMatchingSubKey(*(PCWSTR *)(a2 + 64), &v23);
  CachedContextBaseKey = v12;
  if ( v12 == -1073741772 )
    goto LABEL_6;
  if ( v12 < 0 )
    goto LABEL_7;
  v13 = (_QWORD *)(a2 + 32);
  while ( 1 )
  {
    if ( !*v13 )
      goto LABEL_34;
    if ( Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    if ( !PnpDuplicateUnicodeString((__int64)&UnicodeString, 16LL * v4 + a2 + 24) )
      break;
    v14 = IopReplaceSeperatorWithPound((__int64)&UnicodeString, (__int64)&UnicodeString);
    Buffer = UnicodeString.Buffer;
    if ( v14 >= 0 )
    {
      v15 = PnpOpenFirstMatchingSubKey(UnicodeString.Buffer, &v18);
      CachedContextBaseKey = v15;
      if ( v15 == -1073741772 )
      {
        CachedContextBaseKey = 0;
      }
      else if ( v15 < 0 )
      {
        goto LABEL_7;
      }
      if ( v18 )
        goto LABEL_37;
    }
    else
    {
      CachedContextBaseKey = 0;
    }
LABEL_34:
    ++v4;
    v13 += 2;
    if ( v4 >= 2 )
      goto LABEL_37;
  }
  CachedContextBaseKey = -1073741670;
LABEL_37:
  if ( CachedContextBaseKey >= 0 )
  {
    if ( v18 )
      goto LABEL_41;
    v20 = 262146;
    v21 = L"*";
    ObjectAttributes.RootDirectory = v23;
    v18 = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v16 = ZwOpenKey(&v18, 0x20019u, &ObjectAttributes);
    CachedContextBaseKey = v16;
    if ( v16 != -1073741772 )
    {
      if ( v16 < 0 )
        goto LABEL_7;
LABEL_41:
      v20 = 1835034;
      v21 = L"Configuration";
      ObjectAttributes.RootDirectory = v18;
      Handle = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v17 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      CachedContextBaseKey = v17;
      if ( v17 != -1073741772 )
      {
        if ( v17 >= 0 )
          CachedContextBaseKey = PiDevCfgConfigureDeviceKeys(v28, a2, (_DWORD)Handle, -1, (__int64)a3, (__int64)a4);
        goto LABEL_7;
      }
    }
LABEL_6:
    CachedContextBaseKey = 0;
  }
LABEL_7:
  RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ZwClose(v18);
  if ( v23 )
    ZwClose(v23);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)CachedContextBaseKey;
}
