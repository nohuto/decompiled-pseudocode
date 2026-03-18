/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C00D15C4
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00D0CAC (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0002664 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002694 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0009794 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00349D4 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1XR1pq @ 0x1C0034A80 (McTemplateK0pqPR1XR1pq.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D1E5C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D1EB4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        void *a4)
{
  struct _KEVENT *v6; // r12
  __int64 v9; // rcx
  volatile signed __int64 *v10; // rax
  volatile signed __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  PERESOURCE *Global; // rax
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  UINT ObjectCount; // r15d
  _BYTE *PoolWithTag; // rsi
  _QWORD *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // r13
  DXGPUSHLOCK *v31; // rcx
  D3DKMT_HANDLE v32; // ebx
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // rcx
  unsigned __int64 i; // rbx
  unsigned int v38; // r9d
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct DXGADAPTER *v48; // rcx
  struct DXGADAPTER *v49; // rcx
  __int64 v50; // rax
  PRKEVENT v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rax
  int Object; // [rsp+28h] [rbp-E0h]
  PVOID *Objecta; // [rsp+28h] [rbp-E0h]
  int HandleInformation; // [rsp+30h] [rbp-D8h]
  __int64 v61; // [rsp+48h] [rbp-C0h]
  _BYTE v62[8]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h]
  _BYTE v65[32]; // [rsp+70h] [rbp-98h] BYREF
  UINT v66; // [rsp+90h] [rbp-78h]
  _BYTE v67[32]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v68[8]; // [rsp+B8h] [rbp-50h] BYREF
  struct _KTHREAD **v69[2]; // [rsp+C0h] [rbp-48h] BYREF
  struct DXGADAPTER *v70; // [rsp+D0h] [rbp-38h]
  char v71; // [rsp+D8h] [rbp-30h]
  struct _KTHREAD **v72[2]; // [rsp+E0h] [rbp-28h] BYREF
  struct DXGADAPTER *v73; // [rsp+F0h] [rbp-18h]
  char v74; // [rsp+F8h] [rbp-10h]
  struct DXGDEVICE *v75; // [rsp+100h] [rbp-8h]
  char v76; // [rsp+108h] [rbp+0h]
  DXGPUSHLOCK *v77; // [rsp+118h] [rbp+10h]
  void *Base[3]; // [rsp+120h] [rbp+18h] BYREF
  size_t NumOfElements; // [rsp+138h] [rbp+30h]
  char v80; // [rsp+140h] [rbp+38h]
  PVOID v81; // [rsp+148h] [rbp+40h] BYREF
  char v82; // [rsp+150h] [rbp+48h] BYREF
  int v83; // [rsp+170h] [rbp+68h]
  PVOID v84; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v85[8]; // [rsp+180h] [rbp+78h] BYREF
  int v86; // [rsp+188h] [rbp+80h] BYREF
  __int64 v87; // [rsp+190h] [rbp+88h]
  __int64 v88; // [rsp+198h] [rbp+90h]
  int v89; // [rsp+1A0h] [rbp+98h]
  __int128 v90; // [rsp+1A8h] [rbp+A0h]
  PRKEVENT Event; // [rsp+208h] [rbp+100h] BYREF
  void *v93; // [rsp+210h] [rbp+108h]

  v93 = a4;
  Event = 0LL;
  v6 = 0LL;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v67, a3);
  v9 = *((_QWORD *)a3 + 2);
  v10 = *(volatile signed __int64 **)(v9 + 16);
  v70 = (struct DXGADAPTER *)v10;
  v71 = 0;
  if ( v10 )
  {
    _InterlockedIncrement64(v10 + 3);
    v9 = *((_QWORD *)a3 + 2);
    v69[1] = (struct _KTHREAD **)-1LL;
  }
  v11 = *(volatile signed __int64 **)(v9 + 16);
  v73 = (struct DXGADAPTER *)v11;
  v74 = 0;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    v72[1] = (struct _KTHREAD **)-1LL;
  }
  v75 = a3;
  v76 = 0;
  LODWORD(v13) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v68);
  if ( (int)v13 < 0 )
    goto LABEL_6;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v12);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v62, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v62);
  P = 0LL;
  v66 = 0;
  v81 = 0LL;
  v83 = 0;
  if ( !a4 )
  {
    hAsyncEvent = a1->hAsyncEvent;
    if ( hAsyncEvent )
    {
      v16 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v84, 0LL);
      v6 = (struct _KEVENT *)v84;
      v13 = v16;
      if ( v16 < 0 )
      {
        v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v20 + 24) = a1->hAsyncEvent;
        *(_QWORD *)(v20 + 32) = v13;
        WdLogEvent5_WdWarning(v20);
        goto LABEL_98;
      }
    }
    else
    {
      v86 = 48;
      v87 = 0LL;
      v89 = 512;
      v88 = 0LL;
      v90 = 0LL;
      v21 = ObCreateObject(0LL, ExEventObjectType, &v86, 0LL, 0LL, 24, 0, 0, &Event);
      v13 = v21;
      if ( v21 < 0 )
      {
        v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v25 + 24) = v13;
        WdLogEvent5_WdWarning(v25);
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v81);
        if ( P != v65 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v66 = 0;
        if ( (_BYTE)v63 )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v62);
