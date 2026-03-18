/*
 * XREFs of ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1D74
 * Callers:
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C00134E0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0013E4C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00C0968 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FE5F8 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C00FEA04 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyPagingQueue(
        PERESOURCE *this,
        struct DXGPAGINGQUEUE *a2,
        struct COREDEVICEACCESS *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGPAGINGQUEUE *v15; // rcx
  struct DXGPAGINGQUEUE **v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v17 + 24) = 7304LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v18 + 24) = 7305LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this[2]->OwnerTable) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v19 + 24) = 7306LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v20 + 24) = 7309LL;
    WdLogEvent5_WdAssertion(v20);
  }
  DXGPAGINGQUEUE::DestroyCoreState(a2, a3);
  v15 = *(struct DXGPAGINGQUEUE **)a2;
  v16 = (struct DXGPAGINGQUEUE **)*((_QWORD *)a2 + 1);
  if ( *(struct DXGPAGINGQUEUE **)(*(_QWORD *)a2 + 8LL) != a2 || *v16 != a2 )
    __fastfail(3u);
  *v16 = v15;
  *((_QWORD *)v15 + 1) = v16;
  DXGPAGINGQUEUE::~DXGPAGINGQUEUE(a2);
  ExFreePoolWithTag(a2, 0);
}
