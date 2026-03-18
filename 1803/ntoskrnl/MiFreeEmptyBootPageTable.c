/*
 * XREFs of MiFreeEmptyBootPageTable @ 0x1408E0F5C
 * Callers:
 *     MxCreateFreePfns @ 0x14089A028 (MxCreateFreePfns.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockAndInsertPageInFreeList @ 0x14017EC2C (MiLockAndInsertPageInFreeList.c)
 */

__int64 __fastcall MiFreeEmptyBootPageTable(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r10

  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  result = 0LL;
  if ( (__int64)(v2 << 25) >> 16 << 25 >> 16 < (unsigned __int64)MiLowHalVa )
  {
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(a1 + 32) = 0;
    *(_QWORD *)v2 = ZeroPte;
    if ( MiPteInShadowRange(v2) )
      MiWritePteShadow(v5, v4, v6);
    return MiLockAndInsertPageInFreeList(v7);
  }
  return result;
}
