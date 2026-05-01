/*
 * XREFs of ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x18013C2D4
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18013DA90 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x180141420 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1801419D0 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct ViewManagerInteropTraceLogging *ViewManagerInteropTraceLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_1802BA9C0 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_1802BA9C0;
    atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
    qword_1802BA9C8 = (__int64)ViewManagerInteropLogging::Provider();
    byte_1802BA9D0 = 0;
    dword_1802BA9D4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BA9C0 + 8))(&qword_1802BA9C0);
    InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_1802BA9C0);
  }
  return (struct ViewManagerInteropTraceLogging *)Context;
}
