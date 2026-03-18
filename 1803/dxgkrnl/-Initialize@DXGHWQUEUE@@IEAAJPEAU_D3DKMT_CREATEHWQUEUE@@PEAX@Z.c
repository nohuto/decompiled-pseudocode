/*
 * XREFs of ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C01A30D4
 * Callers:
 *     ?CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z @ 0x1C01A24A0 (-CreateHwQueue@DXGCONTEXT@@QEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAXPEAPEAVDXGHWQUEUE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C00164D0 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
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
 *     McTemplateK0ppp @ 0x1C002CACC (McTemplateK0ppp.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA230 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z @ 0x1C015E03C (-DdiCreateHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATEHWQUEUE@@@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::Initialize(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v5; // rcx
  PERESOURCE *Global; // rax
  __int64 v7; // rax
  char *v8; // r12
  struct DXGDEVICE *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct ADAPTER_RENDER *v12; // rsi
  DXGGLOBAL *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  D3DKMT_HANDLE v21; // esi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  HANDLE hHwQueue; // rcx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  _BYTE v41[8]; // [rsp+60h] [rbp-69h] BYREF
  char v42; // [rsp+68h] [rbp-61h]
  _DXGKARG_CREATEHWQUEUE v43; // [rsp+70h] [rbp-59h] BYREF
  struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 v44; // [rsp+A0h] [rbp-29h] BYREF
  unsigned int v45; // [rsp+130h] [rbp+67h] BYREF
  void *v46; // [rsp+140h] [rbp+77h]

  v46 = a3;
  memset(&v44, 0, sizeof(v44));
  v44.Type = D3DDDI_MONITORED_FENCE;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v5);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v41, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v41);
  v7 = *((_QWORD *)this + 2);
  v8 = (char *)this + 48;
  v9 = *(struct DXGDEVICE **)(v7 + 16);
  v10 = *(unsigned int *)(v7 + 360);
  v11 = 1 << v10;
  v12 = (struct ADAPTER_RENDER *)*((_QWORD *)v9 + 2);
  v13 = DXGGLOBAL::GetGlobal(v10);
  v14 = DXGGLOBAL::CreateSyncObject(
          v13,
          v12,
          v9,
          v11,
          &v44,
          0,
          0LL,
          0LL,
          (struct DXGDEVICESYNCOBJECT **)this + 6,
          &v45,
          0LL);
  v18 = v14;
  if ( v14 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdWarning(v19);
    if ( v42 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
    return (unsigned int)v18;
  }
  if ( v42 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
  v20 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v20 + 208));
  v21 = v45;
  v22 = (v45 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v22 < *(_DWORD *)(v20 + 248) )
  {
    v23 = *(_QWORD *)(v20 + 232);
    if ( ((v45 >> 25) & 0x60) == (*(_BYTE *)(v23 + 16 * v22 + 8) & 0x60)
      && (*(_DWORD *)(v23 + 16 * v22 + 8) & 0x1F) != 0 )
    {
      if ( (*(_DWORD *)(v23 + 16 * (((unsigned __int64)v45 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
      {
        v24 = WdLogNewEntry5_WdAssertion((v45 >> 25) & 0x60);
        *(_QWORD *)(v24 + 24) = 215LL;
        WdLogEvent5_WdAssertion(v24);
        v23 = *(_QWORD *)(v20 + 232);
      }
      *(_DWORD *)(v23 + 16 * (((unsigned __int64)v21 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v20 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v20 + 208, 0LL);
  KeLeaveCriticalRegion();
  memset(&v43, 0, sizeof(v43));
  v43.Flags.Value = a2->Flags.Value;
  v43.pPrivateDriverData = v46;
  v43.PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v25 = *(_QWORD *)v8;
  v43.hHwQueue = this;
  v43.hHwQueueProgressFence = v21;
  v26 = (void *)*((_QWORD *)DXGSYNCOBJECT::GetMonitoredFenceStorage(*(DXGSYNCOBJECT **)(v25 + 32)) + 1);
  v43.HwQueueProgressFenceGPUVirtualAddress = v44.MonitoredFence.FenceValueGPUVirtualAddress;
  v27 = *((_QWORD *)this + 2);
  v43.HwQueueProgressFenceCPUVirtualAddress = v26;
  v28 = ADAPTER_RENDER::DdiCreateHwQueue(
          *(ADAPTER_RENDER **)(*(_QWORD *)(v27 + 16) + 16LL),
          *(void **)(v27 + 184),
          &v43);
  v18 = v28;
  if ( v28 >= 0 )
  {
    hHwQueue = v43.hHwQueue;
    *((_QWORD *)this + 4) = v43.hHwQueue;
  }
  if ( v28 == -1073741822 )
  {
    *((_QWORD *)this + 4) = 153LL;
  }
  else if ( v28 < 0 )
  {
    v35 = WdLogNewEntry5_WdError(hHwQueue);
    *(_QWORD *)(v35 + 24) = v18;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v18;
  }
  v30 = (*(__int64 (__fastcall **)(DXGHWQUEUE *, _QWORD, struct _D3DKMT_CREATEHWQUEUE *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 520LL) + 8LL)
                                                                                                + 232LL))(
          this,
          *(_QWORD *)(*((_QWORD *)this + 2) + 256LL),
          a2,
          (char *)this + 40);
  v18 = v30;
  if ( v30 < 0 )
  {
    v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    *(_QWORD *)(v34 + 24) = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
LABEL_18:
    *(_QWORD *)(v34 + 32) = v18;
    WdLogEvent5_WdWarning(v34);
    return (unsigned int)v18;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v41,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*(_QWORD *)v8 + 32LL) + 32LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                       *(DXGSYNCOBJECT **)(*(_QWORD *)v8 + 32LL),
                       *(struct ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 16LL));
  (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)
                                                                                       + 520LL)
                                                                           + 8LL)
                                                               + 272LL))(
    *((_QWORD *)this + 5),
    VidSchSyncObject);
  if ( v42 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41);
  v37 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 40LL), (__int64)this, 0xFu);
  *((_DWORD *)this + 6) = v37;
  if ( !v37 )
  {
    v34 = WdLogNewEntry5_WdWarning(0LL, v38, v39);
    v18 = -1073741801LL;
    *(_QWORD *)(v34 + 24) = this;
    goto LABEL_18;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppp(v37, &EventCreateHwQueue, v39, *((_QWORD *)this + 2), v37, this);
  return (unsigned int)v18;
}
