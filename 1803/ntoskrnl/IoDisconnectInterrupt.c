/*
 * XREFs of IoDisconnectInterrupt @ 0x14060B8E0
 * Callers:
 *     IoDisconnectInterruptEx @ 0x14060B860 (IoDisconnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x1406457EC (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x14064CDD4 (IopConnectLineBasedInterrupt.c)
 * Callees:
 *     KeRemoveQueueDpc @ 0x140006050 (KeRemoveQueueDpc.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeFreeInterrupt @ 0x1401686B0 (KeFreeInterrupt.c)
 *     KeDisconnectInterrupt @ 0x1401686D8 (KeDisconnectInterrupt.c)
 *     PnpTraceInterruptUsage @ 0x140168E28 (PnpTraceInterruptUsage.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x14060C0EC (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x14060C1DC (IopInitializeActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140649214 (IopAcquireReleaseConnectLockInternal.c)
 *     IopDestroyPassiveInterruptBlock @ 0x140726E58 (IopDestroyPassiveInterruptBlock.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  PSLIST_ENTRY *p_Number; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // r10
  char v8; // dl
  unsigned int *v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+48h] [rbp-50h]

  KeRemoveQueueDpc((PRKDPC)&InterruptObject[1].MessageServiceRoutine);
  IopInitializeActiveConnectBlock(&InterruptObject[-1].ConnectionData, v12);
  v2 = (unsigned __int64)InterruptObject[-1].ServiceThread
     - (((unsigned __int64)InterruptObject[-1].ServiceThread >> 1) & 0x5555555555555555LL);
  v3 = v2 & 0x3333333333333333LL;
  v4 = (0x101010101010101LL
      * (((v2 & 0x3333333333333333LL)
        + ((v2 >> 2) & 0x3333333333333333LL)
        + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( v13 )
  {
    LOBYTE(v3) = 1;
    IopAcquireReleaseConnectLockInternal(v12, v3, 0LL);
  }
  p_Number = (PSLIST_ENTRY *)&InterruptObject[1].Number;
  LOBYTE(v3) = v4;
  KeDisconnectInterrupt((__int64 *)&InterruptObject[1].Number, v3, (__int64)&InterruptObject[-1].ConnectionData);
  if ( v13 )
    IopAcquireReleaseConnectLockInternal(v12, 0LL, 0LL);
  if ( LOBYTE(InterruptObject[1].Type) )
    IopDestroyPassiveInterruptBlock(HIDWORD(InterruptObject[-1].IntTrackEntry));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( LOBYTE(InterruptObject[1].Type) )
  {
    v7 = KeGetCurrentThread();
    v8 = 0;
    if ( (char)v4 <= 0 )
      goto LABEL_17;
    v9 = &InterruptObject[1].Number;
    v10 = v4;
    do
    {
      v11 = *(_QWORD *)v9;
      v9 += 2;
      if ( *(struct _KTHREAD **)(v11 + 152) == v7 )
        v8 = 1;
      --v10;
    }
    while ( v10 );
    if ( !v8 )
LABEL_17:
      KeWaitForSingleObject(&InterruptObject[1].InterruptListEntry, Executive, 0, 0, 0LL);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (char)v4 > 0 )
  {
    do
    {
      KeFreeInterrupt(*p_Number++);
      --v4;
    }
    while ( v4 );
  }
  IopDestroyActiveConnectBlock(v12);
  ExFreePoolWithTag(&InterruptObject[-1].DisconnectData, 0);
  PnpTraceInterruptUsage(-1);
}
