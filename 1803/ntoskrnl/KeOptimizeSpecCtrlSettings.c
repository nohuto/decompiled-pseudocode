/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x1401A5BD0
 * Callers:
 *     KiDynamicProcessorInitialization @ 0x14023FB84 (KiDynamicProcessorInitialization.c)
 * Callees:
 *     KiAddSpecCtrlSsbdBit @ 0x1401A5EA4 (KiAddSpecCtrlSsbdBit.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1401A5EB8 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiUpdateSpeculationControl @ 0x1401A6070 (KiUpdateSpeculationControl.c)
 *     HvlIsCoreSharingPossible @ 0x140226AE0 (HvlIsCoreSharingPossible.c)
 */

ULONG_PTR __fastcall KeOptimizeSpecCtrlSettings(ULONG_PTR Argument, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // di
  char v4; // r10
  char v5; // r11
  char v6; // r9
  char v7; // r8
  unsigned __int8 *v8; // rcx
  unsigned __int8 *v9; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ((CurrentPrcb->CoreProcessorSet - 1) & CurrentPrcb->CoreProcessorSet) != 0 )
    LOWORD(KiSpeculationFeatures) = KiSpeculationFeatures | 2;
  v3 = HvlHypervisorConnected;
  if ( HvlHypervisorConnected && (unsigned __int8)HvlIsCoreSharingPossible() )
    LOWORD(KiSpeculationFeatures) = KiSpeculationFeatures | 2;
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb, &KiSpeculationFeatures);
  v4 = 0x80;
  v5 = 8;
  if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 0x80) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
      goto LABEL_14;
    if ( (KiFeatureSettings & 0x10) == 0 )
      goto LABEL_15;
    if ( KiSsbdMsr != 72 )
LABEL_14:
      HIWORD(KiSpeculationFeatures) |= 0x40u;
    else
      HIWORD(KiSpeculationFeatures) |= 0x80u;
  }
LABEL_15:
  v6 = 4;
  if ( (KiSpeculationFeatures & 4) == 0 )
    HIWORD(KiSpeculationFeatures) |= 8u;
  v7 = KiFeatureSettings;
  if ( (KiFeatureSettings & 4) != 0 )
  {
    HIWORD(KiSpeculationFeatures) |= 4u;
  }
  else if ( (KiFeatureSettings & 1) != 0 )
  {
    HIWORD(KiSpeculationFeatures) |= 4u;
    if ( v3 )
    {
      if ( (HvlpFlags & 2) != 0 && (unsigned __int8)HvlIsCoreSharingPossible() && (a2 & 0x20) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
      }
    }
  }
  if ( (BYTE2(KiSpeculationFeatures) & (unsigned __int8)v6) != 0
    || (BYTE2(KiSpeculationFeatures) & (unsigned __int8)v5) != 0 )
  {
    HIWORD(KiSpeculationFeatures) = HIWORD(KiSpeculationFeatures) & 0xFF3F | (BYTE2(KiSpeculationFeatures) | (unsigned __int8)(HIWORD(KiSpeculationFeatures) >> 1)) & 0x40;
    if ( (KiSpeculationFeatures & 0x400000) != 0 )
    {
      KiAddSpecCtrlSsbdBit((char *)&CurrentPrcb->2 + 11);
      CurrentPrcb->BpbUserSpecCtrl = *v9;
    }
  }
  else
  {
    HIWORD(KiSpeculationFeatures) |= 0x10u;
    CurrentPrcb->BpbFeatures |= 2u;
    if ( (KiSpeculationFeatures & 1) == 0 )
      goto LABEL_32;
    CurrentPrcb->BpbUserSpecCtrl = 1;
    CurrentPrcb->BpbKernelSpecCtrl = 1;
    if ( (KiSpeculationFeatures & 0x400000) != 0 || (BYTE2(KiSpeculationFeatures) & (unsigned __int8)v4) != 0 )
    {
      KiAddSpecCtrlSsbdBit((char *)&CurrentPrcb->2 + 11);
      CurrentPrcb->BpbUserSpecCtrl = *v8;
    }
    if ( (BYTE2(KiSpeculationFeatures) & (unsigned __int8)v4) != 0 )
    {
LABEL_32:
      LOBYTE(a2) = 34;
      if ( ((unsigned __int8)KiSpeculationFeatures & (unsigned __int8)v5) != 0 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 1;
      }
      else if ( (KiSpeculationFeatures & 0x22) == 0x22 )
      {
        CurrentPrcb->BpbNmiSpecCtrl = 2;
      }
      if ( (KiSpeculationFeatures & 0x400000) != 0 || (BYTE2(KiSpeculationFeatures) & (unsigned __int8)v4) != 0 )
        KiAddSpecCtrlSsbdBit((char *)&CurrentPrcb->2 + 12);
      if ( (KiSpeculationFeatures & 1) == 0 )
      {
        if ( (KiSpeculationFeatures & 2) != 0 && !v3 && (KiSpeculationFeatures & 0x28) != 0 )
        {
          HIWORD(KiSpeculationFeatures) |= 2u;
          CurrentPrcb->BpbFeatures |= 1u;
        }
        if ( (v7 & 0x20) != 0 && ((unsigned __int8)a2 & (unsigned __int8)KiSpeculationFeatures) == (_BYTE)a2 )
          HIWORD(KiSpeculationFeatures) |= 1u;
        if ( CurrentPrcb->CpuVendor != 1
          || ((unsigned __int8)KiSpeculationFeatures & (unsigned __int8)v5) != 0
          || (v7 & 0x40) != 0 )
        {
          KiUpdateSpeculationControl(KeGetCurrentThread()->ApcState.Process, a2);
        }
        else
        {
          HIWORD(KiSpeculationFeatures) |= 0x20u;
        }
      }
    }
  }
  BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = BpbKernelSpecCtrl;
  if ( BpbKernelSpecCtrl )
    __writemsr(0x48u, BpbKernelSpecCtrl);
  if ( (KiSpeculationFeatures & 0x400000) != 0 && KiSsbdMsr != 72 )
    __writemsr(KiSsbdMsr, __readmsr(KiSsbdMsr) | KiSsbdBit);
  return 0LL;
}
