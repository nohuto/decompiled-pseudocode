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

__int64 __fastcall sub_18001EF1C(int a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned __int16 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  v5 = sub_1800222E0(a1, a4, a2, a3, (__int64)&v9, (__int64)&v8);
  if ( v5 && v8 && a3 != v9 )
  {
    v6 = *(_QWORD *)(qword_1801598D8 + 8LL * (v8 - 1));
    RtlAcquireSRWLockShared(&unk_1801598C0);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a3 - v9);
    RtlReleaseSRWLockShared(&unk_1801598C0);
  }
  return v5;
}
