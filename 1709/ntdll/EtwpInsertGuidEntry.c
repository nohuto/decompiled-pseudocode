/*
 * XREFs of EtwpInsertGuidEntry @ 0x180064370
 * Callers:
 *     EtwpAllocateUmGuidEntry @ 0x180064304 (EtwpAllocateUmGuidEntry.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18003A130 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x180094960 (memcmp.c)
 */

void __fastcall EtwpInsertGuidEntry(PRTL_BALANCED_NODE Node)
{
  BOOLEAN v2; // bl
  _RTL_BALANCED_NODE *Root; // rdi
  int v4; // esi
  _RTL_BALANCED_NODE *v5; // rax

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  v2 = 0;
  Root = EtwpGuidEntryTable.Root;
  v4 = *(_BYTE *)&EtwpGuidEntryTable.0 & 1;
  if ( EtwpGuidEntryTable.Root )
  {
    while ( 1 )
    {
      if ( memcmp(&Node[1], &Root[1], 0x10uLL) < 0 )
      {
        v5 = Root->Children[0];
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v5);
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = Root->Children[1];
        if ( v4 )
        {
          if ( !v5 )
          {
LABEL_9:
            v2 = 1;
            break;
          }
          v5 = (_RTL_BALANCED_NODE *)((unsigned __int64)Root ^ (unsigned __int64)v5);
        }
        if ( !v5 )
          goto LABEL_9;
      }
      Root = v5;
    }
  }
  RtlRbInsertNodeEx(&EtwpGuidEntryTable, Root, v2, Node);
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
