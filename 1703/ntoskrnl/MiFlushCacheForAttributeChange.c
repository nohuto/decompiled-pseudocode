/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x140103734
 * Callers:
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x14010346C (MiChangePageAttributeBatch.c)
 *     MiFlushCacheRange @ 0x140220BA4 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140804634 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x14000C0C4 (MiFlushHyperSpace.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140103850 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 result; // rax
  __int64 v6; // rdi
  unsigned int v8; // ebx
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // r10d

  v3 = 0;
  result = 268435458LL;
  v6 = a2;
  if ( a3 == 2 )
    v3 = 268435458;
  if ( a2 )
  {
    v8 = v3 | 0xC0000000;
    do
    {
      v9 = MiMapPageInHyperSpaceWorker(a1, 0LL, v8);
      KeInvalidateRangeAllCachesNoIpi(v9, 4096LL);
      v10 = (unsigned __int64)KeGetCurrentPrcb()->HyperPte & 0xFFFFFFFFFFFFF000uLL;
      v11 = (_QWORD *)((((v9 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      *v11 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v11) )
        MiWritePteShadow(v12);
      if ( v13 == 64 )
      {
        MiFlushHyperSpace();
        v13 = 0;
      }
      ++a1;
      result = v10 | v13;
      KeGetCurrentPrcb()->HyperPte = (void *)result;
      --v6;
    }
    while ( v6 );
  }
  if ( a3 == 3 )
    return MiFlushHyperSpace();
  return result;
}
