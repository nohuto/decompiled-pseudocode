/*
 * XREFs of HamIpcChannelRundown @ 0x18000D7FC
 * Callers:
 *     RmpClientConnectionCleanup @ 0x18000C1DC (RmpClientConnectionCleanup.c)
 *     HampConnectionDestroy @ 0x18000D468 (HampConnectionDestroy.c)
 * Callees:
 *     HampIpcChannelObjectMakeZombieUnsafe @ 0x18000D8BC (HampIpcChannelObjectMakeZombieUnsafe.c)
 *     RmpClientWnfDestroySubscription @ 0x18000D930 (RmpClientWnfDestroySubscription.c)
 */

__int64 __fastcall HamIpcChannelRundown(__int64 a1, __int64 a2, __int64 a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rax
  _QWORD *v6; // rbx
  _QWORD **v7; // rcx
  _QWORD *v8; // rax
  _QWORD *i; // rcx
  __int64 result; // rax

  RtlAcquireSRWLockExclusive(a1 + 8, a2, a3);
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a1 + 20) |= 1u;
  *(_DWORD *)(a1 + 16) = CurrentThreadId;
  v5 = *(_QWORD *)(a1 + 32);
  if ( (v5 & 1) != 0 )
  {
    if ( v5 == 1 )
      goto LABEL_13;
    v6 = (_QWORD *)(v5 ^ ((a1 + 24) | 1));
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 32);
  }
  while ( v6 )
  {
    HampIpcChannelObjectMakeZombieUnsafe(v6, a1);
    v7 = (_QWORD **)v6[1];
    v8 = v6;
    if ( v7 )
    {
      v6 = (_QWORD *)v6[1];
      for ( i = *v7; i; i = (_QWORD *)*i )
        v6 = i;
    }
    else
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_QWORD *)*v6 == v8 )
          break;
        v8 = v6;
      }
    }
  }
LABEL_13:
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( *(_QWORD *)a1 )
    return RmpClientWnfDestroySubscription(*(PVOID *)a1);
  return result;
}
