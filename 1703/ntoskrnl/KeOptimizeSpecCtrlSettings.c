/*
 * XREFs of KeOptimizeSpecCtrlSettings @ 0x14017BD30
 * Callers:
 *     KiDynamicProcessorInitialization @ 0x1401FC84C (KiDynamicProcessorInitialization.c)
 * Callees:
 *     HvlIsCoreSharingPossible @ 0x14017B2CC (HvlIsCoreSharingPossible.c)
 *     KiAddSpecCtrlSsbdBit @ 0x14017C070 (KiAddSpecCtrlSsbdBit.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x14017C084 (KiDetectAmdNonArchSsbdSupport.c)
 *     KiUpdateSpeculationControl @ 0x14017C400 (KiUpdateSpeculationControl.c)
 */

ULONG_PTR __fastcall KeOptimizeSpecCtrlSettings(ULONG_PTR Argument, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v4; // di
  __int16 v5; // dx
  __int64 v6; // r9
  char v7; // r10
  __int64 v8; // rdx
  char v9; // r11
  unsigned __int8 v10; // cl
  unsigned __int8 *v11; // rcx
  __int16 v12; // ax
  char v13; // al
  unsigned __int8 *v14; // rcx
  unsigned __int8 BpbKernelSpecCtrl; // al

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ((CurrentPrcb->CoreProcessorSet - 1) & CurrentPrcb->CoreProcessorSet) != 0 )
    LOWORD(KiSpeculationFeatures) = KiSpeculationFeatures | 2;
  v4 = HvlHypervisorConnected;
  if ( HvlHypervisorConnected && HvlIsCoreSharingPossible() )
    LOWORD(KiSpeculationFeatures) = v5 | 2;
  if ( CurrentPrcb->CpuVendor == 1 )
    KiDetectAmdNonArchSsbdSupport(CurrentPrcb, &KiSpeculationFeatures);
  LOBYTE(a3) = KiSpeculationFeatures;
  v6 = (unsigned int)KiSsbdMsr;
  v7 = KiFeatureSettings;
  if ( (KiSpeculationFeatures & 0x40) != 0 && (KiSpeculationFeatures & 0x80) == 0 )
  {
    if ( (KiFeatureSettings & 8) != 0 )
    {
      v8 = HIWORD(KiSpeculationFeatures);
      goto LABEL_12;
    }
    if ( (KiFeatureSettings & 0x10) != 0 )
    {
      v8 = HIWORD(KiSpeculationFeatures);
      if ( KiSsbdMsr == 72 )
      {
        LOWORD(v8) = HIWORD(KiSpeculationFeatures) | 0x80;
        goto LABEL_16;
      }
LABEL_12:
      LOWORD(v8) = v8 | 0x40;
LABEL_16:
      HIWORD(KiSpeculationFeatures) = v8;
      goto LABEL_18;
    }
  }
  v8 = HIWORD(KiSpeculationFeatures);
