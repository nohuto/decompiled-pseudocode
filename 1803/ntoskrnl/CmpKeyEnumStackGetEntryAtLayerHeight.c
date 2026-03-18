/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406FFDC8
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1406FF598 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackCleanup @ 0x1406FF718 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1406FF780 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x1406FFED4 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CmpKeyEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  __int64 v2; // rax

  v2 = (unsigned int)a2;
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 344) + ((unsigned __int64)(unsigned int)(v2 - 2) << 7);
  else
    return a1 + (v2 << 7) + 88;
}
