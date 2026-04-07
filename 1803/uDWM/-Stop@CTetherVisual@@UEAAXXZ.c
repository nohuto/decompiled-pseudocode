/*
 * XREFs of ?Stop@CTetherVisual@@UEAAXXZ @ 0x180091220
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18008B5E0 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x180090B94 (--1CTetherVisual@@MEAA@XZ.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x180091138 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x180091640 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800912B0 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTetherVisual::Stop(CTetherVisual *this)
{
  CRenderDataVisual::ClearInstructions(this);
  CTetherVisual::StopTimer(this);
  if ( *((_BYTE *)this + 416) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmTetherVisual_End);
  *((_BYTE *)this + 416) = 0;
}
