/*
 * XREFs of MiFreeEmptyBootPageTable @ 0x14086C238
 * Callers:
 *     MxCreateFreePfns @ 0x14082A9F8 (MxCreateFreePfns.c)
 * Callees:
 *     MiLockAndInsertPageInFreeList @ 0x140150B54 (MiLockAndInsertPageInFreeList.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFreeEmptyBootPageTable(__int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 v2; // rcx
  __int64 result; // rax

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  result = 0LL;
  if ( (__int64)(v2 << 25) >> 16 << 25 >> 16 < (unsigned __int64)MiLowHalVa )
  {
    *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(v1 + 32) = 0;
    *(_QWORD *)v2 = 0LL;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL && v2 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    return MiLockAndInsertPageInFreeList(v1);
  }
  return result;
}
