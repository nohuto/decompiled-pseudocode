/*
 * XREFs of ?HampActRemoveFromClient@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180047CF0
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047218 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001F6C0 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

void __fastcall HampActRemoveFromClient(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  struct _HAM_CLIENT_CONTEXT *v2; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 *v6; // rax

  v2 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
  HampClientAcquireLockExclusive(v2, a2);
  v4 = (__int64 *)((char *)a1 + 48);
  v5 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 || (v6 = (__int64 *)v4[1], (__int64 *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  v4[1] = 0LL;
  HampClientReleaseLockExclusive(v2, v5);
}