LABEL_18:
  v9 = 4;
  if ( (KiSpeculationFeatures & 4) == 0 )
  {
    LOWORD(v8) = v8 | 8;
    HIWORD(KiSpeculationFeatures) = v8;
  }
  if ( (KiFeatureSettings & 1) != 0 )
  {
    LOWORD(v8) = v8 | 4;
    HIWORD(KiSpeculationFeatures) = v8;
  }
  else if ( (KiFeatureSettings & 4) != 0 )
  {
    LOWORD(v8) = v8 | 4;
    HIWORD(KiSpeculationFeatures) = v8;
    if ( v4 )
    {
      if ( (HvlpFlags & 2) != 0 && HvlIsCoreSharingPossible() && (a3 & 0x20) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl = 2;
        CurrentPrcb->BpbUserSpecCtrl = 2;
        v8 = HIWORD(KiSpeculationFeatures);
      }
    }
  }
  if ( (BYTE2(KiSpeculationFeatures) & (unsigned __int8)v9) == 0 && (KiSpeculationFeatures & 0x80000) == 0 )
  {
    LOWORD(v8) = v8 | 0x10;
    HIWORD(KiSpeculationFeatures) = v8;
    CurrentPrcb->BpbFeatures |= 2u;
    v10 = KiSpeculationFeatures;
    if ( (KiSpeculationFeatures & 1) != 0 )
    {
      CurrentPrcb->BpbUserSpecCtrl = 1;
      CurrentPrcb->BpbKernelSpecCtrl = 1;
      LOBYTE(v8) = BYTE2(KiSpeculationFeatures);
      if ( (KiSpeculationFeatures & 0x400000) == 0 && (KiSpeculationFeatures & 0x800000) == 0 )
        goto LABEL_60;
      KiAddSpecCtrlSsbdBit((char *)&CurrentPrcb->2 + 11, v8, a3, v6);
      CurrentPrcb->BpbUserSpecCtrl = *v11;
      LOBYTE(v8) = BYTE2(KiSpeculationFeatures);
      if ( (KiSpeculationFeatures & 0x800000) == 0 )
        goto LABEL_60;
      v10 = KiSpeculationFeatures;
    }
    else
    {
      LOBYTE(v8) = BYTE2(KiSpeculationFeatures);
    }
    LOBYTE(a3) = 34;
    if ( (v10 & 8) != 0 )
    {
      CurrentPrcb->BpbNmiSpecCtrl = 1;
    }
    else
    {
      if ( (v10 & 0x22) != 0x22 )
        goto LABEL_41;
      CurrentPrcb->BpbNmiSpecCtrl = 2;
    }
    v10 = KiSpeculationFeatures;
    LOBYTE(v8) = BYTE2(KiSpeculationFeatures);
LABEL_41:
    if ( (v8 & 0x40) != 0 || (v8 & 0x80) != 0 )
    {
      KiAddSpecCtrlSsbdBit((char *)&CurrentPrcb->2 + 12, v8, a3, v6);
      v10 = KiSpeculationFeatures;
    }
    if ( (v10 & 1) == 0 )
    {
      if ( (v10 & 2) != 0 && !v4 && (v10 & 0x28) != 0 )
      {
        HIWORD(KiSpeculationFeatures) |= 2u;
        CurrentPrcb->BpbFeatures |= 1u;
        v10 = KiSpeculationFeatures;
      }
      if ( (v7 & 0x20) != 0 && ((unsigned __int8)a3 & v10) == (_BYTE)a3 )
      {
        v12 = HIWORD(KiSpeculationFeatures) | 1;
        HIWORD(KiSpeculationFeatures) |= 1u;
      }
      else
      {
        v12 = HIWORD(KiSpeculationFeatures);
      }
      if ( CurrentPrcb->CpuVendor != 1 || (v10 & 8) != 0 || (v7 & 0x40) != 0 )
      {
        KiUpdateSpeculationControl(KeGetCurrentThread()->ApcState.Process);
        LODWORD(v6) = KiSsbdMsr;
      }
      else
      {
        HIWORD(KiSpeculationFeatures) = v12 | 0x20;
      }
    }
    goto LABEL_60;
  }
  v13 = v8 | ((unsigned __int16)v8 >> 1);
  LOWORD(v8) = v8 & 0xFF3F;
  HIWORD(KiSpeculationFeatures) = v8 | v13 & 0x40;
  if ( v8 & 0x40 | v13 & 0x40 )
  {
    KiAddSpecCtrlSsbdBit((char *)&CurrentPrcb->2 + 11, v8, a3, v6);
    CurrentPrcb->BpbUserSpecCtrl = *v14;
  }
LABEL_60:
  BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbCurrentSpecCtrl = BpbKernelSpecCtrl;
  if ( BpbKernelSpecCtrl )
    __writemsr(0x48u, BpbKernelSpecCtrl);
  if ( (KiSpeculationFeatures & 0x400000) != 0 && (_DWORD)v6 != 72 )
    __writemsr(v6, __readmsr(v6) | KiSsbdBit);
  return 0LL;
}
