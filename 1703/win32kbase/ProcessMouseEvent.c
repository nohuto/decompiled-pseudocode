/*
 * XREFs of ProcessMouseEvent @ 0x1C0089250
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00477DC (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void ProcessMouseEvent()
{
  CMouseProcessor *v0; // rax

  v0 = (CMouseProcessor *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018 + 8LL))(qword_1C0186018);
  if ( v0 )
    CMouseProcessor::ProcessMouseEvent(v0);
}
