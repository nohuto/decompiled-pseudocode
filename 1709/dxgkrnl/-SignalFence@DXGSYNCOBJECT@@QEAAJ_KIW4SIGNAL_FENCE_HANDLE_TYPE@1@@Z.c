/*
 * XREFs of ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@1@@Z @ 0x1C008AB0C
 * Callers:
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00F7E50 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 *     ?VmBusSignalFenceNtShared@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199C10 (-VmBusSignalFenceNtShared@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01BC0E0 (-SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z @ 0x1C008C580 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z.c)
 */

int __fastcall DXGSYNCOBJECT::SignalFence(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  DXGADAPTERSYNCOBJECT *v6; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rdi
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (a1[41] & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (struct DXGFASTMUTEX *const)(a1 + 8));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
    v9 = a1 + 62;
    if ( (_QWORD *)*v9 == v9 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v10 + 24) = 1101LL;
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = (_QWORD *)*v9;
    if ( v12[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    v6 = (DXGADAPTERSYNCOBJECT *)(v11 - 5);
  }
  else
  {
    v6 = (DXGADAPTERSYNCOBJECT *)(a1 + 62);
  }
  return DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v6, (struct DXGSYNCOBJECT *)a1, a2, a3);
}
