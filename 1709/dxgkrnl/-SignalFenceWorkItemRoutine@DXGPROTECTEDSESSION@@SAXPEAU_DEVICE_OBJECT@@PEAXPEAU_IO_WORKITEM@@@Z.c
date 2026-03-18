/*
 * XREFs of ?SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01BC0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@1@@Z @ 0x1C008AB0C (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@1@@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C01BBDB8 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 */

void __fastcall DXGPROTECTEDSESSION::SignalFenceWorkItemRoutine(
        PVOID IoObject,
        _QWORD *Context,
        PIO_WORKITEM IoWorkItem,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v6 = WdLogNewEntry5_WdEvent(IoObject, Context, IoWorkItem, a4);
  *(_QWORD *)(v6 + 24) = 1210LL;
  WdLogEvent5_WdEvent(v6);
  if ( *(_BYTE *)(Context[14] + 241LL) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 1238LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)(Context + 4));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  DXGSYNCOBJECT::SignalFence((_DWORD *)Context[14], ++Context[15], 0);
  DXGPROTECTEDSESSION::DestroyProtectedSession(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
