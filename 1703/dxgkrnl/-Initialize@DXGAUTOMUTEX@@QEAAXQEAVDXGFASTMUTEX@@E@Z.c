/*
 * XREFs of ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C00145BC
 * Callers:
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C008725C (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C00C1B98 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C017ED98 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C01887E0 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOMUTEX::Initialize(DXGAUTOMUTEX *this, struct DXGFASTMUTEX *const a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax

  *(_QWORD *)this = a2;
  v4 = a3;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v6 + 24) = 474LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !v4 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) == CurrentThread )
    {
      v8 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
      *(_QWORD *)(v8 + 24) = 479LL;
      WdLogEvent5_WdAssertion(v8);
    }
  }
}
