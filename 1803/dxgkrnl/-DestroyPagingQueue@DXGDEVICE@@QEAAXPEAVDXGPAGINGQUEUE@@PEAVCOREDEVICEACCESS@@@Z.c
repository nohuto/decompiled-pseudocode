/*
 * XREFs of ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E978C
 * Callers:
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C001A250 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001ADFC (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0DE0 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00F32BC (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BE760 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00BEBC8 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyPagingQueue(PERESOURCE *this, struct DXGPAGINGQUEUE *a2, PERESOURCE **a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGPAGINGQUEUE *v8; // rcx
  struct DXGPAGINGQUEUE **v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 7559LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v11 + 24) = 7560LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this[2]->OwnerTable) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v12 + 24) = 7561LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v13 + 24) = 7564LL;
    WdLogEvent5_WdAssertion(v13);
  }
  DXGPAGINGQUEUE::DestroyCoreState(a2, a3);
  v8 = *(struct DXGPAGINGQUEUE **)a2;
  if ( *(struct DXGPAGINGQUEUE **)(*(_QWORD *)a2 + 8LL) != a2
    || (v9 = (struct DXGPAGINGQUEUE **)*((_QWORD *)a2 + 1), *v9 != a2) )
  {
    __fastfail(3u);
  }
  *v9 = v8;
  *((_QWORD *)v8 + 1) = v9;
  DXGPAGINGQUEUE::~DXGPAGINGQUEUE(a2);
  ExFreePoolWithTag(a2, 0);
}
