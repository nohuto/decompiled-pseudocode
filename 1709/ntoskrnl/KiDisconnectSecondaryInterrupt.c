/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x140207050
 * Callers:
 *     KeDisconnectInterrupt @ 0x140129340 (KeDisconnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KiDisconnectInterruptCommon @ 0x14012D8F4 (KiDisconnectInterruptCommon.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140206E6C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140206E90 (KiAcquireSecondaryPassiveConnectLock.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, __int64 a2)
{
  bool v4; // bl
  __int64 v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned __int8 v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  KiAcquireSecondaryPassiveConnectLock(v5);
  KiAcquireSecondaryInterruptConnectLock((KSPIN_LOCK *)v5, &v9);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( v6 == a1 )
      v4 = *(_QWORD *)(v6 + 8) == v6 + 8;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v5);
  __writecr8(v9);
  if ( v4 )
    HalDisableInterrupt(a2);
  v7 = KiDisconnectInterruptCommon(1, a1, a2);
  KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v7;
}
