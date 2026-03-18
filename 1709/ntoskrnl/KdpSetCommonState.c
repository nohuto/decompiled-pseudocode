/*
 * XREFs of KdpSetCommonState @ 0x1402019CC
 * Callers:
 *     KdpReportCommandStringStateChange @ 0x1407975B4 (KdpReportCommandStringStateChange.c)
 *     KdpReportExceptionStateChange @ 0x140797730 (KdpReportExceptionStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1407977FC (KdpReportLoadSymbolsStateChange.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KdpCopyMemoryChunks @ 0x140799698 (KdpCopyMemoryChunks.c)
 *     KdpDeleteBreakpointRange @ 0x140799AB0 (KdpDeleteBreakpointRange.c)
 */

__int64 __fastcall KdpSetCommonState(int a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  ULONG ActiveProcessorCount; // eax
  ULONG v7; // ecx
  char *v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = KeProcessorLevel;
  *(_DWORD *)a3 = a1;
  *(_WORD *)(a3 + 4) = v3;
  *(_WORD *)(a3 + 6) = KeGetPcr()->Prcb.Number;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = *(unsigned __int16 *)(a3 + 6);
  *(_DWORD *)(a3 + 8) = ActiveProcessorCount;
  if ( ActiveProcessorCount <= v7 )
    *(_DWORD *)(a3 + 8) = v7 + 1;
  *(_QWORD *)(a3 + 16) = KeGetCurrentThread();
  v8 = *(char **)(a2 + 248);
  *(_QWORD *)(a3 + 24) = v8;
  memset((void *)(a3 + 192), 0, 0x30uLL);
  KdpCopyMemoryChunks(v8, 4, (__int64)&v11);
  v9 = (unsigned int)v11;
  *(_WORD *)(a3 + 212) = v11;
  result = KdpDeleteBreakpointRange(v8, &v8[v9 - 1]);
  if ( (_BYTE)result )
    return KdpCopyMemoryChunks(v8, 4, (__int64)&v11);
  return result;
}
