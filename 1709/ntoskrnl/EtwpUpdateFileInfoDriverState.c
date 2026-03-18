/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x14059726C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140596E88 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1405970E0 (EtwpDisableKernelTrace.c)
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x14017F860 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x140181040 (ZwUnloadDriver.c)
 *     WmiQueryTraceProviderCount @ 0x140279EB0 (WmiQueryTraceProviderCount.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1405972DC (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x1407429E8 (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpUpdateFileInfoDriverState(_DWORD *a1, _DWORD *a2, int a3, unsigned int a4)
{
  int v4; // edi
  int updated; // ebx
  NTSTATUS v7; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  if ( !a3 )
  {
    if ( !a1 || (*a1 & 0x6000200) == 0 )
    {
      if ( dword_1403A30F4 )
        WmiTraceRundownNotify(a4);
      EtwpUpdateFileInfoDriverRegistration(0LL);
      if ( dword_1403A30F4 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_1403A30F4 = 0;
      }
    }
LABEL_8:
    updated = 0;
    v4 = 0;
    goto LABEL_9;
  }
  if ( !a2 || (*a2 & 0x6000200) == 0 )
    goto LABEL_8;
  if ( !(unsigned int)WmiQueryTraceProviderCount() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    v7 = ZwLoadDriver(&DestinationString);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741554 )
      return (unsigned int)-1073741204;
    dword_1403A30F4 = 1;
    v4 = 1;
  }
  updated = EtwpUpdateFileInfoDriverRegistration(1LL);
  if ( updated >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( v4 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    ZwUnloadDriver(&DestinationString);
    dword_1403A30F4 = 0;
  }
  return (unsigned int)updated;
}
