/*
 * XREFs of ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x18006AD08
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18006A720 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18006ADE0 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18006BB40 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Window.c)
 *     ??_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA @ 0x18006C0FC (--_9ITargetedContentAction@TargetedContent@Services@Windows@@$BDA@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v5 =  Windows::Services::TargetedContent::ITargetedContentAction::`vcall'{48,{flat}}(a2, *a4, &v11);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x650,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = v11;
  *a1 = 0LL;
  v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder *> *>(v6);
  if ( v7 >= 0 )
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 64LL))(v6, a1);
  if ( v7 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x638,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v7);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return a1;
}
