/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C008EE90
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C008D1C0 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0001450 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C00014E0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0002004 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002034 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_pqPR1XR1pq @ 0x1C00395DC (Template_pqPR1XR1pq.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008F63C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00D8C70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        void *a4)
{
  struct _KEVENT *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE *PoolWithTag; // rdi
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 ObjectCount; // rbx
  PVOID v30; // rcx
  _QWORD *v31; // r13
  __int64 v32; // r14
  DXGPUSHLOCK *v33; // rcx
  D3DKMT_HANDLE v34; // ebx
  unsigned int v35; // ecx
  __int64 v36; // r8
  int v37; // edx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  PRKEVENT v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rax
  int Object; // [rsp+28h] [rbp-E0h]
  PVOID *Objecta; // [rsp+28h] [rbp-E0h]
  int v63; // [rsp+30h] [rbp-D8h]
  __int64 v64; // [rsp+48h] [rbp-C0h]
  _BYTE v65[8]; // [rsp+58h] [rbp-B0h] BYREF
  char v66; // [rsp+60h] [rbp-A8h]
  _BYTE v67[8]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v68; // [rsp+78h] [rbp-90h]
  _BYTE v69[32]; // [rsp+80h] [rbp-88h] BYREF
  int v70; // [rsp+A0h] [rbp-68h]
  PVOID P; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v72[32]; // [rsp+B0h] [rbp-58h] BYREF
  int v73; // [rsp+D0h] [rbp-38h]
  DXGPUSHLOCK *v74; // [rsp+D8h] [rbp-30h]
  _BYTE v75[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v76[8]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v77; // [rsp+F8h] [rbp-10h]
  __int64 v78; // [rsp+100h] [rbp-8h]
  char v79; // [rsp+108h] [rbp+0h]
  _BYTE v80[8]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v81; // [rsp+118h] [rbp+10h]
  __int64 v82; // [rsp+120h] [rbp+18h]
  char v83; // [rsp+128h] [rbp+20h]
  struct DXGDEVICE *v84; // [rsp+130h] [rbp+28h]
  char v85; // [rsp+138h] [rbp+30h]
  PVOID v86; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v87[4]; // [rsp+150h] [rbp+48h] BYREF
  char v88; // [rsp+170h] [rbp+68h]
  int v89; // [rsp+178h] [rbp+70h] BYREF
  __int64 v90; // [rsp+180h] [rbp+78h]
  __int64 v91; // [rsp+188h] [rbp+80h]
  int v92; // [rsp+190h] [rbp+88h]
  __int128 v93; // [rsp+198h] [rbp+90h]
  PRKEVENT Event; // [rsp+1F8h] [rbp+F0h] BYREF
  void *v96; // [rsp+200h] [rbp+F8h]

  v96 = a4;
  Event = 0LL;
  v7 = 0LL;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v67, a3);
  v8 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  v78 = v8;
  v79 = 0;
  if ( v8 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24));
    v77 = -1LL;
  }
  v9 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  v82 = v9;
  v83 = 0;
  if ( v9 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v9 + 24));
    v81 = -1LL;
  }
  v84 = a3;
  v85 = 0;
  LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v75);
  if ( (int)v10 < 0 )
    goto LABEL_6;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65, Global, v12, v13);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v65);
  PoolWithTag = 0LL;
  v70 = 0;
  P = 0LL;
  v73 = 0;
  v68 = 0LL;
  if ( !a4 )
  {
    hAsyncEvent = a1->hAsyncEvent;
    if ( hAsyncEvent )
    {
      v16 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v86, 0LL);
      v7 = (struct _KEVENT *)v86;
      v10 = v16;
      if ( v16 < 0 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
        *(_QWORD *)(v21 + 24) = a1->hAsyncEvent;
        *(_QWORD *)(v21 + 32) = v10;
        WdLogEvent5_WdWarning(v21);
        if ( P != v72 && P )
          ExFreePoolWithTag(P, 0);
        if ( v68 != v69 && v68 )
          ExFreePoolWithTag(v68, 0);
        v22 = v66 == 0;
        goto LABEL_17;
      }
    }
    else
    {
      v90 = 0LL;
      v91 = 0LL;
      v89 = 48;
      v92 = 512;
      v93 = 0LL;
      v23 = ObCreateObject(0LL, ExEventObjectType, &v89, 0LL, 0LL, 24, 0, 0, &Event);
      v10 = v23;
      if ( v23 < 0 )
      {
        v28 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
        *(_QWORD *)(v28 + 24) = v10;
        WdLogEvent5_WdWarning(v28);
        if ( P != v72 && P )
          ExFreePoolWithTag(P, 0);
        if ( v68 != v69 && v68 )
          ExFreePoolWithTag(v68, 0);
        if ( v66 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
LABEL_6:
        COREACCESS::~COREACCESS((COREACCESS *)v80);
        COREACCESS::~COREACCESS((COREACCESS *)v76);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v67);
        return (unsigned int)v10;
      }
      KeInitializeEvent(Event, SynchronizationEvent, 0);
      v7 = Event;
    }
    PoolWithTag = v68;
  }
  ObjectCount = a1->ObjectCount;
  if ( (unsigned int)ObjectCount <= 4 )
  {
    PoolWithTag = v69;
    v68 = v69;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
    {
LABEL_37:
      LODWORD(v10) = -1073741801;
      if ( P != v72 && P )
      {
        ExFreePoolWithTag(P, 0);
        PoolWithTag = v68;
      }
      if ( PoolWithTag == v69 || !PoolWithTag )
        goto LABEL_44;
      v30 = PoolWithTag;
LABEL_43:
      ExFreePoolWithTag(v30, 0);
LABEL_44:
      v22 = v66 == 0;
LABEL_17:
      if ( !v22 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
      COREACCESS::~COREACCESS((COREACCESS *)v80);
      COREACCESS::~COREACCESS((COREACCESS *)v76);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v67);
LABEL_102:
      if ( v7 )
      {
        KeSetEvent(v7, 0, 0);
        ObfDereferenceObject(v7);
      }
      return (unsigned int)v10;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * (unsigned int)ObjectCount, 0x4B677844u);
    v68 = PoolWithTag;
  }
  v70 = ObjectCount;
  if ( !PoolWithTag )
    goto LABEL_37;
  memset(PoolWithTag, 0, 8 * ObjectCount);
  PoolWithTag = v68;
  if ( !v68 )
    goto LABEL_37;
  v31 = (_QWORD *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&P, a1->ObjectCount);
  if ( !v31 )
  {
    LODWORD(v10) = -1073741801;
    goto LABEL_47;
  }
  v32 = 0LL;
  if ( a1->ObjectCount )
  {
    v33 = (struct DXGPROCESS *)((char *)a2 + 168);
    v74 = (struct DXGPROCESS *)((char *)a2 + 168);
    while ( 1 )
    {
      v34 = a1->ObjectHandleArray[v32];
      DXGPUSHLOCK::AcquireShared(v33);
      v35 = (v34 >> 6) & 0xFFFFFF;
      if ( v35 < *((_DWORD *)a2 + 52)
        && (v36 = *((_QWORD *)a2 + 24),
            v37 = *(_DWORD *)(v36 + 16LL * v35 + 8),
            ((v34 >> 26) & 0x30) == (*(_BYTE *)(v36 + 16LL * v35 + 8) & 0x30))
        && (v37 & 0x1000) == 0
        && (v37 & 0xF) != 0
        && (*(_BYTE *)(v36 + 16LL * v35 + 8) & 0xF) == 0xB )
      {
        v10 = *(_QWORD *)(v36 + 16LL * v35);
      }
      else
      {
        v10 = 0LL;
      }
      ExReleasePushLockSharedEx(v74, 0LL);
      KeLeaveCriticalRegion();
      if ( !v10 )
        break;
      if ( (*(_DWORD *)(v10 + 64) & 0x20) != 0 )
      {
        v43 = WdLogNewEntry5_WdError(v39, v38);
        *(_QWORD *)(v43 + 24) = a1->ObjectHandleArray[v32];
        WdLogEvent5_WdError(v43);
        LODWORD(v10) = -1073741790;
        goto LABEL_47;
      }
      if ( *(struct DXGDEVICE **)(v10 + 16) != a3 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
        v42[3] = a1->ObjectHandleArray[v32];
        v42[4] = *(_QWORD *)(v10 + 16);
        v42[5] = a3;
        WdLogEvent5_WdError(v42);
        LODWORD(v10) = -1073741811;
        goto LABEL_47;
      }
      v33 = v74;
      v31[v32] = *(_QWORD *)(v10 + 32);
      v32 = (unsigned int)(v32 + 1);
      if ( (unsigned int)v32 >= a1->ObjectCount )
        goto LABEL_66;
    }
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
    LODWORD(v10) = -1073741811;
    v44[3] = a2;
    v44[4] = a1->ObjectHandleArray[v32];
    v44[5] = (unsigned int)v32;
    v44[6] = -1073741811LL;
    WdLogEvent5_WdError(v44);
LABEL_47:
    if ( P != v72 && P )
      ExFreePoolWithTag(P, 0);
    v30 = v68;
    if ( v68 == v69 || !v68 )
      goto LABEL_44;
    goto LABEL_43;
  }
