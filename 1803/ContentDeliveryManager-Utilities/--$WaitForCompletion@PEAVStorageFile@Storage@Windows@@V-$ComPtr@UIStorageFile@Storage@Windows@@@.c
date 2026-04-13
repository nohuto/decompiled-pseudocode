/*
 * XREFs of ??$WaitForCompletion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180075F40
 * Callers:
 *     ??$CallAndWaitForCompletion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFileStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x180074F48 (--$CallAndWaitForCompletion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsync.c)
 *     ??$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFile@Storage@Windows@@P8456@EAAJPEAUIStorageFolder@56@PEAUHSTRING__@@W4NameCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU756@$$QEAPEAU8@$$QEAW4956@@Z @ 0x180074FCC (--$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x180075634 (--$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsyncOpera.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180076230 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::WaitForCompletion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> *>(a2);
  if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 64LL))(a2, a1), v4 < 0) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x640,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x180075FB7LL);
  }
  return a1;
}
