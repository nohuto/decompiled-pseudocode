/*
 * XREFs of CmpCleanupKeyNodeStack @ 0x14066D4DC
 * Callers:
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140661CD0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140662304 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x14067011C (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackCleanup @ 0x140670460 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1406707E8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1406715E4 (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14066DAA4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpCleanupKeyNodeStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 i; // bx
  _QWORD *EntryAtLayerHeight; // rax
  struct _PRIVILEGE_SET *v7; // rcx

  for ( i = 0; i <= *(_WORD *)a1; ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, i, a3, a4);
    if ( EntryAtLayerHeight[2] )
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
        *EntryAtLayerHeight,
        EntryAtLayerHeight + 3);
  }
  v7 = *(struct _PRIVILEGE_SET **)(a1 + 72);
  if ( v7 )
    MiDeleteSubsection(v7);
}
