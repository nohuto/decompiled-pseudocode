/*
 * XREFs of KiRestoreFeatureBits @ 0x140208B60
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140203D30 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
 */

char KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int8 BpbCurrentSpecCtrl; // cl
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax

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
  LOBYTE(v2) = 0;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v3 = __readcr3();
    v2 = v3 | 2;
    __writecr3(v2);
  }
  if ( CurrentPrcb->CpuVendor == 1 )
  {
    LOBYTE(v2) = CurrentPrcb->CpuType;
    if ( (char)v2 > 15 && (_BYTE)v2 != 17 )
    {
      LOBYTE(v2) = HviIsAnyHypervisorPresent();
      if ( !(_BYTE)v2 )
      {
        v2 = __readmsr(0xC0011029) | 2;
        __writemsr(0xC0011029, v2);
      }
    }
  }
  return v2;
}
