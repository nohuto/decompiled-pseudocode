/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x1C012DD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0131120 (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 */

void ExecuteMarshaledInterceptRequest()
{
  __int64 v0; // rax

  v0 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( v0 )
    CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor::MouseInterceptState *)(v0 + 2904));
}
