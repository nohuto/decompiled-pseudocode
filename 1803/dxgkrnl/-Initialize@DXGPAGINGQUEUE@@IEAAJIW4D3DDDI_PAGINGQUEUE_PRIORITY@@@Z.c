/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00BE814
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00F2914 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006078 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x1C00167AC (-GetMonitoredFenceStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00975C4 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA230 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGPAGINGQUEUE::Initialize(DXGPAGINGQUEUE *this, unsigned int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r9
  char v7; // r12
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  PERESOURCE *Global; // rax
  struct DXGDEVICE *v17; // rdi
  char *v18; // r13
  struct ADAPTER_RENDER *v19; // rsi
  DXGGLOBAL *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *MonitoredFenceStorage; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rsi
  __int64 v37; // rdi
  __int64 v38; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v40; // rcx
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  _BYTE v47[8]; // [rsp+68h] [rbp-29h] BYREF
  char v48; // [rsp+70h] [rbp-21h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 v49; // [rsp+78h] [rbp-19h] BYREF
  __int64 v50; // [rsp+F8h] [rbp+67h] BYREF

  v5 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 185LL);
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v6 + 544) + 8LL) + 888LL))(
           *(_QWORD *)(v5 + 608),
           a2,
           a3,
           (char *)this + 32);
    v12 = v8;
    if ( v8 < 0 )
    {
      v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = *((_QWORD *)this + 2);
LABEL_4:
      *(_QWORD *)(v13 + 32) = v12;
      WdLogEvent5_WdWarning(v13);
      return (unsigned int)v12;
    }
  }
  memset(&v49, 0, sizeof(v49));
  v15 = *((_QWORD *)this + 2);
  v49.Flags.Value |= 0x10u;
  v49.Type = D3DDDI_MONITORED_FENCE;
  v49.Fence.FenceValue = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 2424LL);
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v49.Fence.FenceValue);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
  v17 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  v18 = (char *)this + 40;
  v19 = (struct ADAPTER_RENDER *)*((_QWORD *)v17 + 2);
  v20 = DXGGLOBAL::GetGlobal(a2);
  v21 = DXGGLOBAL::CreateSyncObject(
          v20,
          v19,
          v17,
          1 << a2,
          &v49,
          0,
          this,
          0LL,
          (struct DXGDEVICESYNCOBJECT **)this + 5,
          (unsigned int *)&v50,
          0LL);
  v25 = v21;
  if ( v21 < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v26 + 32) = v25;
    WdLogEvent5_WdWarning(v26);
    if ( v48 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
    return (unsigned int)v25;
  }
  if ( v48 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
  v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v27 + 208));
  v28 = ((unsigned int)v50 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v28 < *(_DWORD *)(v27 + 248) )
  {
    v29 = *(_QWORD *)(v27 + 232);
    if ( (((unsigned int)v50 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
      && (*(_DWORD *)(v29 + 16 * v28 + 8) & 0x1F) != 0 )
    {
      v30 = 2 * (((unsigned __int64)(unsigned int)v50 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v29 + 16 * (((unsigned __int64)(unsigned int)v50 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(((unsigned int)v50 >> 25) & 0x60);
        *(_QWORD *)(v31 + 24) = 215LL;
        WdLogEvent5_WdAssertion(v31);
        v29 = *(_QWORD *)(v27 + 232);
      }
      *(_DWORD *)(v29 + 8 * v30 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v27 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v27 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 )
  {
LABEL_24:
    v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v41 + 208));
    v42 = HMGRTABLE::AllocHandle((unsigned int *)(v41 + 232), (__int64)this, 10, 0, 0);
    *(_QWORD *)(v41 + 216) = 0LL;
    v43 = v41 + 208;
    LODWORD(v41) = v42;
    ExReleasePushLockExclusiveEx(v43, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 6) = v41;
    if ( !(_DWORD)v41 )
    {
      v13 = WdLogNewEntry5_WdWarning(v45, v44, v46);
      v12 = -1073741801LL;
      *(_QWORD *)(v13 + 24) = this;
      goto LABEL_4;
    }
    return (unsigned int)v25;
  }
  v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL);
  v33 = *(_QWORD *)(v32 + 552);
  v34 = *(_QWORD *)(v32 + 544);
  MonitoredFenceStorage = DXGSYNCOBJECT::GetMonitoredFenceStorage(*(DXGSYNCOBJECT **)(*(_QWORD *)v18 + 32LL));
  result = (*(__int64 (__fastcall **)(__int64, struct VIDMM_MONITORED_FENCE_STORAGE *, char *))(*(_QWORD *)(v34 + 8)
                                                                                              + 944LL))(
             v33,
             MonitoredFenceStorage,
             (char *)this + 48);
  LODWORD(v25) = result;
  if ( (int)result >= 0 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v47,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v18 + 32LL) + 32LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v47);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *(DXGSYNCOBJECT **)(*(_QWORD *)v18 + 32LL),
                         *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL));
    v37 = *((_QWORD *)this + 4);
    v38 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL);
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v50, Current);
    (*(void (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT *, UINT64))(*(_QWORD *)(v38 + 8) + 880LL))(
      v37,
      VidSchSyncObject,
      v49.Fence.FenceValue);
    if ( v50 )
    {
      v40 = v50 + 144;
      *(_QWORD *)(v50 + 152) = 0LL;
      ExReleasePushLockExclusiveEx(v40, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v48 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v47);
    goto LABEL_24;
  }
  return result;
}
