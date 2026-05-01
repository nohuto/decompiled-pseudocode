/*
 * XREFs of HampIpcChannelObjectMakeZombieUnsafe @ 0x18000D9D4
 * Callers:
 *     HamIpcChannelRundown @ 0x1800016E4 (HamIpcChannelRundown.c)
 *     HamIpcChannelObjectMakeZombie @ 0x18000D90C (HamIpcChannelObjectMakeZombie.c)
 * Callees:
 *     RmpClientWnfMessageQueueCheckStart @ 0x18000DA48 (RmpClientWnfMessageQueueCheckStart.c)
 */

__int64 __fastcall HampIpcChannelObjectMakeZombieUnsafe(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rcx
  __int64 v6; // rbx

  RtlRbRemoveNode(a2 + 3, a1);
  v4 = (__int64 *)(a1 + 24);
  v5 = (__int64 **)a2[6];
  if ( *v5 != a2 + 5 )
    __fastfail(3u);
  v4[1] = (__int64)v5;
  *v4 = (__int64)(a2 + 5);
  *v5 = v4;
  a2[6] = (__int64)v4;
  v6 = *a2;
  RtlAcquireSRWLockExclusive(*a2 + 32);
  *(_DWORD *)(v6 + 64) |= 2u;
  RmpClientWnfMessageQueueCheckStart(v6);
  return RtlReleaseSRWLockExclusive(v6 + 32);
}
