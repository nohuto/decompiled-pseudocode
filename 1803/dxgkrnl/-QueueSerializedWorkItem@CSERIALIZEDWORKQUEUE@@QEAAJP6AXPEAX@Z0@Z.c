/*
 * XREFs of ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C01CFEEC
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C01CEE94 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C01CF790 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
        CSERIALIZEDWORKQUEUE ***this,
        void (*a2)(void *),
        void *a3)
{
  unsigned int v3; // edi
  CSERIALIZEDWORKQUEUE *v7; // rax
  __int64 v8; // rcx
  CSERIALIZEDWORKQUEUE *v9; // rbx
  __int64 v10; // rax
  CSERIALIZEDWORKQUEUE **v12; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v14; // rcx
  __int64 v15; // rax

  v3 = 0;
  v7 = (CSERIALIZEDWORKQUEUE *)operator new[](0x20uLL, 0x4B677844u, PagedPool);
  v9 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = a2;
    *((_QWORD *)v7 + 3) = a3;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)this);
    v12 = this[6];
    if ( *v12 != (CSERIALIZEDWORKQUEUE *)(this + 5) )
      __fastfail(3u);
    *(_QWORD *)v9 = this + 5;
    *((_QWORD *)v9 + 1) = v12;
    *v12 = v9;
    this[6] = (CSERIALIZEDWORKQUEUE **)v9;
    if ( !*((_BYTE *)this + 56) )
    {
      WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
      if ( WorkItem )
      {
        IoQueueWorkItemEx(WorkItem, CSERIALIZEDWORKQUEUE::SerializedQueueWorker, DelayedWorkQueue, this);
      }
      else
      {
        v3 = -1073741801;
        v15 = WdLogNewEntry5_WdLowResource(v14);
        *(_QWORD *)(v15 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v15);
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this);
    return v3;
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
}
