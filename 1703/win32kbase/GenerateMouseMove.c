/*
 * XREFs of GenerateMouseMove @ 0x1C0045060
 * Callers:
 *     <none>
 * Callees:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C0047A94 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void GenerateMouseMove()
{
  CMouseProcessor *v0; // rax

  v0 = (CMouseProcessor *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018 + 8LL))(qword_1C0186018);
  if ( v0 )
    CMouseProcessor::MoveMouseWindowManagement(v0);
}
