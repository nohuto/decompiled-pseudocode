/*
 * XREFs of ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z @ 0x1C01B7BC0
 * Callers:
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01804A0 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     MapGpadl @ 0x1C01876C0 (MapGpadl.c)
 */

void __fastcall DXGVIRTUALMACHINE::SetSharedPage(DXGVIRTUALMACHINE *this, unsigned int a2)
{
  char *v4; // rsi
  __int64 v5; // rcx
  struct _MDL *v6; // rcx
  PVOID MappedSystemVa; // rax
  __int64 v8; // rax

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v4 = (char *)this + 216;
  if ( !*((_QWORD *)this + 27) )
  {
    if ( (int)MapGpadl(*((_QWORD *)this + 7), a2, 0x1000uLL) < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v8 + 24) = 5178LL;
      goto LABEL_10;
    }
    v6 = *(struct _MDL **)v4;
    if ( (*(_BYTE *)(*(_QWORD *)v4 + 10LL) & 5) != 0 )
      MappedSystemVa = v6->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v6, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 28) = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = 5169LL;
LABEL_10:
      WdLogEvent5_WdError(v8);
      goto LABEL_11;
    }
    *((_DWORD *)this + 52) = a2;
  }
LABEL_11:
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
}
