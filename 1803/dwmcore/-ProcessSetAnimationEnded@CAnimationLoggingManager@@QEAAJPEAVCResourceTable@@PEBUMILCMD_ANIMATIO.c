/*
 * XREFs of ?ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED@@@Z @ 0x180180F50
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z @ 0x18017FEF8 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetAnimationEnded(
        LPCWSTR *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED *a3)
{
  CAnimationLoggingManager::LogAnimationEnded(
    this,
    *((_QWORD *)this[2] + 48),
    *((_DWORD *)a3 + 2),
    *((_DWORD *)a3 + 3),
    *((_DWORD *)a3 + 4));
  return 0LL;
}
