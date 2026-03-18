/*
 * XREFs of InvokePauseCallbacks @ 0x1C004E5A8
 * Callers:
 *     RunContext @ 0x1C00025DC (RunContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

void InvokePauseCallbacks()
{
  __int64 v0; // rcx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = qword_1C0067980;
    if ( (__int64 *)qword_1C0067980 == &qword_1C0067980 )
      break;
    if ( *(__int64 **)(qword_1C0067980 + 8) != &qword_1C0067980
      || (v1 = *(_QWORD *)qword_1C0067980, *(_QWORD *)(*(_QWORD *)qword_1C0067980 + 8LL) != qword_1C0067980) )
    {
      __fastfail(3u);
    }
    qword_1C0067980 = *(_QWORD *)qword_1C0067980;
    *(_QWORD *)(v1 + 8) = &qword_1C0067980;
    (*(void (__fastcall **)(_QWORD))(v0 + 16))(*(_QWORD *)(v0 + 24));
  }
}
