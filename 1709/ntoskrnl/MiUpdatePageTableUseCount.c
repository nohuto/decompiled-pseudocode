/*
 * XREFs of MiUpdatePageTableUseCount @ 0x1400666B8
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x14000BD64 (MiExpandSharedZeroCluster.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400464C0 (MiResolvePrivateZeroFault.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiFillPteWithProto @ 0x140125368 (MiFillPteWithProto.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned int i; // r9d
  __int64 UsedPtesHandle; // rax
  unsigned int v4; // r10d

  v1 = a1;
  for ( i = 0; i < 3; ++i )
  {
    if ( v1 <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, v4);
      return 1LL;
    }
    v1 = (__int64)(v1 << 25) >> 16;
  }
  return 0LL;
}
