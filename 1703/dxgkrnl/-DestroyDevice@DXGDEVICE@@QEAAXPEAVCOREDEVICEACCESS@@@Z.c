/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0EFC
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0188E3C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendDestroyDevice@DXGADAPTER@@QEAAXII@Z @ 0x1C002FEB4 (-VmBusSendDestroyDevice@DXGADAPTER@@QEAAXII@Z.c)
 *     Template_ppqpttq @ 0x1C0034E3C (Template_ppqpttq.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BB470 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00C91A8 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00CD954 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00D5E34 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00E6A04 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FE5F8 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00FF4D8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(DXGDEVICE *this, struct COREDEVICEACCESS *a2)
{
  void *v4; // rcx
  unsigned int i; // ebx
  __int64 v6; // rsi
  void *v7; // rcx
  DXGPAGINGQUEUE *j; // rbx
  DXGDEVICESYNCOBJECT *k; // rbx
  DXGCONTEXT *m; // rbx
  void *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int HostProcess; // eax
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  DXGDEVICE::FlushDeferredDestruction(this, a2, 0, 0);
  for ( i = 0; i < *((_DWORD *)this + 452); *((_QWORD *)this + v6 + 201) = 0LL )
  {
    v6 = i;
    v7 = (void *)*((_QWORD *)this + i + 169);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    v4 = (void *)*((_QWORD *)this + i + 201);
    *((_QWORD *)this + i + 169) = 0LL;
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    ++i;
  }
  for ( j = (DXGPAGINGQUEUE *)*((_QWORD *)this + 47); j != (DXGDEVICE *)((char *)this + 376) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, a2);
  for ( k = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 49);
        k != (DXGDEVICE *)((char *)this + 392) && k;
        k = *(DXGDEVICESYNCOBJECT **)k )
  {
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  }
  for ( m = (DXGCONTEXT *)*((_QWORD *)this + 43); m != (DXGDEVICE *)((char *)this + 344) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, (PERESOURCE **)a2);
  v11 = (void *)*((_QWORD *)this + 52);
  if ( v11 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(*((ADAPTER_RENDER **)this + 2), v11);
    *((_QWORD *)this + 52) = 0LL;
  }
  v12 = *((_QWORD *)this + 74);
  if ( v12 )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 432LL);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v4);
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v18, Current);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v13 + 8) + 400LL))(v12);
    if ( v18 )
    {
      v15 = v18 + 112;
      *(_QWORD *)(v18 + 120) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
    }
    *((_QWORD *)this + 74) = 0LL;
  }
  if ( *((_QWORD *)this + 75) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 8LL) + 120LL))();
    *((_QWORD *)this + 75) = 0LL;
  }
  v16 = *((_QWORD *)this + 225);
  if ( v16 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *(ADAPTER_DISPLAY **)(v16 + 2280),
      (int (*)(struct OUTPUTDUPL_MGR *, void *))SwapChainObOpenProcedure,
      this);
  if ( *((_BYTE *)this + 1822) )
  {
    DXGPROCESS::CloseAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2));
    *((_BYTE *)this + 1822) = 0;
  }
  if ( *((_DWORD *)this + 84) )
  {
    HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
    DXGADAPTER::VmBusSendDestroyDevice(
      *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
      HostProcess,
      *((_DWORD *)this + 84));
    *((_DWORD *)this + 84) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_ppqpttq(
        *((unsigned __int8 *)this + 1818),
        &EventDestroyDevice,
        *((_QWORD *)this + 2),
        *(_QWORD *)(*((_QWORD *)this + 5) + 56LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 82),
        this,
        *((unsigned __int8 *)this + 1817),
        *((unsigned __int8 *)this + 1818),
        *((_DWORD *)this + 83));
  }
}
