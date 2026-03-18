/*
 * XREFs of MiUpdatePageTableUseCount @ 0x14003C610
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiFillPteWithProto @ 0x14003C58C (MiFillPteWithProto.c)
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 *     MiExpandSharedZeroCluster @ 0x14013C370 (MiExpandSharedZeroCluster.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  __int64 UsedPtesHandle; // rax
  unsigned int v5; // r11d

  v2 = a1;
  v3 = 0LL;
  do
  {
    if ( v2 <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(a1, a2, v2, v3);
      MiIncreaseUsedPtesCount(UsedPtesHandle, v5);
      return 1LL;
    }
    v3 = (unsigned int)(v3 + 1);
    v2 = (__int64)(v2 << 25) >> 16;
  }
  while ( (unsigned int)v3 < 3 );
  return 0LL;
}
