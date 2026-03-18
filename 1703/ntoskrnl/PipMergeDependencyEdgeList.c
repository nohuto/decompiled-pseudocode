/*
 * XREFs of PipMergeDependencyEdgeList @ 0x1406931B0
 * Callers:
 *     PipMergeDependencyNodes @ 0x140693318 (PipMergeDependencyNodes.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401F7AC0 (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401F7C98 (PipFreeDependencyEdge.c)
 *     PipMoveListEntries @ 0x1401F7DDC (PipMoveListEntries.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PipAddRequestToEdge @ 0x140692B10 (PipAddRequestToEdge.c)
 *     PipDeleteDependencyNode @ 0x140693018 (PipDeleteDependencyNode.c)
 *     PipNotifyDependenciesChanged @ 0x140693390 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipMergeDependencyEdgeList(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 *v7; // rsi
  _QWORD **v8; // rbp
  _QWORD *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rcx
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  UNICODE_STRING *v19; // rsi
  PCUNICODE_STRING *v20; // rdx
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v23; // [rsp+28h] [rbp-30h]
  __int64 v24; // [rsp+78h] [rbp+20h]

  P = 0LL;
  v6 = 16LL;
  if ( a3 )
    v6 = 32LL;
  v7 = (__int64 *)(v6 + a1);
  v23 = (__int64 *)(v6 + a1);
  v8 = (_QWORD **)(v6 + a2);
  PiPnpRtlBeginOperation((__int64 **)&P);
  v9 = *v8;
LABEL_20:
  while ( v9 != v8 )
  {
    v10 = PiListEntryToDependencyEdge((__int64)v9, a3);
    v9 = (_QWORD *)*v9;
    v11 = v10;
    v12 = *v7;
    while ( (__int64 *)v12 != v7 )
    {
      v13 = PiListEntryToDependencyEdge(v12, a3);
      v12 = *v14;
      v15 = v13;
      v24 = v13;
      if ( a3 )
      {
        if ( *(_QWORD *)(v11 + 40) == *(_QWORD *)(v13 + 40) )
          goto LABEL_13;
        v16 = 0;
      }
      else
      {
        v15 = v13;
        v16 = *(_QWORD *)(v11 + 32) == *(_QWORD *)(v13 + 32);
      }
      if ( v16 )
      {
LABEL_13:
        v19 = *(UNICODE_STRING **)(v11 + 56);
        while ( v19 != (UNICODE_STRING *)(v11 + 56) )
        {
          v20 = (PCUNICODE_STRING *)v19;
          v19 = *(UNICODE_STRING **)&v19->Length;
          PipAddRequestToEdge(v15, v20 + 2);
          v15 = v24;
        }
        PipFreeDependencyEdge((char *)v11, v24);
        v7 = v23;
        goto LABEL_20;
      }
    }
    if ( a3 )
    {
      v18 = *(_QWORD *)(v11 + 40);
      v17 = a1;
      *(_QWORD *)(v11 + 32) = a1;
    }
    else
    {
      v17 = *(_QWORD *)(v11 + 32);
      v18 = a1;
      *(_QWORD *)(v11 + 40) = a1;
    }
    PipNotifyDependenciesChanged(v18, v17);
    ++*(_DWORD *)(a1 + 88);
    if ( (*(_DWORD *)(a2 + 88))-- == 1 )
      PipDeleteDependencyNode((_QWORD *)a2);
  }
  PipMoveListEntries(v7, (__int64)v8);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
}