LABEL_66:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
    (__int64)v87,
    v31,
    a1->ObjectCount);
  if ( v88 )
  {
    if ( !v87[0] )
    {
      LODWORD(v10) = -1073741801;
LABEL_74:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v87);
      goto LABEL_47;
    }
    v45 = WdLogNewEntry5_WdError(v41, v40);
    *(_QWORD *)(v45 + 24) = 4173LL;
LABEL_73:
    WdLogEvent5_WdError(v45);
    LODWORD(v10) = -1073741811;
    goto LABEL_74;
  }
  v46 = 0LL;
  if ( a1->ObjectCount )
  {
    while ( 1 )
    {
      VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                           (DXGSYNCOBJECT *)v31[v46],
                           *((struct ADAPTER_RENDER **)a3 + 2));
      *(_QWORD *)&PoolWithTag[8 * v46] = VidSchSyncObject;
      if ( !VidSchSyncObject )
        break;
      v46 = (unsigned int)(v46 + 1);
      if ( (unsigned int)v46 >= a1->ObjectCount )
        goto LABEL_78;
    }
    v45 = WdLogNewEntry5_WdError(v49, v48);
    *(_QWORD *)(v45 + 24) = a1->ObjectHandleArray[v46];
    goto LABEL_73;
  }
LABEL_78:
  if ( Event )
    ObfReferenceObject(Event);
  LOBYTE(v63) = v96 == 0LL;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, struct _KEVENT *, int, int, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 408LL) + 8LL) + 560LL))(
                   a1->ObjectCount,
                   PoolWithTag,
                   a1->FenceValueArray,
                   v7,
                   Object,
                   v63,
                   *((_QWORD *)a3 + 75),
                   v96);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v64) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    Template_pqPR1XR1pq(v51, v50, v52, a3, Objecta, PoolWithTag, a1->FenceValueArray, a1->hAsyncEvent, v64);
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v87);
  if ( P != v72 && P )
    ExFreePoolWithTag(P, 0);
  if ( v68 != v69 && v68 )
    ExFreePoolWithTag(v68, 0);
  if ( v66 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
  COREACCESS::~COREACCESS((COREACCESS *)v80);
  COREACCESS::~COREACCESS((COREACCESS *)v76);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v67);
  if ( (int)v10 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
    goto LABEL_102;
  }
  if ( v7 )
  {
    v53 = Event;
    if ( v7 == Event )
    {
      do
      {
        LODWORD(v10) = KeWaitForSingleObject(v7, Executive, 0, 1u, 0LL);
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
        {
          v59 = WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
          *(_QWORD *)(v59 + 24) = 4249LL;
          WdLogEvent5_WdWarning(v59);
          LODWORD(v10) = -1073741130;
          goto LABEL_102;
        }
      }
      while ( (_DWORD)v10 == 257 );
      if ( (int)v10 >= 0 )
        goto LABEL_105;
      v58 = WdLogNewEntry5_WdAssertion(v55, v54, v56, v57);
      *(_QWORD *)(v58 + 24) = 4258LL;
      WdLogEvent5_WdAssertion(v58);
      goto LABEL_102;
    }
  }
  else
  {
LABEL_105:
    v53 = Event;
  }
  if ( v53 )
    ObfDereferenceObject(v53);
  return 0LL;
}
