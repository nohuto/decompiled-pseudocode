/*
 * XREFs of ?IsEnabled@CAppManagerTelemetry@@SA_NXZ @ 0x18004F0D4
 * Callers:
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18004D87C (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 *     ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x1800641A0 (-SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z.c)
 *     ?SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z @ 0x1800642E0 (-SetVisibility@CTaskWindow@@UEAAXW4ViewVisibilityState@@@Z.c)
 * Callees:
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char CAppManagerTelemetry::IsEnabled(void)
{
  char v0; // bl
  _DWORD *v1; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  v0 = 1;
  if ( fPending )
  {
    qword_1802448D0 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_1802448D0;
    atexit(lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
    qword_1802448D8 = (__int64)CAppManagerLogging::Provider();
    byte_1802448E0 = 0;
    dword_1802448E4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802448D0 + 8))(&qword_1802448D0);
    InitOnceComplete(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &qword_1802448D0);
  }
  v1 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( !v1 || !*v1 )
    return 0;
  return v0;
}
