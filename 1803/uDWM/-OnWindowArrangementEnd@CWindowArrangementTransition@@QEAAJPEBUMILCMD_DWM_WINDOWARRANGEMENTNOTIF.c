/*
 * XREFs of ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800885F4
 * Callers:
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800854A0 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x180073C8C (McTemplateU0.c)
 *     ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x1800879E0 (-UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementEnd(
        CAnimatedGlassSheet **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v2; // ebx
  CAnimatedGlassSheet *v4; // rcx
  int updated; // eax
  int v6; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    v4 = *this;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
    {
      updated = CAnimatedGlassSheet::UpdateAlphaAnimation(v4, 0.0, 0.2);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xCCu);
        return v2;
      }
    }
    else
    {
      v6 = CAnimatedGlassSheet::UpdateAlphaAnimation(v4, 0.0, 0.000001);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xD0u);
        return v2;
      }
    }
    this[2] = 0LL;
    *((_BYTE *)this + 24) = 0;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmGlassSheetFadeOut_Start);
  }
  return v2;
}
