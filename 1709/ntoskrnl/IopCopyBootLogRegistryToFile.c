/*
 * XREFs of IopCopyBootLogRegistryToFile @ 0x1405AD678
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1400134F0 (RtlTimeToTimeFields.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     ExSystemTimeToLocalTime @ 0x140131D60 (ExSystemTimeToLocalTime.c)
 *     RtlStringCchPrintfA @ 0x1401467D0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwDeleteKey @ 0x14017F240 (ZwDeleteKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x14046F3C4 (IopOpenRegistryKey.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1404DF560 (RtlCreateUnicodeString.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     IopBootLogToFile @ 0x1406B47A0 (IopBootLogToFile.c)
 */

_QWORD *IopCopyBootLogRegistryToFile()
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int i; // ebx
  NTSTATUS RegistryValue; // eax
  PVOID v4; // rdi
  PUNICODE_STRING v5; // rcx
  ULONG v6; // [rsp+28h] [rbp-E0h]
  ULONG v7; // [rsp+28h] [rbp-E0h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-88h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+90h] [rbp-78h] BYREF
  _STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING v15; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v16; // [rsp+B8h] [rbp-50h] BYREF
  char pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+1C8h] [rbp+C0h] BYREF

  result = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( qword_1407F3020 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_1407F3020[4], 1u);
    IopBootLogToFile(&qword_1407F3020[3]);
    ExSystemTimeToLocalTime(&KeBootTime, &LocalTime);
    RtlTimeToTimeFields(&LocalTime, &TimeFields);
    RtlStringCchPrintfA(
      pszDest,
      0x100uLL,
      "%2d %2d %4d %02d:%02d:%02d.%03d\r\n",
      TimeFields.Month,
      TimeFields.Day,
      TimeFields.Year,
      TimeFields.Hour,
      TimeFields.Minute,
      TimeFields.Second,
      TimeFields.Milliseconds);
    RtlInitAnsiString(&DestinationString, pszDest);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    IopBootLogToFile(&UnicodeString);
    RtlFreeUnicodeString(&UnicodeString);
    LOBYTE(v6) = 0;
    if ( IopOpenRegistryKey(&Handle, 0LL, &CmRegistryMachineSystemCurrentControlSetControlBootLog, 0xF003Fu, v6) < 0 )
    {
      v5 = qword_1407F3020;
    }
    else
    {
      for ( i = 0; i < LODWORD(qword_1407F3020[10].Buffer); ++i )
      {
        RtlStringCchPrintfW(SourceString, 0x100uLL, L"%d", i);
        RtlCreateUnicodeString(&v15, SourceString);
        LOBYTE(v7) = 0;
        if ( IopOpenRegistryKey(&KeyHandle, Handle, &v15, 0xF003Fu, v7) >= 0 )
        {
          P = 0LL;
          RegistryValue = IopGetRegistryValue(KeyHandle, &word_1405F52C0, 256, &P);
          v4 = P;
          if ( RegistryValue >= 0 )
          {
            RtlInitUnicodeString(&v16, (PCWSTR)((char *)P + *((unsigned int *)P + 2)));
            IopBootLogToFile(&v16);
          }
          ExFreePoolWithTag(v4, 0);
          ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
      }
      ZwDeleteKey(Handle);
      ZwClose(Handle);
      v5 = qword_1407F3020;
      BYTE4(qword_1407F3020[10].Buffer) = 1;
    }
    ExReleaseResourceLite((PERESOURCE)&v5[4]);
    return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
