/*
 * XREFs of KiRestoreFeatureBits @ 0x14014EBA8
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14014EB48 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KeInitializeCatRegisters @ 0x14014ECD8 (KeInitializeCatRegisters.c)
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 */

char KiRestoreFeatureBits()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->CpuVendor == 2 )
    __writemsr(0x1A0u, KiIa32MiscEnable);
  v1 = 0x400000000LL;
  if ( (CurrentPrcb->FeatureBits & 0x400000000LL) != 0 )
  {
    v1 = 3221225731LL;
    __writemsr(0xC0000103, CurrentPrcb->GroupIndex | ((unsigned __int64)CurrentPrcb->Group << 8));
  }
  LOBYTE(v1) = CurrentPrcb->BpbCurrentSpecCtrl;
  if ( (_BYTE)v1 || (KeFeatureBits2 & 0x600) != 0 )
  {
    v2 = (unsigned __int8)v1;
    v1 = 72LL;
    __writemsr(0x48u, v2);
  }
  if ( (KeFeatureBits2 & 0x8000) != 0 )
  {
    v1 = 290LL;
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  }
  KeInitializeCatRegisters(v1);
  LOBYTE(v4) = 0;
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  if ( *(_BYTE *)(v3 + 141) == 1 )
  {
    LOBYTE(v4) = *(_BYTE *)(v3 + 64);
    if ( (char)v4 > 15 && (_BYTE)v4 != 17 )
    {
      LOBYTE(v4) = HviIsAnyHypervisorPresent(373LL, 0LL);
      if ( !(_BYTE)v4 )
      {
        v4 = __readmsr(0xC0011029) | 2;
        __writemsr(0xC0011029, v4);
      }
    }
  }
  if ( KiFlushPcid && !VslVsmEnabled )
  {
    v5 = __readcr3();
    v4 = v5 | 2;
    __writecr3(v4);
  }
  return v4;
}
