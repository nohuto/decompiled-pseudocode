/*
 * XREFs of ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C00F9D78
 * Callers:
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00DBC1C (DxgkImmediateSignalSynchronizationObjectByReference.c)
 *     ?VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01868E0 (-VmBusSignalFence@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C01BABA4 (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C00FA8F8 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KIW4SIGNAL_FENCE_HANDLE.c)
 */

__int64 __fastcall DXGSYNCOBJECT::SignalFence(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  _QWORD *v4; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (_QWORD *)(a1 + 264);
  if ( (*(_DWORD *)(a1 + 172) & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(a1 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
    v11 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v12 + 24) = 1199LL;
      WdLogEvent5_WdAssertion(v12);
      v11 = (_QWORD *)*v4;
    }
    v4 = v11 - 5;
    if ( v13[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  }
  return DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v4, a1, a2, a3, a4);
}
