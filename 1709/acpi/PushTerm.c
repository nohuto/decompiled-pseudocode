/*
 * XREFs of PushTerm @ 0x1C0019F78
 * Callers:
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0018D90 (ParseSuperName.c)
 *     ParseArg @ 0x1C0019DE4 (ParseArg.c)
 *     ParseOpcode @ 0x1C0019E50 (ParseOpcode.c)
 * Callees:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall PushTerm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // rax
  unsigned int v16; // edi
  int v17; // ecx

  v9 = HeapAlloc(a1 + 480, 1297237576, 0x60u);
  v10 = 0;
  v11 = v9;
  if ( !v9 )
  {
    v16 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    v17 = 153;
    goto LABEL_12;
  }
  *(_QWORD *)(v9 + 8) = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v9;
  *(_DWORD *)v9 = 1297237332;
  *(_QWORD *)(v9 + 24) = ParseTerm;
  *(_QWORD *)(v9 + 32) = a2;
  *(_QWORD *)(v9 + 48) = a3;
  *(_QWORD *)(v9 + 56) = a4;
  *(_QWORD *)(v9 + 88) = a5;
  v12 = *(_QWORD *)(a4 + 16);
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v12 + v13) );
  }
  else
  {
    LODWORD(v13) = 0;
  }
  *(_DWORD *)(v11 + 76) = v13;
  if ( (_DWORD)v13 )
  {
    v14 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1413563464, 40 * (int)v13);
    *(_QWORD *)(v11 + 80) = v14;
    if ( v14 )
    {
      memset(v14, 0, 40LL * *(unsigned int *)(v11 + 76));
      return v10;
    }
    v16 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    v17 = 154;
LABEL_12:
    PrintDebugMessage(v17, 0, 0, 0, 0LL);
    return v16;
  }
  return v10;
}
