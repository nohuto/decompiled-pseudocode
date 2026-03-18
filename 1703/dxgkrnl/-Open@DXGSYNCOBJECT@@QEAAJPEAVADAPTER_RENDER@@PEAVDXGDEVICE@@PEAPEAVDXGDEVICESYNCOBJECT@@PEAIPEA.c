/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00D8CA0
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00D7AB0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C0100890 (DxgkOpenResourceFromNtHandle.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016BA84 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C0199150 (DxgkOpenSyncObjectFromNtHandle.c)
 *     DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0199510 (DxgkOpenSyncObjectFromNtHandle2.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000E090 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C00886F0 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00FF054 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01A5C5C (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01A85D0 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
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
  __int64 v21; // r9
  __int64 v22; // r13
  __int64 *ThreadProperty; // rax
  __int64 v24; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  int *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  struct DXGADAPTERSYNCOBJECT *v38; // rbp
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  int v40; // ebx
  __int64 v41; // rax
  _QWORD *v42; // rax
  int *v43; // rdi
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  PERESOURCE *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // r9d
  unsigned int v63; // eax
  __int64 v64; // rcx
  unsigned int v65; // edx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r9
  int v69; // r8d
  __int64 v70; // rcx
  _QWORD *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 *v77; // rax
  __int64 v78; // rax
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v80; // rcx
  DXGDEVICESYNCOBJECT *v81; // rax
  DXGDEVICESYNCOBJECT *v82; // rdi
  unsigned __int64 v83; // rcx
  _QWORD *v84; // rbp
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rbx
  __int64 *v90; // rax
  __int64 v91; // rax
  struct _KTHREAD **v93; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v94; // [rsp+38h] [rbp-50h]
  char v95[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v96; // [rsp+48h] [rbp-40h]
  int v97; // [rsp+50h] [rbp-38h]

  CurrentProcess = PsGetCurrentProcess(this);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v16);
  v22 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v22 = *ThreadProperty;
    }
  }
  v94 = 0;
  v93 = (struct _KTHREAD **)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v24 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    *(_QWORD *)(v24 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v24);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v93[1] == CurrentThread )
  {
    v26 = WdLogNewEntry5_WdAssertion(CurrentThread, v18, v20, v21);
    *(_QWORD *)(v26 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v26);
  }
  if ( v94 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v18, v20);
    v27[5] = &v93;
    v27[3] = 275LL;
    v27[4] = 4LL;
    v27[6] = 0LL;
    v27[7] = 0LL;
    WdLogEvent5_WdCriticalError(v27);
  }
  v28 = (int *)v93;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v28 + 1) == KeGetCurrentThread() )
  {
    if ( v28[6] <= 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
      *(_QWORD *)(v33 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v33);
    }
    ++v28[6];
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v28 + 4, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v34 = v28[7];
        if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v30, &EventBlockThread, v31, v34);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v28);
      ExAcquirePushLockExclusiveEx(v28 + 4, 0LL);
    }
    if ( *((_QWORD *)v28 + 1) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
      *(_QWORD *)(v35 + 24) = 375LL;
      WdLogEvent5_WdAssertion(v35);
    }
    if ( v28[6] )
    {
      v36 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
      *(_QWORD *)(v36 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v36);
    }
    *((_QWORD *)v28 + 1) = KeGetCurrentThread();
    v28[6] = 1;
  }
  LOBYTE(v30) = 1;
  v37 = *((_DWORD *)this + 37) >> 2;
  v94 = 1;
  if ( (v37 & 1) != 0 )
  {
    DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2);
    v30 = v94;
    v38 = DxgAdapterSyncObject;
LABEL_32:
    if ( v38 )
      goto LABEL_35;
    goto LABEL_33;
  }
  if ( !a2 || *((struct ADAPTER_RENDER **)this + 31) == a2 )
  {
    v38 = (DXGSYNCOBJECT *)((char *)this + 232);
    goto LABEL_32;
  }
  v38 = 0LL;
LABEL_33:
  if ( a2 )
  {
    v40 = -1073741801;
    goto LABEL_100;
  }
