/*
 * XREFs of PostPendingMouseMove @ 0x1C007FE20
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C0045220 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0047A30 (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PostPendingMouseMove(struct tagQ *a1)
{
  CMouseProcessor *v2; // rax

  v2 = (CMouseProcessor *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018 + 8LL))(qword_1C0186018);
  if ( v2 )
    CMouseProcessor::PostPendingMouseMove(v2, a1);
}
