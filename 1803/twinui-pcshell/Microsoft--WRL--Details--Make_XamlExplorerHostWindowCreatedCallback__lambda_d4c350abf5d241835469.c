/*
 * XREFs of Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_____lambda_d4c350abf5d24183546902bae9e0768c___ @ 0x180203724
 * Callers:
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c___ @ 0x180203C04 (MakeXamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCreatedCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1801F75E4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIXamlExplorerHostWindowCr.c)
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::_lambda_d4c350abf5d24183546902bae9e0768c_ @ 0x1802050AC (_lambda_d4c350abf5d24183546902bae9e0768c_--_lambda_d4c350abf5d24183546902bae9e0768c_.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_XamlExplorerHostWindowCreatedCallback__lambda_d4c350abf5d24183546902bae9e0768c_____lambda_d4c350abf5d24183546902bae9e0768c___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x90uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IXamlExplorerHostWindowCreatedCallback>((__int64)v4);
    *v5 = off_180431DF0;
    v5[4] = off_180431DD0;
    lambda_d4c350abf5d24183546902bae9e0768c_::_lambda_d4c350abf5d24183546902bae9e0768c_(v5 + 6, a2);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
