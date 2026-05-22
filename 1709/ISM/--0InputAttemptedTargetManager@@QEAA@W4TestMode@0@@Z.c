/*
 * XREFs of ??0InputAttemptedTargetManager@@QEAA@W4TestMode@0@@Z @ 0x1800829D4
 * Callers:
 *     ?RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18007DE40 (-RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800122E0 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ??$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@@012@$$QEAW4TestMode@ViewHierarchy@@@Z @ 0x180084608 (--$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJV-.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InputAttemptedTargetManager::InputAttemptedTargetManager(__int64 a1, int a2)
{
  int v4; // eax
  _QWORD *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rcx
  struct IViewHierarchy *ViewHierarchy; // rax
  struct IViewHierarchy *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  __int64 v14; // [rsp+70h] [rbp+38h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp+40h] BYREF

  v14 = a1;
  *(_DWORD *)a1 = 0;
  v15 = (_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>::_Buynode0(
                          a1,
                          0LL,
                          0LL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
    (_QWORD *)a1,
    8LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  if ( a2 == 1 )
  {
    v15 = 0LL;
    LODWORD(v14) = 1;
    v4 = Microsoft::WRL::Details::MakeAndInitialize<ViewHierarchy,IViewHierarchy,enum ViewHierarchy::TestMode>(
           &v15,
           &v14);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x18,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v5 = v15;
    v6 = 0LL;
    v15 = 0LL;
    v7 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v5;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v6 = v15;
    }
    if ( v6 )
    {
      v15 = 0LL;
      v8 = *v6;
      v9 = v6;
LABEL_13:
      (*(void (__fastcall **)(__int64 *))(v8 + 16))(v9);
    }
  }
  else
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    v11 = ViewHierarchy;
    if ( *(struct IViewHierarchy **)(a1 + 64) != ViewHierarchy )
    {
      if ( ViewHierarchy )
        (*(void (__fastcall **)(struct IViewHierarchy *))(*(_QWORD *)ViewHierarchy + 8LL))(ViewHierarchy);
      v9 = *(__int64 **)(a1 + 64);
      *(_QWORD *)(a1 + 64) = v11;
      if ( v9 )
      {
        v8 = *v9;
        goto LABEL_13;
      }
    }
  }
  return a1;
}
