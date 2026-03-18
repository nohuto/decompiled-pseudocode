/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N1111@Z @ 0x1C002D608
 * Callers:
 *     ?VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1C002D710 (-VmBusChannelProcessPacket@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION_.c)
 * Callees:
 *     McTemplateK0ppqqx @ 0x1C002DFDC (McTemplateK0ppqqx.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppqqx(0, (unsigned int)&EventPropagatePresentHistory, a3, (_DWORD)SpinLock, (char)a2, 0, 0, 0);
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  v6 = *((unsigned int *)SpinLock + 2);
  if ( (unsigned int)v6 >= 0x800 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v7 + 24) = 3146LL;
    WdLogEvent5_WdAssertion(v7);
    v6 = *((unsigned int *)SpinLock + 2);
  }
  SpinLock[v6 + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~1u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~2u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~4u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~8u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~0x10u;
  v8 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v8;
  if ( v8 == *((_DWORD *)SpinLock + 3) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 3162LL;
    WdLogEvent5_WdAssertion(v9);
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
