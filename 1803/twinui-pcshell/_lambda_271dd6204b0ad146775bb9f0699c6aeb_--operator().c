/*
 * XREFs of _lambda_271dd6204b0ad146775bb9f0699c6aeb_::operator() @ 0x1800A16CC
 * Callers:
 *     wil::ResultFromException__lambda_271dd6204b0ad146775bb9f0699c6aeb___ @ 0x1800A0FE0 (wil--ResultFromException__lambda_271dd6204b0ad146775bb9f0699c6aeb___.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$make_shared@UKBViewInfo@@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationFrameWrapper@@PEAUIApplicationFrameTitleBar@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationFrameWrapper@@$$QEAPEAUIApplicationFrameTitleBar@@@Z @ 0x1800A1024 (--$make_shared@UKBViewInfo@@AEBQEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUI.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800F5E74 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1801BFF64 (--$emplace_back@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneView.c)
 *     ??$emplace@V?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@std@@@1@$$QEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18023B5B4 (--$emplace@V-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_271dd6204b0ad146775bb9f0699c6aeb_::operator()(__int64 a1)
{
  struct IApplicationFrameWrapper *v2; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v3; // rdx
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+30h] [rbp-10h]
  struct IApplicationFrameTitleBar *v9; // [rsp+60h] [rbp+20h] BYREF
  struct IApplicationFrameWrapper *v10; // [rsp+68h] [rbp+28h] BYREF
  RTL_SRWLOCK *v11; // [rsp+70h] [rbp+30h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(*(_QWORD *)a1 + 416LL, &v11);
  v2 = **(struct IApplicationFrameWrapper ***)(a1 + 16);
  v9 = **(struct IApplicationFrameTitleBar ***)(a1 + 24);
  v10 = v2;
  v3 = *(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper ***)(a1 + 8);
  if ( *(_BYTE *)(a1 + 32) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 424LL);
    v5 = std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * const &,IApplicationFrameWrapper *,IApplicationFrameTitleBar *>(
           &v7,
           v3,
           &v10,
           &v9);
    std::vector<std::shared_ptr<KBViewInfo>>::emplace<std::shared_ptr<KBViewInfo>>(*(_QWORD *)a1 + 424LL, &v9, v4, v5);
  }
  else
  {
    v6 = std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * const &,IApplicationFrameWrapper *,IApplicationFrameTitleBar *>(
           &v7,
           v3,
           &v10,
           &v9);
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo>>(
      *(_QWORD *)a1 + 424LL,
      v6);
  }
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
}
