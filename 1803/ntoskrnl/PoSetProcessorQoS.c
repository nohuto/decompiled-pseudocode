/*
 * XREFs of PoSetProcessorQoS @ 0x140277C7C
 * Callers:
 *     KiUpdateRunTime @ 0x1401099B0 (KiUpdateRunTime.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     KeCheckAndApplyBamQos @ 0x140247AD0 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x14016BADC (PpmPerfArbitratorApplyProcessorState.c)
 *     PpmHvSetVirtualProcessorQos @ 0x1402821B4 (PpmHvSetVirtualProcessorQos.c)
 */

char __fastcall PoSetProcessorQoS(__int64 a1, signed int a2, __int64 a3, __int64 a4)
{
  bool v4; // bp
  char v5; // r15
  char v8; // si
  __int64 v9; // r14
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  signed int v13; // eax
  unsigned __int64 v14; // rax
  bool v15; // zf
  __int16 v17; // [rsp+30h] [rbp-8h]

  v4 = 0;
  v5 = 0;
  v8 = 1;
  if ( a2 == *(_DWORD *)(a1 + 24304) )
    return v8;
  v9 = *(_QWORD *)(a1 + 24184);
  if ( v9 && *(_BYTE *)(v9 + 121) )
  {
    v5 = 1;
    _disable();
    v4 = (v17 & 0x200) != 0;
    KxAcquireSpinLock((PKSPIN_LOCK)(v9 + 128));
  }
  v10 = *(_DWORD *)(a1 + 24312);
  if ( _bittest(&v10, a2) )
    goto LABEL_14;
  v11 = __rdtsc();
  v12 = v11 - *(_QWORD *)(a1 + 24288);
  if ( !a2
    || a2 != 3 && (v13 = *(_DWORD *)(a1 + 24304), v13 != 3) && a2 <= v13
    || v12 >= *(_QWORD *)(a1 + 24296)
    || *(_BYTE *)(a1 + 24227) )
  {
    v14 = 2LL * *(_QWORD *)(a1 + 24296);
    *(_QWORD *)(a1 + 24288) = v11;
    *(_BYTE *)(a1 + 24227) = v12 >= v14;
LABEL_14:
    v15 = PpmPerfVmQosSupported == 0;
    *(_DWORD *)(a1 + 24304) = a2;
    if ( v15 )
      PpmPerfArbitratorApplyProcessorState(a1, 1u, 0, a4);
    else
      PpmHvSetVirtualProcessorQos(a1);
    *(_DWORD *)(a1 + 236) ^= ((unsigned __int8)a2 ^ (unsigned __int8)*(_DWORD *)(a1 + 236)) & 3;
    goto LABEL_18;
  }
  v8 = 0;
LABEL_18:
  if ( v5 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v9 + 128));
    if ( v4 )
      _enable();
  }
  return v8;
}
