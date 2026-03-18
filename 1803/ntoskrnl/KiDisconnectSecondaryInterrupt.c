/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x140244C70
 * Callers:
 *     KeDisconnectInterrupt @ 0x1401686D8 (KeDisconnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiDisconnectInterruptCommon @ 0x1401689FC (KiDisconnectInterruptCommon.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140244A8C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140244AB0 (KiAcquireSecondaryPassiveConnectLock.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, __int64 a2)
{
  bool v4; // bl
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned __int8 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  KiAcquireSecondaryPassiveConnectLock(v5);
  KiAcquireSecondaryInterruptConnectLock((KSPIN_LOCK *)v5, &v10);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( v6 == a1 )
      v4 = *(_QWORD *)(v6 + 8) == v6 + 8;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v5);
  __writecr8(v10);
  if ( v4 )
    HalDisableInterrupt(a2);
  v8 = KiDisconnectInterruptCommon(1, a1, a2, v7);
  KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
