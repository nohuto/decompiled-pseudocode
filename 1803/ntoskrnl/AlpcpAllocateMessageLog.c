/*
 * XREFs of AlpcpAllocateMessageLog @ 0x1407477FC
 * Callers:
 *     AlpcpEnterAllocationEventMessageLog @ 0x140747A28 (AlpcpEnterAllocationEventMessageLog.c)
 * Callees:
 *     <none>
 */

__int64 AlpcpAllocateMessageLog()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rdx
  _QWORD **v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r8

  result = AlpcpFreeMessageLogListHead;
  if ( (__int64 *)AlpcpFreeMessageLogListHead == &AlpcpFreeMessageLogListHead )
  {
    result = AlpcpMessageLogListHead;
    if ( (__int64 *)AlpcpMessageLogListHead == &AlpcpMessageLogListHead )
    {
      return 0LL;
    }
    else
    {
      v2 = *(_QWORD *)AlpcpMessageLogListHead;
      if ( *(__int64 **)(AlpcpMessageLogListHead + 8) != &AlpcpMessageLogListHead
        || *(_QWORD *)(v2 + 8) != AlpcpMessageLogListHead )
      {
        __fastfail(3u);
      }
      AlpcpMessageLogListHead = *(_QWORD *)AlpcpMessageLogListHead;
      *(_QWORD *)(v2 + 8) = &AlpcpMessageLogListHead;
      *(_DWORD *)(result + 44) = 0;
      v3 = *(_QWORD *)(result + 16);
      if ( *(_QWORD *)(v3 + 8) != result + 16 || (v4 = *(_QWORD **)(result + 24), *v4 != result + 16) )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      v5 = (_QWORD **)(result + 48);
      while ( 1 )
      {
        v6 = *v5;
        if ( *v5 == v5 )
          break;
        if ( (_QWORD **)v6[1] != v5 || (v7 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
          __fastfail(3u);
        *v5 = v7;
        v7[1] = v5;
        v8 = (_QWORD *)qword_1403AD2A8;
        if ( *(__int64 **)qword_1403AD2A8 != &AlpcpFreeMessageSnapshotListHead )
          __fastfail(3u);
        *v6 = &AlpcpFreeMessageSnapshotListHead;
        v6[1] = v8;
        *v8 = v6;
        qword_1403AD2A8 = (__int64)v6;
      }
    }
  }
  else
  {
    v1 = *(_QWORD *)AlpcpFreeMessageLogListHead;
    if ( *(__int64 **)(AlpcpFreeMessageLogListHead + 8) != &AlpcpFreeMessageLogListHead
      || *(_QWORD *)(v1 + 8) != AlpcpFreeMessageLogListHead )
    {
      __fastfail(3u);
    }
    AlpcpFreeMessageLogListHead = *(_QWORD *)AlpcpFreeMessageLogListHead;
    *(_QWORD *)(v1 + 8) = &AlpcpFreeMessageLogListHead;
  }
  return result;
}
