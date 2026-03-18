/*
 * XREFs of PipMergeDependencyEdgeList @ 0x1406BEE64
 * Callers:
 *     PipMergeDependencyNodes @ 0x1406BEFBC (PipMergeDependencyNodes.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x1401FDADC (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401FDDC4 (PipFreeDependencyEdge.c)
 *     PipMoveListEntries @ 0x1401FDF10 (PipMoveListEntries.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PipAddRequestToEdge @ 0x1406BE7C0 (PipAddRequestToEdge.c)
 *     PipDeleteDependencyNode @ 0x1406BECC8 (PipDeleteDependencyNode.c)
 *     PipNotifyDependenciesChanged @ 0x1406BF034 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipMergeDependencyEdgeList(__int64 a1, __int64 a2, int a3)
{
  int v4; // r14d
  __int64 v6; // r9
  __int64 *v7; // r13
  _QWORD **v8; // rsi
  _QWORD *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rbp
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  UNICODE_STRING *v19; // rsi
  PCUNICODE_STRING *v20; // rdx
  _QWORD **v22; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  v4 = a3;
  v6 = a3 != 0 ? 32LL : 16LL;
  v7 = (__int64 *)(v6 + a1);
  v8 = (_QWORD **)(v6 + a2);
  v22 = (_QWORD **)(v6 + a2);
  PiPnpRtlBeginOperation((__int64 **)&P);
  v9 = *v8;
LABEL_18:
  while ( v9 != v8 )
  {
    v10 = PiListEntryToDependencyEdge((__int64)v9, v4);
    v9 = (_QWORD *)*v9;
    v11 = v10;
    v12 = *v7;
    while ( (__int64 *)v12 != v7 )
    {
      v13 = PiListEntryToDependencyEdge(v12, v4);
      v12 = *v14;
      v15 = v13;
      if ( v4 )
      {
        if ( *(_QWORD *)(v11 + 40) == *(_QWORD *)(v13 + 40) )
          goto LABEL_11;
        v16 = 0;
      }
      else
      {
        v16 = *(_QWORD *)(v11 + 32) == *(_QWORD *)(v13 + 32);
      }
      if ( v16 )
      {
LABEL_11:
        v19 = *(UNICODE_STRING **)(v11 + 56);
        while ( v19 != (UNICODE_STRING *)(v11 + 56) )
        {
          v20 = (PCUNICODE_STRING *)v19;
          v19 = *(UNICODE_STRING **)&v19->Length;
          PipAddRequestToEdge(v15, v20 + 2);
        }
        PipFreeDependencyEdge((_DWORD *)v11, v15);
        v8 = v22;
        v4 = a3;
        goto LABEL_18;
      }
    }
    if ( v4 )
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
    PiPnpRtlEndOperation((PVOID **)P);
}
