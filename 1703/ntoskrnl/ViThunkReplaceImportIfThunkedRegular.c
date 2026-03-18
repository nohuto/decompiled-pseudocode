/*
 * XREFs of ViThunkReplaceImportIfThunkedRegular @ 0x140774B78
 * Callers:
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x14077450C (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1407749A0 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x140211B08 (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportIfThunkedRegular(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = 0LL;
  if ( *a2 )
  {
    v3 = *a1;
    while ( !v3 || v3 != a2[2] )
    {
      a2 += 5;
      if ( !*a2 )
        return result;
    }
    MmReplaceImportEntry((ULONG_PTR)a1, a2[1]);
    return 1LL;
  }
  return result;
}
