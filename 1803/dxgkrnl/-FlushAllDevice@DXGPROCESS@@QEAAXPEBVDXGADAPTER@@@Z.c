/*
 * XREFs of ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C01B6D3C
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F4DB0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000AEAC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

void __fastcall DXGPROCESS::FlushAllDevice(struct _KTHREAD **this, const struct DXGADAPTER *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // rax
  struct _KTHREAD *v8; // rbx
  _QWORD *Current; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2299LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 2301LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( this[22] != KeGetCurrentThread() && this[24] != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 2303LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (char *)(this + 34);
  v8 = this[34];
  v10[0] = v7;
  while ( 1 )
  {
    v10[1] = v8;
    Current = (_QWORD *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v10);
    if ( !Current )
      break;
    if ( *(const struct DXGADAPTER **)(Current[2] + 16LL) == a2 )
      DXGDEVICE::FlushScheduler(Current, 5u);
    v8 = *(struct _KTHREAD **)v8;
  }
}
