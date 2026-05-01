/*
 * XREFs of Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf_____lambda_a07bbd685e96231049fd04a75b23a5bf__const_&___ptr64_ @ 0x18026AF30
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf___ @ 0x18026B048 (MakeMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18026A82C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf_____lambda_a07bbd685e96231049fd04a75b23a5bf__const_____ptr64_(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>((__int64)v4);
    *v5 = off_18033C4C8;
    v5[4] = off_18033C4A8;
    v5[6] = *a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v5 + 6);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
