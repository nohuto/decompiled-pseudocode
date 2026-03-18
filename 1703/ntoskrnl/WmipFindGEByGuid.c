/*
 * XREFs of WmipFindGEByGuid @ 0x140555288
 * Callers:
 *     WmipOpenBlock @ 0x140554E90 (WmipOpenBlock.c)
 *     WmipProcessEvent @ 0x140580EBC (WmipProcessEvent.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140595CB0 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1405A0A10 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x1405A0AD8 (WmipMangleInstanceName.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405A0E6C (WmipEnableCollectionForNewGuid.c)
 *     WmipLinkDataSourceToList @ 0x1405A1088 (WmipLinkDataSourceToList.c)
 *     WmipIncludeStaticNames @ 0x140707FDC (WmipIncludeStaticNames.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x14055536C (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindGEByGuid(_QWORD *a1, char a2)
{
  _QWORD *i; // rbx
  __int64 v5; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD **)WmipGEHeadPtr; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)WmipGEHeadPtr )
    {
      KeReleaseMutex(&WmipSMMutex, 0);
      return 0LL;
    }
    v5 = *a1 - i[9];
    if ( *a1 == i[9] )
      v5 = a1[1] - i[10];
    if ( !v5 )
      break;
  }
  WmipReferenceEntry((ULONG_PTR)i);
  if ( a2 )
  {
    v7 = (_QWORD *)*i;
    v8 = (_QWORD *)i[1];
    if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v8 != i )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    v9 = (_QWORD *)WmipGEHeadPtr;
    v10 = *(_QWORD *)WmipGEHeadPtr;
    if ( *(_QWORD *)(*(_QWORD *)WmipGEHeadPtr + 8LL) != WmipGEHeadPtr )
      __fastfail(3u);
    *i = v10;
    i[1] = v9;
    *(_QWORD *)(v10 + 8) = i;
    *v9 = i;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  return i;
}
