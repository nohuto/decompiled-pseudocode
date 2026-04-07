/*
 * XREFs of ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18007F464
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18007BE68 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 *     ?UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z @ 0x18007E930 (-UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementContinue(
        CAnimatedGlassSheet **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v2; // ebx
  const struct tagRECT *v3; // rdx
  CAnimatedGlassSheet *v4; // rcx
  int updated; // eax
  int v6; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (const struct tagRECT *)((char *)a2 + 16);
    v4 = *this;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
    {
      updated = CAnimatedGlassSheet::UpdateRectAnimation(v4, v3, 0.2);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xAFu);
        return v2;
      }
    }
    else
    {
      v6 = CAnimatedGlassSheet::UpdateRectAnimation(v4, v3, 0.000001);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB3u);
        return v2;
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmGlassSheetAnimation_Update);
  }
  return v2;
}
