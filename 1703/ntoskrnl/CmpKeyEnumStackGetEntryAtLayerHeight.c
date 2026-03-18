/*
 * XREFs of CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140670760
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x1406702E8 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackCleanup @ 0x140670460 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140670878 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpKeyEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 312) + 112LL * (unsigned int)(a2 - 2);
  else
    return a1 + 112LL * (unsigned int)a2 + 88;
}
