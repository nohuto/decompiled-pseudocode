/*
 * XREFs of EtwpInitStateChangeInfo @ 0x1404DD67C
 * Callers:
 *     EtwTraceProcess @ 0x1404DBA5C (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x1404FE234 (EtwTraceAppStateChange.c)
 * Callees:
 *     PsGetProcessStartKey @ 0x1400AE9D0 (PsGetProcessStartKey.c)
 *     PsGetProcessSessionId @ 0x1400AE9F0 (PsGetProcessSessionId.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall EtwpInitStateChangeInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h]

  memset((void *)a2, 0, 0x62uLL);
  LODWORD(v5) = *(_DWORD *)(a1 + 736);
  WORD2(v5) = PsGetProcessSessionId(a1);
  WORD3(v5) = MEMORY[0xFFFFF780000002C4];
  *((_QWORD *)&v5 + 1) = *(_QWORD *)(a1 + 776);
  *(_OWORD *)(a2 + 21) = v5;
  *((_QWORD *)&v5 + 1) = PsGetProcessStartKey(a1);
  *(_OWORD *)(a2 + 2) = v5;
  *(_DWORD *)(a2 + 37) = *(_DWORD *)(a1 + 1872);
  *(_QWORD *)(a2 + 82) = _InterlockedIncrement64(&EtwpAppStateChangeSequenceNumber);
  result = *(_QWORD *)(a1 + 1872);
  *(_QWORD *)(a2 + 90) = result;
  return result;
}
