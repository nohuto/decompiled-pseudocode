/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14069B1D8
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x14068AB04 (CmpPartialPromoteSubkeys.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14069A9BC (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackCleanup @ 0x14069AB34 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14069AB9C (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x14069B2EC (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpKeyEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 344) + ((unsigned __int64)(unsigned int)(a2 - 2) << 7);
  else
    return ((unsigned __int64)(unsigned int)a2 << 7) + a1 + 88;
}
