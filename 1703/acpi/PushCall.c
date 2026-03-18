/*
 * XREFs of PushCall @ 0x1C0016E3C
 * Callers:
 *     ParseNameObj @ 0x1C00147FC (ParseNameObj.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     ParseLoad @ 0x1C001D4D0 (ParseLoad.c)
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall PushCall(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  void *v12; // rax

  v6 = 0;
  v7 = HeapAlloc((__int64)(a1 + 55), 1297237576, 0x190u);
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 8) = a1[52];
    a1[52] = v7;
    *(_QWORD *)(v7 + 24) = ParseCall;
    *(_DWORD *)v7 = 1280065859;
    if ( a2 )
    {
      v9 = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(v7 + 48) = a2;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
      if ( (*(_BYTE *)(v9 + 193) & 8) != 0 )
        *(_DWORD *)(v7 + 16) |= 0x10000u;
      if ( *(_WORD *)(a2 + 66) == 8 && (*(_WORD *)(a2 + 64) & 0x200) != 0 )
        *(_DWORD *)(v7 + 16) |= 0x80000u;
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
          v6 = -1073741670;
        }
      }
    }
    else
    {
      a1[12] = v7;
      *(_DWORD *)(v7 + 16) = 5;
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
  return v6;
}
