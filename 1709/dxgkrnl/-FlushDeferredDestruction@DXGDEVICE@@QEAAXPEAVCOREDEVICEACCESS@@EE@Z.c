/*
 * XREFs of ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C009CA38
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0092F9C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0093D2C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C017735C (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C019E1DC (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall DXGDEVICE::FlushDeferredDestruction(DXGDEVICE *this, PERESOURCE **a2, char a3, char a4)
{
  __int64 v8; // rcx
  int v9; // r14d
  __int64 v10; // rax
  _BYTE v11[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 213) )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v10 + 24) = 1108LL;
        WdLogEvent5_WdAssertion(v10);
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
    }
    v12 = -5000000LL;
    do
    {
      v9 = *((_DWORD *)this + 424);
      KeWaitForSingleObject(
        *((PVOID *)this + 213),
        Executive,
        0,
        0,
        (PLARGE_INTEGER)((unsigned __int64)&v12 & -(__int64)(a4 != 0)));
    }
    while ( a4 && v9 != *((_DWORD *)this + 424) );
    if ( a3 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, (struct _KTHREAD **)this + 17);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    }
    if ( a2 )
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
  }
}
