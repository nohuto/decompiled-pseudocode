/*
 * XREFs of PipMergeDependencyEdgeList @ 0x140723C40
 * Callers:
 *     PipMergeDependencyNodes @ 0x140723DB0 (PipMergeDependencyNodes.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14023A524 (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x14023A6FC (PipFreeDependencyEdge.c)
 *     PipMoveListEntries @ 0x14023A848 (PipMoveListEntries.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PipDeleteDependencyNode @ 0x14064F7AC (PipDeleteDependencyNode.c)
 *     PipAddRequestToEdge @ 0x14072382C (PipAddRequestToEdge.c)
 *     PipNotifyDependenciesChanged @ 0x140723E28 (PipNotifyDependenciesChanged.c)
 */

void __fastcall PipMergeDependencyEdgeList(__int64 a1, __int64 a2, int a3)
{
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 *v7; // r13
  _QWORD **v8; // rbx
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // r15
  bool v16; // si
  __int64 v17; // rdx
  __int64 v18; // rcx
  UNICODE_STRING *v19; // rdi
  PCUNICODE_STRING *v20; // rdx
  bool v21; // zf
  _QWORD **v22; // [rsp+20h] [rbp-48h]
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = a3 != 0 ? 32LL : 16LL;
  v7 = (__int64 *)(v6 + a1);
  v8 = (_QWORD **)(v6 + a2);
  v22 = (_QWORD **)(v6 + a2);
  PiPnpRtlBeginOperation((__int64 **)&P);
  v9 = *v8;
  while ( v9 != v8 )
  {
    v10 = PiListEntryToDependencyEdge((__int64)v9, v4);
    v11 = *v7;
    v12 = v10;
    v9 = (_QWORD *)*v9;
    if ( (__int64 *)*v7 == v7 )
      goto LABEL_10;
    while ( 1 )
    {
      v13 = PiListEntryToDependencyEdge(v11, v4);
      v11 = *v14;
      v15 = v13;
      if ( !v4 )
      {
        v16 = *(_QWORD *)(v12 + 32) == *(_QWORD *)(v13 + 32);
        goto LABEL_7;
      }
      if ( *(_QWORD *)(v12 + 40) == *(_QWORD *)(v13 + 40) )
        break;
      v16 = 0;
LABEL_7:
      if ( v16 )
        goto LABEL_13;
      if ( (__int64 *)v11 == v7 )
      {
        v5 = a2;
        goto LABEL_10;
      }
    }
    v16 = 1;
LABEL_13:
    v19 = *(UNICODE_STRING **)(v12 + 56);
    while ( v19 != (UNICODE_STRING *)(v12 + 56) )
    {
      v20 = (PCUNICODE_STRING *)v19;
      v19 = *(UNICODE_STRING **)&v19->Length;
      PipAddRequestToEdge(v15, v20 + 2);
    }
    PipFreeDependencyEdge((_DWORD *)v12, v15);
    v4 = a3;
    v12 = 0LL;
    v21 = !v16;
    v5 = a2;
    if ( v21 )
    {
LABEL_10:
      if ( v4 )
      {
        v18 = *(_QWORD *)(v12 + 40);
        v17 = a1;
        *(_QWORD *)(v12 + 32) = a1;
      }
      else
      {
        v17 = *(_QWORD *)(v12 + 32);
        v18 = a1;
        *(_QWORD *)(v12 + 40) = a1;
      }
      PipNotifyDependenciesChanged(v18, v17);
      ++*(_DWORD *)(a1 + 88);
      v21 = (*(_DWORD *)(v5 + 88))-- == 1;
      if ( v21 )
        PipDeleteDependencyNode((_QWORD *)v5);
    }
    v8 = v22;
  }
  PipMoveListEntries(v7, (__int64)v8);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
}
