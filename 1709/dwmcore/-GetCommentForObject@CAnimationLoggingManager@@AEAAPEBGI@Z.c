/*
 * XREFs of ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x180156C24
 * Callers:
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z @ 0x180156F58 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KIIW4AnimationEndedReasonType@@@Z.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBGPEBX@Z @ 0x180157080 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAX_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMa.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800AA228 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@AEBQEAVCResource@@@Z @ 0x1801582E0 (-find@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$pa.c)
 */

const unsigned __int16 *__fastcall CAnimationLoggingManager::GetCommentForObject(
        CAnimationLoggingManager *this,
        unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r11
  __int64 v4; // r11
  struct CResource *ResourceWithoutType; // [rsp+40h] [rbp+18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(*(CResourceTable **)(*((_QWORD *)this + 6) + 24LL), a2);
    if ( ResourceWithoutType )
    {
      std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::find(
        v3 + 88,
        &v7,
        &ResourceWithoutType);
      if ( v7 != *(_QWORD *)(v4 + 88) )
        return *(const unsigned __int16 **)(v7 + 40);
    }
  }
  return (const unsigned __int16 *)v2;
}
