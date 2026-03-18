/*
 * XREFs of MiSwizzleInvalidPte @ 0x14017D094
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MiMakeLinkedListPte @ 0x14017CF2C (MiMakeLinkedListPte.c)
 *     MiMakePageFilePte @ 0x14017CF3C (MiMakePageFilePte.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017CF60 (MiMakePrototypePteVadLookup.c)
 *     MiMakeSubsectionPte @ 0x14017CF90 (MiMakeSubsectionPte.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017D0B8 (MiTransferSoftwarePte.c)
 *     MiUpdateLinkedListInPte @ 0x14017D130 (MiUpdateLinkedListInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( qword_14036C200 )
  {
    if ( (qword_14036C200 & a1) != 0 )
      return a1 | 0x10;
    else
      return qword_14036C200 | a1;
  }
  return a1;
}
