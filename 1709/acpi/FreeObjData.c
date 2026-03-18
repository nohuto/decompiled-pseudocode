/*
 * XREFs of FreeObjData @ 0x1C000CD80
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x1C00074D0 (ACPIGetWorkerForInteger.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     ParseScope @ 0x1C000AE20 (ParseScope.c)
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     ExprOp2_64 @ 0x1C0020100 (ExprOp2_64.c)
 *     Simulator_DuplicateObjData @ 0x1C005BD04 (Simulator_DuplicateObjData.c)
 *     Simulator_Free_Arguments @ 0x1C005BDC8 (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005C51C (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CB74 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x1C005CEC8 (AMLICreateOverrideObjectDep.c)
 *     ProcessLoadTable @ 0x1C0062100 (ProcessLoadTable.c)
 * Callees:
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     PerformMutexDriverCallbacks @ 0x1C0011AC8 (PerformMutexDriverCallbacks.c)
 *     HeapInsertFreeList @ 0x1C0019BF0 (HeapInsertFreeList.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     GetObjectTypeName @ 0x1C005D4E0 (GetObjectTypeName.c)
 */

void __fastcall FreeObjData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // rbx
  __int64 v7; // r9
  _QWORD *v8; // rax
  _QWORD *i; // r8
  __int64 *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // r10
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int ObjectTypeName; // eax

  v4 = *(unsigned __int16 *)(a1 + 2);
  if ( v4 == 4 )
  {
    v6 = *(_QWORD *)(a1 + 32) - 16LL;
    *(_DWORD *)v6 = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_QWORD **)(v7 + 40);
    for ( i = (_QWORD *)(v7 + 40); v8 != i; v8 = (_QWORD *)*v8 )
    {
      if ( v6 + 16 < (unsigned __int64)v8 )
        break;
    }
    v10 = (__int64 *)v8[1];
    v11 = v6 + 16;
    if ( (_QWORD *)*v10 != v8 )
      __fastfail(3u);
    *(_QWORD *)v11 = v8;
    *(_QWORD *)(v6 + 24) = v10;
    *v10 = v11;
    v8[1] = v11;
    if ( *(_QWORD **)v11 != i )
    {
      v21 = *(unsigned int *)(v6 + 4);
      v22 = *(_QWORD *)v11 - 16LL;
      if ( v22 == v6 + v21 )
      {
        *(_DWORD *)(v6 + 4) = *(_DWORD *)(v22 + 4) + v21;
        v23 = v22 + 16;
        v24 = *(_QWORD *)(v22 + 16);
        if ( *(_QWORD *)(v24 + 8) != v23 || (v25 = *(_QWORD **)(v23 + 8), *v25 != v23) )
          __fastfail(3u);
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
      }
    }
    v12 = *(_QWORD **)(v6 + 24);
    if ( v12 != i )
    {
      v13 = *((unsigned int *)v12 - 3);
      v14 = (__int64)(v12 - 2);
      if ( (_QWORD *)v6 == (_QWORD *)((char *)v12 + v13 - 16) )
      {
        *(_DWORD *)(v14 + 4) = *(_DWORD *)(v6 + 4) + v13;
        v15 = *(_QWORD *)v11;
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || (v16 = *(_QWORD **)(v6 + 24), *v16 != v11) )
          __fastfail(3u);
        *v16 = v15;
        v6 = v14;
        *(_QWORD *)(v15 + 8) = v16;
      }
    }
    if ( *(_QWORD *)(v7 + 32) <= v6 + (unsigned __int64)*(unsigned int *)(v6 + 4) )
    {
      *(_QWORD *)(v7 + 32) = v6;
      v18 = (_QWORD *)(v6 + 16);
      v19 = *v18;
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (v20 = (_QWORD *)v18[1], (_QWORD *)*v20 != v18) )
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
    }
LABEL_13:
    KeReleaseSpinLock(&gmutHeap, NewIrql);
    return;
  }
  if ( v4 == 3 )
  {
    v17 = *(_QWORD *)(a1 + 32);
LABEL_18:
    *(_DWORD *)(v17 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v17 - 8), v17 - 16);
    goto LABEL_13;
  }
  switch ( *(_WORD *)(a1 + 2) )
  {
    case 2:
    case 7:
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
      HeapFree(*(_QWORD *)(a1 + 32));
      return;
    case 5:
    case 0x83:
      v26 = **(_QWORD **)(a1 + 32);
      if ( v26 )
        goto LABEL_28;
      goto LABEL_29;
    case 9:
      PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0, 0, 0);
      HeapFree(*(_QWORD *)(a1 + 32));
      return;
    case 0xE:
      v17 = *(_QWORD *)(a1 + 32);
      goto LABEL_18;
    case 0x82:
      v27 = **(_QWORD **)(a1 + 32);
      if ( v27 )
        goto LABEL_33;
      goto LABEL_34;
    case 0x84:
      v27 = **(_QWORD **)(a1 + 32);
      if ( v27 )
LABEL_33:
        DereferenceObjectEx(v27, 0LL, a3, a4);
LABEL_34:
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
      if ( v26 )
LABEL_28:
        DereferenceObjectEx(v26, 0LL, a3, a4);
LABEL_29:
      HeapFree(*(_QWORD *)(a1 + 32));
      break;
    default:
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
      PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
      break;
  }
}
