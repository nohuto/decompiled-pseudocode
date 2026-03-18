/*
 * XREFs of ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C002BCB4
 * Callers:
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C002B908 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00020FC (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0qqqq @ 0x1C00215BC (McTemplateK0qqqq.c)
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
    v6 = *((_QWORD *)this + 14) + 3760LL * a3;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 960), &LockHandle);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqq(
        *(unsigned __int8 *)(v6 + 952),
        &EventDWMVsyncSignal,
        v7,
        *(_DWORD *)(v6 + 944),
        a4,
        *(_BYTE *)(v6 + 952),
        *((_DWORD *)a2 + 584));
    KePulseEvent((PRKEVENT)(v6 + 912), 0, 0);
    if ( *(_QWORD *)(v6 + 936) )
    {
      *(_DWORD *)(v6 + 948) = a4;
      if ( *(_DWORD *)(v6 + 944) <= a4 )
      {
        if ( *(_BYTE *)(v6 + 952) )
        {
          *(_BYTE *)(v6 + 952) = 0;
          if ( *((_QWORD *)a2 + 289) )
            DXGADAPTER::DecrementVSyncWaiter(a2);
        }
        KeSetEvent(*(PRKEVENT *)(v6 + 936), 0, 0);
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
