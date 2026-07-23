/*
 * XREFs of sub_180011148 @ 0x180011148
 * Callers:
 *     sub_180011EB0 @ 0x180011EB0 (sub_180011EB0.c)
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 */

__int64 __fastcall sub_180011148(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int16 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF

  v4 = sub_180013D40(a1, (__int64)&v8, (__int64)&v7);
  if ( v4 && v7 && a3 != v8 )
  {
    v5 = *(_QWORD *)(qword_18015AA38 + 8LL * v7 - 8);
    RtlAcquireSRWLockShared(&Parameter);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 32), a3 - v8);
    RtlReleaseSRWLockShared(&Parameter);
  }
  return v4;
}
