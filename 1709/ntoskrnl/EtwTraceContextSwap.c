/*
 * XREFs of EtwTraceContextSwap @ 0x14027AFE0
 * Callers:
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     SwapContext @ 0x140188250 (SwapContext.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     EtwpLogContextSwapEvent @ 0x14027BFB8 (EtwpLogContextSwapEvent.c)
 */

__int64 __fastcall EtwTraceContextSwap(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  _QWORD *ServerSiloGlobals; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1728LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 544) + 1728LL);
  result = EtwpLogContextSwapEvent(EtwpHostSiloState, a1, a2);
  if ( v4 == v5 )
  {
    if ( v4 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals(v4);
      v8 = a1;
      return EtwpLogContextSwapEvent(ServerSiloGlobals[108], v8, a2);
    }
  }
  else if ( v4 )
  {
    v9 = PsGetServerSiloGlobals(v4);
    result = EtwpLogContextSwapEvent(v9[108], a1, 0LL);
  }
  if ( !v5 )
    return result;
  ServerSiloGlobals = PsGetServerSiloGlobals(v5);
  v8 = 0LL;
  return EtwpLogContextSwapEvent(ServerSiloGlobals[108], v8, a2);
}
