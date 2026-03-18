/*
 * XREFs of PpmPerfArbitratorApplyProcessorState @ 0x140146DA0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyProcessorState @ 0x140146C0C (PpmPerfApplyProcessorState.c)
 *     PoSetVirtualProcessorType @ 0x14022D2FC (PoSetVirtualProcessorType.c)
 *     PpmPerfUpdateProcessorHeterogeneousState @ 0x14022D460 (PpmPerfUpdateProcessorHeterogeneousState.c)
 * Callees:
 *     PpmEventArbitratorPerfStateChange @ 0x140146EBC (PpmEventArbitratorPerfStateChange.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmPerfArbitratorApplyProcessorState(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4; // rcx
  char v5; // bp
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 result; // rax
  unsigned __int8 v10; // bl
  char v11; // dl
  __int64 v12; // r8
  __int64 v13; // xmm0_8

  v4 = *(_QWORD *)(a1 + 24312);
  v5 = a3;
  v7 = 1LL;
  v8 = *(_QWORD *)(a1 + 24304);
  if ( PpmPerfVirtualHeterogeneityEnabled && *(_BYTE *)(v4 + 48) )
  {
    result = *(unsigned int *)(v8 + 384);
    v10 = 1;
    v11 = 1;
  }
  else
  {
    result = *(unsigned int *)(v8 + 380);
    v10 = 0;
    v11 = 0;
  }
  if ( v10 != *(_BYTE *)(v4 + 49) )
  {
    *(_BYTE *)(v4 + 49) = v10;
    a2 = 1;
    *(_DWORD *)(v4 + 128) = result;
LABEL_9:
    if ( v5 )
      *(_DWORD *)(v4 + 128) = 0;
    LOBYTE(v7) = v5;
    *(_DWORD *)(v4 + 136) = *(_DWORD *)(v4 + 96);
    v12 = v10 != 0 ? 0x28 : 0;
    *(_DWORD *)(v4 + 132) = *(_DWORD *)(v4 + 100);
    *(_OWORD *)(v4 + 88) = *(_OWORD *)(v12 + v8 + 392);
    *(_OWORD *)(v4 + 104) = *(_OWORD *)(v12 + v8 + 408);
    v13 = *(_QWORD *)(v12 + v8 + 424);
    LOBYTE(v12) = a2;
    *(_QWORD *)(v4 + 120) = v13;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v8 + 288))(
               *(_QWORD *)(v4 + 8),
               v4 + 88,
               v12,
               v7);
    if ( !v5 )
      return PpmEventArbitratorPerfStateChange(a1, a2, v10);
    return result;
  }
  if ( *(_DWORD *)(v4 + 128) != (_DWORD)result )
  {
    *(_DWORD *)(v4 + 128) = result;
    result = a2;
    a3 = 1;
    if ( !v11 )
      v7 = a2;
    a2 = v7;
  }
  if ( a3 )
    goto LABEL_9;
  return result;
}
