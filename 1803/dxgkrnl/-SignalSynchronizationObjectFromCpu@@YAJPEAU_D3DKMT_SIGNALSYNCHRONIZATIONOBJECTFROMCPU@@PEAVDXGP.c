/*
 * XREFs of ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C01C16F4
 * Callers:
 *     DxgkSignalSynchronizationObjectFromCpu @ 0x1C01C3170 (DxgkSignalSynchronizationObjectFromCpu.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@XZ @ 0x1C0009794 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C001A798 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqPR1XR1 @ 0x1C00330DC (McTemplateK0pqPR1XR1.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D1EB4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAAPEAPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_OBJECT@@I@Z @ 0x1C01C00BC (-AllocateElements@-$PagedPoolZeroedArray@PEAU_VIDSCH_SYNC_OBJECT@@$03@@QEAAPEAPEAU_VIDSCH_SYNC_O.c)
 */

__int64 __fastcall SignalSynchronizationObjectFromCpu(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *a1,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  UINT ObjectCount; // edx
  PVOID Elements; // r12
  _QWORD *v12; // r13
  UINT v13; // r8d
  UINT v14; // r14d
  DXGPUSHLOCK *v15; // rcx
  D3DKMT_HANDLE v16; // edi
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // ecx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ebx
  _QWORD *v26; // rax
  __int64 v27; // rax
  const D3DKMT_HANDLE *ObjectHandleArray; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r9d
  __int64 v32; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v34; // rcx
  int v35; // r9d
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v44; // [rsp+20h] [rbp-99h]
  int v45; // [rsp+40h] [rbp-79h] BYREF
  __int64 v46; // [rsp+48h] [rbp-71h]
  _QWORD v47[4]; // [rsp+50h] [rbp-69h] BYREF
  char v48; // [rsp+70h] [rbp-49h]
  PVOID v49[5]; // [rsp+78h] [rbp-41h] BYREF
  int v50; // [rsp+A0h] [rbp-19h]
  PVOID v51[5]; // [rsp+A8h] [rbp-11h] BYREF
  int v52; // [rsp+D0h] [rbp+17h]
  DXGPUSHLOCK *v53; // [rsp+120h] [rbp+67h]

  v46 = 0LL;
  v45 = 2044;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 2044);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 2044);
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 4775LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a1->ObjectCount )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 4776LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*((_QWORD *)a3 + 2) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v9 + 24) = 4777LL;
    WdLogEvent5_WdAssertion(v9);
  }
  ObjectCount = a1->ObjectCount;
  v51[0] = 0LL;
  v52 = 0;
  v49[0] = 0LL;
  v50 = 0;
  Elements = PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::AllocateElements(v51, ObjectCount);
  if ( !Elements || (v12 = PagedPoolZeroedArray<_VIDSCH_SYNC_OBJECT *,4>::AllocateElements(v49, a1->ObjectCount)) == 0LL )
  {
    v25 = -1073741801;
    goto LABEL_47;
  }
  v13 = a1->ObjectCount;
  v14 = 0;
  if ( !v13 )
  {
LABEL_26:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
      (__int64)v47,
      Elements,
      v13);
    if ( v48 )
    {
      if ( !v47[0] )
      {
        v25 = -1073741801;
LABEL_45:
        DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>((__int64)v47);
        goto LABEL_47;
      }
      v29 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v29 + 24) = 4864LL;
    }
    else
    {
      v30 = a1->ObjectCount;
      v31 = 0;
      if ( !(_DWORD)v30 )
      {
LABEL_37:
        v36 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, const UINT64 *, _BYTE))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 520LL) + 8LL)
                                                                                          + 664LL))(
                v30,
                v12,
                a1->Flags.Value,
                a1->FenceValueArray,
                0);
        v39 = v36;
        if ( v36 < 0 )
        {
          v40 = WdLogNewEntry5_WdError(v37);
          *(_QWORD *)(v40 + 24) = v39;
          WdLogEvent5_WdError(v40);
        }
        else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(v44) = a1->ObjectCount;
          McTemplateK0pqPR1XR1(
            (unsigned int)v44,
            &EventSignalSynchronizationObjectFromCpu,
            v38,
            a3,
            v44,
            v12,
            a1->FenceValueArray);
        }
        v25 = v39;
        goto LABEL_45;
      }
      while ( 1 )
      {
        v32 = v31;
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *((DXGSYNCOBJECT **)Elements + v31),
                             *((struct ADAPTER_RENDER **)a3 + 2));
        v12[v32] = VidSchSyncObject;
        if ( !VidSchSyncObject )
          break;
        v30 = a1->ObjectCount;
        v31 = v35 + 1;
        if ( v31 >= (unsigned int)v30 )
          goto LABEL_37;
      }
      v29 = WdLogNewEntry5_WdError(v34);
      *(_QWORD *)(v29 + 24) = a1->ObjectHandleArray[v32];
    }
    WdLogEvent5_WdError(v29);
    v25 = -1073741811;
    goto LABEL_45;
  }
  v15 = (struct DXGPROCESS *)((char *)a2 + 208);
  v53 = (struct DXGPROCESS *)((char *)a2 + 208);
  while ( 1 )
  {
    v16 = a1->ObjectHandleArray[v14];
    DXGPUSHLOCK::AcquireShared(v15);
    v17 = (v16 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v17 < *((_DWORD *)a2 + 62)
      && (v18 = *((_QWORD *)a2 + 29),
          v19 = *(_DWORD *)(v18 + 16 * v17 + 8),
          ((v16 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60))
      && (v19 & 0x2000) == 0
      && (v19 & 0x1F) == 0xB )
    {
      v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
    }
    else
    {
      v20 = 0LL;
    }
    ExReleasePushLockSharedEx(v53, 0LL);
    KeLeaveCriticalRegion();
    if ( !v20 )
      break;
    if ( (*(_DWORD *)(v20 + 64) & 0x10) != 0 )
    {
      v27 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v27 + 24) = a1->ObjectHandleArray[v14];
      WdLogEvent5_WdError(v27);
      v25 = -1073741790;
      goto LABEL_47;
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 16LL)) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v23 + 24) = 4827LL;
      WdLogEvent5_WdAssertion(v23);
    }
    *((_QWORD *)Elements + v14) = *(_QWORD *)(v20 + 32);
    if ( *(struct DXGDEVICE **)(v20 + 16) != a3 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v25 = -1073741811;
      v26[3] = *(_QWORD *)(v20 + 16);
      v26[4] = v20;
      v26[6] = a3;
      v26[7] = -1073741811LL;
      goto LABEL_32;
    }
    v13 = a1->ObjectCount;
    ++v14;
    v15 = v53;
    if ( v14 >= v13 )
      goto LABEL_26;
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  v26[3] = a2;
  ObjectHandleArray = a1->ObjectHandleArray;
  v25 = -1073741811;
  v26[4] = ObjectHandleArray[v14];
  v26[6] = -1073741811LL;
LABEL_32:
  v26[5] = v14;
  WdLogEvent5_WdError(v26);
LABEL_47:
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v49);
  PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v51);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v41, &EventProfilerExit, v42, v45);
  return v25;
}
