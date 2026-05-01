/*
 * XREFs of HampIpcChannelObjectMakeZombieUnsafe @ 0x18000D8BC
 * Callers:
 *     HamIpcChannelRundown @ 0x18000D7FC (HamIpcChannelRundown.c)
 * Callees:
 *     RmpClientWnfMessageQueueCheckStart @ 0x18000DA34 (RmpClientWnfMessageQueueCheckStart.c)
 */

__int64 __fastcall HampIpcChannelObjectMakeZombieUnsafe(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 **v7; // rcx
  __int64 v8; // rbx

  RtlRbRemoveNode(a2 + 3, a1);
  v6 = (__int64 *)(a1 + 24);
  v7 = (__int64 **)a2[6];
  if ( *v7 != a2 + 5 )
    __fastfail(3u);
  v6[1] = (__int64)v7;
  *v6 = (__int64)(a2 + 5);
  *v7 = v6;
  a2[6] = (__int64)v6;
  v8 = *a2;
  RtlAcquireSRWLockExclusive(*a2 + 32, v4, v5);
  *(_DWORD *)(v8 + 64) |= 2u;
  RmpClientWnfMessageQueueCheckStart(v8);
  return RtlReleaseSRWLockExclusive(v8 + 32);
}
