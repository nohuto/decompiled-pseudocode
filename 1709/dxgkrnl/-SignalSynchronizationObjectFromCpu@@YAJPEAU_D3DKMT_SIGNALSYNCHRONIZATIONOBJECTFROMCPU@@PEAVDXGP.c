/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C01C0460
 * Callers:
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01C1CE0 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0014788 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0014818 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C0029984 (McTemplateK0pqPR1XR1.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C008AAE4 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00CFCB0 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C01BEFCC (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  struct DXGPROCESS *v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  UINT ObjectCount; // edx
  const void *Elements; // r12
  __int64 v11; // r14
  UINT v12; // r15d
  DXGPUSHLOCK *v13; // rcx
  D3DKMT_HANDLE v14; // r13d
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  _QWORD *v24; // rax
  __int64 v25; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v27; // rax
  UINT v28; // r9d
  __int64 v29; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v31; // rcx
  int v32; // r9d
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v41; // [rsp+20h] [rbp-89h]
  _QWORD v42[4]; // [rsp+40h] [rbp-69h] BYREF
  char v43; // [rsp+60h] [rbp-49h]
  PVOID v44[5]; // [rsp+68h] [rbp-41h] BYREF
  int v45; // [rsp+90h] [rbp-19h]
  PVOID v46[5]; // [rsp+98h] [rbp-11h] BYREF
  int v47; // [rsp+C0h] [rbp+17h]
  char *v48; // [rsp+110h] [rbp+67h]
  __int64 v50; // [rsp+120h] [rbp+77h]

  v4 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v6 + 24) = 4511LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a1->ObjectCount )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 4512LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 4513LL;
    WdLogEvent5_WdAssertion(v8);
  }
  ObjectCount = a1->ObjectCount;
  v46[0] = 0LL;
  v47 = 0;
  v44[0] = 0LL;
  v45 = 0;
  Elements = (const void *)PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(v46, ObjectCount);
  if ( !Elements
    || (v50 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v44, a1->ObjectCount), (v11 = v50) == 0) )
  {
    v23 = -1073741801;
    goto LABEL_49;
  }
  v12 = 0;
  if ( !a1->ObjectCount )
  {
LABEL_28:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v42,
      Elements,
      a1->ObjectCount);
    if ( v43 )
    {
      if ( !v42[0] )
      {
        v23 = -1073741801;
LABEL_47:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v42);
        goto LABEL_49;
      }
      v27 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v27 + 24) = 4600LL;
    }
    else
    {
      v28 = 0;
      if ( !a1->ObjectCount )
      {
LABEL_39:
        v33 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, const UINT64 *, _BYTE))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 504LL) + 8LL)
                                                                                        + 552LL))(
                a1->ObjectCount,
                v11,
                a1->Flags.Value,
                a1->FenceValueArray,
                0);
        v36 = v33;
        if ( v33 < 0 )
        {
          v37 = WdLogNewEntry5_WdError(v34);
          *(_QWORD *)(v37 + 24) = v36;
          WdLogEvent5_WdError(v37);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v41) = a1->ObjectCount;
          McTemplateK0pqPR1XR1(
            (unsigned int)v41,
            &EventSignalSynchronizationObjectFromCpu,
            v35,
            a3,
            v41,
            v11,
            a1->FenceValueArray);
        }
        v23 = v36;
        goto LABEL_47;
      }
      while ( 1 )
      {
        v29 = v28;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)Elements + v28),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        *(_QWORD *)(v11 + 8 * v29) = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        v28 = v32 + 1;
        if ( v28 >= a1->ObjectCount )
          goto LABEL_39;
      }
      v27 = WdLogNewEntry5_WdError(v31);
      *(_QWORD *)(v27 + 24) = a1->ObjectHandleArray[v29];
    }
    WdLogEvent5_WdError(v27);
    v23 = -1073741811;
    goto LABEL_47;
  }
  v13 = (struct DXGPROCESS *)((char *)v4 + 200);
  v48 = (char *)v4 + 200;
  while ( 1 )
  {
    v14 = a1->ObjectHandleArray[v12];
    DXGPUSHLOCK::AcquireShared(v13);
    v15 = (v14 >> 6) & 0xFFFFFF;
    if ( v15 < *((_DWORD *)v4 + 60)
      && (v16 = *((_QWORD *)a2 + 28),
          v17 = *(_DWORD *)(v16 + 16LL * v15 + 8),
          ((v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60))
      && (v17 & 0x2000) == 0
      && (v17 & 0x1F) != 0
      && (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x1F) == 0xB )
    {
      v18 = *(_QWORD *)(v16 + 16LL * v15);
    }
    else
    {
      v18 = 0LL;
    }
    ExReleasePushLockSharedEx(v48, 0LL);
    KeLeaveCriticalRegion();
    if ( !v18 )
      break;
    if ( (*(_DWORD *)(v18 + 64) & 0x10) != 0 )
    {
      v25 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v25 + 24) = a1->ObjectHandleArray[v12];
      WdLogEvent5_WdError(v25);
      v23 = -1073741790;
      goto LABEL_49;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 16LL)) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v21 + 24) = 4563LL;
      WdLogEvent5_WdAssertion(v21);
    }
    *((_QWORD *)Elements + v12) = *(_QWORD *)(v18 + 32);
    if ( *(struct DXGDEVICE **)(v18 + 16) != a3 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v23 = -1073741811;
      v24[3] = *(_QWORD *)(v18 + 16);
      v24[5] = v12;
      v24[4] = v18;
      v24[6] = a3;
      v24[7] = -1073741811LL;
      goto LABEL_34;
    }
    v4 = a2;
    ++v12;
    v13 = (struct DXGPROCESS *)((char *)a2 + 200);
    if ( v12 >= a1->ObjectCount )
    {
      v11 = v50;
      goto LABEL_28;
    }
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdError(v19);
  v24[3] = a2;
  ObjectHandleArray = a1->ObjectHandleArray;
  v23 = -1073741811;
  v24[4] = ObjectHandleArray[v12];
  v24[5] = v12;
  v24[6] = -1073741811LL;
LABEL_34:
  WdLogEvent5_WdError(v24);
LABEL_49:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v44);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v46);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v38, &EventProfilerExit, v39, 2044);
  return v23;
}
