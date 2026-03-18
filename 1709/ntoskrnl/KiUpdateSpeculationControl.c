/*
 * XREFs of KiUpdateSpeculationControl @ 0x14017BB10
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14017B4B0 (KeOptimizeSpecCtrlSettings.c)
 *     SwapContext @ 0x140188250 (SwapContext.c)
 * Callees:
 *     KiUpdateSpecCtrlEnhancedIBRS @ 0x14017BA60 (KiUpdateSpecCtrlEnhancedIBRS.c)
 */

void __fastcall KiUpdateSpeculationControl(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int8 BpbState; // dl
  unsigned __int8 BpbCurrentSpecCtrl; // r9
  unsigned __int8 v4; // dl
  unsigned __int64 TrappedSecurityDomain; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (KiSpeculationFeatures & 0x100000) != 0 )
  {
    if ( (KiSpeculationFeatures & 1) != 0 )
    {
      KiUpdateSpecCtrlEnhancedIBRS((__int64)CurrentPrcb, a1);
      return;
    }
    CurrentPrcb->BpbState &= 0xF1u;
    BpbState = CurrentPrcb->BpbState;
    BpbCurrentSpecCtrl = CurrentPrcb->BpbCurrentSpecCtrl;
    if ( (KiSpeculationFeatures & 0x400000) != 0 && KiSsbdMsr == 72 )
    {
      CurrentPrcb->BpbKernelSpecCtrl = 4;
      BpbCurrentSpecCtrl |= 4u;
      CurrentPrcb->BpbUserSpecCtrl = 4;
    }
    else
    {
      CurrentPrcb->BpbKernelSpecCtrl = 0;
      CurrentPrcb->BpbUserSpecCtrl = 0;
    }
    if ( (KiSpeculationFeatures & 0x200000) == 0 )
    {
      if ( *(_QWORD *)(a1 + 2104) )
      {
        if ( (KiSpeculationFeatures & 8) != 0 )
        {
          CurrentPrcb->BpbKernelSpecCtrl |= 1u;
          v4 = BpbState | 2;
        }
        else
        {
          if ( (KiSpeculationFeatures & 0x22) == 0x22 )
            CurrentPrcb->BpbKernelSpecCtrl |= 2u;
          v4 = BpbState | 8;
        }
        CurrentPrcb->BpbState = v4;
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
    if ( !TrappedSecurityDomain || TrappedSecurityDomain == *(_QWORD *)(a1 + 2104) )
      goto LABEL_42;
    if ( (BpbCurrentSpecCtrl & 1) != 0 )
    {
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
LABEL_42:
    if ( BpbCurrentSpecCtrl != CurrentPrcb->BpbCurrentSpecCtrl )
    {
      CurrentPrcb->BpbCurrentSpecCtrl = BpbCurrentSpecCtrl;
      __writemsr(0x48u, BpbCurrentSpecCtrl);
    }
  }
}
