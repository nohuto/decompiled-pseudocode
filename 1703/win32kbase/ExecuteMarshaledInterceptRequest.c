/*
 * XREFs of ExecuteMarshaledInterceptRequest @ 0x1C012E800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ @ 0x1C0131A8C (-InvokeMarshaledInterceptRequest@MouseInterceptState@CMouseProcessor@@QEAAXXZ.c)
 */

void ExecuteMarshaledInterceptRequest()
{
  __int64 v0; // rax

  v0 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018[0] + 8LL))(qword_1C0186018[0]);
  if ( v0 )
    CMouseProcessor::MouseInterceptState::InvokeMarshaledInterceptRequest((CMouseProcessor::MouseInterceptState *)(v0 + 2752));
}
