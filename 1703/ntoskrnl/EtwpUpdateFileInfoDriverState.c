/*
 * XREFs of EtwpUpdateFileInfoDriverState @ 0x140435640
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140435210 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1404354A0 (EtwpDisableKernelTrace.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     WmiQueryTraceProviderCount @ 0x14013FF40 (WmiQueryTraceProviderCount.c)
 *     ZwLoadDriver @ 0x14017FEC0 (ZwLoadDriver.c)
 *     ZwUnloadDriver @ 0x140181640 (ZwUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1404356CC (EtwpUpdateFileInfoDriverRegistration.c)
 *     WmiTraceRundownNotify @ 0x14043C010 (WmiTraceRundownNotify.c)
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
      if ( dword_140387CA4 )
        WmiTraceRundownNotify(a4);
      EtwpUpdateFileInfoDriverRegistration(0LL);
      if ( dword_140387CA4 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
        ZwUnloadDriver(&DestinationString);
        dword_140387CA4 = 0;
      }
    }
LABEL_4:
    updated = 0;
    v4 = 0;
    goto LABEL_5;
  }
  if ( !a2 || (*a2 & 0x6000200) == 0 )
    goto LABEL_4;
  if ( !(unsigned int)WmiQueryTraceProviderCount() )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    v7 = ZwLoadDriver(&DestinationString);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741554 )
      return (unsigned int)-1073741204;
    dword_140387CA4 = 1;
    v4 = 1;
  }
  updated = EtwpUpdateFileInfoDriverRegistration(1LL);
  if ( updated >= 0 )
    goto LABEL_4;
LABEL_5:
  if ( v4 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\FileInfo");
    ZwUnloadDriver(&DestinationString);
    dword_140387CA4 = 0;
  }
  return (unsigned int)updated;
}
