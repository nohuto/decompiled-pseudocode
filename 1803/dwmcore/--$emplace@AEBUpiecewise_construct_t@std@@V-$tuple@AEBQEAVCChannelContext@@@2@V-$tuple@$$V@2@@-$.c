/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCChannelContext@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCChannelContext@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18017ECA0
 * Callers:
 *     ?ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE@@@Z @ 0x180181138 (-ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIM.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800BC864 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_retur.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ??$_Insert@AEAU?$pair@QEAVCChannelContext@@M@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCChannelContext@@M@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@1@@Z @ 0x18017EB78 (--$_Insert@AEAU-$pair@QEAVCChannelContext@@M@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_L.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<CChannelContext * const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4)
{
  _QWORD *v7; // rbp
  _QWORD *v8; // r14
  _QWORD *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v7 = **(_QWORD ***)(a1 + 8);
  v8 = (_QWORD *)v7[1];
  v9 = std::_List_alloc<std::_List_base_types<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>>::_Buynode0(
         a1,
         v7,
         v8);
  v10 = **a4;
  *((_DWORD *)v9 + 6) = 0;
  v9[2] = v10;
  v11 = *(_QWORD *)(a1 + 16);
  if ( v11 == 0x7FFFFFFFFFFFFFELL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  *(_QWORD *)(a1 + 16) = v11 + 1;
  v7[1] = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Insert<std::pair<CChannelContext * const,float> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CChannelContext * const,float>>>>>(
    (_QWORD *)a1,
    a2,
    (const unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
    **(__int64 ***)(a1 + 8));
  return a2;
}
