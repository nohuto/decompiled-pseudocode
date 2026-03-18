/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C003B8E4
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C003B484 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0006C14 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     Template_qqqq @ 0x1C0023228 (Template_qqqq.c)
 */

void __fastcall ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( a3 < *((_DWORD *)this + 20) )
  {
    v6 = *((_QWORD *)this + 14) + 3208LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 920), &LockHandle);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qqqq(
        *(unsigned __int8 *)(v6 + 912),
        &EventDWMVsyncSignal,
        v7,
        *(_DWORD *)(v6 + 904),
        a4,
        *(_BYTE *)(v6 + 912),
        *((_DWORD *)a2 + 578));
    KePulseEvent((PRKEVENT)(v6 + 872), 0, 0);
    if ( *(_QWORD *)(v6 + 896) )
    {
      *(_DWORD *)(v6 + 908) = a4;
      if ( *(_DWORD *)(v6 + 904) <= a4 )
      {
        if ( *(_BYTE *)(v6 + 912) )
        {
          *(_BYTE *)(v6 + 912) = 0;
          if ( *((_QWORD *)a2 + 286) )
            DXGADAPTER::DecrementVSyncWaiter(a2);
        }
        KeSetEvent(*(PRKEVENT *)(v6 + 896), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