LABEL_6:
        COREACCESS::~COREACCESS((COREACCESS *)v72);
        COREACCESS::~COREACCESS((COREACCESS *)v69);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v67);
        return (unsigned int)v13;
      }
      KeInitializeEvent(Event, SynchronizationEvent, 0);
      v6 = Event;
    }
  }
  ObjectCount = a1->ObjectCount;
  if ( ObjectCount <= 4 )
  {
    PoolWithTag = v65;
    P = v65;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
    {
LABEL_30:
      LODWORD(v13) = -1073741801;
      goto LABEL_98;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * ObjectCount, 0x4B677844u);
    P = PoolWithTag;
  }
  v66 = ObjectCount;
  if ( PoolWithTag && ObjectCount )
  {
    memset(PoolWithTag, 0, 8LL * ObjectCount);
    PoolWithTag = P;
  }
  if ( !PoolWithTag )
    goto LABEL_30;
  if ( (*((_BYTE *)a2 + 323) & 0xC) != 0 && a1->ObjectCount == 1 && !*a1->ObjectHandleArray )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 544LL) + 8LL)
                                                             + 976LL))(
      *((_QWORD *)a3 + 76),
      0LL,
      v85,
      PoolWithTag);
    goto LABEL_58;
  }
  v28 = (_QWORD *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&v81, a1->ObjectCount);
  if ( !v28 )
  {
    LODWORD(v13) = -1073741801;
    goto LABEL_98;
  }
  v29 = a1->ObjectCount;
  v30 = 0LL;
  if ( (_DWORD)v29 )
  {
    v31 = (struct DXGPROCESS *)((char *)a2 + 208);
    v77 = (struct DXGPROCESS *)((char *)a2 + 208);
    while ( 1 )
    {
      v32 = a1->ObjectHandleArray[v30];
      DXGPUSHLOCK::AcquireShared(v31);
      v33 = (v32 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v33 < *((_DWORD *)a2 + 62)
        && (v34 = *((_QWORD *)a2 + 29),
            v35 = *(_DWORD *)(v34 + 16 * v33 + 8),
            ((v32 >> 25) & 0x60) == (*(_BYTE *)(v34 + 16 * v33 + 8) & 0x60))
        && (v35 & 0x2000) == 0
        && (v35 & 0x1F) == 0xB )
      {
        v13 = *(_QWORD *)(v34 + 16LL * (unsigned int)v33);
      }
      else
      {
        v13 = 0LL;
      }
      ExReleasePushLockSharedEx(v77, 0LL);
      KeLeaveCriticalRegion();
      if ( !v13 )
        break;
      if ( (*(_DWORD *)(v13 + 64) & 0x20) != 0 )
      {
        v42 = WdLogNewEntry5_WdError(v36);
        *(_QWORD *)(v42 + 24) = a1->ObjectHandleArray[v30];
        WdLogEvent5_WdError(v42);
        LODWORD(v13) = -1073741790;
        goto LABEL_98;
      }
      if ( *(struct DXGDEVICE **)(v13 + 16) != a3 )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdError(v36);
        v41[3] = a1->ObjectHandleArray[v30];
        v41[4] = *(_QWORD *)(v13 + 16);
        v41[5] = a3;
        WdLogEvent5_WdError(v41);
        LODWORD(v13) = -1073741811;
        goto LABEL_98;
      }
      v31 = v77;
      v28[v30] = *(_QWORD *)(v13 + 32);
      v30 = (unsigned int)(v30 + 1);
      v29 = a1->ObjectCount;
      if ( (unsigned int)v30 >= (unsigned int)v29 )
        goto LABEL_45;
    }
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v36);
    LODWORD(v13) = -1073741811;
    v43[3] = a2;
    v44 = a1->ObjectHandleArray[v30];
    v43[5] = (unsigned int)v30;
    v43[4] = v44;
    v43[6] = -1073741811LL;
    WdLogEvent5_WdError(v43);
    goto LABEL_98;
  }
