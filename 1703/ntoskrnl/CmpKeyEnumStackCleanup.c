/*
 * XREFs of CmpKeyEnumStackCleanup @ 0x140670460
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x1406701AC (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpCleanupKeyNodeStack @ 0x14066D4DC (CmpCleanupKeyNodeStack.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140670760 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 */

void __fastcall CmpKeyEnumStackCleanup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 i; // di
  _QWORD *EntryAtLayerHeight; // r14
  __int64 v7; // rbp
  __int64 v8; // r15
  _QWORD *v9; // rsi
  struct _PRIVILEGE_SET *v10; // rcx

  CmpCleanupKeyNodeStack(a1 + 8, a2, a3, a4);
  for ( i = 0; i <= *(__int16 *)a1; ++i )
  {
    EntryAtLayerHeight = (_QWORD *)CmpKeyEnumStackGetEntryAtLayerHeight(a1);
    v7 = 0LL;
    v8 = 2LL;
    v9 = EntryAtLayerHeight + 8;
    do
    {
      if ( *(v9 - 5) )
        (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
          *EntryAtLayerHeight,
          &EntryAtLayerHeight[v7 + 5]);
      if ( *v9 )
        (*(void (__fastcall **)(_QWORD, _QWORD *))(*EntryAtLayerHeight + 16LL))(
          *EntryAtLayerHeight,
          &EntryAtLayerHeight[v7 + 10]);
      ++v7;
      ++v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = *(struct _PRIVILEGE_SET **)(a1 + 312);
  if ( v10 )
    MiDeleteSubsection(v10);
}
