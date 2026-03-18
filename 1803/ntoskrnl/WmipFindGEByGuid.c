/*
 * XREFs of WmipFindGEByGuid @ 0x140501D60
 * Callers:
 *     WmipOpenBlock @ 0x140501E4C (WmipOpenBlock.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1405FEF7C (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405FF1F0 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x1405FF418 (WmipProcessEvent.c)
 *     WmipLinkDataSourceToList @ 0x1405FF584 (WmipLinkDataSourceToList.c)
 *     WmipMangleInstanceName @ 0x1405FF820 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14060002C (WmipDisableCollectionForRemovedGuid.c)
 *     WmipIncludeStaticNames @ 0x1407A3C9C (WmipIncludeStaticNames.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     WmipReferenceEntry @ 0x14051B7F0 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindGEByGuid(_QWORD *a1, char a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = *(_QWORD **)WmipGEHeadPtr;
  if ( *(_QWORD *)WmipGEHeadPtr == WmipGEHeadPtr )
  {
LABEL_6:
    KeReleaseMutex(&WmipSMMutex, 0);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = *a1 - v4[9];
      if ( *a1 == v4[9] )
        v5 = a1[1] - v4[10];
      if ( !v5 )
        break;
      v4 = (_QWORD *)*v4;
      if ( v4 == (_QWORD *)WmipGEHeadPtr )
        goto LABEL_6;
    }
    WmipReferenceEntry((ULONG_PTR)v4);
    if ( a2 )
    {
      v7 = (_QWORD *)*v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v8 = (_QWORD *)v4[1], (_QWORD *)*v8 != v4) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = v8;
      v9 = (_QWORD *)WmipGEHeadPtr;
      v10 = *(_QWORD *)WmipGEHeadPtr;
      if ( *(_QWORD *)(*(_QWORD *)WmipGEHeadPtr + 8LL) != WmipGEHeadPtr )
        __fastfail(3u);
      *v4 = v10;
      v4[1] = v9;
      *(_QWORD *)(v10 + 8) = v4;
      *v9 = v4;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    return v4;
  }
}
