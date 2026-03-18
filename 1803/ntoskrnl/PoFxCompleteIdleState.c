/*
 * XREFs of PoFxCompleteIdleState @ 0x14016D850
 * Callers:
 *     <none>
 * Callees:
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 *     PopFxAddLogEntry @ 0x140077F7C (PopFxAddLogEntry.c)
 *     PopPluginComponentIdleState @ 0x14016C9D4 (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14016D564 (PopDiagTraceFxComponentIdleState.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

char __fastcall PoFxCompleteIdleState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  signed __int32 v5; // eax
  __int64 v6; // r8
  __int64 v7; // r8
  int v9[18]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  memset(v9, 0, 0x40uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 712) + 8 * v2);
  v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 140), 0xFFFFFFFF);
  if ( v5 == 1 )
  {
    PopFxAddLogEntry(*(_QWORD *)(a1 + 48), v2, 14, 1LL);
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(a1 + 48), v2, *(_DWORD *)(v4 + 152));
    LOBYTE(v5) = PopPluginComponentIdleState(a1, v2, v6, v9);
    if ( (_BYTE)v5 )
      LOBYTE(v5) = PopFxProcessWork(0LL, v9, v7);
  }
  return v5;
}
