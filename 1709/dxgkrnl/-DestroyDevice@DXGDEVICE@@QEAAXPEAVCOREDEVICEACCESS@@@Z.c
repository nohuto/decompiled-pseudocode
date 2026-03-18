/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0093D2C
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009C68C (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C019E1DC (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0014C84 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqpttq @ 0x1C0026108 (McTemplateK0ppqpttq.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C00807E4 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C008A1A4 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00919E4 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C009CA38 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00AC068 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00B024C (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0544 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C0198920 (-VmBusSendSyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(ADAPTER_RENDER **this, struct COREDEVICEACCESS *a2)
{
  __int64 v4; // r8
  unsigned int i; // esi
  __int64 v6; // rbx
  ReferenceCounted *v7; // rcx
  ADAPTER_RENDER *v8; // rcx
  DXGPAGINGQUEUE *j; // rbx
  DXGDEVICESYNCOBJECT *k; // rbx
  DXGCONTEXT *m; // rbx
  ADAPTER_RENDER *v12; // rdx
  ADAPTER_RENDER *v13; // rsi
  __int64 v14; // rbx
  struct _KTHREAD **Current; // rax
  ADAPTER_RENDER *v16; // rcx
  DXGPROCESS *v17; // rcx
  ADAPTER_RENDER *v18; // rax
  struct _MDL *v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+50h] [rbp-38h] BYREF
  unsigned int HostProcess; // [rsp+58h] [rbp-30h]
  int v22; // [rsp+5Ch] [rbp-2Ch]
  int v23; // [rsp+60h] [rbp-28h]
  int v24; // [rsp+68h] [rbp-20h]
  char v25; // [rsp+90h] [rbp+8h] BYREF

  DXGDEVICE::FlushDeferredDestruction((DXGDEVICE *)this, a2, 0, 0);
  for ( i = 0; i < *((_DWORD *)this + 420); this[v6 + 185] = 0LL )
  {
    v6 = i;
    v7 = this[i + 169];
    if ( v7 )
    {
      ReferenceCounted::Release(v7);
      this[i + 169] = 0LL;
    }
    v8 = this[i + 185];
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    ++i;
  }
  for ( j = this[47]; j != (DXGPAGINGQUEUE *)(this + 47) && j; j = *(DXGPAGINGQUEUE **)j )
    DXGPAGINGQUEUE::DestroyCoreState(j, (PERESOURCE **)a2);
  for ( k = this[49]; k != (DXGDEVICESYNCOBJECT *)(this + 49) && k; k = *(DXGDEVICESYNCOBJECT **)k )
    DXGDEVICESYNCOBJECT::DestroyCoreState(k);
  if ( this[214] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 63) + 8LL) + 528LL))();
    this[214] = 0LL;
  }
  for ( m = this[43]; m != (DXGCONTEXT *)(this + 43) && m; m = *(DXGCONTEXT **)m )
    DXGCONTEXT::DestroyContext(m, a2);
  v12 = this[52];
  if ( v12 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(this[2], v12, v4);
    this[52] = 0LL;
  }
  v13 = this[74];
  if ( v13 )
  {
    v14 = *((_QWORD *)this[2] + 66);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v25, Current);
    (*(void (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(v14 + 8) + 400LL))(v13);
    DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v25);
    this[74] = 0LL;
  }
  if ( this[75] )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this[2] + 63) + 8LL) + 120LL))();
    this[75] = 0LL;
  }
  v16 = this[209];
  if ( v16 )
    ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
      *((ADAPTER_DISPLAY **)v16 + 288),
      (int (*)(struct OUTPUTDUPL_MGR *, void *))&SwapChainObOpenProcedure,
      this);
  if ( *((_BYTE *)this + 1694) )
  {
    DXGPROCESS::CloseAdapter(this[5], this[2]);
    *((_BYTE *)this + 1694) = 0;
  }
  if ( *((_DWORD *)this + 84) )
  {
    v17 = this[5];
    v20 = 0LL;
    HostProcess = DXGPROCESS::GetHostProcess(v17);
    v24 = *((_DWORD *)this + 84);
    v18 = this[2];
    v22 = 0;
    v23 = 1;
    VmBusSendSyncMessage(
      *(struct VMBCHANNEL__ **)(*((_QWORD *)v18 + 2) + 3888LL),
      (struct DXGKVMB_COMMAND_BASE *)&v20,
      0x20u,
      0LL,
      0LL,
      v19);
    *((_DWORD *)this + 84) = 0;
  }
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v19) = *((_DWORD *)this + 82);
      McTemplateK0ppqpttq(
        *((unsigned __int8 *)this + 1690),
        &EventDestroyDevice,
        (__int64)this[2],
        *((_QWORD *)this[5] + 7),
        *((_QWORD *)this[2] + 2),
        v19,
        this,
        *((unsigned __int8 *)this + 1689),
        *((unsigned __int8 *)this + 1690),
        *((_DWORD *)this + 83));
    }
  }
}
