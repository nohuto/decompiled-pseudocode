/*
 * XREFs of ?EndOfFrame@CWarpCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800C3BE0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x18013FBE8 (Template_qqq.c)
 */

void __fastcall CWarpCallbackRendererEvents::EndOfFrame(CWarpCallbackRendererEvents *this, struct CCounterManager *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqq(
      (_DWORD)this,
      (unsigned int)&ENDFRAME_WARP_CALLBACK_RENDERER_STATS,
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 9));
}
