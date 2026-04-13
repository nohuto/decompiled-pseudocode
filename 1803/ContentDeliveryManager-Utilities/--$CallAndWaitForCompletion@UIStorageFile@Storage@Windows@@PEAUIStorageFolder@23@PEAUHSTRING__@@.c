/*
 * XREFs of ??$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFile@Storage@Windows@@P8456@EAAJPEAUIStorageFolder@56@PEAUHSTRING__@@W4NameCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU756@$$QEAPEAU8@$$QEAW4956@@Z @ 0x180074FCC
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180074A00 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?CopyFavicon@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@Z @ 0x180090568 (-CopyFavicon@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AV-$basic_string@_WU-$char_trait.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180075F40 (--$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@@@.c)
 *     ??_9IStorageFile@Storage@Windows@@$BGA@AA @ 0x180076690 (--_9IStorageFile@Storage@Windows@@$BGA@AA.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___CallAndWaitForCompletion_UIStorageFile_Storage_Windows__PEAUIStorageFolder_23_PEAUHSTRING____W4NameCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU423_PEAU5_W4623__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFile_Storage_Windows__P8456_EAAJPEAUIStorageFolder_56_PEAUHSTRING____W4NameCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU756___QEAPEAU8___QEAW4956__Z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6)
{
  int v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v7 =  Windows::Storage::IStorageFile::`vcall'{96,{flat}}(a2, *a4, *a5, *a6, &v11);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x658,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x180075063LL);
  }
  wil::WaitForCompletion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
    a1,
    v11);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return a1;
}
