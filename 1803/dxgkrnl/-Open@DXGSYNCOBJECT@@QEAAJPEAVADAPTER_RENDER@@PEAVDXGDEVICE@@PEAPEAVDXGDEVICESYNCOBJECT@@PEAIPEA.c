/*
 * XREFs of ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F8E90
 * Callers:
 *     DxgkOpenResourceFromNtHandle @ 0x1C00D44B0 (DxgkOpenResourceFromNtHandle.c)
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C00D9CCC (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA230 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0145FF8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01808D0 (-VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle @ 0x1C01ABE50 (DxgkOpenSyncObjectFromNtHandle.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C01CA6D4 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C0004BC4 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C001654C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?AllocHandleUnsafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0023E50 (-AllocHandleUnsafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C0097D58 (--0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00BCF2C (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0183D7C (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01C08B8 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C01C38D0 (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
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
  __int64 ProcessDxgProcess; // rax
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 *ThreadProperty; // rax
  __int64 *v20; // rbx
  __int64 v21; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rax
  struct _KTHREAD **v25; // rbx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  struct DXGADAPTERSYNCOBJECT *v35; // rbp
  struct DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  int v37; // edi
  __int64 v38; // rax
  _QWORD *v39; // rax
  struct _KTHREAD **v40; // rdi
  _QWORD *v41; // rax
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  struct DXGGLOBAL *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // eax
  __int64 v54; // rcx
  unsigned int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // r9
  int v59; // r8d
  unsigned int v60; // edi
  struct DXGGLOBAL *v61; // rax
  int v62; // ebx
  __int64 v63; // rdx
  __int64 v64; // rcx
  _QWORD *v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rbx
  __int64 *v70; // rax
  __int64 *v71; // rsi
  __int64 v72; // rax
  DXGDEVICESYNCOBJECT *PoolWithQuotaTag; // rax
  __int64 v74; // rcx
  DXGDEVICESYNCOBJECT *v75; // rax
  DXGDEVICESYNCOBJECT *v76; // rbp
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned int v80; // edi
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v82; // rcx
  _QWORD *v83; // r14
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 *v89; // rax
  __int64 *v90; // rdi
  __int64 v91; // rax
  struct _KTHREAD **v93; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int8 v94; // [rsp+58h] [rbp-50h]
  _BYTE v95[32]; // [rsp+60h] [rbp-48h] BYREF

  CurrentProcess = PsGetCurrentProcess(this, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v18 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v20 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v18 = *v20;
      }
    }
  }
  v94 = 0;
  v93 = (struct _KTHREAD **)((char *)this + 32);
  if ( this == (DXGSYNCOBJECT *)-32LL )
  {
    v21 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v21 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v21);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v93[1] == CurrentThread )
  {
    v23 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v23 + 24) = 515LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( v94 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v24[5] = &v93;
    v24[3] = 275LL;
    v24[4] = 4LL;
    v24[6] = 0LL;
    v24[7] = 0LL;
    WdLogEvent5_WdCriticalError(v24);
  }
  v25 = v93;
  KeEnterCriticalRegion();
  if ( v25[1] == KeGetCurrentThread() )
  {
    v27 = *((_DWORD *)v25 + 6);
    if ( v27 <= 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v28 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v28);
      v27 = *((_DWORD *)v25 + 6);
    }
    v29 = v27 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v25 + 2, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v31 = *((_DWORD *)v25 + 7);
        if ( v31 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v26, &EventBlockThread, v30, v31);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v25);
      ExAcquirePushLockExclusiveEx(v25 + 2, 0LL);
    }
    if ( v25[1] )
    {
      v32 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v32 + 24) = 430LL;
      WdLogEvent5_WdAssertion(v32);
    }
    if ( *((_DWORD *)v25 + 6) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v33 + 24) = 431LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v25[1] = KeGetCurrentThread();
    v29 = 1;
  }
  LOBYTE(v26) = 1;
  *((_DWORD *)v25 + 6) = v29;
  v34 = *((_DWORD *)this + 43) >> 2;
  v94 = 1;
  if ( (v34 & 1) != 0 )
  {
    DxgAdapterSyncObject = DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2);
    v26 = v94;
    v35 = DxgAdapterSyncObject;
LABEL_32:
    if ( v35 )
      goto LABEL_35;
    goto LABEL_33;
  }
  if ( !a2 || *((struct ADAPTER_RENDER **)this + 35) == a2 )
  {
    v35 = (DXGSYNCOBJECT *)((char *)this + 264);
    goto LABEL_32;
  }
  v35 = 0LL;
LABEL_33:
  if ( a2 )
  {
    v37 = -1073741801;
    goto LABEL_99;
  }
LABEL_35:
  if ( a9 )
    *a9 = v35;
  if ( ((*((_BYTE *)this + 172) ^ *(_BYTE *)&a11.0) & 0x80u) != 0 )
  {
    v38 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v38 + 24) = 1967LL;
    WdLogEvent5_WdError(v38);
    v37 = -1073741811;
    goto LABEL_99;
  }
  if ( !(_BYTE)v26 )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26);
    v39[5] = &v93;
    v39[3] = 275LL;
    v39[4] = 4LL;
    v39[6] = 0LL;
    v39[7] = 0LL;
    WdLogEvent5_WdCriticalError(v39);
  }
  v40 = v93;
  v94 = 0;
  if ( v93[1] != KeGetCurrentThread() )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26);
    v41[3] = 275LL;
    v41[4] = 4LL;
    v41[5] = v40;
    v41[6] = 0LL;
    v41[7] = 0LL;
    WdLogEvent5_WdCriticalError(v41);
  }
  v42 = *((_DWORD *)v40 + 6);
  if ( v42 <= 0 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v26);
    *(_QWORD *)(v43 + 24) = 450LL;
    WdLogEvent5_WdAssertion(v43);
    v42 = *((_DWORD *)v40 + 6);
  }
  v44 = v42 - 1;
  *((_DWORD *)v40 + 6) = v44;
  if ( !v44 )
  {
    v40[1] = 0LL;
    ExReleasePushLockExclusiveEx(v40 + 2, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v35 && *((_BYTE *)v35 + 25) )
  {
    v48 = WdLogNewEntry5_WdEvent(v46, v45);
    *(_QWORD *)(v48 + 24) = this;
    *(_QWORD *)(v48 + 32) = -1073741823LL;
    WdLogEvent5_WdEvent(v48);
    v37 = -1073741823;
    goto LABEL_99;
  }
  if ( *((_BYTE *)this + 250) && (*(_BYTE *)(v18 + 323) & 0xC) == 0 && !*((_BYTE *)this + 251) )
  {
    v49 = WdLogNewEntry5_WdWarning(v46, v45, v47);
    *(_QWORD *)(v49 + 24) = this;
    *(_QWORD *)(v49 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v49);
    v37 = -1073741823;
    goto LABEL_99;
  }
  if ( (unsigned int)(*((_DWORD *)this + 42) - 5) <= 1 )
  {
    if ( !a3 || !a2 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v46);
      *(_QWORD *)(v72 + 24) = 2007LL;
      WdLogEvent5_WdAssertion(v72);
    }
    PoolWithQuotaTag = (DXGDEVICESYNCOBJECT *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x58uLL, 0x4B677844u);
    if ( PoolWithQuotaTag
      && (v75 = DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(PoolWithQuotaTag, a3, a10, a5 != 0LL), (v76 = v75) != 0LL) )
    {
      v37 = DXGDEVICESYNCOBJECT::Initialize(v75, this, a11, a8);
      if ( v37 >= 0 )
      {
        v79 = *((_QWORD *)v76 + 4);
        if ( !*(_BYTE *)(v79 + 249)
          || *((_DWORD *)this + 6) <= 1u
          || (v80 = *(_DWORD *)(v79 + 76),
              Global = DXGGLOBAL::GetGlobal(v78),
              v37 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                      *((DXG_GUEST_GLOBAL_VMBUS **)Global + 152),
                      (struct DXGPROCESS *)v18,
                      a3,
                      0,
                      0LL,
                      v76,
                      v80,
                      a8,
                      a11),
              v37 >= 0) )
        {
          if ( a5 )
            *a5 = *((_DWORD *)v76 + 10);
          *a6 = (void *)*((_QWORD *)v76 + 7);
          v82 = *((_QWORD *)v76 + 6);
          *a7 = v82;
          v83 = (_QWORD *)WdLogNewEntry5_WdEvent(v82, v77);
          v83[3] = this;
          v84 = *((unsigned int *)v76 + 10);
          v83[4] = v84;
          v86 = PsGetCurrentProcess(v84, v85);
          v87 = PsGetProcessDxgProcess(v86);
          v88 = v87;
          if ( v87 )
          {
            if ( (*(_BYTE *)(v87 + 323) & 4) != 0 )
            {
              v89 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
              v90 = v89;
              if ( v89 )
              {
                ObfDereferenceObject(v89);
                v88 = *v90;
              }
            }
          }
          v83[5] = v88;
          WdLogEvent5_WdEvent(v83);
          if ( a4 )
            *a4 = v76;
          v37 = 0;
          goto LABEL_99;
        }
      }
      DXGDEVICESYNCOBJECT::DetachGlobalSyncObjectOnError(v76);
      DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v76);
    }
    else
    {
      v37 = -1073741801;
      v91 = WdLogNewEntry5_WdLowResource(v74);
      *(_QWORD *)(v91 + 24) = this;
      *(_QWORD *)(v91 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v91);
    }
    if ( a4 )
      *a4 = 0LL;
  }
  else
  {
    if ( a5 )
    {
      v50 = DXGGLOBAL::GetGlobal(v46);
      if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v50 + 43)) )
      {
        v52 = WdLogNewEntry5_WdAssertion(v51);
        *(_QWORD *)(v52 + 24) = 2113LL;
        WdLogEvent5_WdAssertion(v52);
      }
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v95,
        (struct _KTHREAD **)v18);
      v53 = DXGPROCESS::AllocHandleUnsafe(v18, (__int64)this, 8LL);
      *a5 = v53;
      v55 = v53;
      if ( !v53 )
      {
        v56 = WdLogNewEntry5_WdLowResource(v54);
        v37 = -1073741801;
        *(_QWORD *)(v56 + 24) = this;
        *(_QWORD *)(v56 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v56);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v95);
        goto LABEL_99;
      }
      v57 = (v53 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v57 < *(_DWORD *)(v18 + 248) )
      {
        v58 = *(_QWORD *)(v18 + 232);
        v59 = *(_DWORD *)(v58 + 16 * v57 + 8);
        if ( ((v55 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x60) && (v59 & 0x2000) == 0 && (v59 & 0x1F) != 0 )
          *(_DWORD *)(v58 + 16LL * ((v55 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v95);
      if ( *((_BYTE *)this + 249) )
      {
        if ( *((_DWORD *)this + 6) )
        {
          v60 = *((_DWORD *)this + 19);
          v61 = DXGGLOBAL::GetGlobal(v46);
          v62 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
                  *((DXG_GUEST_GLOBAL_VMBUS **)v61 + 152),
                  (struct DXGPROCESS *)v18,
                  0LL,
                  *a5,
                  this,
                  0LL,
                  v60,
                  0,
                  a11);
          if ( v62 < 0 )
          {
            DXGPROCESS::FreeHandleSafe((DXGPROCESS *)v18, *a5);
            *a5 = 0;
            v37 = v62;
            goto LABEL_99;
          }
        }
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v65 = (_QWORD *)WdLogNewEntry5_WdEvent(v46, v45);
    v65[3] = this;
    if ( a5 )
      v66 = *a5;
    else
      v66 = 0LL;
    v65[4] = v66;
    v67 = PsGetCurrentProcess(v64, v63);
    v68 = PsGetProcessDxgProcess(v67);
    v69 = v68;
    if ( v68 )
    {
      if ( (*(_BYTE *)(v68 + 323) & 4) != 0 )
      {
        v70 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v71 = v70;
        if ( v70 )
        {
          ObfDereferenceObject(v70);
          v69 = *v71;
        }
      }
    }
    v65[5] = v69;
    WdLogEvent5_WdEvent(v65);
    v37 = 0;
  }
LABEL_99:
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v93);
  return (unsigned int)v37;
}
