/*
 * XREFs of ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180096B08
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096D00 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     EtwppTemplate_q @ 0x18007D15C (EtwppTemplate_q.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___ @ 0x18008DB3C (CTransitionVisualController--ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18008F86C (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CStoryboard::_StopTrackingWindow(CStoryboard *this, struct CWindowData *a2)
{
  CStoryboard *v3; // rsi
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  CStoryboard *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  v3 = (CStoryboard *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
  v4 = CTransitionVisualController::_RestoreWindowVisual(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v8 = v3;
    CTransitionVisualController::ForEachOwnedWindow__lambda_c72d64e34bc4c52fff075362be8a3231___(
      (__int64)a2,
      (__int64)&v8,
      1);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v4,
      0xC56u);
  }
  if ( v5 >= 0 )
  {
    if ( dword_1800BE044
      && (unsigned __int8)(byte_1800BE048 - 1) > 2u
      && (qword_1800BE030 & 0x8000000000000001uLL) != 0
      && (qword_1800BE038 & 0x8000000000000001uLL) == qword_1800BE038 )
    {
      EtwppTemplate_q(&Microsoft_Windows_Dwm_Udwm_Provider_Context, (__int64)&EtwTraceInfo_9004, (__int64)a2);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v6, 0x1467u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v5, 0x1462u);
  }
  return (unsigned int)v5;
}
