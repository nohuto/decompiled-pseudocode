/*
 * XREFs of NtUserCallNoParam @ 0x1C004C660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall NtUserCallNoParam(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rax
  _QWORD *v7; // rbx

  v1 = a1;
  EnterCrit(0LL, 1LL);
  if ( (unsigned int)v1 >= 0x2E )
    goto LABEL_6;
  _mm_lfence();
  v6 = (_QWORD *)apfnSimpleCall[v1]();
  v7 = v6;
  if ( (unsigned int)v1 < 2 )
  {
    if ( v6 )
    {
      v7 = (_QWORD *)*v6;
      goto LABEL_3;
    }
LABEL_6:
    v7 = 0LL;
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return v7;
}
