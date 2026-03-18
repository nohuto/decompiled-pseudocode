/*
 * XREFs of CmpSortedValueEnumStackCleanup @ 0x14041C980
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1401E032C (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14041CB78 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpSortedValueEnumStackCleanup(__int64 a1)
{
  unsigned __int16 i; // di
  _QWORD *EntryAtLayerHeight; // rbx
  struct _PRIVILEGE_SET *v4; // rcx
  unsigned int j; // ebp
  struct _PRIVILEGE_SET *v6; // rcx

  for ( i = 0; i <= *(_WORD *)(a1 + 8); ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpValueEnumStackGetEntryAtLayerHeight(a1, i);
    v4 = (struct _PRIVILEGE_SET *)EntryAtLayerHeight[1];
    if ( v4 )
      MiDeleteSubsection(v4);
    if ( EntryAtLayerHeight[2] )
    {
      for ( j = 0; j < *((_DWORD *)EntryAtLayerHeight + 6); ++j )
        (*(void (__fastcall **)(_QWORD, __int64))(*EntryAtLayerHeight + 16LL))(
          *EntryAtLayerHeight,
          EntryAtLayerHeight[2] + 8LL * j);
      MiDeleteSubsection((PPRIVILEGE_SET)EntryAtLayerHeight[2]);
    }
  }
  v6 = *(struct _PRIVILEGE_SET **)(a1 + 80);
  if ( v6 )
    MiDeleteSubsection(v6);
}