LABEL_45:
  Base[0] = 0LL;
  LODWORD(NumOfElements) = 0;
  PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(Base, v29);
  v80 = 1;
  if ( !Base[0] )
  {
    LODWORD(v13) = -1073741801;
LABEL_97:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)Base);
LABEL_98:
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(&v81);
    if ( P != v65 && P )
      ExFreePoolWithTag(P, 0);
    v66 = 0;
    P = 0LL;
    if ( (_BYTE)v63 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v62);
    COREACCESS::~COREACCESS((COREACCESS *)v72);
    COREACCESS::~COREACCESS((COREACCESS *)v69);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v67);
LABEL_104:
    if ( v6 )
    {
      KeSetEvent(v6, 0, 0);
      ObfDereferenceObject(v6);
    }
    return (unsigned int)v13;
  }
  memmove(Base[0], v28, 8LL * (unsigned int)NumOfElements);
  qsort(Base[0], (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
  for ( i = 0LL; i < (unsigned int)NumOfElements; DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*((_QWORD *)Base[0] + i++)
                                                                                       + 32LL)) )
    ;
  v38 = 0;
  v80 = 0;
  if ( a1->ObjectCount )
  {
    while ( 1 )
    {
      v13 = v38;
      v39 = v28[v38];
      v40 = (*(_DWORD *)(v39 + 172) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v39, *((struct ADAPTER_RENDER **)a3 + 2))
            + 4)
          : *(_QWORD *)(v39 + 296);
      *(_QWORD *)&PoolWithTag[8 * v13] = v40;
      if ( !v40 )
        break;
      if ( ++v38 >= a1->ObjectCount )
        goto LABEL_57;
    }
    v50 = WdLogNewEntry5_WdError(v39);
    *(_QWORD *)(v50 + 24) = a1->ObjectHandleArray[v13];
    WdLogEvent5_WdError(v50);
    LODWORD(v13) = -1073741811;
    goto LABEL_97;
  }
LABEL_57:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)Base);
LABEL_58:
  if ( Event )
    ObfReferenceObject(Event);
  LOBYTE(HandleInformation) = v93 == 0LL;
  LOBYTE(Object) = *(_BYTE *)&a1->Flags.0 & 1;
  LODWORD(v13) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, const UINT64 *, struct _KEVENT *, int, int, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 520LL) + 8LL) + 672LL))(
                   a1->ObjectCount,
                   PoolWithTag,
                   a1->FenceValueArray,
                   v6,
                   Object,
                   HandleInformation,
                   *((_QWORD *)a3 + 77),
                   v93);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v61) = a1->Flags.0;
    LODWORD(Objecta) = a1->ObjectCount;
    McTemplateK0pqPR1XR1pq(v46, v45, v47, a3, Objecta, PoolWithTag, a1->FenceValueArray, a1->hAsyncEvent, v61);
  }
  if ( v81 != &v82 && v81 )
    ExFreePoolWithTag(v81, 0);
  if ( P != v65 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v66 = 0;
  if ( (_BYTE)v63 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v62);
  v48 = v73;
  if ( v73 )
  {
    if ( v74 )
    {
      COREACCESS::Release(v72);
      v48 = v73;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v48 + 2), v48);
  }
  v49 = v70;
  if ( v70 )
  {
    if ( v71 )
    {
      COREACCESS::Release(v69);
      v49 = v70;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v49 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v49 + 2), v49);
  }
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v67);
  if ( (int)v13 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
    goto LABEL_104;
  }
  if ( v6 )
  {
    v51 = Event;
    if ( v6 == Event )
    {
      do
      {
        LODWORD(v13) = KeWaitForSingleObject(v6, Executive, 0, 1u, 0LL);
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
        {
          v56 = WdLogNewEntry5_WdWarning(v53, v52, v54);
          *(_QWORD *)(v56 + 24) = 4585LL;
          WdLogEvent5_WdWarning(v56);
          LODWORD(v13) = -1073741130;
          goto LABEL_104;
        }
      }
      while ( (_DWORD)v13 == 257 );
      if ( (int)v13 >= 0 )
        goto LABEL_92;
      v55 = WdLogNewEntry5_WdAssertion(v53);
      *(_QWORD *)(v55 + 24) = 4594LL;
      WdLogEvent5_WdAssertion(v55);
      goto LABEL_104;
    }
  }
  else
  {
LABEL_92:
    v51 = Event;
  }
  if ( v51 )
    ObfDereferenceObject(v51);
  return 0LL;
}
