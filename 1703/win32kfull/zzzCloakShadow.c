/*
 * XREFs of zzzCloakShadow @ 0x1C020B868
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0021428 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzCloakShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  int v2; // edx
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  result = FindShadow(a1);
  if ( result )
  {
    v3 = *((_QWORD *)result + 1);
    v6[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v6;
    v6[1] = v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 8);
    zzzSetWindowCompositionCloak(*((_QWORD *)result + 1), 0LL, v2 != 0);
    return (struct tagSHADOW *)ThreadUnlock1(v5, v4);
  }
  return result;
}
