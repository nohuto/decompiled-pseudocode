/*
 * XREFs of ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KI@Z @ 0x1C008B518
 * Callers:
 *     ?VmBusSignalFenceNtShared@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033160 (-VmBusSignalFenceNtShared@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C008B4E0 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z @ 0x1C008B578 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z.c)
 */

int __fastcall DXGSYNCOBJECT::SignalFence(DXGSYNCOBJECT *this, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  DXGADAPTERSYNCOBJECT *v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // rdi
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  if ( (*((_DWORD *)this + 37) & 4) != 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (DXGSYNCOBJECT *)((char *)this + 32), a3, a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    v13 = (_QWORD *)((char *)this + 232);
    if ( (_QWORD *)*v13 == v13 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v14 + 24) = 1074LL;
      WdLogEvent5_WdAssertion(v14);
    }
    v15 = (_QWORD *)*v13;
    if ( v16[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v9, v11, v12);
    v7 = (DXGADAPTERSYNCOBJECT *)(v15 - 5);
  }
  else
  {
    v7 = (DXGSYNCOBJECT *)((char *)this + 232);
  }
  return DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(v7, this, a2, v4);
}
