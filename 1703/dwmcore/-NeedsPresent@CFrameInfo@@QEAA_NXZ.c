/*
 * XREFs of ?NeedsPresent@CFrameInfo@@QEAA_NXZ @ 0x180134324
 * Callers:
 *     ?PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x18013D22C (-PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 *     ?ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013D4F4 (-ProcessFrame@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 *     ?Render@CIndependentRefreshRateScheduler@@AEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18013D984 (-Render@CIndependentRefreshRateScheduler@@AEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CFrameInfo::NeedsPresent(CFrameInfo *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 272) )
    return *((_BYTE *)this + 273) == 0;
  return result;
}
