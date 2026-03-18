/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01735BC
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0120958 (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C0001978 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C04 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C30 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C002A06C (-DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C0096094 (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C00D715C (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGSYNCOBJECT *v9; // rdi
  PERESOURCE *Global; // rax
  __int64 v11; // r9
  struct _KTHREAD *v12; // rsi
  struct _KTHREAD *i; // r14
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v22; // rcx
  struct _KTHREAD *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  char v27[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v28; // [rsp+28h] [rbp-20h]
  int j; // [rsp+30h] [rbp-18h]
  char v30; // [rsp+50h] [rbp+8h] BYREF
  char v31; // [rsp+51h] [rbp+9h]

  v31 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v30, a2, a3, a4);
  ADAPTER_RENDER::DestroyVirtualGpuState((ADAPTER_RENDER *)this);
  v9 = this[70];
  if ( v9 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v6, v5, v7, v8);
    DXGGLOBAL::DestroySyncObject(Global, v9, 0LL, v11);
    this[70] = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 7, 0LL);
  v12 = (struct _KTHREAD *)(this + 30);
  this[8] = KeGetCurrentThread();
  for ( i = this[30]; i != v12; i = *(struct _KTHREAD **)i )
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(
      (struct _KTHREAD *)((char *)i - 48),
      *((struct DXGPROCESS **)i - 2),
      (struct ADAPTER_RENDER *)this);
  this[8] = 0LL;
  ExReleasePushLockExclusiveEx(this + 7, 0LL);
  KeLeaveCriticalRegion();
  if ( this[55] )
  {
    (*(void (**)(void))(*((_QWORD *)this[54] + 1) + 32LL))();
    this[55] = 0LL;
  }
  if ( this[52] )
  {
    (*(void (**)(void))(*((_QWORD *)this[51] + 1) + 40LL))();
    this[52] = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 7, 0LL);
  this[8] = KeGetCurrentThread();
  while ( *(struct _KTHREAD **)v12 != v12 )
    DXGPROCESS::DestroyAdapterInfo(
      *(DXGPROCESS **)(*(_QWORD *)v12 - 16LL),
      (struct DXGPROCESS_ADAPTER_INFO *)(*(_QWORD *)v12 - 48LL),
      v14,
      v15);
  this[8] = 0LL;
  ExReleasePushLockExclusiveEx(this + 7, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, this + 78, v16, v17);
  DXGPUSHLOCK::AcquireExclusive(v28);
  v21 = 0LL;
  for ( j = 2; (unsigned int)v21 < *((_DWORD *)this + 162); v21 = (unsigned int)(v21 + 1) )
  {
    v22 = (DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[82] + v21);
    if ( v22 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v22);
  }
  v23 = this[82];
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  *((_DWORD *)this + 162) = 0;
  this[82] = 0LL;
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v30, v18, v19, v20);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  if ( v31 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v30, v24, v25, v26);
}
