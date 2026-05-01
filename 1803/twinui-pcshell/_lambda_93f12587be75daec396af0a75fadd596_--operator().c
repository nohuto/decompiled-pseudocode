/*
 * XREFs of _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x18013E2C0
 * Callers:
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x180141474 (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x180141B80 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_93f12587be75daec396af0a75fadd596_::operator()(__int64 **a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v4 = *(_QWORD *)(v2 + 608);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(v2 + 608));
  v5 = *a1;
  v9 = 0LL;
  v6 = *v5;
  *v5 = v4;
  v8 = v6;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
}
