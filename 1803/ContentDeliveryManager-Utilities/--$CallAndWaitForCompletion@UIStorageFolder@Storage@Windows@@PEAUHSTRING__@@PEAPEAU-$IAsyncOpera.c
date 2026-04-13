/*
 * XREFs of ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x180075634
 * Callers:
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180075070 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180075F40 (--$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@@@.c)
 *     ??_9IStorageFolder@Storage@Windows@@$BFA@AA @ 0x180076680 (--_9IStorageFolder@Storage@Windows@@$BFA@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v5; // eax
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v5 =  Windows::Storage::IStorageFolder::`vcall'{80,{flat}}(a2, *a4, &v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x658,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  wil::WaitForCompletion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(a1, v9);
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
