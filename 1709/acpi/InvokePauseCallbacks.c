/*
 * XREFs of InvokePauseCallbacks @ 0x1C006014C
 * Callers:
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_1C0079690;
    if ( (__int64 *)qword_1C0079690 == &qword_1C0079690 )
      break;
    if ( *(__int64 **)(qword_1C0079690 + 8) != &qword_1C0079690
      || (v1 = *(_QWORD *)qword_1C0079690, *(_QWORD *)(*(_QWORD *)qword_1C0079690 + 8LL) != qword_1C0079690) )
    {
      __fastfail(3u);
    }
    qword_1C0079690 = *(_QWORD *)qword_1C0079690;
    *(_QWORD *)(v1 + 8) = &qword_1C0079690;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
