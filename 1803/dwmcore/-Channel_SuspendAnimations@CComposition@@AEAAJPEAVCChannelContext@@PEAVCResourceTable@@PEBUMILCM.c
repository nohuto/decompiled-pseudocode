/*
 * XREFs of ?Channel_SuspendAnimations@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SUSPENDANIMATIONS@@@Z @ 0x180149FD4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x18017EFE4 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 */

__int64 __fastcall CComposition::Channel_SuspendAnimations(
        CExpressionManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_SUSPENDANIMATIONS *a4)
{
  CExpressionManager::SuspendAnimations(
    this[30],
    *((_DWORD *)a2 + 4),
    *((_DWORD *)a4 + 1) != 0,
    *((_DWORD *)a4 + 2) != 0);
  return 0LL;
}
