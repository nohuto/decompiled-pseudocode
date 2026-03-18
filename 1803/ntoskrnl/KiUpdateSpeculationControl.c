/*
 * XREFs of KiUpdateSpeculationControl @ 0x1401A6070
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401A5BD0 (KeOptimizeSpecCtrlSettings.c)
 *     SwapContext @ 0x1401B1E80 (SwapContext.c)
 * Callees:
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x1401A5FCC (KiUpdateSpecCtrlEnhancedIBRS.c)
 */

char __fastcall KiUpdateSpeculationControl(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 TrappedSecurityDomain; // rax
  unsigned __int8 BpbState; // dl
  unsigned __int8 BpbCurrentSpecCtrl; // r9
  char v5; // al
  unsigned __int8 v6; // dl

  CurrentPrcb = KeGetCurrentPrcb();
  LOBYTE(TrappedSecurityDomain) = BYTE2(KiSpeculationFeatures);
  if ( (KiSpeculationFeatures & 0x100000) == 0 )
    return TrappedSecurityDomain;
  if ( (KiSpeculationFeatures & 1) != 0 )
  {
    LOBYTE(TrappedSecurityDomain) = KiUpdateSpecCtrlEnhancedIBRS((__int64)CurrentPrcb, a1);
    return TrappedSecurityDomain;
  }
  CurrentPrcb->BpbState &= 0xF1u;
  BpbState = CurrentPrcb->BpbState;
  BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
  if ( (KiSpeculationFeatures & 0x400000) != 0 && KiSsbdMsr == 72 )
  {
    BpbCurrentSpecCtrl |= 4u;
    v5 = 4;
  }
  else
  {
    v5 = 0;
  }
  CurrentPrcb->BpbKernelSpecCtrl = v5;
  CurrentPrcb->BpbUserSpecCtrl = v5;
  if ( (KiSpeculationFeatures & 0x200000) == 0 )
  {
    if ( *(_QWORD *)(a1 + 2104) )
    {
      if ( (KiSpeculationFeatures & 8) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl |= 1u;
        v6 = BpbState | 2;
      }
      else
      {
        if ( (KiSpeculationFeatures & 0x22) == 0x22 )
          CurrentPrcb->BpbKernelSpecCtrl |= 2u;
        v6 = BpbState | 8;
      }
      CurrentPrcb->BpbState = v6;
    }
    else if ( (KiSpeculationFeatures & 2) != 0 )
    {
      if ( (KiSpeculationFeatures & 0x20) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl |= 2u;
      }
      else if ( (KiSpeculationFeatures & 8) != 0 )
      {
        CurrentPrcb->BpbKernelSpecCtrl |= 1u;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 2104) && (KiSpeculationFeatures & 0x800000) != 0 )
  {
    CurrentPrcb->BpbKernelSpecCtrl |= 4u;
    BpbCurrentSpecCtrl |= 4u;
  }
  if ( (KiSpeculationFeatures & 0x22) == 0x22
    && ((KiSpeculationFeatures & 0x10000) != 0 || (*(_DWORD *)(a1 + 2088) & 0x40000000) != 0) )
  {
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
  }
  if ( (KiSpeculationFeatures & 0x800000) != 0 && (*(_DWORD *)(a1 + 2092) & 0x2000) != 0 )
    CurrentPrcb->BpbUserSpecCtrl |= 4u;
  TrappedSecurityDomain = CurrentPrcb->TrappedSecurityDomain;
  if ( TrappedSecurityDomain && TrappedSecurityDomain != *(_QWORD *)(a1 + 2104) )
  {
    if ( (BpbCurrentSpecCtrl & 1) != 0 )
    {
      LOBYTE(TrappedSecurityDomain) = KiSpeculationFeatures;
      if ( (KiSpeculationFeatures & 2) != 0 )
      {
        if ( (KiSpeculationFeatures & 0x20) != 0 )
          BpbCurrentSpecCtrl = BpbCurrentSpecCtrl & 4 | 2;
      }
      else
      {
        BpbCurrentSpecCtrl &= 4u;
      }
      if ( (BpbCurrentSpecCtrl & 1) == 0 )
      {
        LOBYTE(TrappedSecurityDomain) = 1;
        __writemsr(0x49u, 1uLL);
        CurrentPrcb->TrappedSecurityDomain = 0LL;
        goto LABEL_42;
      }
    }
    else if ( (KiSpeculationFeatures & 0x200000) == 0 )
    {
      goto LABEL_42;
    }
    CurrentPrcb->BpbState |= 4u;
  }
LABEL_42:
  if ( BpbCurrentSpecCtrl != CurrentPrcb->BpbCurrentSpecCtrl )
  {
    LOBYTE(TrappedSecurityDomain) = BpbCurrentSpecCtrl;
    CurrentPrcb->BpbCurrentSpecCtrl = BpbCurrentSpecCtrl;
    __writemsr(0x48u, BpbCurrentSpecCtrl);
  }
  return TrappedSecurityDomain;
}
