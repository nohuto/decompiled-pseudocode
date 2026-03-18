/*
 * XREFs of ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C00CF68C
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00CF1AC (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0014818 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C00298D8 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 *     McTemplateK0pqPR1XR1pq @ 0x1C0029A20 (McTemplateK0pqPR1XR1pq.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ @ 0x1C00CFC44 (--1-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00CFC64 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$01@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00CFCB0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall WaitForSynchronizationObjectFromCpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        void *a4)
{
  __int64 v4; // rax
  void *v7; // r14
  volatile signed __int64 *v9; // rcx
  struct _KEVENT *v10; // r12
  volatile signed __int64 *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  HANDLE hAsyncEvent; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 ObjectCount; // rbx
  _BYTE *PoolWithTag; // rsi
  _QWORD *v27; // rsi
  const void *v28; // rbx
  __int64 v29; // r14
  char *v30; // rbx
  D3DKMT_HANDLE v31; // r13d
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rax
  const void *v39; // rcx
  __int64 v40; // rdx
  int v41; // r10d
  unsigned __int64 i; // rbx
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rcx
  unsigned __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  struct DXGADAPTER *v51; // rcx
  struct DXGADAPTER *v52; // rcx
  PRKEVENT v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  NTSTATUS v58; // eax
  __int64 v59; // rcx
  __int64 v60; // r8
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // r9d
  _QWORD *v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  int Timeout; // [rsp+28h] [rbp-E0h]
  PLARGE_INTEGER Timeouta; // [rsp+28h] [rbp-E0h]
  int HandleInformation; // [rsp+30h] [rbp-D8h]
  __int64 v75; // [rsp+48h] [rbp-C0h]
  __int64 v76; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h]
  _BYTE v79[32]; // [rsp+70h] [rbp-98h] BYREF
  int v80; // [rsp+90h] [rbp-78h]
  __int64 v81; // [rsp+98h] [rbp-70h]
  char *v82; // [rsp+A0h] [rbp-68h]
  void *Base[3]; // [rsp+A8h] [rbp-60h] BYREF
  size_t NumOfElements; // [rsp+C0h] [rbp-48h]
  char v85; // [rsp+C8h] [rbp-40h]
  _BYTE v86[8]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v87[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v88; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v89; // [rsp+F0h] [rbp-18h]
  char v90; // [rsp+F8h] [rbp-10h]
  _BYTE v91[8]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v92; // [rsp+108h] [rbp+0h]
  struct DXGADAPTER *v93; // [rsp+110h] [rbp+8h]
  char v94; // [rsp+118h] [rbp+10h]
  struct DXGDEVICE *v95; // [rsp+120h] [rbp+18h]
  char v96; // [rsp+128h] [rbp+20h]
  PVOID v97; // [rsp+138h] [rbp+30h] BYREF
  char v98; // [rsp+140h] [rbp+38h] BYREF
  int v99; // [rsp+160h] [rbp+58h]
  PVOID Object; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v101[8]; // [rsp+170h] [rbp+68h] BYREF
  int v102; // [rsp+178h] [rbp+70h] BYREF
  __int64 v103; // [rsp+180h] [rbp+78h]
  __int64 v104; // [rsp+188h] [rbp+80h]
  int v105; // [rsp+190h] [rbp+88h]
  __int128 v106; // [rsp+198h] [rbp+90h]
  PRKEVENT Event; // [rsp+1F8h] [rbp+F0h] BYREF
  void *v109; // [rsp+200h] [rbp+F8h]

  v109 = a4;
  v4 = *((_QWORD *)a3 + 2);
  Event = 0LL;
  v7 = a4;
  v9 = *(volatile signed __int64 **)(v4 + 16);
  v10 = 0LL;
  v89 = (struct DXGADAPTER *)v9;
  v90 = 0;
  if ( v9 )
  {
    _InterlockedIncrement64(v9 + 3);
    v88 = -1LL;
  }
  v11 = *(volatile signed __int64 **)(*((_QWORD *)a3 + 2) + 16LL);
  v93 = (struct DXGADAPTER *)v11;
  v94 = 0;
  if ( v11 )
  {
    _InterlockedIncrement64(v11 + 3);
    v92 = -1LL;
  }
  v95 = a3;
  v96 = 0;
  LODWORD(v13) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v86);
  if ( (int)v13 < 0 )
    goto LABEL_75;
  Global = DXGGLOBAL::GetGlobal(v12);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)&v76, Global);
  if ( (_BYTE)v77 )
  {
    v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
    v61[5] = &v76;
    v61[3] = 275LL;
    v61[4] = 4LL;
    v61[6] = 0LL;
    v61[7] = 0LL;
    WdLogEvent5_WdCriticalError(v61);
  }
  v18 = v76;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 336), 1u);
  LOBYTE(v77) = 1;
  P = 0LL;
  v80 = 0;
  v97 = 0LL;
  v99 = 0;
  if ( !v7 )
  {
    hAsyncEvent = a1->hAsyncEvent;
    if ( !hAsyncEvent )
    {
      v102 = 48;
      v103 = 0LL;
      v105 = 512;
      v104 = 0LL;
      v106 = 0LL;
      v21 = ObCreateObject(0LL, ExEventObjectType, &v102, 0LL, 0LL, 24, 0, 0, &Event);
      v13 = v21;
      if ( v21 >= 0 )
      {
        KeInitializeEvent(Event, SynchronizationEvent, 0);
        v10 = Event;
        goto LABEL_12;
      }
      v63 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v63 + 24) = v13;
      WdLogEvent5_WdWarning(v63);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v97, v64);
      if ( P != v79 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v80 = 0;
      if ( (_BYTE)v77 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v76);
LABEL_75:
      COREACCESS::~COREACCESS((COREACCESS *)v91);
      COREACCESS::~COREACCESS((COREACCESS *)v87);
      return (unsigned int)v13;
    }
    v58 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    v10 = (struct _KEVENT *)Object;
    v13 = v58;
    if ( v58 < 0 )
    {
      v62 = WdLogNewEntry5_WdWarning(v59, v19, v60);
      *(_QWORD *)(v62 + 24) = a1->hAsyncEvent;
      *(_QWORD *)(v62 + 32) = v13;
      WdLogEvent5_WdWarning(v62);
      goto LABEL_110;
    }
  }
LABEL_12:
  ObjectCount = a1->ObjectCount;
  if ( (unsigned int)ObjectCount > 4 )
  {
    v19 = 0xFFFFFFFFFFFFFFFFuLL % ObjectCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / ObjectCount < 8 )
    {
LABEL_76:
      LODWORD(v13) = -1073741801;
      goto LABEL_110;
    }
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * ObjectCount, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = v79;
    P = v79;
  }
  v80 = ObjectCount;
  if ( !PoolWithTag )
    goto LABEL_76;
  memset(PoolWithTag, 0, 8 * ObjectCount);
  v27 = P;
  if ( !P )
    goto LABEL_76;
  if ( (*((_BYTE *)a2 + 307) & 8) != 0 && a1->ObjectCount == 1 && !*a1->ObjectHandleArray )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, PVOID))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 528LL) + 8LL)
                                                           + 960LL))(
      *((_QWORD *)a3 + 74),
      0LL,
      v101,
      P);
    goto LABEL_44;
  }
  v81 = PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&v97, a1->ObjectCount);
  v28 = (const void *)v81;
  if ( !v81 )
  {
    LODWORD(v13) = -1073741801;
    goto LABEL_110;
  }
  v29 = 0LL;
  if ( a1->ObjectCount )
  {
    v30 = (char *)a2 + 200;
    v82 = (char *)a2 + 200;
    while ( 1 )
    {
      v31 = a1->ObjectHandleArray[v29];
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v30, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v65 = *((_DWORD *)v30 + 4);
          if ( v65 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v32, &EventBlockThread, v33, v65);
        }
        ExAcquirePushLockSharedEx(v30, 0LL);
      }
      v34 = (v31 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v34 < *((_DWORD *)a2 + 60)
        && (v35 = *((_QWORD *)a2 + 28),
            v36 = *(_DWORD *)(v35 + 16 * v34 + 8),
            ((v31 >> 25) & 0x60) == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60))
        && (v36 & 0x2000) == 0
        && (v36 & 0x1F) != 0
        && (*(_BYTE *)(v35 + 16LL * (unsigned int)v34 + 8) & 0x1F) == 0xB )
      {
        v13 = *(_QWORD *)(v35 + 16LL * (unsigned int)v34);
      }
      else
      {
        v13 = 0LL;
      }
      ExReleasePushLockSharedEx(v82, 0LL);
      KeLeaveCriticalRegion();
      if ( !v13 )
        break;
      if ( (*(_DWORD *)(v13 + 64) & 0x20) != 0 )
      {
        v67 = WdLogNewEntry5_WdError(v37);
        *(_QWORD *)(v67 + 24) = a1->ObjectHandleArray[v29];
        WdLogEvent5_WdError(v67);
        LODWORD(v13) = -1073741790;
        goto LABEL_110;
      }
      if ( *(struct DXGDEVICE **)(v13 + 16) != a3 )
      {
        v66 = (_QWORD *)WdLogNewEntry5_WdError(v37);
        v66[3] = a1->ObjectHandleArray[v29];
        v66[4] = *(_QWORD *)(v13 + 16);
        v66[5] = a3;
        WdLogEvent5_WdError(v66);
        LODWORD(v13) = -1073741811;
        goto LABEL_110;
      }
      v38 = *(_QWORD *)(v13 + 32);
      v39 = (const void *)v81;
      v30 = v82;
      *(_QWORD *)(v81 + 8 * v29) = v38;
      v29 = (unsigned int)(v29 + 1);
      if ( (unsigned int)v29 >= a1->ObjectCount )
      {
        v28 = v39;
        goto LABEL_32;
      }
    }
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v37);
    LODWORD(v13) = -1073741811;
    v68[3] = a2;
    v68[4] = a1->ObjectHandleArray[v29];
    v68[5] = (unsigned int)v29;
    v68[6] = -1073741811LL;
    WdLogEvent5_WdError(v68);
    goto LABEL_110;
  }
LABEL_32:
  v40 = a1->ObjectCount;
  Base[0] = 0LL;
  LODWORD(NumOfElements) = 0;
  PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::AllocateElements(Base, v40);
  v85 = 1;
  if ( !Base[0] )
  {
    LODWORD(v13) = -1073741801;
LABEL_109:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)Base);
LABEL_110:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v97, v19);
    if ( P != v79 && P )
      ExFreePoolWithTag(P, 0);
    v80 = 0;
    P = 0LL;
    if ( (_BYTE)v77 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v76);
    COREACCESS::~COREACCESS((COREACCESS *)v91);
    COREACCESS::~COREACCESS((COREACCESS *)v87);
    goto LABEL_116;
  }
  memmove(Base[0], v28, 8LL * (unsigned int)NumOfElements);
  qsort(Base[0], (unsigned int)NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))DxgkComparePointers);
  v41 = NumOfElements;
  for ( i = 0LL; i < (unsigned int)NumOfElements; ++i )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*((_QWORD *)Base[0] + i) + 32LL));
    v41 = NumOfElements;
  }
  v43 = 0LL;
  v85 = 0;
  if ( a1->ObjectCount )
  {
    while ( 1 )
    {
      v13 = (unsigned int)v43;
      v44 = *(_QWORD *)(v81 + 8 * v43);
      v45 = (*(_DWORD *)(v44 + 164) & 4) != 0
          ? *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v44, *((struct ADAPTER_RENDER **)a3 + 2))
            + 4)
          : *(_QWORD *)(v44 + 280);
      v27[v43] = v45;
      if ( !v45 )
        break;
      v43 = (unsigned int)(v43 + 1);
      if ( (unsigned int)v43 >= a1->ObjectCount )
        goto LABEL_40;
    }
    v69 = WdLogNewEntry5_WdError(v44);
    *(_QWORD *)(v69 + 24) = a1->ObjectHandleArray[v13];
    WdLogEvent5_WdError(v69);
    LODWORD(v13) = -1073741811;
    goto LABEL_109;
  }
LABEL_40:
  v46 = Base[0];
  if ( Base[0] )
  {
    v47 = 0LL;
    if ( v41 )
    {
      while ( 1 )
      {
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v46[v47++] + 32LL));
        if ( v47 >= (unsigned int)NumOfElements )
          break;
        v46 = Base[0];
      }
    }
  }
  PagedPoolZeroedArray<DXGSYNCOBJECT *,2>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,2>(Base);
  v7 = v109;
LABEL_44:
  if ( Event )
    ObfReferenceObject(Event);
  LOBYTE(HandleInformation) = v7 == 0LL;
  LOBYTE(Timeout) = *(_BYTE *)&a1->Flags.0 & 1;
  LODWORD(v13) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, const UINT64 *, struct _KEVENT *, int, int, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 504LL) + 8LL) + 560LL))(
                   a1->ObjectCount,
                   v27,
                   a1->FenceValueArray,
                   v10,
                   Timeout,
                   HandleInformation,
                   *((_QWORD *)a3 + 75),
                   v7);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v75) = a1->Flags.0;
    LODWORD(Timeouta) = a1->ObjectCount;
    McTemplateK0pqPR1XR1pq(v49, v48, v50, a3, Timeouta, v27, a1->FenceValueArray, a1->hAsyncEvent, v75);
  }
  if ( v97 != &v98 && v97 )
    ExFreePoolWithTag(v97, 0);
  if ( P != v79 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v80 = 0;
  if ( (_BYTE)v77 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v76);
  v51 = v93;
  if ( v93 )
  {
    if ( v94 )
    {
      COREACCESS::Release((COREACCESS *)v91);
      v51 = v93;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v51 + 2), v51);
  }
  v52 = v89;
  if ( v89 )
  {
    if ( v90 )
    {
      COREACCESS::Release((COREACCESS *)v87);
      v52 = v89;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v52 + 2), v52);
  }
  if ( (int)v13 < 0 )
  {
    if ( Event )
      ObfDereferenceObject(Event);
LABEL_116:
    if ( v10 )
    {
      KeSetEvent(v10, 0, 0);
      ObfDereferenceObject(v10);
    }
    return (unsigned int)v13;
  }
  if ( v10 )
  {
    v53 = Event;
    if ( v10 == Event )
    {
      do
      {
        LODWORD(v13) = KeWaitForSingleObject(v10, Executive, 0, 1u, 0LL);
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
        {
          v71 = WdLogNewEntry5_WdWarning(v55, v54, v56);
          *(_QWORD *)(v71 + 24) = 4321LL;
          WdLogEvent5_WdWarning(v71);
          LODWORD(v13) = -1073741130;
          goto LABEL_116;
        }
      }
      while ( (_DWORD)v13 == 257 );
      if ( (int)v13 >= 0 )
        goto LABEL_69;
      v70 = WdLogNewEntry5_WdAssertion(v55);
      *(_QWORD *)(v70 + 24) = 4330LL;
      WdLogEvent5_WdAssertion(v70);
      goto LABEL_116;
    }
  }
  else
  {
LABEL_69:
    v53 = Event;
  }
  if ( v53 )
    ObfDereferenceObject(v53);
  return 0LL;
}
