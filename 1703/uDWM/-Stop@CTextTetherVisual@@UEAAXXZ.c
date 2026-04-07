/*
 * XREFs of ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x18008BFD0
 * Callers:
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FAE8 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18008ACC4 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x18008BC88 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x18008C0C0 (-UpdateTransition@CTextTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x18008C020 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTextTetherVisual::Stop(CTextTetherVisual *this)
{
  __int64 v2; // rcx

  CRenderDataVisual::ClearInstructions(this);
  CTextTetherVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( *((_BYTE *)this + 424) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v2, (__int64)&UdwmTextTetherVisual_End);
  *((_BYTE *)this + 424) = 0;
}
