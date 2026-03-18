/*
 * XREFs of Return @ 0x1C001A7B0
 * Callers:
 *     <none>
 * Callees:
 *     DupObjData @ 0x1C001A8E0 (DupObjData.c)
 *     NewObjData @ 0x1C001A9F4 (NewObjData.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall Return(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rbp
  void *v7; // rax
  _DWORD *v8; // r14
  int v9; // edi
  _DWORD *v10; // r15
  char v11; // cl
  __int64 v12; // rdx

  v2 = *(_QWORD *)(a2 + 80);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 88);
  v5 = *(_QWORD *)(a1 + 320);
  if ( v4 != v2 )
  {
    *(_OWORD *)v4 = *(_OWORD *)v2;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(v4 + 32) = *(_QWORD *)(v2 + 32);
    if ( *(_QWORD *)(v2 + 32) )
    {
      v7 = (void *)NewObjData(v5, v2);
      *(_QWORD *)(v4 + 32) = v7;
      if ( !v7 )
      {
        v3 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(0LL, 3221225626LL);
        PrintDebugMessage(43, 0, 0, 0, 0LL);
        return v3;
      }
      memmove(v7, *(const void **)(v2 + 32), *(unsigned int *)(v2 + 24));
      if ( *(_WORD *)(v4 + 2) == 4 )
      {
        v8 = *(_DWORD **)(v2 + 32);
        v9 = 0;
        v10 = *(_DWORD **)(v4 + 32);
        for ( *v10 = *v8; v9 < *v8; ++v9 )
        {
          v3 = DupObjData(v5, &v10[10 * v9 + 2], &v8[10 * v9 + 2]);
          if ( v3 )
            break;
        }
        goto LABEL_11;
      }
      if ( *(_WORD *)(v4 + 2) != 5 )
      {
        if ( *(_WORD *)(v4 + 2) == 130 )
        {
          v11 = gdwfAMLI;
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v4 + 32) + 112LL));
            v11 = gdwfAMLI;
          }
          v12 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL);
          goto LABEL_22;
        }
        if ( *(_WORD *)(v4 + 2) != 131 )
        {
          if ( *(_WORD *)(v4 + 2) != 132 )
          {
LABEL_11:
            *(_WORD *)v4 &= ~1u;
            _InterlockedExchange((volatile __int32 *)(v4 + 8), 0);
            goto LABEL_3;
          }
          v11 = gdwfAMLI;
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8LL) + 112LL));
            v11 = gdwfAMLI;
          }
          v12 = **(_QWORD **)(v4 + 32);
LABEL_22:
          if ( (v11 & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v12 + 112));
          goto LABEL_11;
        }
      }
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(**(_QWORD **)(v4 + 32) + 112LL));
      goto LABEL_11;
    }
  }
LABEL_3:
  if ( !v3 )
    return 32770;
  return v3;
}
