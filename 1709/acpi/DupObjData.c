/*
 * XREFs of DupObjData @ 0x1C00078C0
 * Callers:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     AsyncEvalObject @ 0x1C00081E0 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     ParseCall @ 0x1C000B660 (ParseCall.c)
 *     Return @ 0x1C000C940 (Return.c)
 *     AMLIEvalPkgDataElement @ 0x1C000D7EC (AMLIEvalPkgDataElement.c)
 *     WriteObject @ 0x1C0020320 (WriteObject.c)
 *     EvalPackageElement @ 0x1C00217AC (EvalPackageElement.c)
 *     Simulator_Copy_Arguments @ 0x1C005BC38 (Simulator_Copy_Arguments.c)
 *     Simulator_DuplicateObjData @ 0x1C005BD04 (Simulator_DuplicateObjData.c)
 *     ParseDLMObjectInternal @ 0x1C005D8E4 (ParseDLMObjectInternal.c)
 *     NestAsyncEvalObject @ 0x1C00602C8 (NestAsyncEvalObject.c)
 *     CopyObject @ 0x1C0061160 (CopyObject.c)
 *     ProcessLoadTable @ 0x1C0062100 (ProcessLoadTable.c)
 *     ParseNestedContext @ 0x1C0063B20 (ParseNestedContext.c)
 * Callees:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     NewObjData @ 0x1C0008108 (NewObjData.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memmove @ 0x1C002C180 (memmove.c)
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
  int v11; // edi
  _DWORD *v12; // rsi
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  _DWORD *v16; // [rsp+30h] [rbp-38h]

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
      v16 = v10;
      *v10 = *v9;
      if ( (int)*v9 > 0 )
      {
        v11 = 0;
        v12 = v9;
        do
        {
          v5 = DupObjData(a1, &v10[10 * v11 + 2], &v12[10 * v11 + 2]);
          if ( v5 )
            break;
          v10 = v16;
          ++v11;
        }
        while ( v11 < *v12 );
        v4 = a2;
      }
      goto LABEL_11;
    }
    v13 = v8 - 5;
    if ( v13 )
    {
      v14 = v13 - 125;
      if ( !v14 )
      {
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v4 + 32) + 112LL));
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL) + 112LL));
        goto LABEL_11;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
        {
LABEL_11:
          *(_WORD *)v4 &= ~1u;
          result = v5;
          _InterlockedExchange((volatile __int32 *)(v4 + 8), 0);
          return result;
        }
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL) + 112LL));
      }
    }
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v4 + 32) + 112LL));
    goto LABEL_11;
  }
  LogError(3221225626LL);
  AcpiDiagTraceAmlError(0LL, 3221225626LL);
  PrintDebugMessage(43, 0, 0, 0, 0LL);
  return 3221225626LL;
}
