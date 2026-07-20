/*
 * XREFs of SmpInsertControlBlock @ 0x140001D48
 * Callers:
 *     SmpRecordControlBlock @ 0x140001CD8 (SmpRecordControlBlock.c)
 *     SmpInsertControlBlock @ 0x140001D48 (SmpInsertControlBlock.c)
 * Callees:
 *     SmpInsertControlBlock @ 0x140001D48 (SmpInsertControlBlock.c)
 */

__int64 __fastcall SmpInsertControlBlock(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rax

  if ( !a1 )
    return 1LL;
  if ( *(_DWORD *)(a2 + 8) < *(_DWORD *)(a1 - 96) )
  {
    if ( !(unsigned int)SmpInsertControlBlock(*(_QWORD *)(a1 + 8), a2) )
      return 0LL;
    v5 = (_QWORD *)(a2 + 104);
    *(_QWORD *)(a1 + 8) = a2 + 104;
    goto LABEL_6;
  }
  if ( (unsigned int)SmpInsertControlBlock(*(_QWORD *)(a1 + 16), a2) )
  {
    v5 = (_QWORD *)(a2 + 104);
    *(_QWORD *)(a1 + 16) = a2 + 104;
LABEL_6:
    *v5 = a1;
  }
  return 0LL;
}
