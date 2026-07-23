/*
 * XREFs of RtlQueryProcessBackTraceInformation @ 0x1800D9620
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlCommitDebugInfo_0 @ 0x1800682D4 (RtlCommitDebugInfo_0.c)
 *     RtlDeCommitDebugInfo_0 @ 0x1800906CC (RtlDeCommitDebugInfo_0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall RtlQueryProcessBackTraceInformation(PRTL_DEBUG_INFORMATION Buffer)
{
  __int64 v2; // rbx
  _RTL_PROCESS_BACKTRACES *v4; // rax
  _RTL_PROCESS_BACKTRACES *v5; // r14
  int v6; // eax
  _DWORD *v7; // r12
  int v8; // edi
  int v9; // esi
  _QWORD *v10; // r13
  _WORD *v12; // rdx

  v2 = qword_180159A08;
  if ( !qword_180159A08 )
    return 0LL;
  v4 = (_RTL_PROCESS_BACKTRACES *)RtlCommitDebugInfo_0(Buffer, 0x18uLL);
  v5 = v4;
  if ( !v4 )
    return 3221225495LL;
  *(_BYTE *)(v2 + 129) = 1;
  *(_QWORD *)&v4->CommittedMemory = *(_QWORD *)(v2 + 152) - *(_QWORD *)(v2 + 136);
  *(_QWORD *)&v4->NumberOfBackTraceLookups = *(_QWORD *)(v2 + 184) - *(_QWORD *)(v2 + 136);
  LODWORD(v4->BackTraces[0].SymbolicBackTrace) = *(_DWORD *)(v2 + 176);
  v6 = *(_DWORD *)(v2 + 180);
  HIDWORD(v5->BackTraces[0].SymbolicBackTrace) = v6;
  v7 = RtlCommitDebugInfo_0(Buffer, (unsigned int)(272 * v6));
  if ( v7 )
  {
    v8 = 0;
    v9 = *(_DWORD *)(v2 + 180);
    v10 = *(_QWORD **)(v2 + 184);
    while ( v9-- )
    {
      v12 = (_WORD *)*--v10;
      *(_QWORD *)v7 = 0LL;
      v7[2] = v12[4] & 0x7FF;
      *((_WORD *)v7 + 6) = v12[6];
      *((_WORD *)v7 + 7) = v12[7];
      memmove(v7 + 4, v12 + 8, 8LL * (unsigned __int16)v12[7]);
      v7 += 68;
    }
  }
  else
  {
    v8 = -1073741801;
    RtlDeCommitDebugInfo_0(Buffer, v5, 0x18uLL);
  }
  *(_BYTE *)(v2 + 129) = 0;
  if ( v8 >= 0 )
    Buffer->BackTraces = v5;
  return (unsigned int)v8;
}