LABEL_35:
  if ( a9 )
    *a9 = v38;
  if ( ((*(_BYTE *)&a11.0 ^ *((_BYTE *)this + 148)) & 0x80u) != 0 )
  {
    v41 = WdLogNewEntry5_WdError(v30, v29);
    *(_QWORD *)(v41 + 24) = 1795LL;
    WdLogEvent5_WdError(v41);
    v40 = -1073741811;
    goto LABEL_100;
  }
  if ( !(_BYTE)v30 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
    v42[5] = &v93;
    v42[3] = 275LL;
    v42[4] = 4LL;
    v42[6] = 0LL;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  v43 = (int *)v93;
  v94 = 0;
  if ( v93[1] != KeGetCurrentThread() )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
    v44[3] = 275LL;
    v44[4] = 4LL;
    v44[5] = v43;
    v44[6] = 0LL;
    v44[7] = 0LL;
    WdLogEvent5_WdCriticalError(v44);
  }
  if ( v43[6] <= 0 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
    *(_QWORD *)(v45 + 24) = 395LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( v43[6]-- == 1 )
  {
    *((_QWORD *)v43 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v43 + 4, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v38 && *((_BYTE *)v38 + 25) )
  {
    v51 = WdLogNewEntry5_WdEvent(v48);
    *(_QWORD *)(v51 + 24) = this;
    *(_QWORD *)(v51 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v51);
    v40 = -1073741823;
    goto LABEL_100;
  }
  if ( (unsigned int)(*((_DWORD *)this + 36) - 5) <= 1 )
  {
    if ( !a3 || !a2 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v48, v47, v49, v50);
      *(_QWORD *)(v78 + 24) = 1816LL;
      WdLogEvent5_WdAssertion(v78);
    }
    PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x58uLL, 0x4B677844u);
    if ( PoolWithQuotaTag
      && (v81 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(PoolWithQuotaTag, a3, a10, a5 != 0LL), (v82 = v81) != 0LL) )
    {
      v40 = DXGDEVICESYNCOBJECT::Initialize(v81, this, a11, a8);
      if ( v40 >= 0 )
      {
        if ( a5 )
          *a5 = *((_DWORD *)v82 + 10);
        *a6 = (void *)*((_QWORD *)v82 + 7);
        v83 = *((_QWORD *)v82 + 6);
        *a7 = v83;
        v84 = (_QWORD *)WdLogNewEntry5_WdEvent(v83);
        v84[3] = this;
        v85 = *((unsigned int *)v82 + 10);
        v84[4] = v85;
        v86 = PsGetCurrentProcess(v85);
        v88 = PsGetProcessDxgProcess(v86, v87);
        v89 = v88;
        if ( v88 )
        {
          if ( (*(_BYTE *)(v88 + 275) & 2) != 0 )
          {
            v90 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
            if ( v90 )
              v89 = *v90;
          }
        }
        v84[5] = v89;
        WdLogEvent5_WdEvent(v84);
        if ( a4 )
          *a4 = v82;
        v40 = 0;
        goto LABEL_100;
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v82);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v82);
    }
    else
    {
      v40 = -1073741801;
      v91 = WdLogNewEntry5_WdLowResource(v80);
      *(_QWORD *)(v91 + 24) = this;
      *(_QWORD *)(v91 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v91);
    }
    if ( a4 )
      *a4 = 0LL;
    goto LABEL_100;
  }
  if ( a5 )
  {
    v52 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v53 = WdLogNewEntry5_WdAssertion(0LL, v47, v49, v50);
      *(_QWORD *)(v53 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v53);
      v52 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
    }
    if ( !ExIsResourceAcquiredSharedLite(v52[42]) )
    {
      v58 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
      *(_QWORD *)(v58 + 24) = 1899LL;
      WdLogEvent5_WdAssertion(v58);
    }
    v96 = v22 + 168;
    if ( v22 != -168 && *(struct _KTHREAD **)(v22 + 176) == KeGetCurrentThread() )
    {
      v59 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
      *(_QWORD *)(v59 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v59);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v22 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v62 = *(_DWORD *)(v22 + 184);
        if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v60, &EventBlockThread, v61, v62);
      }
      ExAcquirePushLockExclusiveEx(v22 + 168, 0LL);
    }
    *(_QWORD *)(v22 + 176) = KeGetCurrentThread();
    v97 = 2;
    v63 = HMGRTABLE::AllocHandle((unsigned int *)(v22 + 192), (__int64)this, 8LL, 0LL, 0);
    *a5 = v63;
    v65 = v63;
    if ( !v63 )
    {
      v66 = WdLogNewEntry5_WdLowResource(v64);
      v40 = -1073741801;
      *(_QWORD *)(v66 + 24) = this;
      *(_QWORD *)(v66 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v66);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v95);
      goto LABEL_100;
    }
    v67 = (v63 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v67 < *(_DWORD *)(v22 + 208) )
    {
      v68 = *(_QWORD *)(v22 + 192);
      v69 = *(_DWORD *)(v68 + 16 * v67 + 8);
      if ( ((v65 >> 26) & 0x30) == (*(_BYTE *)(v68 + 16 * v67 + 8) & 0x30) && (v69 & 0x1000) == 0 && (v69 & 0xF) != 0 )
        *(_DWORD *)(v68 + 16LL * ((v65 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
    }
    *(_QWORD *)(v22 + 176) = 0LL;
    ExReleasePushLockExclusiveEx(v22 + 168, 0LL);
    KeLeaveCriticalRegion();
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v71 = (_QWORD *)WdLogNewEntry5_WdEvent(v48);
  v71[3] = this;
  if ( a5 )
    v72 = *a5;
  else
    v72 = 0LL;
  v71[4] = v72;
  v73 = PsGetCurrentProcess(v70);
  v75 = PsGetProcessDxgProcess(v73, v74);
  v76 = v75;
  if ( v75 )
  {
    if ( (*(_BYTE *)(v75 + 275) & 2) != 0 )
    {
      v77 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( v77 )
        v76 = *v77;
    }
  }
  v71[5] = v76;
  WdLogEvent5_WdEvent(v71);
  v40 = 0;
LABEL_100:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v93);
  return (unsigned int)v40;
}
