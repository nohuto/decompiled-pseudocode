/*
 * XREFs of DestroyEventHook @ 0x1C0058090
 * Callers:
 *     _UnhookWinEvent @ 0x1C0056664 (_UnhookWinEvent.c)
 *     FreeThreadsWinEvents @ 0x1C0058540 (FreeThreadsWinEvents.c)
 * Callees:
 *     RemoveHmodDependency @ 0x1C0058D88 (RemoveHmodDependency.c)
 */

__int64 __fastcall DestroyEventHook(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  __int64 *i; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  _DWORD *v7; // r8
  int v8; // r9d
  __int64 v9; // r10

  *(_DWORD *)(a1 + 40) |= 1u;
  v2 = 0;
  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    for ( i = (__int64 *)gpWinEventHooks; ; i = (__int64 *)(v5 + 24) )
    {
      v5 = *i;
      if ( !*i )
        break;
      if ( v5 == a1 )
      {
        *i = *(_QWORD *)(a1 + 24);
        break;
      }
    }
    v6 = gpWinEventHooks;
    while ( v6 )
    {
      v7 = &unk_1C0323A04;
      v8 = 0;
      LODWORD(v9) = 0;
      do
      {
        if ( *(v7 - 1) > *(_DWORD *)(v6 + 36) )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)(*((_DWORD *)&unk_1C0323A00 + 2 * v9) - 1) >= *(_DWORD *)(v6 + 32) )
          v8 |= *v7;
        v7 += 2;
      }
      while ( (unsigned int)v9 < 0xF );
      v6 = *(_QWORD *)(v6 + 24);
      v2 |= v8;
    }
    *(_DWORD *)(gpsi + 1876LL) = v2;
    if ( *(int *)(a1 + 72) >= 0 )
      RemoveHmodDependency();
    return HMFreeObject(a1);
  }
  return result;
}
