/*
 * XREFs of ?SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C0121830
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::SerializedQueueWorker(
        PVOID IoObject,
        DXGFASTMUTEX *Context,
        PIO_WORKITEM IoWorkItem)
{
  char *v5; // rdi
  void (__fastcall **v6)(_QWORD); // rsi
  void (__fastcall ***v7)(_QWORD); // rax
  __int64 v8; // rax

  if ( Context )
  {
    DXGFASTMUTEX::Acquire(Context);
    if ( !*((_BYTE *)Context + 56) )
    {
      *((_BYTE *)Context + 56) = 1;
      v5 = (char *)Context + 40;
      while ( *(char **)v5 != v5 )
      {
        v6 = *(void (__fastcall ***)(_QWORD))v5;
        if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5
          || (v7 = (void (__fastcall ***)(_QWORD))*v6, *((void (__fastcall ***)(_QWORD))*v6 + 1) != v6) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v5 = v7;
        v7[1] = (void (__fastcall **)(_QWORD))v5;
        DXGFASTMUTEX::Release((struct _KTHREAD **)Context);
        v6[2](v6[3]);
        ExFreePoolWithTag(v6, 0);
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
    v8 = WdLogNewEntry5_WdError(IoObject);
    *(_QWORD *)(v8 + 24) = 1205LL;
    WdLogEvent5_WdError(v8);
  }
}
