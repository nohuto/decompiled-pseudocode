/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x140481B84
 * Callers:
 *     CmpGetSecurityDescriptorNode @ 0x140016054 (CmpGetSecurityDescriptorNode.c)
 *     CmpCreateTombstone @ 0x1401E4C50 (CmpCreateTombstone.c)
 *     CmpGetKeyNodeForKcb @ 0x140472A4C (CmpGetKeyNodeForKcb.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140476DE8 (CmpSetSecurityDescriptorInfo.c)
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14047AD50 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 144) & 0x8001) == 0 && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    if ( HvpMarkCellDirty(a1, a3, 0) )
      *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
