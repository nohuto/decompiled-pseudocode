/*
 * XREFs of FreeObjData @ 0x1C0046808
 * Callers:
 *     FreeData @ 0x1C0003150 (FreeData.c)
 *     Simulator_DuplicateObjData @ 0x1C00446F4 (Simulator_DuplicateObjData.c)
 *     Simulator_Free_Arguments @ 0x1C00447B8 (Simulator_Free_Arguments.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0044F0C (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0045A38 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0045DF0 (AMLICreateOverrideObjectDep.c)
 *     ProcessLoadTable @ 0x1C00528D0 (ProcessLoadTable.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0003D74 (HeapFree.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     PerformMutexDriverCallbacks @ 0x1C00478C8 (PerformMutexDriverCallbacks.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

void __fastcall FreeObjData(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  __int64 *v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  __int64 v11; // rax
  unsigned int v12; // edx
  int ObjectTypeName; // eax

  v1 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 > 0x82 )
  {
    v12 = v1 - 131;
    if ( !v12 )
    {
LABEL_23:
      v7 = *(__int64 **)(a1 + 32);
      v11 = *v7;
LABEL_24:
      if ( !v11 )
        goto LABEL_27;
      DereferenceObjectEx(v11);
      goto LABEL_26;
    }
    if ( v12 != 1 )
      goto LABEL_22;
LABEL_17:
    v7 = *(__int64 **)(a1 + 32);
    if ( *v7 )
    {
      DereferenceObjectEx(*v7);
      v7 = *(__int64 **)(a1 + 32);
    }
    v11 = v7[1];
    goto LABEL_24;
  }
  if ( v1 == 130 )
    goto LABEL_17;
  if ( v1 > 8 )
  {
    v8 = v1 - 9;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_10;
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_10;
      v6 = v10 - 1;
      if ( !v6 )
        goto LABEL_10;
      goto LABEL_9;
    }
    PerformMutexDriverCallbacks(1, *(_QWORD *)(a1 + 32), 0, 0, 0);
LABEL_26:
    v7 = *(__int64 **)(a1 + 32);
    goto LABEL_27;
  }
  if ( v1 == 8 )
    goto LABEL_10;
  v3 = v1 - 2;
  if ( !v3 )
    goto LABEL_10;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_10;
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_10;
  v6 = v5 - 1;
  if ( !v6 )
    goto LABEL_23;
LABEL_9:
  if ( v6 != 2 )
  {
LABEL_22:
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, -1072431101);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a1 + 2));
    PrintDebugMessage(54, ObjectTypeName, 0, 0, 0LL);
    return;
  }
LABEL_10:
  v7 = *(__int64 **)(a1 + 32);
LABEL_27:
  HeapFree((__int64)v7);
}
