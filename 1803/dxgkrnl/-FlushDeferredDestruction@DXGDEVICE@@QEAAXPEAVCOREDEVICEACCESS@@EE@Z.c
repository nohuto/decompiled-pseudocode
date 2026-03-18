/*
 * XREFs of ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00F1184
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00F2C74 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F3654 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0159CC4 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C018C190 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::FlushDeferredDestruction(DXGDEVICE *this, PERESOURCE **a2, char a3, char a4)
{
  __int64 v8; // rcx
  int v9; // eax
  int v10; // r15d
  __int64 v11; // rax
  _BYTE v12[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 215) )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v11 + 24) = 1138LL;
        WdLogEvent5_WdAssertion(v11);
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
    }
    v13 = -5000000LL;
    v9 = *((_DWORD *)this + 428);
    do
    {
      v10 = v9;
      KeWaitForSingleObject(
        *((PVOID *)this + 215),
        Executive,
        0,
        0,
        (PLARGE_INTEGER)((unsigned __int64)&v13 & -(__int64)(a4 != 0)));
      if ( !a4 )
        break;
      v9 = *((_DWORD *)this + 428);
    }
    while ( v10 != v9 );
    if ( a3 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v12, (struct _KTHREAD **)this + 17);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    }
    if ( a2 )
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
  }
}
