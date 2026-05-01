/*
 * XREFs of ?_ShouldShowMTVAltTab@CMultitaskingViewHotKeyHandler@@AEAA_NXZ @ 0x1802704EC
 * Callers:
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x1802701A0 (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     ?_RegisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAJXZ @ 0x1802703CC (-_RegisterHotKeys@CMultitaskingViewHotKeyHandler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMultitaskingViewHotKeyHandler::_ShouldShowMTVAltTab(CMultitaskingViewHotKeyHandler *this)
{
  char v1; // bl

  if ( *((_DWORD *)this + 19) == 2 )
    return 1;
  v1 = 0;
  if ( !*((_DWORD *)this + 19) && !IsDebuggerPresent() )
    return 1;
  return v1;
}
