/*
 * XREFs of InvokePauseCallbacks @ 0x1C005EF54
 * Callers:
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_1C00775D0;
    if ( (__int64 *)qword_1C00775D0 == &qword_1C00775D0 )
      break;
    v1 = *(_QWORD *)qword_1C00775D0;
    if ( *(__int64 **)(qword_1C00775D0 + 8) != &qword_1C00775D0 || *(_QWORD *)(v1 + 8) != qword_1C00775D0 )
      __fastfail(3u);
    qword_1C00775D0 = *(_QWORD *)qword_1C00775D0;
    *(_QWORD *)(v1 + 8) = &qword_1C00775D0;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
