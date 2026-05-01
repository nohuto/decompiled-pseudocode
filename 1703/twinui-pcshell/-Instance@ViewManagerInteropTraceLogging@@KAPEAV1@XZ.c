/*
 * XREFs of ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x180112054
 * Callers:
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x1801137F0 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4FRAMED_VIEW_FLAGS@@@Z @ 0x180116DD0 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4FRAMED_VIEW_FLAGS@@@Z.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x180116F48 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 * Callees:
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

struct ViewManagerInteropTraceLogging *ViewManagerInteropTraceLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_180244C90 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_180244C90;
    atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
    qword_180244C98 = (__int64)ViewManagerInteropLogging::Provider();
    byte_180244CA0 = 0;
    dword_180244CA4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180244C90 + 8))(&qword_180244C90);
    InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180244C90);
  }
  return (struct ViewManagerInteropTraceLogging *)Context;
}
