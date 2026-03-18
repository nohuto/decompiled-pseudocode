/*
 * XREFs of DupObjData @ 0x1C001A8E0
 * Callers:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0003C60 (RunContext.c)
 *     EvalPackageElement @ 0x1C0005944 (EvalPackageElement.c)
 *     ParseCall @ 0x1C0014BC0 (ParseCall.c)
 *     Return @ 0x1C001A7B0 (Return.c)
 *     DupObjData @ 0x1C001A8E0 (DupObjData.c)
 *     WriteObject @ 0x1C001ADC0 (WriteObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B8B8 (AMLIEvalPkgDataElement.c)
 *     Simulator_Copy_Arguments @ 0x1C005B0C8 (Simulator_Copy_Arguments.c)
 *     Simulator_DuplicateObjData @ 0x1C005B194 (Simulator_DuplicateObjData.c)
 *     ParseDLMObjectInternal @ 0x1C005DAE8 (ParseDLMObjectInternal.c)
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 *     CopyObject @ 0x1C005FF60 (CopyObject.c)
 *     ProcessLoadTable @ 0x1C0060F20 (ProcessLoadTable.c)
 *     ParseNestedContext @ 0x1C0062950 (ParseNestedContext.c)
 * Callees:
 *     DupObjData @ 0x1C001A8E0 (DupObjData.c)
 *     NewObjData @ 0x1C001A9F4 (NewObjData.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall DupObjData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 result; // rax
  void *v7; // rax
  int v8; // ecx
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // rdx
  int v12; // edi
  _DWORD *v13; // rsi
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  char v17; // cl
  char v18; // cl
  _DWORD *v19; // [rsp+30h] [rbp-38h]

  v4 = a2;
  v5 = 0;
  if ( a2 == a3 )
    return 0LL;
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
  if ( !*(_QWORD *)(a3 + 32) )
    return 0LL;
  v7 = (void *)NewObjData(a1, a3);
  *(_QWORD *)(v4 + 32) = v7;
  if ( v7 )
  {
    memmove(v7, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
    v8 = *(unsigned __int16 *)(v4 + 2);
    if ( v8 == 4 )
    {
      v9 = *(_DWORD **)(a3 + 32);
      v10 = *(_DWORD **)(v4 + 32);
      *v10 = *v9;
      if ( (int)*v9 > 0 )
      {
        v11 = v10 + 2;
        v12 = 0;
        v19 = v11;
        v13 = v9;
        do
        {
          v5 = DupObjData(a1, &v11[10 * v12], &v13[10 * v12 + 2]);
          if ( v5 )
            break;
          v11 = v19;
          ++v12;
        }
        while ( v12 < *v13 );
        v4 = a2;
      }
      goto LABEL_11;
    }
    v14 = v8 - 5;
    if ( !v14 )
      goto LABEL_26;
    v15 = v14 - 125;
    if ( !v15 )
    {
      v18 = gdwfAMLI;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v4 + 32) + 112LL));
        v18 = gdwfAMLI;
      }
      if ( (v18 & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL) + 112LL));
      goto LABEL_11;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        goto LABEL_11;
      v17 = gdwfAMLI;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL) + 112LL));
        v17 = gdwfAMLI;
      }
      if ( (v17 & 4) == 0 )
        goto LABEL_11;
    }
    else
    {
LABEL_26:
      if ( (gdwfAMLI & 4) == 0 )
        goto LABEL_11;
    }
    _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v4 + 32) + 112LL));
LABEL_11:
    *(_WORD *)v4 &= ~1u;
    result = v5;
    _InterlockedExchange((volatile __int32 *)(v4 + 8), 0);
    return result;
  }
  LogError(3221225626LL);
  AcpiDiagTraceAmlError(0LL, 3221225626LL);
  PrintDebugMessage(43, 0, 0, 0, 0LL);
  return 3221225626LL;
}
