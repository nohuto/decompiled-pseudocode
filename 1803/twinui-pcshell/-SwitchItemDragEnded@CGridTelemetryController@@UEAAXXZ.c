/*
 * XREFs of ?SwitchItemDragEnded@CGridTelemetryController@@UEAAXXZ @ 0x1802A0910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGridTelemetryController::SwitchItemDragEnded(CGridTelemetryController *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 112LL))(v1);
}
