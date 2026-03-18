/*
 * XREFs of PoQueryWatchdogTime @ 0x1400F1DC0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     PopComputeWatchdogTimeout @ 0x1400B38A4 (PopComputeWatchdogTimeout.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v2; // rdi
  _QWORD *DeviceNode; // rbx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  BOOLEAN result; // al
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int64 *v20; // [rsp+28h] [rbp-20h]
  unsigned __int8 v21; // [rsp+30h] [rbp-18h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v2 = -1LL;
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  v19 = 0LL;
  v20 = (volatile signed __int64 *)&PopIrpLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v21 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v19, &PopIrpLock);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&PopIrpLock, (__int64)&v19);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)&v19, v6);
  }
  v7 = DeviceNode[31];
  if ( v7 )
  {
    v11 = *(char *)(v7 + 66) - 1;
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 72 * v11 + 272) + 196LL) )
    {
      v12 = PopComputeWatchdogTimeout(*(_QWORD *)(v7 + 72 * v11 + 272));
      v14 = *(_QWORD *)(v13 + 48) + 10000000LL * v12;
      if ( v14 != -1 )
        v2 = v14;
    }
  }
  v8 = DeviceNode[33];
  if ( v8 )
  {
    v15 = *(char *)(v8 + 66) - 1;
    if ( *(_BYTE *)(*(_QWORD *)(v8 + 72 * v15 + 272) + 196LL) )
    {
      v16 = PopComputeWatchdogTimeout(*(_QWORD *)(v8 + 72 * v15 + 272));
      v18 = *(_QWORD *)(v17 + 48) + 10000000LL * v16;
      if ( v18 < v2 )
        v2 = v18;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v19, retaddr);
  }
  else
  {
    _m_prefetchw(&v19);
    v9 = v19;
    if ( !v19 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v20, 0LL, (signed __int64)&v19) == &v19 )
        goto LABEL_11;
      v9 = KxWaitForLockChainValid(&v19);
    }
    v19 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v9 + 8), 1uLL);
  }
LABEL_11:
  __writecr8(v21);
  if ( v2 == -1LL )
    return 0;
  if ( MEMORY[0xFFFFF78000000008] <= v2 )
  {
    result = 1;
    *SecondsRemaining = (v2 - MEMORY[0xFFFFF78000000008]) / 0x989680;
  }
  else
  {
    *SecondsRemaining = 0;
    return 1;
  }
  return result;
}
