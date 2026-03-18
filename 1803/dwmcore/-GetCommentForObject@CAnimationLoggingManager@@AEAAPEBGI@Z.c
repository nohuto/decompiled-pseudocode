/*
 * XREFs of ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x18017FD5C
 * Callers:
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z @ 0x18017FEF8 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x18018003C (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18002D108 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18017FD8C (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 */

const unsigned __int16 *__fastcall CAnimationLoggingManager::GetCommentForObject(
        CAnimationLoggingManager *this,
        unsigned int a2)
{
  struct CResource *ResourceWithoutType; // rax
  CAnimationLoggingManager *v3; // r9

  if ( !a2 )
    return 0LL;
  ResourceWithoutType = CResourceTable::GetResourceWithoutType(*(CResourceTable **)(*((_QWORD *)this + 6) + 24LL), a2);
  return (const unsigned __int16 *)*((_QWORD *)CAnimationLoggingManager::GetDebugInfoForResource(
                                                 v3,
                                                 ResourceWithoutType)
                                   + 1);
}
