/*
 * XREFs of ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C00BFD78
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00C0148 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0188E3C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C01A232C (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  _QWORD *i; // rdi
  struct _KTHREAD *CurrentThread; // r8
  __int64 v6; // rdx
  __int64 v7; // rax

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *(struct _KTHREAD **)(v6 + 128) != CurrentThread )
    {
      v7 = WdLogNewEntry5_WdAssertion(v2, v6, CurrentThread, v3);
      *(_QWORD *)(v7 + 24) = 7347LL;
      WdLogEvent5_WdAssertion(v7);
    }
  }
  if ( !*((_BYTE *)this + 1821) )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 47); i != (_QWORD *)((char *)this + 376) && i; i = (_QWORD *)*i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 432LL) + 8LL) + 904LL))(i[4]);
  }
}
