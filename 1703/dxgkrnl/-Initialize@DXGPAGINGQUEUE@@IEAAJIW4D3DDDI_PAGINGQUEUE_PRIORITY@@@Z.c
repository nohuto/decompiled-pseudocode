/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C00FE6A4
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00BFDFC (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00D7AB0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00D8C70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
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
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  struct DXGDEVICE *v23; // rsi
  char *v24; // r13
  struct ADAPTER_RENDER *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  DXGGLOBAL *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // r8
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v46; // rcx
  struct _VIDSCH_SYNC_OBJECT *v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rbx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _BYTE v62[8]; // [rsp+68h] [rbp-29h] BYREF
  char v63; // [rsp+70h] [rbp-21h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 v64; // [rsp+78h] [rbp-19h] BYREF
  __int64 v65; // [rsp+F8h] [rbp+67h] BYREF

  v5 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 186LL);
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v6 + 432) + 8LL) + 888LL))(
           *(_QWORD *)(v5 + 592),
           a2,
           a3,
           (char *)this + 32);
    v13 = v8;
    if ( v8 < 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      *(_QWORD *)(v14 + 24) = *((_QWORD *)this + 2);
LABEL_4:
      *(_QWORD *)(v14 + 32) = v13;
      WdLogEvent5_WdWarning(v14);
      return (unsigned int)v13;
    }
  }
  memset(&v64, 0, sizeof(v64));
  v16 = *((_QWORD *)this + 2);
  v64.Flags.Value |= 0x10u;
  v64.Type = D3DDDI_MONITORED_FENCE;
  v64.Fence.FenceValue = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 2248LL);
  Global = DXGGLOBAL::GetGlobal(v64.Fence.FenceValue, v17, v18, v19);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v62, Global, v21, v22);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v62);
  v23 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  v24 = (char *)this + 40;
  v25 = (struct ADAPTER_RENDER *)*((_QWORD *)v23 + 2);
  v29 = DXGGLOBAL::GetGlobal(a2, v26, v27, v28);
  v30 = DXGGLOBAL::CreateSyncObject(
          v29,
          v25,
          v23,
          (unsigned int)(1 << a2),
          &v64,
          0,
          this,
          0LL,
          (struct DXGDEVICESYNCOBJECT **)this + 5,
          (unsigned int *)&v65,
          0LL);
  v35 = v30;
  if ( v30 >= 0 )
  {
    if ( v63 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v62);
    v37 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v37 + 168));
    v38 = ((unsigned int)v65 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v38 < *(_DWORD *)(v37 + 208) )
    {
      v39 = *(_QWORD *)(v37 + 192);
      v40 = *(unsigned int *)(v39 + 16 * v38 + 8);
      if ( (((unsigned int)v65 >> 26) & 0x30) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x30) && (v40 & 0xF) != 0 )
      {
        v41 = 2 * (((unsigned __int64)(unsigned int)v65 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v39 + 16 * (((unsigned __int64)(unsigned int)v65 >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
        {
          v42 = WdLogNewEntry5_WdAssertion(((unsigned int)v65 >> 26) & 0x30, (unsigned int)v65, v40, v39);
          *(_QWORD *)(v42 + 24) = 190LL;
          WdLogEvent5_WdAssertion(v42);
        }
        *(_DWORD *)(*(_QWORD *)(v37 + 192) + 8 * v41 + 8) &= ~0x1000u;
      }
    }
    *(_QWORD *)(v37 + 176) = 0LL;
    ExReleasePushLockExclusiveEx(v37 + 168, 0LL);
    KeLeaveCriticalRegion();
    if ( !v7 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX(
        (DXGAUTOMUTEX *)v62,
        (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v24 + 32LL) + 32LL),
        v43,
        v44);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v62);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *(DXGSYNCOBJECT **)(*(_QWORD *)v24 + 32LL),
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v24 + 16LL) + 16LL));
      v46 = *((_QWORD *)this + 2);
      v47 = VidSchSyncObject;
      v48 = *((_QWORD *)this + 4);
      v49 = *(_QWORD *)(*(_QWORD *)(v46 + 16) + 432LL);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v46);
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v65, Current);
      (*(void (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT *, UINT64))(*(_QWORD *)(v49 + 8) + 880LL))(
        v48,
        v47,
        v64.Fence.FenceValue);
      if ( v65 )
      {
        v54 = v65 + 112;
        *(_QWORD *)(v65 + 120) = 0LL;
        ExReleasePushLockExclusiveEx(v54, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v63 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v62, v51, v52, v53);
    }
    v55 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v55 + 168));
    v56 = HMGRTABLE::AllocHandle((unsigned int *)(v55 + 192), (__int64)this, 10LL, 0LL, 0);
    *(_QWORD *)(v55 + 176) = 0LL;
    v57 = v55 + 168;
    LODWORD(v55) = v56;
    ExReleasePushLockExclusiveEx(v57, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 6) = v55;
    if ( !(_DWORD)v55 )
    {
      v14 = WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
      v13 = -1073741801LL;
      *(_QWORD *)(v14 + 24) = this;
      goto LABEL_4;
    }
  }
  else
  {
    v36 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    *(_QWORD *)(v36 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v36 + 32) = v35;
    WdLogEvent5_WdWarning(v36);
    if ( v63 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v62);
  }
  return (unsigned int)v35;
}
