/*
 * XREFs of PoSetProcessorQoS @ 0x14024069C
 * Callers:
 *     KeClockInterruptNotify @ 0x140095E30 (KeClockInterruptNotify.c)
 *     KeCheckAndApplyBamQos @ 0x140209EA0 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     PpmPerfArbitratorApplyProcessorState @ 0x14014D6C4 (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmEventVpQosChange @ 0x14024BD84 (PpmEventVpQosChange.c)
 */

char __fastcall PoSetProcessorQoS(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r8d
  int v5; // edi
  char v7; // si
  int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rcx

  v4 = *(_DWORD *)(a1 + 24304);
  v5 = a2;
  v7 = 1;
  if ( (_DWORD)a2 != v4 )
  {
    v8 = *(_DWORD *)(a1 + 24312);
    if ( !_bittest(&v8, a2) )
    {
      a2 = __rdtsc();
      v9 = a2 - *(_QWORD *)(a1 + 24288);
      if ( v5 > v4 && v9 < *(_QWORD *)(a1 + 24296) && !*(_BYTE *)(a1 + 24227) )
        return 0;
      v10 = 2LL * *(_QWORD *)(a1 + 24296);
      *(_QWORD *)(a1 + 24288) = a2;
      *(_BYTE *)(a1 + 24227) = v9 >= v10;
    }
    v11 = PpmPerfVmQosSupported == 0;
    *(_DWORD *)(a1 + 24304) = v5;
    if ( v11 )
    {
      PpmPerfArbitratorApplyProcessorState(a1, 1u, 0, a4);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 25016);
      *(_DWORD *)(a1 + 24308) = v5;
      if ( v12 )
      {
        *(_DWORD *)(v12 + 4) = v5;
        a2 = 0LL;
        __writemsr(0x400000C2u, 0LL);
      }
      PpmEventVpQosChange(a1, a2);
    }
    *(_DWORD *)(a1 + 236) ^= ((unsigned __int8)v5 ^ (unsigned __int8)*(_DWORD *)(a1 + 236)) & 3;
  }
  return v7;
}
