/*
 * XREFs of DupObjData @ 0x1C0003188
 * Callers:
 *     RunContext @ 0x1C00025DC (RunContext.c)
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     Simulator_Copy_Arguments @ 0x1C0044628 (Simulator_Copy_Arguments.c)
 *     Simulator_DuplicateObjData @ 0x1C00446F4 (Simulator_DuplicateObjData.c)
 *     ParseDLMObjectInternal @ 0x1C004767C (ParseDLMObjectInternal.c)
 *     EvalPackageElement @ 0x1C0049FE0 (EvalPackageElement.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 *     NestAsyncEvalObject @ 0x1C004EC28 (NestAsyncEvalObject.c)
 *     Return @ 0x1C004FAC0 (Return.c)
 *     CopyObject @ 0x1C0050550 (CopyObject.c)
 *     ProcessLoadTable @ 0x1C00528D0 (ProcessLoadTable.c)
 *     ParseCall @ 0x1C0054820 (ParseCall.c)
 *     ParseNestedContext @ 0x1C0055C40 (ParseNestedContext.c)
 * Callees:
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     NewObjData @ 0x1C0047164 (NewObjData.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall DupObjData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  void *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _DWORD *v11; // rcx
  int v12; // edi
  _DWORD *v13; // rdx
  _DWORD *v14; // rbx
  _DWORD *v17; // [rsp+78h] [rbp+20h]

  v4 = a2;
  v5 = 0;
  if ( a2 != a3 )
  {
    *(_OWORD *)a2 = *(_OWORD *)a3;
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)(a3 + 32);
    if ( *(_QWORD *)(a3 + 32) )
    {
      v7 = (void *)NewObjData(a1, a3);
      *(_QWORD *)(v4 + 32) = v7;
      if ( !v7 )
      {
        v5 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(0LL, 3221225626LL);
        PrintDebugMessage(43, 0, 0, 0, 0LL);
        return v5;
      }
      memmove(v7, *(const void **)(a3 + 32), *(unsigned int *)(a3 + 24));
      if ( *(_WORD *)(v4 + 2) == 4 )
      {
        v11 = *(_DWORD **)(a3 + 32);
        v12 = 0;
        v13 = *(_DWORD **)(v4 + 32);
        v17 = v13;
        *v13 = *v11;
        if ( (int)*v11 > 0 )
        {
          v14 = v11;
          do
          {
            v5 = DupObjData(a1, &v13[10 * v12 + 2], &v14[10 * v12 + 2]);
            if ( v5 )
              break;
            v13 = v17;
            ++v12;
          }
          while ( v12 < *v14 );
          v4 = a2;
        }
        goto LABEL_27;
      }
      if ( *(_WORD *)(v4 + 2) != 5 )
      {
        if ( *(_WORD *)(v4 + 2) == 130 )
        {
          v10 = *(_QWORD **)(v4 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*v10 + 112LL));
            v10 = *(_QWORD **)(v4 + 32);
          }
          if ( (gdwfAMLI & 4) == 0 )
            goto LABEL_27;
          v9 = v10[1];
          goto LABEL_15;
        }
        if ( *(_WORD *)(v4 + 2) != 131 )
        {
          if ( *(_WORD *)(v4 + 2) != 132 )
            goto LABEL_27;
          v8 = *(__int64 **)(v4 + 32);
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v8[1] + 112));
            v8 = *(__int64 **)(v4 + 32);
          }
          if ( (gdwfAMLI & 4) == 0 )
            goto LABEL_27;
          v9 = *v8;
LABEL_15:
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 112));
LABEL_27:
          *(_WORD *)v4 &= ~1u;
          _InterlockedExchange((volatile __int32 *)(v4 + 8), 0);
          return v5;
        }
      }
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v4 + 32) + 112LL));
      goto LABEL_27;
    }
  }
  return v5;
}
