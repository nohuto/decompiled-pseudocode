/*
 * XREFs of MiSwizzleInvalidPte @ 0x14017C938
 * Callers:
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     MiMakeLinkedListPte @ 0x14017C790 (MiMakeLinkedListPte.c)
 *     MiMakePageFilePte @ 0x14017C7A8 (MiMakePageFilePte.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017C7E0 (MiMakePrototypePteVadLookup.c)
 *     MiMakeSubsectionPte @ 0x14017C818 (MiMakeSubsectionPte.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14017C90C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14017C95C (MiTransferSoftwarePte.c)
 *     MiUpdateLinkedListInPte @ 0x14017C9D8 (MiUpdateLinkedListInPte.c)
 *     MiUpdateTransitionPteFrame @ 0x14017CA00 (MiUpdateTransitionPteFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( qword_140388548 )
  {
    if ( (qword_140388548 & a1) != 0 )
      return a1 | 0x10;
    else
      return qword_140388548 | a1;
  }
  return a1;
}
