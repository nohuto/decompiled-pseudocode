/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C008BE80 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F0AC0 (DxgkOpenResourceFromNtHandle.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016F7BC (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01944A0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C01AFB30 (DxgkOpenSyncObjectFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C01AFF10 (DxgkOpenSyncObjectFromNtHandle2.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C75B0 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0002C08 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0007E1C (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?AllocHandleUnsafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C001D808 (-AllocHandleUnsafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C007AEB0 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00AFDC0 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0197364 (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01BF7D0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01C246C (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Open(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGDEVICE *a3,
        struct DXGDEVICESYNCOBJECT **a4,
        unsigned int *a5,
        void **a6,
        unsigned __int64 *a7,
        unsigned int a8,
        struct DXGADAPTERSYNCOBJECT **a9,
        char a10,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a11)
{
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 *ThreadProperty; // rax
  __int64 *v23; // rbx
  __int64 v24; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  int *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  int v33; // r9d
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  struct DXGADAPTERSYNCOBJECT *v37; // rbp
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  int v39; // edi
  __int64 v40; // rax
  _QWORD *v41; // rax
  int *v42; // rdi
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  struct DXGGLOBAL *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rcx
  unsigned int v53; // edx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r9
  int v57; // r8d
  __int64 v58; // rcx
  unsigned int v59; // edi
  struct DXGGLOBAL *v60; // rax
  int v61; // ebx
  _QWORD *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 *v68; // rax
  __int64 *v69; // rsi
  __int64 v70; // rax
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v72; // rcx
  DXGDEVICESYNCOBJECT *v73; // rax
  DXGDEVICESYNCOBJECT *v74; // rbp
  __int64 v75; // rcx
  __int64 v76; // rax
  unsigned int v77; // edi
  struct DXGGLOBAL *Global; // rax
  _QWORD *v79; // r14
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 *v84; // rax
  __int64 *v85; // rdi
  __int64 v86; // rax
  struct _KTHREAD **v88; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int8 v89; // [rsp+58h] [rbp-50h]
  _BYTE v90[32]; // [rsp+60h] [rbp-48h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v16);
  v21 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v23 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v21 = *v23;
      }
    }
  }
  v89 = 0;
  v88 = (struct _KTHREAD **)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v24 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v24 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v24);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v88[1] == CurrentThread )
  {
    v26 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v26 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( v89 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v18, v20);
    v27[5] = &v88;
    v27[3] = 275LL;
    v27[4] = 4LL;
    v27[6] = 0LL;
    v27[7] = 0LL;
    WdLogEvent5_WdCriticalError(v27);
  }
  v28 = (int *)v88;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v28 + 1) == KeGetCurrentThread() )
  {
    if ( v28[6] <= 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v32 + 24) = 362LL;
      WdLogEvent5_WdAssertion(v32);
    }
    ++v28[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v28 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v33 = v28[7];
        if ( v33 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v30, &EventBlockThread, v31, v33);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v28);
      ExAcquirePushLockExclusiveEx(v28 + 4, 0LL);
    }
    if ( *((_QWORD *)v28 + 1) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v34 + 24) = 386LL;
      WdLogEvent5_WdAssertion(v34);
    }
    if ( v28[6] )
    {
      v35 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v35 + 24) = 387LL;
      WdLogEvent5_WdAssertion(v35);
    }
    *((_QWORD *)v28 + 1) = KeGetCurrentThread();
    v28[6] = 1;
  }
  LOBYTE(v30) = 1;
  v36 = *((_DWORD *)this + 41) >> 2;
  v89 = 1;
  if ( (v36 & 1) != 0 )
  {
    DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2);
    v30 = v89;
    v37 = DxgAdapterSyncObject;
LABEL_32:
    if ( v37 )
      goto LABEL_35;
    goto LABEL_33;
  }
  if ( !a2 || *((struct ADAPTER_RENDER **)this + 33) == a2 )
  {
    v37 = (DXGSYNCOBJECT *)((char *)this + 248);
    goto LABEL_32;
  }
  v37 = 0LL;
LABEL_33:
  if ( a2 )
  {
    v39 = -1073741801;
    goto LABEL_95;
  }
