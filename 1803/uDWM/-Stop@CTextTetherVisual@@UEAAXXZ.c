/*
 * XREFs of ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x18008E6D0
 * Callers:
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18008B964 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x18008E278 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18008E5E0 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x18008E7D0 (-UpdateTransition@CTextTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x18008E730 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTextTetherVisual::Stop(CTextTetherVisual *this)
{
  CRenderDataVisual::ClearInstructions(this);
  CTextTetherVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( *((_BYTE *)this + 424) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTextTetherVisual_End);
  *((_BYTE *)this + 424) = 0;
}
