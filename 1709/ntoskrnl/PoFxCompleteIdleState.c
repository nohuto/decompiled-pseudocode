/*
 * XREFs of PoFxCompleteIdleState @ 0x140131ED0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     PopPluginComponentIdleState @ 0x140130F68 (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140131F40 (PopDiagTraceFxComponentIdleState.c)
 *     memset @ 0x140192F40 (memset.c)
 */

char __fastcall PoFxCompleteIdleState(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  signed __int32 v5; // eax
  __int64 v6; // r8
  __int64 v7; // r8
  int v9[18]; // [rsp+20h] [rbp-48h] BYREF

  v9[0] = 0;
  v3 = a2;
  memset(&v9[2], 0, 0x38uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 8 * v3);
  v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 140), 0xFFFFFFFF);
  if ( v5 == 1 )
  {
    PopFxAddLogEntry(*(_QWORD *)(a1 + 48), v3, 14, 1LL);
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(a1 + 48), (unsigned int)v3, *(unsigned int *)(v4 + 152));
    LOBYTE(v5) = PopPluginComponentIdleState(a1, v3, v6, v9);
    if ( (_BYTE)v5 )
      LOBYTE(v5) = PopFxProcessWork(0LL, v9, v7);
  }
  return v5;
}
