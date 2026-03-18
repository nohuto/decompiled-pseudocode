/*
 * XREFs of ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00919E4
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0092C50 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0093D2C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00954A0 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00B024C (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGPAGINGQUEUE::DestroyCoreState(DXGPAGINGQUEUE *this, PERESOURCE **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  DXGDEVICESYNCOBJECT *v7; // rcx
  __int64 v8; // rax

  v4 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v4 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 104));
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v8 + 24) = 66LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  if ( !*((_BYTE *)this + 56) )
  {
    v6 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 56) = 1;
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL) + 8LL)
                                     + 896LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 592LL));
      *((_QWORD *)this + 4) = 0LL;
    }
    v7 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
    if ( v7 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v7);
  }
}
