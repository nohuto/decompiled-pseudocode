/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F3654
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0DE0 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C018C190 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttq @ 0x1C002F9E0 (McTemplateK0ppqpttq.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00A380C (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00BD360 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BE760 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00E1AFC (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00F1184 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00F7FF0 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00FD9FC (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C018557C (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(ADAPTER_RENDER **this, PERESOURCE **a2)
{
  __int64 v4; // r8
  unsigned int i; // esi
  __int64 v6; // rbx
  ReferenceCounted *v7; // rcx
  DXGPAGINGQUEUE *j; // rbx
  DXGDEVICESYNCOBJECT *k; // rbx
  __int64 v10; // rcx
  DXGCONTEXT *m; // rbx
  ADAPTER_RENDER *v12; // rdx
  ADAPTER_RENDER *v13; // rsi
  __int64 v14; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v16; // rcx
  ADAPTER_RENDER *v17; // rcx
  DXGPROCESS *v18; // rcx
  ADAPTER_RENDER *v19; // rax
  struct _MDL *v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+50h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+5Ch] [rbp-2Ch]
  int v24; // [rsp+60h] [rbp-28h]
  int v25; // [rsp+68h] [rbp-20h]
  __int64 v26; // [rsp+90h] [rbp+8h] BYREF

  DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, a2, 0, 0);
  for ( i = 0; i < *((_DWORD *)this + 424); this[v6 + 187] = 0LL )
  {
    v6 = i;
    v7 = this[i + 171];
    if ( v7 )
    {
      ReferenceCounted::Release(v7);
      this[i + 171] = 0LL;
    }
    operator delete(this[i++ + 187]);
  }
  for ( j = this[49]; j != (DXGPAGINGQUEUE *)(this + 49) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, a2);
  for ( k = this[51]; k != (DXGDEVICESYNCOBJECT *)(this + 51) && k; k = *(DXGDEVICESYNCOBJECT **)k )
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  v10 = (__int64)this[216];
  if ( v10 )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 65) + 8LL) + 624LL))();
    this[216] = 0LL;
  }
  for ( m = this[45]; m != (DXGCONTEXT *)(this + 45) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, (struct COREDEVICEACCESS *)a2);
  v12 = this[54];
  if ( v12 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(this[2], v12, v4);
    this[54] = 0LL;
  }
  v13 = this[76];
  if ( v13 )
  {
    v14 = *((_QWORD *)this[2] + 68);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v10, (__int64)v12);
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v26, Current);
    (*(void (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(v14 + 8) + 400LL))(v13);
    if ( v26 )
    {
      v16 = v26 + 144;
      *(_QWORD *)(v26 + 152) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
    this[76] = 0LL;
  }
  if ( this[77] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 65) + 8LL) + 120LL))();
    this[77] = 0LL;
  }
  v17 = this[211];
  if ( v17 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *((ADAPTER_DISPLAY **)v17 + 307),
      (__int64 (__fastcall *)(__int64, __int64))SwapChainObOpenProcedure,
      (__int64)this);
  if ( *((_BYTE *)this + 1710) )
  {
    DXGPROCESS::CloseAdapter(this[5], this[2]);
    *((_BYTE *)this + 1710) = 0;
  }
  if ( *((_DWORD *)this + 84) )
  {
    v18 = this[5];
    v21 = 0LL;
    HostProcess = DXGPROCESS::GetHostProcess(v18);
    v25 = *((_DWORD *)this + 84);
    v19 = this[2];
    v23 = 0;
    v24 = 1;
    VmBusSendSyncMessage(
      *(struct VMBCHANNEL__ **)(*((_QWORD *)v19 + 2) + 4080LL),
      (struct DXGKVMB_COMMAND_BASE *)&v21,
      0x20u,
      0LL,
      0LL,
      v20);
    *((_DWORD *)this + 84) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v20) = *((_DWORD *)this + 82);
      McTemplateK0ppqpttq(
        *((unsigned __int8 *)this + 1706),
        &EventDestroyDevice,
        (__int64)this[2],
        *((_QWORD *)this[5] + 8),
        *((_QWORD *)this[2] + 2),
        v20,
        this,
        *((unsigned __int8 *)this + 1705),
        *((unsigned __int8 *)this + 1706),
        *((_DWORD *)this + 83));
    }
  }
}
