/*
 * XREFs of IoDisconnectInterrupt @ 0x1405883B0
 * Callers:
 *     IopConnectLineBasedInterrupt @ 0x140587E04 (IopConnectLineBasedInterrupt.c)
 *     IoDisconnectInterruptEx @ 0x140588310 (IoDisconnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140588528 (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     KeRemoveQueueDpc @ 0x14001B6E0 (KeRemoveQueueDpc.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeFreeInterrupt @ 0x14014B93C (KeFreeInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14014B958 (KeDisconnectInterrupt.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x140588C84 (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140588D74 (IopInitializeActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140588F28 (IopAcquireReleaseConnectLockInternal.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1406953AC (IopDestroyPassiveInterruptBlock.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  void **p_DisconnectData; // rdi
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  _SLIST_ENTRY **v5; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // r10
  char v8; // dl
  __int64 *v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h]

  p_DisconnectData = &InterruptObject[-1].DisconnectData;
  KeRemoveQueueDpc((PRKDPC)&InterruptObject[1].MessageServiceRoutine);
  IopInitializeActiveConnectBlock(p_DisconnectData + 2, v12);
  v2 = 0x3333333333333333LL;
  v3 = (unsigned __int64)p_DisconnectData[1] - (((unsigned __int64)p_DisconnectData[1] >> 1) & 0x5555555555555555LL);
  v4 = (0x101010101010101LL
      * (((v3 & 0x3333333333333333LL)
        + ((v3 >> 2) & 0x3333333333333333LL)
        + (((v3 & 0x3333333333333333LL) + ((v3 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( v13 )
  {
    LOBYTE(v2) = 1;
    IopAcquireReleaseConnectLockInternal(v12, v2, 0LL);
  }
  v5 = (_SLIST_ENTRY **)(p_DisconnectData + 58);
  LOBYTE(v2) = v4;
  KeDisconnectInterrupt((__int64 *)p_DisconnectData + 58, v2, (__int64)(p_DisconnectData + 2));
  if ( v13 )
    IopAcquireReleaseConnectLockInternal(v12, 0LL, 0LL);
  if ( *((_BYTE *)p_DisconnectData + 368) )
    IopDestroyPassiveInterruptBlock(*((unsigned int *)p_DisconnectData + 7));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( *((_BYTE *)p_DisconnectData + 368) )
  {
    v7 = KeGetCurrentThread();
    v8 = 0;
    if ( (char)v4 <= 0 )
      goto LABEL_17;
    v9 = (__int64 *)(p_DisconnectData + 58);
    v10 = v4;
    do
    {
      v11 = *v9++;
      if ( *(struct _KTHREAD **)(v11 + 152) == v7 )
        v8 = 1;
      --v10;
    }
    while ( v10 );
    if ( !v8 )
LABEL_17:
      KeWaitForSingleObject(p_DisconnectData + 47, Executive, 0, 0, 0LL);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (char)v4 > 0 )
  {
    do
    {
      KeFreeInterrupt(*v5++);
      --v4;
    }
    while ( v4 );
  }
  IopDestroyActiveConnectBlock(v12);
  ExFreePoolWithTag(p_DisconnectData, 0);
}
