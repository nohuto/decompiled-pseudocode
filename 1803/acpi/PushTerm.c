/*
 * XREFs of PushTerm @ 0x1C004E810
 * Callers:
 *     ParseArg @ 0x1C00545E8 (ParseArg.c)
 *     ParseOpcode @ 0x1C0055E28 (ParseOpcode.c)
 *     ParseSuperName @ 0x1C005665C (ParseSuperName.c)
 * Callees:
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall PushTerm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rax
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v9 = PushFrame(a1, 1297237332, 96LL, (__int64)ParseTerm, v15);
  if ( !v9 )
  {
    v10 = v15[0];
    *(_QWORD *)(v15[0] + 32) = a2;
    *(_QWORD *)(v10 + 48) = a3;
    *(_QWORD *)(v10 + 56) = a4;
    *(_QWORD *)(v10 + 88) = a5;
    v11 = *(_QWORD *)(a4 + 16);
    if ( v11 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_BYTE *)(v11 + v12) );
    }
    else
    {
      LODWORD(v12) = 0;
    }
    *(_DWORD *)(v10 + 76) = v12;
    if ( (_DWORD)v12 )
    {
      v13 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1413563464, 40 * (int)v12);
      *(_QWORD *)(v10 + 80) = v13;
      if ( v13 )
      {
        memset(v13, 0, 40LL * *(unsigned int *)(v10 + 76));
      }
      else
      {
        v9 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        PrintDebugMessage(154, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  return v9;
}
