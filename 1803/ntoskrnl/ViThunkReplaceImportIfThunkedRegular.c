/*
 * XREFs of ViThunkReplaceImportIfThunkedRegular @ 0x140824620
 * Callers:
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x140823FB8 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkReplaceAllThunkedImports @ 0x14082444C (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
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
