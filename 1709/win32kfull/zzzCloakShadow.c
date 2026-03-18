/*
 * XREFs of zzzCloakShadow @ 0x1C020CD58
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C010A6A4 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzCloakShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagSHADOW *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  result = FindShadow(a1);
  v5 = result;
  if ( result )
  {
    v6 = *((_QWORD *)result + 1);
    v7 = v2 != 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v11;
    v11[1] = v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    zzzSetWindowCompositionCloak(*((_QWORD *)v5 + 1), 0LL, v7);
    return (struct tagSHADOW *)ThreadUnlock1(v10, v9);
  }
  return result;
}
