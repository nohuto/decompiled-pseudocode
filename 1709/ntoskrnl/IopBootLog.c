/*
 * XREFs of IopBootLog @ 0x14059BC30
 * Callers:
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     IopInitializeBootLogging @ 0x1406B5264 (IopInitializeBootLogging.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     IopOpenRegistryKey @ 0x14046F3C4 (IopOpenRegistryKey.c)
 *     IopBootLogToFile @ 0x1406B47A0 (IopBootLogToFile.c)
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
  UNICODE_STRING v11; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t pszDest[256]; // [rsp+70h] [rbp-90h] BYREF
  char v14; // [rsp+270h] [rbp+170h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = (wchar_t *)&v14;
  if ( qword_1407F3020 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_1407F3020[4], 1u);
    v4 = qword_1407F3020;
    if ( !a2 )
      v4 = qword_1407F3020 + 1;
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
    ++LODWORD(qword_1407F3020[10].Buffer);
    RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d");
    RtlInitUnicodeString(&v11, pszDest);
    RtlInitUnicodeString(&ValueName, &word_1405F52C0);
    if ( BYTE4(qword_1407F3020[10].Buffer) )
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
        if ( IopOpenRegistryKey((HANDLE *)&Sourcea, *(void **)&DestinationString.Length, &v11, 0xF003Fu, Dataa) >= 0 )
        {
          ZwSetValueKey(*(HANDLE *)&Sourcea.Length, &ValueName, 0, 1u, Buffer, Length + 2);
          ZwClose(*(HANDLE *)&Sourcea.Length);
        }
        ZwClose(*(HANDLE *)&DestinationString.Length);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&qword_1407F3020[4]);
  }
}
