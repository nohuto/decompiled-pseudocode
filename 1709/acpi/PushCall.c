/*
 * XREFs of PushCall @ 0x1C000CB4C
 * Callers:
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseLoad @ 0x1C0013100 (ParseLoad.c)
 *     ParseNameObj @ 0x1C001ADAC (ParseNameObj.c)
 *     NestAsyncEvalObject @ 0x1C00602C8 (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall PushCall(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  void *v12; // rax

  v6 = HeapAlloc((__int64)(a1 + 60), 1297237576, 0x190u);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 8) = a1[52];
    a1[52] = v6;
    *(_DWORD *)v6 = 1280065859;
    *(_QWORD *)(v6 + 24) = ParseCall;
    if ( a2 )
    {
      v9 = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(v6 + 48) = a2;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
      if ( (*(_BYTE *)(v9 + 193) & 8) != 0 )
        *(_DWORD *)(v6 + 16) |= 0x10000u;
      if ( *(_WORD *)(a2 + 66) == 8 && (*(_WORD *)(a2 + 64) & 0x200) != 0 )
        *(_DWORD *)(v6 + 16) |= 0x80000u;
      v10 = (*(_BYTE *)(v9 + 193) & 7) == 0;
      v11 = *(_BYTE *)(v9 + 193) & 7;
      *(_DWORD *)(v8 + 60) = v11;
      if ( !v10 )
      {
        v12 = (void *)HeapAlloc(a1[40], 1413563464, 40 * v11);
        *(_QWORD *)(v8 + 64) = v12;
        if ( v12 )
        {
          memset(v12, 0, 40LL * *(unsigned int *)(v8 + 60));
        }
        else
        {
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(a1, 3221225626LL);
          PrintDebugMessage(152, 0, 0, 0, 0LL);
          v7 = -1073741670;
        }
      }
    }
    else
    {
      a1[12] = v6;
      *(_DWORD *)(v6 + 16) = 5;
    }
    *(_QWORD *)(v8 + 392) = a3;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v7;
}