LABEL_35:
  if ( a9 )
    *a9 = v37;
  if ( ((*(_BYTE *)&a11.0 ^ *((_BYTE *)this + 164)) & 0x80u) != 0 )
  {
    v40 = WdLogNewEntry5_WdError(v30);
    *(_QWORD *)(v40 + 24) = 1819LL;
    WdLogEvent5_WdError(v40);
    v39 = -1073741811;
    goto LABEL_95;
  }
  if ( !(_BYTE)v30 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
    v41[5] = &v88;
    v41[3] = 275LL;
    v41[4] = 4LL;
    v41[6] = 0LL;
    v41[7] = 0LL;
    WdLogEvent5_WdCriticalError(v41);
  }
  v42 = (int *)v88;
  v89 = 0;
  if ( v88[1] != KeGetCurrentThread() )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
    v43[3] = 275LL;
    v43[4] = 4LL;
    v43[5] = v42;
    v43[6] = 0LL;
    v43[7] = 0LL;
    WdLogEvent5_WdCriticalError(v43);
  }
  if ( v42[6] <= 0 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v30);
    *(_QWORD *)(v44 + 24) = 406LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( v42[6]-- == 1 )
  {
    *((_QWORD *)v42 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v42 + 4, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v37 && *((_BYTE *)v37 + 25) )
  {
    v47 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v47 + 24) = this;
    *(_QWORD *)(v47 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v47);
    v39 = -1073741823;
    goto LABEL_95;
  }
  if ( (unsigned int)(*((_DWORD *)this + 40) - 5) <= 1 )
  {
    if ( !a3 || !a2 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v46);
      *(_QWORD *)(v70 + 24) = 1840LL;
      WdLogEvent5_WdAssertion(v70);
    }
    PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x58uLL, 0x4B677844u);
    if ( PoolWithQuotaTag
      && (v73 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(PoolWithQuotaTag, a3, a10, a5 != 0LL), (v74 = v73) != 0LL) )
    {
      v39 = DXGDEVICESYNCOBJECT::Initialize(v73, this, a11, a8);
      if ( v39 >= 0 )
      {
        v76 = *((_QWORD *)v74 + 4);
        if ( !*(_BYTE *)(v76 + 241)
          || *((_DWORD *)this + 6) <= 1u
          || (v77 = *(_DWORD *)(v76 + 76),
              Global = DXGGLOBAL::GetGlobal(v75),
              v39 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                      *((DXG_GUEST_GLOBAL_VMBUS **)Global + 142),
                      (struct DXGPROCESS *)v21,
                      a3,
                      0,
                      0LL,
                      v74,
                      v77,
                      a8,
                      a11),
              v39 >= 0) )
        {
          if ( a5 )
            *a5 = *((_DWORD *)v74 + 10);
          *a6 = (void *)*((_QWORD *)v74 + 7);
          *a7 = *((_QWORD *)v74 + 6);
          v79 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v79[3] = this;
          v79[4] = *((unsigned int *)v74 + 10);
          v80 = PsGetCurrentProcess();
          v82 = PsGetProcessDxgProcess(v80, v81);
          v83 = v82;
          if ( v82 )
          {
            if ( (*(_BYTE *)(v82 + 307) & 4) != 0 )
            {
              v84 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
              v85 = v84;
              if ( v84 )
              {
                ObfDereferenceObject(v84);
                v83 = *v85;
              }
            }
          }
          v79[5] = v83;
          WdLogEvent5_WdEvent(v79);
          if ( a4 )
            *a4 = v74;
          v39 = 0;
          goto LABEL_95;
        }
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v74);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v74);
    }
    else
    {
      v39 = -1073741801;
      v86 = WdLogNewEntry5_WdLowResource(v72);
      *(_QWORD *)(v86 + 24) = this;
      *(_QWORD *)(v86 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v86);
    }
    if ( a4 )
      *a4 = 0LL;
  }
  else
  {
    if ( a5 )
    {
      v48 = DXGGLOBAL::GetGlobal(v46);
      if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v48 + 42)) )
      {
        v50 = WdLogNewEntry5_WdAssertion(v49);
        *(_QWORD *)(v50 + 24) = 1946LL;
        WdLogEvent5_WdAssertion(v50);
      }
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v90,
        (struct DXGPROCESS *)v21);
      v51 = DXGPROCESS::AllocHandleUnsafe(v21, (__int64)this, 8LL);
      *a5 = v51;
      v53 = v51;
      if ( !v51 )
      {
        v54 = WdLogNewEntry5_WdLowResource(v52);
        v39 = -1073741801;
        *(_QWORD *)(v54 + 24) = this;
        *(_QWORD *)(v54 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v54);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v90);
        goto LABEL_95;
      }
      v55 = (v51 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v55 < *(_DWORD *)(v21 + 240) )
      {
        v56 = *(_QWORD *)(v21 + 224);
        v57 = *(_DWORD *)(v56 + 16 * v55 + 8);
        if ( ((v53 >> 25) & 0x60) == (*(_BYTE *)(v56 + 16 * v55 + 8) & 0x60) && (v57 & 0x2000) == 0 && (v57 & 0x1F) != 0 )
          *(_DWORD *)(v56 + 16LL * ((v53 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v90);
      if ( *((_BYTE *)this + 241) )
      {
        if ( *((_DWORD *)this + 6) )
        {
          v59 = *((_DWORD *)this + 19);
          v60 = DXGGLOBAL::GetGlobal(v58);
          v61 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                  *((DXG_GUEST_GLOBAL_VMBUS **)v60 + 142),
                  (struct DXGPROCESS *)v21,
                  0LL,
                  *a5,
                  this,
                  0LL,
                  v59,
                  0,
                  a11);
          if ( v61 < 0 )
          {
            DXGPROCESS::FreeHandleSafe((DXGPROCESS *)v21, *a5);
            *a5 = 0;
            v39 = v61;
            goto LABEL_95;
          }
        }
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v62 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v62[3] = this;
    if ( a5 )
      v63 = *a5;
    else
      v63 = 0LL;
    v62[4] = v63;
    v64 = PsGetCurrentProcess();
    v66 = PsGetProcessDxgProcess(v64, v65);
    v67 = v66;
    if ( v66 )
    {
      if ( (*(_BYTE *)(v66 + 307) & 4) != 0 )
      {
        v68 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v69 = v68;
        if ( v68 )
        {
          ObfDereferenceObject(v68);
          v67 = *v69;
        }
      }
    }
    v62[5] = v67;
    WdLogEvent5_WdEvent(v62);
    v39 = 0;
  }
LABEL_95:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v88);
  return (unsigned int)v39;
}
