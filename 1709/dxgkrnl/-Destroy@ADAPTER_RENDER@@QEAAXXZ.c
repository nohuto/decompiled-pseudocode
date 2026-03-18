/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0176FAC
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C0116C2C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0170FCC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002D40 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C000DBEC (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E814 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C000E840 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C007DF70 (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z @ 0x1C0089158 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_ADAPTER_INFO@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0188EDC (-DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(struct _KTHREAD **this)
{
  __int64 v2; // rcx
  struct DXGSYNCOBJECT *v3; // rdi
  PERESOURCE *Global; // rax
  struct _KTHREAD *v5; // rsi
  struct _KTHREAD *i; // r14
  __int64 v7; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v8; // rcx
  struct _KTHREAD *v9; // rcx
  char v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int j; // [rsp+30h] [rbp-18h]
  char v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+51h] [rbp+9h]

  v14 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v13);
  ADAPTER_RENDER::DestroyVirtualGpuState((ADAPTER_RENDER *)this, 0LL);
  v3 = this[82];
  if ( v3 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v2);
    DXGGLOBAL::DestroySyncObject(Global, v3, 0);
    this[82] = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 7, 0LL);
  v5 = (struct _KTHREAD *)(this + 30);
  this[8] = KeGetCurrentThread();
  for ( i = this[30]; i != v5; i = *(struct _KTHREAD **)i )
    DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(
      (struct _KTHREAD *)((char *)i - 56),
      *((struct DXGPROCESS **)i - 3),
      (struct ADAPTER_RENDER *)this);
  this[8] = 0LL;
  ExReleasePushLockExclusiveEx(this + 7, 0LL);
  KeLeaveCriticalRegion();
  if ( this[67] )
  {
    (*(void (**)(void))(*((_QWORD *)this[66] + 1) + 32LL))();
    this[67] = 0LL;
  }
  if ( this[64] )
  {
    (*(void (**)(void))(*((_QWORD *)this[63] + 1) + 40LL))();
    this[64] = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 7, 0LL);
  this[8] = KeGetCurrentThread();
  while ( *(struct _KTHREAD **)v5 != v5 )
    DXGPROCESS::DestroyAdapterInfo(
      *(DXGPROCESS **)(*(_QWORD *)v5 - 24LL),
      (struct ADAPTER_RENDER **)(*(_QWORD *)v5 - 56LL));
  this[8] = 0LL;
  ExReleasePushLockExclusiveEx(this + 7, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, this + 90);
  DXGPUSHLOCK::AcquireExclusive(v11);
  v7 = 0LL;
  for ( j = 2; (unsigned int)v7 < *((_DWORD *)this + 186); v7 = (unsigned int)(v7 + 1) )
  {
    v8 = (DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[94] + v7);
    if ( v8 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v8);
  }
  v9 = this[94];
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *((_DWORD *)this + 186) = 0;
  this[94] = 0LL;
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v13);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  if ( v14 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v13);
}
