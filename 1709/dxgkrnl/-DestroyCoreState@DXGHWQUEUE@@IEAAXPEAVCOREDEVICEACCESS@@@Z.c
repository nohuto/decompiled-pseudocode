/*
 * XREFs of ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01ACE40
 * Callers:
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0544 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C01AC97C (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01ACF5C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00B024C (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGHWQUEUE::DestroyCoreState(DXGHWQUEUE *this, PERESOURCE **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  bool v9; // zf
  char v10; // si
  __int64 v11; // rcx
  DXGDEVICESYNCOBJECT *v12; // rcx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_DWORD *)(v4 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 104));
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 53LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  if ( !*((_BYTE *)this + 56) )
  {
    v9 = *((_QWORD *)this + 4) == 0LL;
    v10 = 1;
    *((_BYTE *)this + 56) = 1;
    if ( !v9 )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
        v10 = 0;
      else
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      v11 = *((_QWORD *)this + 2);
      v13[1] = 0LL;
      v13[0] = 9LL;
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL)
                                                                       + 504LL)
                                                           + 8LL)
                                               + 240LL))(
        *(_QWORD *)(v11 + 232),
        v13);
      if ( v10 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
      *((_QWORD *)this + 4) = 0LL;
    }
    v12 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
    if ( v12 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v12, v5, v7);
  }
}
