/*
 * XREFs of RaidBusEnumeratorProcessNewUnit @ 0x1C0017438
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C00175D0 (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C00158C8 (RaidAdapterInsertUnit.c)
 *     StorpInitializeUnitTelemetry @ 0x1C0017540 (StorpInitializeUnitTelemetry.c)
 *     RaUnitSetQueueDepth @ 0x1C001B0CC (RaUnitSetQueueDepth.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  char v6; // al
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 88) = *(_DWORD *)(a2 + 1);
  v5 = *(_QWORD *)(v2 + 24);
  *(_WORD *)(v2 + 80) = 1;
  *(_DWORD *)(v2 + 84) = 4;
  *(_WORD *)(v2 + 82) = *(_WORD *)(v5 + 56);
  *(_OWORD *)(v2 + 96) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v2 + 112) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v2 + 128) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(v2 + 144) = *(_QWORD *)(a2 + 80);
  memset((void *)(a2 + 32), 0, 0x38uLL);
  v6 = *(_BYTE *)(v2 + 152) & 0xF7;
  *(_DWORD *)(v2 + 40) = 2;
  *(_BYTE *)(v2 + 437) = 1;
  *(_BYTE *)(v2 + 152) = v6 | 4;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 4976LL)
    && _bittest64(*(const signed __int64 **)(*(_QWORD *)a1 + 4968LL), *(unsigned __int8 *)(a2 + 1)) )
  {
    *(_DWORD *)(v2 + 1568) |= 1u;
  }
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), v2);
  if ( (**(_BYTE **)(v2 + 96) & 0x1F) == 1 )
    RaUnitSetQueueDepth(v2, 1LL, 1LL);
  StorpInitializeUnitTelemetry(v2);
  result = *(_QWORD *)(v2 + 8);
  *(_DWORD *)(result + 48) &= ~0x80u;
  return result;
}
