/*
 * XREFs of HamIpcChannelRundown @ 0x1800016E4
 * Callers:
 *     HampConnectionDestroy @ 0x18000169C (HampConnectionDestroy.c)
 *     RmpClientConnectionCleanup @ 0x18000C900 (RmpClientConnectionCleanup.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x180001748 (RmpClientWnfDestroySubscription.c)
 *     HampIpcChannelObjectMakeZombieUnsafe @ 0x18000D9D4 (HampIpcChannelObjectMakeZombieUnsafe.c)
 */

__int64 __fastcall HamIpcChannelRundown(__int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rbx
  _QWORD *v4; // rbx
  __int64 result; // rax
  _QWORD **v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax

  RtlAcquireSRWLockExclusive(a1 + 8);
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a1 + 20) |= 1u;
  v3 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 16) = CurrentThreadId;
  v4 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFEuLL);
  while ( v4 )
  {
    HampIpcChannelObjectMakeZombieUnsafe(v4, a1);
    v6 = (_QWORD **)v4[1];
    v7 = v4;
    if ( v6 )
    {
      v8 = *v6;
      v4 = (_QWORD *)v4[1];
      while ( v8 )
      {
        v4 = v8;
        v8 = (_QWORD *)*v8;
      }
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)*v4 == v7 )
          break;
        v7 = v4;
      }
    }
  }
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( *(_QWORD *)a1 )
    return RmpClientWnfDestroySubscription(*(PVOID *)a1);
  return result;
}
