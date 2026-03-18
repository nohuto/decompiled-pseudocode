/*
 * XREFs of KiRestoreFeatureBits @ 0x140137DC8
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140137D68 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14014A450 (HviIsAnyHypervisorPresent.c)
 */

char KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int8 BpbCurrentSpecCtrl; // cl
  char CpuType; // al
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  if ( (CurrentPrcb->FeatureBits & 0x400000000LL) != 0 )
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
  if ( BpbCurrentSpecCtrl || (KeFeatureBits2 & 0x600) != 0 )
    __writemsr(0x48u, BpbCurrentSpecCtrl);
  if ( (KeFeatureBits2 & 0x8000) != 0 )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    CpuType = CurrentPrcb->CpuType;
    if ( CpuType > 15 && CpuType != 17 && !(unsigned __int8)HviIsAnyHypervisorPresent(373LL, 0LL) )
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 2);
  }
  LOBYTE(v3) = KiFlushPcid;
  if ( KiFlushPcid )
  {
    LOBYTE(v3) = VslVsmEnabled;
    if ( !VslVsmEnabled )
    {
      v4 = __readcr3();
      v3 = v4 | 2;
      __writecr3(v3);
    }
  }
  return v3;
}
