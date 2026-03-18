/*
 * XREFs of ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18017FD8C
 * Callers:
 *     ?GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z @ 0x18017FD5C (-GetCommentForObject@CAnimationLoggingManager@@AEAAPEBGI@Z.c)
 *     ?LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z @ 0x180180EA8 (-LogKeyframeAnimationDirtiedTarget@CAnimationLoggingManager@@QEAAXPEAVCKeyframeAnimation@@@Z.c)
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180180F7C (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGIN.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ??$_Try_emplace@AEBQEAVCResource@@$$V@?$unordered_map@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@5@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCResource@@@Z @ 0x18017F940 (--$_Try_emplace@AEBQEAVCResource@@$$V@-$unordered_map@PEAVCResource@@UResourceDebugInfo@CAnimati.c)
 */

struct CAnimationLoggingManager::ResourceDebugInfo *__fastcall CAnimationLoggingManager::GetDebugInfoForResource(
        CAnimationLoggingManager *this,
        struct CResource *a2)
{
  _DWORD *v2; // r11
  __int64 v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // r10
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  struct CResource *v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a2;
  v2 = 0LL;
  if ( a2 )
  {
    v5 = *((_QWORD *)this + 17) & std::_Hash_bytes((const unsigned __int8 *)&v10, 8uLL);
    while ( 1 )
    {
      v6 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
             (__int64)this + 88,
             &v11,
             v5);
      if ( v7 == *v6 )
        break;
      if ( *(struct CResource **)(v7 + 16) == a2 )
        goto LABEL_7;
    }
    v7 = *((_QWORD *)this + 12);
LABEL_7:
    if ( v7 == *((_QWORD *)this + 12) )
    {
      std::unordered_map<CResource *,CAnimationLoggingManager::ResourceDebugInfo>::_Try_emplace<CResource * const &,>(
        (__int64)this + 88,
        (__int64)v9,
        (const unsigned __int8 *)&v10);
      v2 = (_DWORD *)(v9[0] + 24LL);
      *v2 = ++*((_DWORD *)this + 40);
    }
    else
    {
      return (struct CAnimationLoggingManager::ResourceDebugInfo *)(v7 + 24);
    }
  }
  return (struct CAnimationLoggingManager::ResourceDebugInfo *)v2;
}
