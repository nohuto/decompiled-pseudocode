/*
 * XREFs of FreeObjData @ 0x1C0015D30
 * Callers:
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     ACPIGetWorkerForInteger @ 0x1C0010510 (ACPIGetWorkerForInteger.c)
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ExprOp2_64 @ 0x1C001AB40 (ExprOp2_64.c)
 *     Simulator_DuplicateObjData @ 0x1C005B194 (Simulator_DuplicateObjData.c)
 *     Simulator_Free_Arguments @ 0x1C005B258 (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C005BA04 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CD84 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x1C005D0D8 (AMLICreateOverrideObjectDep.c)
 *     ProcessLoadTable @ 0x1C0060F20 (ProcessLoadTable.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0015C58 (HeapFree.c)
 *     HeapInsertFreeList @ 0x1C00162F0 (HeapInsertFreeList.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     PerformMutexDriverCallbacks @ 0x1C00234C8 (PerformMutexDriverCallbacks.c)
 *     GetObjectTypeName @ 0x1C005D6E0 (GetObjectTypeName.c)
 */

void __fastcall FreeObjData(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  __int64 v4; // r10
  _QWORD *v5; // rax
  _QWORD *i; // rdx
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rcx
  int v20; // ecx
  _QWORD *v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rcx
  int ObjectTypeName; // eax

  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 == 4 )
  {
    v3 = *(_QWORD *)(a1 + 32) - 16LL;
    *(_DWORD *)v3 = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v4 = *(_QWORD *)(v3 + 8);
    v5 = *(_QWORD **)(v4 + 40);
    for ( i = (_QWORD *)(v4 + 40); v5 != i; v5 = (_QWORD *)*v5 )
    {
      if ( v3 + 16 < (unsigned __int64)v5 )
        break;
    }
    v7 = (__int64 *)v5[1];
    v8 = v3 + 16;
    if ( (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *(_QWORD *)v8 = v5;
    *(_QWORD *)(v3 + 24) = v7;
    *v7 = v8;
    v5[1] = v8;
    v9 = *(_QWORD *)v8 - 16LL;
    if ( *(_QWORD **)v8 != i )
    {
      v19 = *(unsigned int *)(v3 + 4);
      if ( v9 == v3 + v19 )
      {
        v20 = *(_DWORD *)(v9 + 4) + v19;
        v21 = *(_QWORD **)v8;
        *(_DWORD *)(v3 + 4) = v20;
        v22 = *v21;
        v23 = (_QWORD *)v21[1];
        if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v23 != v21 )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
      }
    }
    v10 = *(_QWORD **)(v3 + 24);
    v11 = (__int64)(v10 - 2);
    if ( v10 != i )
    {
      v12 = *(unsigned int *)(v11 + 4);
      if ( v3 == v11 + v12 )
      {
        *(_DWORD *)(v11 + 4) = *(_DWORD *)(v3 + 4) + v12;
        v13 = *(_QWORD **)v8;
        v14 = *(_QWORD **)(v3 + 24);
        if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || *v14 != v8 )
          __fastfail(3u);
        *v14 = v13;
        v3 = v11;
        v13[1] = v14;
      }
    }
    if ( *(_QWORD *)(v4 + 32) <= v3 + (unsigned __int64)*(unsigned int *)(v3 + 4) )
    {
      *(_QWORD *)(v4 + 32) = v3;
      v16 = (_QWORD *)(v3 + 16);
      v17 = *v16;
      v18 = (_QWORD *)v16[1];
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || (_QWORD *)*v18 != v16 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
    }
LABEL_13:
    KeReleaseSpinLock(&gmutHeap, NewIrql);
    return;
  }
  if ( v1 == 3 )
  {
    v15 = *(_QWORD *)(a1 + 32);
LABEL_18:
    *(_DWORD *)(v15 - 16) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    HeapInsertFreeList(*(_QWORD *)(v15 - 8), v15 - 16);
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
      v24 = **(_QWORD ***)(a1 + 32);
      if ( v24 )
        goto LABEL_28;
      goto LABEL_29;
    case 9:
      PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0, 0, 0);
      HeapFree(*(_QWORD *)(a1 + 32));
      return;
    case 0xE:
      v15 = *(_QWORD *)(a1 + 32);
      goto LABEL_18;
    case 0x82:
      v25 = **(_QWORD ***)(a1 + 32);
      if ( v25 )
        goto LABEL_33;
      goto LABEL_34;
    case 0x84:
      v25 = **(_QWORD ***)(a1 + 32);
      if ( v25 )
LABEL_33:
        DereferenceObjectEx(v25);
LABEL_34:
      v24 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL);
      if ( v24 )
LABEL_28:
        DereferenceObjectEx(v24);
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
