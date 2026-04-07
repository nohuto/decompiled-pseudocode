/*
 * XREFs of ?Stop@CTetherVisual@@UEAAXXZ @ 0x18008D2E0
 * Callers:
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x18006F9D8 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18008A934 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x18008CD1C (--1CTetherVisual@@MEAA@XZ.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x18008D6A0 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x18008D370 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTetherVisual::Stop(CTetherVisual *this)
{
  __int64 v2; // rcx

  CRenderDataVisual::ClearInstructions(this);
  CTetherVisual::StopTimer(this);
  if ( *((_BYTE *)this + 416) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v2, (__int64)&UdwmTetherVisual_End);
  *((_BYTE *)this + 416) = 0;
}
