/*
 * XREFs of PostPendingMouseMove @ 0x1C0012B40
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C0017CC0 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0014088 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PostPendingMouseMove(struct tagQ *a1)
{
  CMouseProcessor *v2; // rax

  v2 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( v2 )
    CMouseProcessor::PostPendingMouseMove(v2, a1);
}
