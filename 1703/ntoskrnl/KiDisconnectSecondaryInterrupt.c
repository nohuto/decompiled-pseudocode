/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x140200B94
 * Callers:
 *     KeDisconnectInterrupt @ 0x14014B958 (KeDisconnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KiDisconnectInterruptCommon @ 0x14014BCCC (KiDisconnectInterruptCommon.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1402009CC (KiAcquireSecondaryPassiveConnectLock.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, __int64 a2)
{
  bool v3; // bl
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned int v9; // ebx

  v3 = 0;
  v5 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  KiAcquireSecondaryPassiveConnectLock(v5);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  KxAcquireSpinLock((PKSPIN_LOCK)v5);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v7 = *(_QWORD *)(v5 + 40);
    if ( v7 == a1 )
      v3 = *(_QWORD *)(v7 + 8) == v7 + 8;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v5);
  __writecr8(CurrentIrql);
  if ( v3 )
    HalDisableInterrupt(a2);
  v9 = KiDisconnectInterruptCommon(1, a1, a2, v8);
  KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v9;
}
