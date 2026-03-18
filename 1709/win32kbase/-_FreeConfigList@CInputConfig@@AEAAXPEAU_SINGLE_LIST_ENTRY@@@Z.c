/*
 * XREFs of ?_FreeConfigList@CInputConfig@@AEAAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C006107C
 * Callers:
 *     InputUnInitialize @ 0x1C0004D90 (InputUnInitialize.c)
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0061224 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CInputConfig::_FreeConfigList(CInputConfig *this, struct _SINGLE_LIST_ENTRY *a2)
{
  struct _SINGLE_LIST_ENTRY *Next; // rbx

  while ( a2->Next )
  {
    Next = a2->Next;
    if ( a2->Next )
      a2->Next = Next->Next;
    Win32FreePool((__int64)Next[3].Next);
    Win32FreePool((__int64)Next);
  }
}
