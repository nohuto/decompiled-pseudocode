/*
 * XREFs of ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C004C968
 * Callers:
 *     DwmSyncDesktopSwitch @ 0x1C0049388 (DwmSyncDesktopSwitch.c)
 *     DwmSyncHitTestQuery @ 0x1C0049A6C (DwmSyncHitTestQuery.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C004A1D0 (DwmSyncGetTitleBarInfo.c)
 *     DwmSyncNotifyMinimizing @ 0x1C004BF38 (DwmSyncNotifyMinimizing.c)
 *     DwmSyncCaptureSurfaceBits @ 0x1C004C554 (DwmSyncCaptureSurfaceBits.c)
 *     DwmSyncFlushForceRenderAndWaitForBatch @ 0x1C004C6E0 (DwmSyncFlushForceRenderAndWaitForBatch.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C004C830 (DwmSyncGetCompositionAttribute.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C024DB58 (DwmSyncMagnUpdateWindowSharedTextures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SyncLpcCheckNtStatus(int a1, struct _PORT_MESSAGE *a2)
{
  __int64 result; // rax

  if ( a1 < 0 )
    return (unsigned int)a1;
  if ( a1 == 192 )
    return 3221225473LL;
  if ( a1 == 258 )
    return 3221225473LL;
  result = (unsigned int)a1;
  if ( ((unsigned __int16)a2->u2.s2.Type & 0xFFFF00FF) != 2 )
    return 3221225473LL;
  return result;
}
