/*
 * XREFs of AlpcpAllocateSnapshotMessageLog @ 0x1406DCBD8
 * Callers:
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406DCE44 (AlpcpEnterStateChangeEventMessageLog.c)
 * Callees:
 *     <none>
 */

__int64 AlpcpAllocateSnapshotMessageLog()
{
  __int64 result; // rax
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rdx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rcx

  while ( 1 )
  {
    result = AlpcpFreeMessageSnapshotListHead;
    if ( (__int64 *)AlpcpFreeMessageSnapshotListHead != &AlpcpFreeMessageSnapshotListHead )
      break;
    v1 = AlpcpMessageLogListHead;
    if ( (__int64 *)AlpcpMessageLogListHead == &AlpcpMessageLogListHead )
      return 0LL;
    if ( *(__int64 **)(AlpcpMessageLogListHead + 8) != &AlpcpMessageLogListHead
      || (v2 = *(_QWORD *)AlpcpMessageLogListHead,
          *(_QWORD *)(*(_QWORD *)AlpcpMessageLogListHead + 8LL) != AlpcpMessageLogListHead) )
    {
      __fastfail(3u);
    }
    AlpcpMessageLogListHead = *(_QWORD *)AlpcpMessageLogListHead;
    *(_QWORD *)(v2 + 8) = &AlpcpMessageLogListHead;
    *(_DWORD *)(v1 + 44) = 0;
    v3 = *(_QWORD *)(v1 + 16);
    if ( *(_QWORD *)(v3 + 8) != v1 + 16 || (v4 = *(_QWORD **)(v1 + 24), *v4 != v1 + 16) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    v5 = v1 + 48;
    while ( *(_QWORD *)v5 != v5 )
    {
      v6 = *(_QWORD **)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      v8 = (_QWORD *)qword_14036A208;
      if ( *(__int64 **)qword_14036A208 != &AlpcpFreeMessageSnapshotListHead )
        __fastfail(3u);
      *v6 = &AlpcpFreeMessageSnapshotListHead;
      v6[1] = v8;
      *v8 = v6;
      qword_14036A208 = (__int64)v6;
    }
    v9 = (__int64 *)qword_14036A1D8;
    if ( *(__int64 **)qword_14036A1D8 != &AlpcpFreeMessageLogListHead )
      __fastfail(3u);
    *(_QWORD *)v1 = &AlpcpFreeMessageLogListHead;
    *(_QWORD *)(v1 + 8) = v9;
    *v9 = v1;
    qword_14036A1D8 = v1;
  }
  v10 = *(_QWORD *)AlpcpFreeMessageSnapshotListHead;
  if ( *(__int64 **)(AlpcpFreeMessageSnapshotListHead + 8) != &AlpcpFreeMessageSnapshotListHead
    || *(_QWORD *)(v10 + 8) != AlpcpFreeMessageSnapshotListHead )
  {
    __fastfail(3u);
  }
  AlpcpFreeMessageSnapshotListHead = *(_QWORD *)AlpcpFreeMessageSnapshotListHead;
  *(_QWORD *)(v10 + 8) = &AlpcpFreeMessageSnapshotListHead;
  return result;
}
