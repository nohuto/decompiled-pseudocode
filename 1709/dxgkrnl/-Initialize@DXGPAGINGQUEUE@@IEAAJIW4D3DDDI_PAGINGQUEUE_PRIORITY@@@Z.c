/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x1C0091A90
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0092C50 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C007A79C (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C008AAE4 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C008BE80 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v15; // rax
  struct DXGGLOBAL *Global; // rax
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
  __int64 v29; // r9
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rsi
  __int64 v33; // rdi
  __int64 v34; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _BYTE v43[8]; // [rsp+68h] [rbp-29h] BYREF
  char v44; // [rsp+70h] [rbp-21h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 v45; // [rsp+78h] [rbp-19h] BYREF
  __int64 v46; // [rsp+F8h] [rbp+67h] BYREF

  v5 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 185LL);
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v6 + 528) + 8LL) + 888LL))(
           *(_QWORD *)(v5 + 592),
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
  memset(&v45, 0, sizeof(v45));
  v15 = *((_QWORD *)this + 2);
  v45.Flags.Value |= 0x10u;
  v45.Type = D3DDDI_MONITORED_FENCE;
  v45.Fence.FenceValue = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 2276LL);
  Global = DXGGLOBAL::GetGlobal(v45.Fence.FenceValue);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v43, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v43);
  v17 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
  v18 = (char *)this + 40;
  v19 = (struct ADAPTER_RENDER *)*((_QWORD *)v17 + 2);
  v20 = DXGGLOBAL::GetGlobal(a2);
  v21 = DXGGLOBAL::CreateSyncObject(
          v20,
          v19,
          v17,
          1 << a2,
          &v45,
          0,
          this,
          0LL,
          (struct DXGDEVICESYNCOBJECT **)this + 5,
          (unsigned int *)&v46,
          0LL);
  v25 = v21;
  if ( v21 >= 0 )
  {
    if ( v44 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v43);
    v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v27 + 200));
    v28 = ((unsigned int)v46 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *(_DWORD *)(v27 + 240) )
    {
      v29 = *(_QWORD *)(v27 + 224);
      if ( (((unsigned int)v46 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60)
        && (*(_DWORD *)(v29 + 16 * v28 + 8) & 0x1F) != 0 )
      {
        v30 = 2 * (((unsigned __int64)(unsigned int)v46 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v29 + 16 * (((unsigned __int64)(unsigned int)v46 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          v31 = WdLogNewEntry5_WdAssertion(((unsigned int)v46 >> 25) & 0x60);
          *(_QWORD *)(v31 + 24) = 191LL;
          WdLogEvent5_WdAssertion(v31);
        }
        *(_DWORD *)(*(_QWORD *)(v27 + 224) + 8 * v30 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v27 + 208) = 0LL;
    ExReleasePushLockExclusiveEx(v27 + 200, 0LL);
    KeLeaveCriticalRegion();
    if ( !v7 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX(
        (DXGAUTOMUTEX *)v43,
        (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v18 + 32LL) + 32LL));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           *(DXGSYNCOBJECT **)(*(_QWORD *)v18 + 32LL),
                           *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 16LL));
      v33 = *((_QWORD *)this + 4);
      v34 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL);
      Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v46, Current);
      (*(void (__fastcall **)(__int64, struct _VIDSCH_SYNC_OBJECT *, UINT64))(*(_QWORD *)(v34 + 8) + 880LL))(
        v33,
        VidSchSyncObject,
        v45.Fence.FenceValue);
      if ( v46 )
      {
        v36 = v46 + 136;
        *(_QWORD *)(v46 + 144) = 0LL;
        ExReleasePushLockExclusiveEx(v36, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( v44 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43);
    }
    v37 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v37 + 200));
    v38 = HMGRTABLE::AllocHandle((unsigned int *)(v37 + 224), (__int64)this, 10, 0, 0);
    *(_QWORD *)(v37 + 208) = 0LL;
    v39 = v37 + 200;
    LODWORD(v37) = v38;
    ExReleasePushLockExclusiveEx(v39, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)this + 6) = v37;
    if ( !(_DWORD)v37 )
    {
      v13 = WdLogNewEntry5_WdWarning(v41, v40, v42);
      v12 = -1073741801LL;
      *(_QWORD *)(v13 + 24) = this;
      goto LABEL_4;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v26 + 32) = v25;
    WdLogEvent5_WdWarning(v26);
    if ( v44 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v43);
  }
  return (unsigned int)v25;
}
