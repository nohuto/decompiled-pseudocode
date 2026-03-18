/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C01A6720
 * Callers:
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01A7F50 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0001450 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C00014E0 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_pqPR1XR1 @ 0x1C003953C (Template_pqPR1XR1.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008F63C (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00D8C70 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C01A54DC (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  UINT ObjectCount; // edx
  const void *v12; // r15
  __int64 Elements; // r12
  UINT v14; // esi
  DXGPUSHLOCK *v15; // rcx
  D3DKMT_HANDLE v16; // edi
  unsigned int v17; // ecx
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  _QWORD *v31; // rax
  __int64 v32; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v34; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r8
  PVOID v46; // rcx
  UINT v48; // [rsp+28h] [rbp-79h]
  PVOID P; // [rsp+48h] [rbp-59h] BYREF
  char v50; // [rsp+50h] [rbp-51h] BYREF
  int v51; // [rsp+70h] [rbp-31h]
  _QWORD v52[4]; // [rsp+78h] [rbp-29h] BYREF
  char v53; // [rsp+98h] [rbp-9h]
  PVOID v54[5]; // [rsp+A0h] [rbp-1h] BYREF
  int v55; // [rsp+C8h] [rbp+27h]

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  v7 = 0;
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 4441LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a1->ObjectCount )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 4442LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 4443LL;
    WdLogEvent5_WdAssertion(v10);
  }
  ObjectCount = a1->ObjectCount;
  P = 0LL;
  v51 = 0;
  v54[0] = 0LL;
  v55 = 0;
  v12 = (const void *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(&P, ObjectCount);
  if ( !v12 || (Elements = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v54, a1->ObjectCount)) == 0 )
  {
    v30 = -1073741801;
    goto LABEL_49;
  }
  v14 = 0;
  if ( !a1->ObjectCount )
  {
LABEL_28:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v52,
      v12,
      a1->ObjectCount);
    if ( v53 )
    {
      if ( !v52[0] )
      {
        v30 = -1073741801;
LABEL_47:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v52);
        goto LABEL_49;
      }
      v34 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v34 + 24) = 4530LL;
    }
    else
    {
      if ( !a1->ObjectCount )
      {
LABEL_39:
        v39 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 408LL)
                                                                                             + 8LL)
                                                                                 + 552LL))(
                a1->ObjectCount,
                Elements,
                a1->Flags.Value,
                a1->FenceValueArray);
        v43 = v39;
        if ( v39 < 0 )
        {
          v44 = WdLogNewEntry5_WdError(v41, v40);
          *(_QWORD *)(v44 + 24) = v43;
          WdLogEvent5_WdError(v44);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v48 = a1->ObjectCount;
          Template_pqPR1XR1(v48, &EventSignalSynchronizationObjectFromCpu, v42, a3, v48, Elements, a1->FenceValueArray);
        }
        v30 = v43;
        goto LABEL_47;
      }
      while ( 1 )
      {
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)v12 + v7),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        *(_QWORD *)(Elements + 8 * v38) = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        if ( ++v7 >= a1->ObjectCount )
          goto LABEL_39;
      }
      v34 = WdLogNewEntry5_WdError(v37, v36);
      *(_QWORD *)(v34 + 24) = a1->ObjectHandleArray[v7];
    }
    WdLogEvent5_WdError(v34);
    v30 = -1073741811;
    goto LABEL_47;
  }
  v15 = (struct DXGPROCESS *)((char *)a2 + 168);
  while ( 1 )
  {
    v16 = a1->ObjectHandleArray[v14];
    DXGPUSHLOCK::AcquireShared(v15);
    v17 = (v16 >> 6) & 0xFFFFFF;
    if ( v17 < *((_DWORD *)a2 + 52)
      && (v18 = *((_QWORD *)a2 + 24),
          v19 = *(_DWORD *)(v18 + 16LL * v17 + 8),
          ((v16 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x30))
      && (v19 & 0x1000) == 0
      && (v19 & 0xF) != 0
      && (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0xF) == 0xB )
    {
      v20 = *(_QWORD *)(v18 + 16LL * v17);
    }
    else
    {
      v20 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)a2 + 168, 0LL);
    KeLeaveCriticalRegion();
    if ( !v20 )
      break;
    if ( (*(_DWORD *)(v20 + 64) & 0x10) != 0 )
    {
      v32 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v32 + 24) = a1->ObjectHandleArray[v14];
      WdLogEvent5_WdError(v32);
      v30 = -1073741790;
      goto LABEL_49;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 16LL)) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      *(_QWORD *)(v27 + 24) = 4493LL;
      WdLogEvent5_WdAssertion(v27);
    }
    *((_QWORD *)v12 + v14) = *(_QWORD *)(v20 + 32);
    if ( *(struct DXGDEVICE **)(v20 + 16) != a3 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v14, v23);
      v30 = -1073741811;
      v31[3] = *(_QWORD *)(v20 + 16);
      v31[5] = v14;
      v31[4] = v20;
      v31[6] = a3;
      v31[7] = -1073741811LL;
      goto LABEL_34;
    }
    ++v14;
    v15 = (struct DXGPROCESS *)((char *)a2 + 168);
    if ( v14 >= a1->ObjectCount )
    {
      v7 = 0;
      goto LABEL_28;
    }
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
  v31[3] = a2;
  ObjectHandleArray = a1->ObjectHandleArray;
  v30 = -1073741811;
  v31[4] = ObjectHandleArray[v14];
  v31[5] = v14;
  v31[6] = -1073741811LL;
LABEL_34:
  WdLogEvent5_WdError(v31);
LABEL_49:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v54);
  v46 = P;
  if ( P != &v50 && P )
    ExFreePoolWithTag(P, 0);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v46, &EventProfilerExit, v45, 2044);
  return v30;
}
