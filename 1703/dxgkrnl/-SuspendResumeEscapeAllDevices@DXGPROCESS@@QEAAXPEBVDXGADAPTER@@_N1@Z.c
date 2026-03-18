/*
 * XREFs of ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C01A232C
 * Callers:
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C0194244 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0002724 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C00BFD78 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::SuspendResumeEscapeAllDevices(
        struct _KTHREAD **this,
        const struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r14
  char v5; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _KTHREAD *v11; // rdi
  DXGDEVICE *Current; // rax
  DXGDEVICE *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  v5 = a3;
  if ( KeGetCurrentIrql() )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 1898LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1900LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( this[18] != KeGetCurrentThread() && this[20] != KeGetCurrentThread() )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 1902LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = this[28];
  v17[0] = this + 28;
  while ( 1 )
  {
    v17[1] = v11;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v17);
    v13 = Current;
    if ( !Current )
      break;
    if ( *(const struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL) == a2 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18, Current);
      if ( v5 )
        DXGDEVICE::FlushPagingQueues(v13);
      LOBYTE(v14) = v4;
      v15 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 432LL);
      v16 = *(_QWORD *)(v15 + 8);
      LOBYTE(v15) = v5;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v16 + 1096))(*((_QWORD *)v13 + 74), v15, v14);
      if ( v18[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v18);
    }
    v11 = *(struct _KTHREAD **)v11;
  }
}
