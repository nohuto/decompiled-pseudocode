/*
 * XREFs of Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc_____lambda_eb168a4251134b138c4e1a8a58dc23dc__&___ptr64_ @ 0x1802D997C
 * Callers:
 *     CDCompBatchAnimationCallback_CreateInstance__lambda_eb168a4251134b138c4e1a8a58dc23dc___ @ 0x1802D984C (CDCompBatchAnimationCallback_CreateInstance__lambda_eb168a4251134b138c4e1a8a58dc23dc___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18029796C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIDCompBatchAnimationCallback@@@WRL@Mi.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD08 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802DBD08.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc_____lambda_eb168a4251134b138c4e1a8a58dc23dc______ptr64_(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDCompBatchAnimationCallback>(v4);
    *v5 = off_180349080;
    v6 = *a2;
    v5[2] = *a2;
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(v6);
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 7) = 0;
    v5[4] = 0LL;
    *((_DWORD *)v5 + 10) = 0;
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
