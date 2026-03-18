/*
 * XREFs of MiGetTopPteAddress @ 0x140070E30
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140070A70 (MiDeleteFinalPageTables.c)
 *     MiCopyTopLevelMappings @ 0x140070BCC (MiCopyTopLevelMappings.c)
 *     MiAttachSession @ 0x140070CAC (MiAttachSession.c)
 *     MiDetachProcessFromSession @ 0x140070DA4 (MiDetachProcessFromSession.c)
 *     MiUpdateUserMappings @ 0x140475520 (MiUpdateUserMappings.c)
 *     MiSessionCreateInternal @ 0x14060B190 (MiSessionCreateInternal.c)
 *     MiAssignTopLevelRanges @ 0x1408BB5B0 (MiAssignTopLevelRanges.c)
 *     MiInitializeTopLevelBitmap @ 0x1408BB990 (MiInitializeTopLevelBitmap.c)
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
