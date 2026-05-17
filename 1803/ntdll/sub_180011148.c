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

__int64 __fastcall sub_180011148(int a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int16 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v5 = sub_180013D40(a1, a4, a2, a3, (__int64)&v11, (__int64)&v10);
  if ( v5 && v10 && a3 != v11 )
  {
    v8 = *(_QWORD *)(qword_18015AA38 + 8LL * v10 - 8);
    RtlAcquireSRWLockShared(&qword_18015AA20, (char *)v10, v6, v7);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 32), a3 - v11);
    RtlReleaseSRWLockShared(&qword_18015AA20);
  }
  return v5;
}
