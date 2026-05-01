/*
 * XREFs of ?Provider@JumpViewProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800BBE74
 * Callers:
 *     ?StopActivity@ShowJumpViewActivity@JumpViewProvider@@MEAAXXZ @ 0x1800BBF80 (-StopActivity@ShowJumpViewActivity@JumpViewProvider@@MEAAXXZ.c)
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x1800BC608 (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 *     ??1?$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BC8EC (--1-$ActivityData@VJumpViewProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VJu.c)
 *     ?NotifyFailure@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800BF540 (-NotifyFailure@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Stop@?$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BFB80 (-Stop@-$ActivityBase@VJumpViewProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??$JumpViewDidntOpenInSpecifiedTime@K@JumpViewProvider@@SAX$$QEAK@Z @ 0x1800C0338 (--$JumpViewDidntOpenInSpecifiedTime@K@JumpViewProvider@@SAX$$QEAK@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *JumpViewProvider::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`JumpViewProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BAE90;
    qword_1802BAE90 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BAEA8 = (TraceLoggingHProvider)&`JumpViewProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_);
    qword_1802BAE98 = (__int64)qword_1802BAEA8;
    byte_1802BAEA0 = 1;
    TraceLoggingRegister(qword_1802BAEA8);
    dword_1802BAEA4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAE90 + 8))(&qword_1802BAE90);
    InitOnceComplete(&`JumpViewProvider::Instance'::`2'::wrapper, 0, &qword_1802BAE90);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
