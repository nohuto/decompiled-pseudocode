/*
 * XREFs of ProcessMouseEvent @ 0x1C0013A20
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0013E1C (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void ProcessMouseEvent()
{
  CMouseProcessor *v0; // rax

  v0 = (CMouseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( v0 )
    CMouseProcessor::ProcessMouseEvent(v0);
}
