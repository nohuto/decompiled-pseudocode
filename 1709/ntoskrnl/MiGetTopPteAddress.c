/*
 * XREFs of MiGetTopPteAddress @ 0x1400B7D00
 * Callers:
 *     MiCopyTopLevelMappings @ 0x1400B7AC8 (MiCopyTopLevelMappings.c)
 *     MiAttachSession @ 0x1400B7BAC (MiAttachSession.c)
 *     MiDetachSession @ 0x1400B7C90 (MiDetachSession.c)
 *     MiDeleteFinalPageTables @ 0x1400B7F8C (MiDeleteFinalPageTables.c)
 *     MiSessionCreateInternal @ 0x1405B3F68 (MiSessionCreateInternal.c)
 *     MiDereferenceSessionFinal @ 0x1406E2C84 (MiDereferenceSessionFinal.c)
 *     MiAssignTopLevelRanges @ 0x140839D10 (MiAssignTopLevelRanges.c)
 *     MiInitializeTopLevelBitmap @ 0x14083A100 (MiInitializeTopLevelBitmap.c)
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
