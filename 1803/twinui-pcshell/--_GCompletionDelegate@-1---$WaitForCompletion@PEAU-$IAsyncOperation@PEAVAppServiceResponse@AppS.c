/*
 * XREFs of ??_GCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAPEAXI@Z @ 0x1801895F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FC6BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

_QWORD *__fastcall `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *> *>'::`2'::CompletionDelegate::`scalar deleting destructor'(
        _QWORD *a1,
        void *a2)
{
  char v3; // di
  wil::details *v4; // rcx

  v3 = (char)a2;
  v4 = (wil::details *)a1[7];
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  if ( (v3 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
  return a1;
}
