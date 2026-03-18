/*
 * XREFs of ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C011B880
 * Callers:
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C011B5B8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C01B0964 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  CSERIALIZEDWORKQUEUE **v13; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax

  v3 = 0;
  v7 = (CSERIALIZEDWORKQUEUE *)operator new(0x20uLL, 0x4B677844u, PagedPool);
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
    v13 = this[6];
    if ( *v13 != (CSERIALIZEDWORKQUEUE *)(this + 5) )
      __fastfail(3u);
    *(_QWORD *)v9 = this + 5;
    *((_QWORD *)v9 + 1) = v13;
    *v13 = v9;
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
        v18 = WdLogNewEntry5_WdLowResource(v15);
        *(_QWORD *)(v18 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v18);
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this, v10, v11, v12);
    return v3;
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v17 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}
