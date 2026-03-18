/*
 * XREFs of ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2990
 * Callers:
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FD9FC (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C01A24A0 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2B0C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppp @ 0x1C002CACC (McTemplateK0ppp.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00BD360 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C015EA98 (-DdiDestroyHwQueue@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGHWQUEUE::DestroyCoreState(DXGHWQUEUE *this, PERESOURCE **a2)
{
  __int64 v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  bool v9; // zf
  char v10; // si
  void *v11; // rdx
  DXGDEVICESYNCOBJECT *v12; // rcx

  v2 = *((_QWORD *)this + 2);
  v5 = *(_QWORD *)(v2 + 16);
  if ( !*(_DWORD *)(v5 + 72) )
  {
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 104));
    v2 = *((_QWORD *)this + 2);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 62LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a2 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]);
  if ( !*((_BYTE *)this + 64) )
  {
    v9 = *((_QWORD *)this + 5) == 0LL;
    v10 = 1;
    *((_BYTE *)this + 64) = 1;
    if ( !v9 )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
        v10 = 0;
      else
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 520LL)
                                                 + 8LL)
                                     + 304LL))(*((_QWORD *)this + 5));
      if ( v10 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 16LL)
                                                             + 520LL)
                                                 + 8LL)
                                     + 264LL))(*((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    v11 = (void *)*((_QWORD *)this + 4);
    if ( v11 )
    {
      ADAPTER_RENDER::DdiDestroyHwQueue(*(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL), v11, v7);
      *((_QWORD *)this + 4) = 0LL;
    }
    v12 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 6);
    if ( v12 )
      DXGDEVICESYNCOBJECT::DestroyCoreState(v12);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp((__int64)v12, &EventDestroyHwQueue, v7, *((_QWORD *)this + 2), 0LL, this);
    }
  }
}
