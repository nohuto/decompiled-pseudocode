/*
 * XREFs of Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89__&___ptr64_ @ 0x18029774C
 * Callers:
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x180297548 (CDCompBatchAnimationCallback_CreateInstance__lambda_55e0f220ed6030f2589a6e9858a32f89___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _lambda_55e0f220ed6030f2589a6e9858a32f89_::_lambda_55e0f220ed6030f2589a6e9858a32f89_ @ 0x1802978D4 (_lambda_55e0f220ed6030f2589a6e9858a32f89_--_lambda_55e0f220ed6030f2589a6e9858a32f89_.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18029796C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Mi.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89______ptr64_(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>(v4);
    *(_QWORD *)v5 = off_1803423A8;
    lambda_55e0f220ed6030f2589a6e9858a32f89_::_lambda_55e0f220ed6030f2589a6e9858a32f89_(v5 + 4, a2);
    v5[8] = 0;
    v5[9] = 0;
    *((_QWORD *)v5 + 5) = 0LL;
    v5[12] = 0;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
