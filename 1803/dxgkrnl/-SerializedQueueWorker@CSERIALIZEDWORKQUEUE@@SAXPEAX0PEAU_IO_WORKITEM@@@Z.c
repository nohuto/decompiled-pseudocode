/*
 * XREFs of ?SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C01D0540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::SerializedQueueWorker(
        PVOID IoObject,
        DXGFASTMUTEX *Context,
        PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rax
  void **v6; // rsi
  void ***v7; // rdi
  void **v8; // rax

  if ( Context )
  {
    DXGFASTMUTEX::Acquire(Context);
    if ( !*((_BYTE *)Context + 56) )
    {
      *((_BYTE *)Context + 56) = 1;
      v6 = (void **)((char *)Context + 40);
      while ( 1 )
      {
        v7 = (void ***)*v6;
        if ( *v6 == v6 )
          break;
        if ( v7[1] != v6 || (v8 = *v7, (*v7)[1] != v7) )
          __fastfail(3u);
        *v6 = v8;
        v8[1] = v6;
        DXGFASTMUTEX::Release((struct _KTHREAD **)Context);
        ((void (__fastcall *)(void **))v7[2])(v7[3]);
        operator delete(v7);
        DXGFASTMUTEX::Acquire(Context);
      }
      *((_BYTE *)Context + 56) = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)Context);
    if ( IoWorkItem )
      IoFreeWorkItem(IoWorkItem);
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(IoObject);
    *(_QWORD *)(v5 + 24) = 1228LL;
    WdLogEvent5_WdError(v5);
  }
}
