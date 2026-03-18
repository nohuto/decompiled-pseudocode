/*
 * XREFs of MiFreeEmptyBootPageTable @ 0x14083509C
 * Callers:
 *     MxCreateFreePfns @ 0x140800A20 (MxCreateFreePfns.c)
 * Callees:
 *     MiLockAndInsertPageInFreeList @ 0x14015976C (MiLockAndInsertPageInFreeList.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFreeEmptyBootPageTable(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r10

  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  result = 0LL;
  if ( (__int64)(v2 << 25) >> 16 << 25 >> 16 < (unsigned __int64)MiLowHalVa )
  {
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
    *(_WORD *)(a1 + 32) = 0;
    *(_QWORD *)v2 = 0LL;
    if ( MiPteInShadowRange(v2) )
      MiWritePteShadow();
    return MiLockAndInsertPageInFreeList(v4);
  }
  return result;
}
