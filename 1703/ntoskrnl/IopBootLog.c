/*
 * XREFs of IopBootLog @ 0x14045B6F8
 * Callers:
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     IopInitializeBootLogging @ 0x140689284 (IopInitializeBootLogging.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     IopOpenRegistryKey @ 0x14044DB84 (IopOpenRegistryKey.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     IopBootLogToFile @ 0x1406887C0 (IopBootLogToFile.c)
 */

void __fastcall IopBootLog(PCUNICODE_STRING Source, char a2)
{
  const UNICODE_STRING *v4; // rdx
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // rdi
  ULONG Data; // [rsp+20h] [rbp-E0h]
  ULONG Dataa; // [rsp+20h] [rbp-E0h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Sourcea; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t pszDest[256]; // [rsp+70h] [rbp-90h] BYREF
  char v14; // [rsp+270h] [rbp+170h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = (wchar_t *)&v14;
  if ( qword_1407AC020 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_1407AC020[4], 1u);
    v4 = qword_1407AC020;
    if ( !a2 )
      v4 = qword_1407AC020 + 1;
    RtlCopyUnicodeString(&DestinationString, v4);
    RtlInitUnicodeString(&Sourcea, L" ");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    RtlAppendUnicodeStringToString(&DestinationString, Source);
    RtlInitUnicodeString(&Sourcea, L"\r\n");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Length == DestinationString.MaximumLength )
    {
      Length = DestinationString.Length - 2;
      DestinationString.Length = Length;
      DestinationString.Buffer[(unsigned __int64)Length >> 1] = 0;
    }
    ++LODWORD(qword_1407AC020[10].Buffer);
    RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d");
    RtlCreateUnicodeString(&UnicodeString, pszDest);
    RtlInitUnicodeString(&ValueName, (PCWSTR)&cchOriginalDestLength);
    if ( BYTE4(qword_1407AC020[10].Buffer) )
    {
      IopBootLogToFile(&DestinationString);
    }
    else
    {
      LOBYTE(Data) = 1;
      if ( IopOpenRegistryKey(
             (HANDLE *)&DestinationString,
             0LL,
             &CmRegistryMachineSystemCurrentControlSetControlBootLog,
             0xF003Fu,
             Data) >= 0 )
      {
        LOBYTE(Dataa) = 1;
        if ( IopOpenRegistryKey(
               (HANDLE *)&Sourcea,
               *(void **)&DestinationString.Length,
               &UnicodeString,
               0xF003Fu,
               Dataa) >= 0 )
        {
          ZwSetValueKey(*(HANDLE *)&Sourcea.Length, &ValueName, 0, 1u, Buffer, Length + 2);
          ZwClose(*(HANDLE *)&Sourcea.Length);
        }
        ZwClose(*(HANDLE *)&DestinationString.Length);
      }
    }
    RtlFreeUnicodeString(&UnicodeString);
    ExReleaseResourceLite((PERESOURCE)&qword_1407AC020[4]);
  }
}
