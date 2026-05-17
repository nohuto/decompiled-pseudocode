/*
 * XREFs of sub_18000C8C0 @ 0x18000C8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18000C9B0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 */

signed __int64 __fastcall sub_18000C8C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  signed __int64 v5; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1 + 144;
  RtlAcquireReleaseSRWLockExclusive(a1 + 144);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 152);
      if ( (unsigned __int64)(v5 + a2) > *(_QWORD *)(a1 + 160) )
        break;
      if ( v5 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 152), v5 + a2, v5) )
        return v5;
    }
    RtlAcquireSRWLockExclusive(v2);
    v7 = *(_QWORD *)(a1 + 152);
    v8 = *(_QWORD *)(a1 + 160);
    if ( v7 + a2 > v8 )
      break;
LABEL_8:
    RtlReleaseSRWLockExclusive(v2);
  }
  v11 = *(_QWORD *)(a1 + 160);
  v10 = (v7 - v8 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v9 = sub_18001E548(a1, 1LL);
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v11, 0LL, &v10, 4096, v9) >= 0 )
  {
    *(_QWORD *)(a1 + 160) += v10;
    goto LABEL_8;
  }
  v5 = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return v5;
}
