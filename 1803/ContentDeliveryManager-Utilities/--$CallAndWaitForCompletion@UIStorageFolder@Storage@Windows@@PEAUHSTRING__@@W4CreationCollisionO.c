/*
 * XREFs of ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@W4CreationCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@$$QEAW4856@@Z @ 0x180090BA8
 * Callers:
 *     ?GetFaviconCache@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180090954 (-GetFaviconCache@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIStorageFolde.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IStorageItem@Storage@Windows@@$BEI@AA @ 0x1800505C0 (--_9IStorageItem@Storage@Windows@@$BEI@AA.c)
 *     ??$WaitForCompletion@PEAVStorageFolder@Storage@Windows@@V?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180075E08 (--$WaitForCompletion@PEAVStorageFolder@Storage@Windows@@V-$ComPtr@UIStorageFolder@Storage@Window.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____W4CreationCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7___QEAW4856__Z(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 =  Windows::Storage::IStorageItem::`vcall'{72,{flat}}(a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x658,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180090C32LL);
  }
  wil::WaitForCompletion<Windows::Storage::StorageFolder *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFolder>>(
    a1,
    0LL);
  return a1;
}
