/*
 * XREFs of ViThunkReplaceSharedExports @ 0x14082468C
 * Callers:
 *     ViThunkReplaceAllSharedExports @ 0x1408243C0 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x140256048 (MmReplaceImportEntry.c)
 */

void __fastcall ViThunkReplaceSharedExports(ULONG_PTR *a1, unsigned int a2)
{
  ULONG_PTR *v2; // rbx
  __int64 v3; // rdi

  if ( a1 )
  {
    v2 = a1;
    if ( a2 )
    {
      v3 = a2;
      do
      {
        if ( *v2 )
          MmReplaceImportEntry(*v2, v2[1]);
        v2 += 2;
        --v3;
      }
      while ( v3 );
    }
  }
}
