/*
 * XREFs of wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___ @ 0x180198488
 * Callers:
 *     _DDAScreenCapture::GetScreenCaptureAsWicBitmapSource_::_1_::dtor$5 @ 0x180198B32 (_DDAScreenCapture--GetScreenCaptureAsWicBitmapSource_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___::_ScopeExitFn__lambda_1b97277dfd06d1a10fbbec949ac204fa___(
        __int64 *a1)
{
  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1[1] + 112) + 120LL))(
      *(_QWORD *)(a1[1] + 112),
      *a1,
      0LL);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
