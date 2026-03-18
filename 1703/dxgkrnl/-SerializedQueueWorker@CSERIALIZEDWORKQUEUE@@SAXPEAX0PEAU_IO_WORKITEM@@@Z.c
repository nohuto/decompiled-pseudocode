/*
 * XREFs of ?SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C0121EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::SerializedQueueWorker(
        PVOID IoObject,
        DXGFASTMUTEX *Context,
        PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 **v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  if ( Context )
  {
    DXGFASTMUTEX::Acquire(Context);
    if ( !*((_BYTE *)Context + 56) )
    {
      *((_BYTE *)Context + 56) = 1;
      v8 = (__int64 **)((char *)Context + 40);
      while ( *v8 != (__int64 *)v8 )
      {
        v9 = *v8;
        v10 = **v8;
        if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
          __fastfail(3u);
        *v8 = (__int64 *)v10;
        *(_QWORD *)(v10 + 8) = v8;
        DXGFASTMUTEX::Release((struct _KTHREAD **)Context, v5, v6, v7);
        ((void (__fastcall *)(__int64))v9[2])(v9[3]);
        ExFreePoolWithTag(v9, 0);
        DXGFASTMUTEX::Acquire(Context);
      }
      *((_BYTE *)Context + 56) = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)Context, v5, v6, v7);
    if ( IoWorkItem )
      IoFreeWorkItem(IoWorkItem);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(IoObject, 0LL);
    *(_QWORD *)(v11 + 24) = 1176LL;
    WdLogEvent5_WdError(v11);
  }
}
