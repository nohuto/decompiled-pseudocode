/*
 * XREFs of ??_E?$CAsyncCallbackWithLambda@V_lambda_c57b015ca5be0aa76b5ef311fd246426_@@@@UEAAPEAXI@Z @ 0x18008FC80
 * Callers:
 *     ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x180013820 (-QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda<_lambda_c57b015ca5be0aa76b5ef311fd246426_>::`vector deleting destructor'(
        _QWORD *a1,
        volatile int *a2)
{
  char v2; // di
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // rcx

  v2 = (char)a2;
  v4 = a1[6];
  if ( v4 )
  {
    a1[6] = 0LL;
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v4 + 36), a2) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 72LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  *((_DWORD *)a1 + 11) = -1073741823;
  v6 = a1[4];
  if ( v6 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
