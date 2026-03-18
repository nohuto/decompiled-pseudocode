/*
 * XREFs of MiGetTopPteAddress @ 0x140063BE8
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140063178 (MiDeleteFinalPageTables.c)
 *     MiCopyTopLevelMappings @ 0x1400639EC (MiCopyTopLevelMappings.c)
 *     MiAttachSession @ 0x140063AC4 (MiAttachSession.c)
 *     MiDetachSession @ 0x140063B90 (MiDetachSession.c)
 *     MiDereferenceSessionFinal @ 0x14057A664 (MiDereferenceSessionFinal.c)
 *     MiSessionCreateInternal @ 0x14057EB28 (MiSessionCreateInternal.c)
 *     MiAssignTopLevelRanges @ 0x1408111C0 (MiAssignTopLevelRanges.c)
 *     MiInitializeTopLevelBitmap @ 0x1408115D8 (MiInitializeTopLevelBitmap.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetTopPteAddress(unsigned __int64 a1)
{
  __int64 v1; // rax

  v1 = 4LL;
  do
  {
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v1;
  }
  while ( v1 );
  return a1;
}
