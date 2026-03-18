/*
 * XREFs of VfGetHookAddressForOriginal @ 0x1407A8ED8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1405ECBF0 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViLookupThunkArray @ 0x1407A906C (ViLookupThunkArray.c)
 */

__int64 __fastcall VfGetHookAddressForOriginal(__int64 a1)
{
  __int64 result; // rax

  result = ViLookupThunkArray(&VfXdvThunks, 40LL, a1);
  if ( !result )
  {
    result = ViLookupThunkArray(&VfPoolThunks, 40LL, a1);
    if ( !result )
    {
      result = ViLookupThunkArray(&VfMandatoryThunks, 40LL, a1);
      if ( !result )
      {
        result = ViLookupThunkArray(&VfRegularThunks, 40LL, a1);
        if ( !result )
          return ViLookupThunkArray(&VfOrderDependentThunks, 48LL, a1);
      }
    }
  }
  return result;
}
