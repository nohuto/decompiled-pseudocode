/*
 * XREFs of sub_18001EF1C @ 0x18001EF1C
 * Callers:
 *     sub_180021168 @ 0x180021168 (sub_180021168.c)
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall sub_18001EF1C(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int16 v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF

  v4 = sub_1800222E0(a1, (__int64)&v8, (__int64)&v7);
  if ( v4 && v7 && a3 != v8 )
  {
    v5 = *(_QWORD *)(qword_1801598D8 + 8LL * (v7 - 1));
    RtlAcquireSRWLockShared(&Parameter);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 32), a3 - v8);
    RtlReleaseSRWLockShared(&Parameter);
  }
  return v4;
}
