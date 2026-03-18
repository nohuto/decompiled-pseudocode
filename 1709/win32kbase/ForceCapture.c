/*
 * XREFs of ForceCapture @ 0x1C009BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0014260 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ForceCapture(int a1, struct tagINPUTDEST *a2)
{
  CMouseProcessor *v4; // rax

  v4 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( v4 && (a2 || a1 == 2) )
    CMouseProcessor::ForceMouseOwner(v4, a2, a1);
}
