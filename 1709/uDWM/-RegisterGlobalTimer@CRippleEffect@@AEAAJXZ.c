/*
 * XREFs of ?RegisterGlobalTimer@CRippleEffect@@AEAAJXZ @ 0x18007EF90
 * Callers:
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x18007EFE0 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180035F78 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CRippleEffect::RegisterGlobalTimer(CRippleEffect *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( !*((_BYTE *)this + 272) )
  {
    v3 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    v1 = v3;
    if ( v3 >= 0 )
      *((_BYTE *)this + 272) = 1;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xA7u);
  }
  return v1;
}
