/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C0085D50
 * Callers:
 *     DxgkSubmitCommand @ 0x1C00EEF00 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A030 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0015D34 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00BC7FC (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00BC838 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00BC874 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00C30B0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00F071C (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C0198354 (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C01BD718 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(const struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2, __int64 a3)
{
  const struct _D3DKMT_SUBMITCOMMAND *v4; // rbx
  char CurrentThreadPreviousMode; // al
  _D3DKMT_SUBMITCOMMAND *v6; // r14
  _D3DKMT_SUBMITCOMMAND *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DXGCONTEXT *v10; // r15
  _QWORD *v11; // rax
  __int64 NumPrimaries; // rcx
  unsigned __int64 BroadcastContextCount; // rbx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGCONTEXT **PoolWithTag; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // r12d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  __int64 v27; // rdi
  __int64 v28; // rcx
  int v29; // ebx
  struct _KEVENT *v30; // rsi
  struct _KEVENT *v31; // rcx
  unsigned __int8 v32; // bl
  __int64 v33; // r8
  __int64 v34; // rax
  signed __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // edx
  _QWORD *v38; // rbx
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rsi
  struct DXGADAPTER *v48; // rbx
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  struct DXGCONTEXT *v59; // rdi
  _QWORD *v60; // rax
  struct _VIDMM_MULTI_ALLOC **v61; // r12
  __int64 Elements; // r13
  __int64 v63; // rax
  __int64 v64; // rcx
  UINT i; // ebx
  D3DKMT_HANDLE *HistoryBufferArray; // rax
  unsigned int *v67; // rdx
  unsigned int v68; // edi
  struct DXGALLOCATION **v69; // rsi
  struct DXGALLOCATION **AllocationSafe; // rax
  struct DXGALLOCATION *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  struct DXGCONTEXT *v76; // rdi
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  unsigned __int64 PresentHistoryToken; // rdx
  D3DKMT_SUBMITCOMMANDFLAGS Flags; // ecx
  unsigned int v91; // eax
  unsigned int *v92; // r10
  DXGGLOBAL **v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r8
  unsigned __int8 v97; // [rsp+40h] [rbp-448h]
  _BYTE v98[16]; // [rsp+48h] [rbp-440h] BYREF
  __int64 v99; // [rsp+58h] [rbp-430h] BYREF
  int v100; // [rsp+60h] [rbp-428h]
  __int64 v101; // [rsp+68h] [rbp-420h] BYREF
  struct DXGADAPTER *v102; // [rsp+70h] [rbp-418h]
  char v103; // [rsp+78h] [rbp-410h]
  struct DXGCONTEXT **v104; // [rsp+80h] [rbp-408h] BYREF
  unsigned int v105; // [rsp+88h] [rbp-400h]
  struct DXGCONTEXT *v106; // [rsp+90h] [rbp-3F8h] BYREF
  struct DXGCONTEXT **v107; // [rsp+98h] [rbp-3F0h] BYREF
  _BYTE v108[32]; // [rsp+A0h] [rbp-3E8h] BYREF
  unsigned int v109; // [rsp+C0h] [rbp-3C8h]
  unsigned int v110; // [rsp+C8h] [rbp-3C0h]
  UINT v111; // [rsp+CCh] [rbp-3BCh]
  struct DXGCONTEXT *v112; // [rsp+D0h] [rbp-3B8h]
  struct DXGPROCESS *v113; // [rsp+D8h] [rbp-3B0h]
  char v114[8]; // [rsp+E0h] [rbp-3A8h] BYREF
  _BYTE v115[16]; // [rsp+E8h] [rbp-3A0h] BYREF
  DXGADAPTER *v116; // [rsp+F8h] [rbp-390h]
  char v117; // [rsp+100h] [rbp-388h]
  _BYTE v118[16]; // [rsp+108h] [rbp-380h] BYREF
  __int64 v119; // [rsp+118h] [rbp-370h]
  __int64 v120; // [rsp+128h] [rbp-360h]
  char v121; // [rsp+130h] [rbp-358h]
  struct DXGPROCESS *v122; // [rsp+140h] [rbp-348h]
  char v123[8]; // [rsp+148h] [rbp-340h] BYREF
  __int64 v124; // [rsp+150h] [rbp-338h]
  __int64 v125; // [rsp+158h] [rbp-330h]
  _QWORD v126[6]; // [rsp+160h] [rbp-328h] BYREF
  char v127; // [rsp+190h] [rbp-2F8h]
  _BYTE v128[24]; // [rsp+198h] [rbp-2F0h] BYREF
  PVOID P; // [rsp+1B0h] [rbp-2D8h] BYREF
  char v130; // [rsp+1B8h] [rbp-2D0h] BYREF
  int v131; // [rsp+238h] [rbp-250h]
  _BYTE v132[144]; // [rsp+240h] [rbp-248h] BYREF
  _D3DKMT_SUBMITCOMMAND v133; // [rsp+2D0h] [rbp-1B8h] BYREF

  v122 = a2;
  v4 = a1;
  v113 = a2;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2102);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v97 = CurrentThreadPreviousMode == 1;
  v6 = &v133;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    v7 = &v133;
    v8 = 3LL;
    do
    {
      *(_OWORD *)&v7->Commands = *(_OWORD *)&v4->Commands;
      *(_OWORD *)&v7->PresentHistoryToken = *(_OWORD *)&v4->PresentHistoryToken;
      *(_OWORD *)&v7->BroadcastContext[1] = *(_OWORD *)&v4->BroadcastContext[1];
      *(_OWORD *)&v7->BroadcastContext[5] = *(_OWORD *)&v4->BroadcastContext[5];
      *(_OWORD *)&v7->BroadcastContext[9] = *(_OWORD *)&v4->BroadcastContext[9];
      *(_OWORD *)&v7->BroadcastContext[13] = *(_OWORD *)&v4->BroadcastContext[13];
      *(_OWORD *)&v7->BroadcastContext[17] = *(_OWORD *)&v4->BroadcastContext[17];
      v7 = (_D3DKMT_SUBMITCOMMAND *)((char *)v7 + 128);
      *(_OWORD *)&v7[-1].NumHistoryBuffers = *(_OWORD *)&v4->BroadcastContext[21];
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)((char *)v4 + 128);
      --v8;
    }
    while ( v8 );
  }
  else
  {
    v6 = (_D3DKMT_SUBMITCOMMAND *)v4;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98, v6->BroadcastContext[0], a2, &v106, 0);
  v10 = v106;
  v112 = v106;
  if ( !v106 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = a2;
    NumPrimaries = v6->BroadcastContext[0];
    v11[5] = -1073741811LL;
LABEL_166:
    v11[4] = NumPrimaries;
    WdLogEvent5_WdError(v11);
    goto LABEL_167;
  }
  BroadcastContextCount = v6->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = v10;
    NumPrimaries = v6->BroadcastContextCount;
    v11[5] = 64LL;
    goto LABEL_165;
  }
  if ( v6->NumPrimaries > 0x10 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v11[3] = v10;
    NumPrimaries = v6->NumPrimaries;
    v11[5] = 16LL;
LABEL_165:
    v11[6] = -1073741811LL;
    goto LABEL_166;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v106 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v14 + 185) )
  {
    v15 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v14 + 3888), a2, v6);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, 2102);
    return (unsigned int)v15;
  }
  PoolWithTag = 0LL;
  v107 = 0LL;
  v20 = 0;
  v109 = 0;
  v21 = 1;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v108;
    v107 = (struct DXGCONTEXT **)v108;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / BroadcastContextCount < 8 )
      goto LABEL_27;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8 * BroadcastContextCount, 0x4B677844u);
    v107 = PoolWithTag;
  }
  v109 = BroadcastContextCount;
  if ( !PoolWithTag )
  {
LABEL_28:
    v22 = WdLogNewEntry5_WdLowResource(PoolWithTag);
    *(_QWORD *)(v22 + 24) = 1377LL;
    WdLogEvent5_WdLowResource(v22);
    goto LABEL_29;
  }
  memset(PoolWithTag, 0, 8 * BroadcastContextCount);
  v20 = v109;
  PoolWithTag = v107;
LABEL_27:
  if ( !PoolWithTag )
    goto LABEL_28;
  v104 = PoolWithTag;
  v105 = v20;
  _m_prefetchw((char *)v10 + 32);
  v25 = *((_QWORD *)v10 + 4);
  if ( !v25 )
  {
LABEL_163:
    v94 = WdLogNewEntry5_WdError(PoolWithTag);
    *(_QWORD *)(v94 + 24) = v106;
    WdLogEvent5_WdError(v94);
    goto LABEL_74;
  }
  while ( 1 )
  {
    PoolWithTag = (struct DXGCONTEXT **)(v25 + 1);
    v26 = v25;
    v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 4, v25 + 1, v25);
    if ( v26 == v25 )
      break;
    if ( !v25 )
      goto LABEL_163;
  }
  *v107 = v106;
  v27 = *((_QWORD *)v10 + 2);
  v99 = v27;
  v28 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
  if ( *(int *)(v28 + 1968) >= 0x2000 || *(_BYTE *)(v28 + 2252) )
    v29 = *((_DWORD *)DXGGLOBAL::GetGlobal(v28) + 203);
  else
    v29 = 0;
  v100 = v29;
  v30 = *(struct _KEVENT **)(v27 + 16);
  if ( *(_DWORD *)(v27 + 328) == 2 )
  {
    if ( KeReadStateEvent(v30 + 4) )
      goto LABEL_47;
    v31 = v30 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v30 + 3) )
      goto LABEL_47;
    v31 = v30 + 3;
  }
  KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
LABEL_47:
  KeEnterCriticalRegion();
  if ( v29 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v27 + 112, 0LL) )
      goto LABEL_58;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL));
    v32 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v27 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 104), 0) )
      goto LABEL_58;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL));
    v32 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v33, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 104), 1u);
  }
  if ( v32 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v27 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_58:
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v128, a2);
  if ( v6->BroadcastContextCount > 1 )
  {
    while ( 1 )
    {
      v34 = (v6->BroadcastContext[v21] >> 6) & 0xFFFFFF;
      v35 = v6->BroadcastContext[v21] >> 30;
      if ( (unsigned int)v34 >= *((_DWORD *)a2 + 60) )
        break;
      v36 = *((_QWORD *)a2 + 28);
      v37 = *(_DWORD *)(v36 + 16 * v34 + 8);
      if ( (_DWORD)v35 != ((v37 >> 5) & 3)
        || (v37 & 0x2000) != 0
        || (v37 & 0x1F) == 0
        || (*(_BYTE *)(v36 + 16LL * (unsigned int)v34 + 8) & 0x1F) != 7 )
      {
        break;
      }
      v38 = *(_QWORD **)(v36 + 16LL * (unsigned int)v34);
      if ( !v38 )
        goto LABEL_76;
      v35 = v38[2];
      if ( v35 != *((_QWORD *)v10 + 2) )
        goto LABEL_76;
      _m_prefetchw(v38 + 4);
      v39 = v38[4];
      do
      {
        if ( !v39 )
        {
          v41 = (_QWORD *)WdLogNewEntry5_WdError(v35);
          v41[3] = v38;
          goto LABEL_72;
        }
        v35 = v39 + 1;
        v40 = v39;
        v39 = _InterlockedCompareExchange64(v38 + 4, v39 + 1, v39);
      }
      while ( v40 != v39 );
      v107[v21++] = (struct DXGCONTEXT *)v38;
      if ( v21 >= v6->BroadcastContextCount )
        goto LABEL_77;
    }
    v38 = 0LL;
LABEL_76:
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v35);
    v41[3] = v106;
    v41[4] = v38;
    v41[5] = v21;
    v41[6] = -1073741811LL;
LABEL_72:
    WdLogEvent5_WdError(v41);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v128);
    goto LABEL_73;
  }
LABEL_77:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v128);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v126,
    v107,
    v109);
  if ( v127 )
  {
    if ( !v126[0] )
    {
      v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
      *(_QWORD *)(v45 + 24) = 1450LL;
      WdLogEvent5_WdWarning(v45);
LABEL_80:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v126);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v104);
LABEL_29:
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v107);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v23, &EventProfilerExit, v24, 2102);
      return 3221225495LL;
    }
    v46 = WdLogNewEntry5_WdWarning(v43, v42, v44);
    *(_QWORD *)(v46 + 24) = 1455LL;
    WdLogEvent5_WdWarning(v46);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v126);
LABEL_73:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
LABEL_74:
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v104);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v107);
LABEL_167:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v95, &EventProfilerExit, v96, 2102);
    return 3221225485LL;
  }
  v47 = *((_QWORD *)v10 + 2);
  v124 = v47;
  v102 = *(struct DXGADAPTER **)(*(_QWORD *)(v47 + 16) + 16LL);
  v103 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v102 + 3);
  v101 = -1LL;
  v48 = v102;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v48 + 120, 0LL);
  v103 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v114, v47, 0, v49, 0);
  if ( v117 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v50, v52);
    v53[3] = 275LL;
    v53[4] = 4LL;
    v53[5] = v115;
    v53[6] = 0LL;
    v53[7] = 0LL;
    WdLogEvent5_WdCriticalError(v53);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v116 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v116 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v54, &EventBlockThread, v55, 72);
      KeWaitForSingleObject((char *)v116 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v116);
  }
  v117 = 1;
  v56 = *(unsigned int *)(v120 + 408);
  if ( (_DWORD)v56 == 1 )
  {
    if ( v121 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v118);
      v56 = *(unsigned int *)(v119 + 176);
      if ( (_DWORD)v56 != 1 )
      {
        COREACCESS::Release((COREACCESS *)v118);
        goto LABEL_95;
      }
    }
    v59 = v106;
    if ( !*((_BYTE *)v106 + 398) )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v56);
      v60[3] = a2;
      v60[4] = v6->BroadcastContext[0];
      v60[5] = -1073741811LL;
      v60[6] = 1477LL;
      WdLogEvent5_WdError(v60);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v114);
      if ( v103 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v101);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v126);
      goto LABEL_73;
    }
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v132);
    P = 0LL;
    v131 = 0;
    v61 = 0LL;
    if ( v6->NumHistoryBuffers )
    {
      Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(v132);
      v63 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&P, v6->NumHistoryBuffers);
      v61 = (struct _VIDMM_MULTI_ALLOC **)v63;
      if ( !Elements || !v63 )
      {
        v86 = WdLogNewEntry5_WdLowResource(v64);
        *(_QWORD *)(v86 + 24) = 1512LL;
        WdLogEvent5_WdLowResource(v86);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v87);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v132);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v114);
        if ( v103 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v101);
        goto LABEL_80;
      }
      for ( i = 0; ; ++i )
      {
        v111 = i;
        if ( i >= v6->NumHistoryBuffers )
          break;
        HistoryBufferArray = v6->HistoryBufferArray;
        if ( v97 )
        {
          v67 = &HistoryBufferArray[i];
          if ( (unsigned __int64)v67 >= MmUserProbeAddress )
            v67 = (unsigned int *)MmUserProbeAddress;
          v68 = *v67;
        }
        else
        {
          v68 = HistoryBufferArray[i];
        }
        v110 = v68;
        v69 = (struct DXGALLOCATION **)(8LL * i + Elements);
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    (__int64)v122,
                                                    (DXGALLOCATIONREFERENCE *)v123,
                                                    v68);
        DXGALLOCATIONREFERENCE::MoveAssign(v69, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v123);
        v71 = *v69;
        if ( !*v69 )
        {
          v72 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v72 + 24) = v68;
          WdLogEvent5_WdError(v72);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v73);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v132);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v114);
          if ( v103 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v101);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v126);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v104);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v107);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v74, &EventProfilerExit, v75, 2102);
          return 3221225485LL;
        }
        v76 = v112;
        v125 = *((_QWORD *)v112 + 2);
        if ( *((_QWORD *)v71 + 1) != v125 )
        {
          _mm_lfence();
          v77 = (_QWORD *)WdLogNewEntry5_WdError(v71);
          v77[3] = *v69;
          v77[4] = *((_QWORD *)*v69 + 1);
          v77[5] = *((_QWORD *)v76 + 2);
          WdLogEvent5_WdError(v77);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v78);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v132);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v114);
          if ( v103 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v101);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v126);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v104);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v107);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v79, &EventProfilerExit, v80, 2102);
          return 3221225485LL;
        }
        v61[i] = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v71 + 3);
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v124 + 16) + 528LL)
                                                                                        + 8LL)
                                                                            + 1048LL))(
              *(_QWORD *)(*(_QWORD *)(v124 + 16) + 536LL),
              v61);
      if ( v15 >= 0 )
      {
        v59 = v106;
        v10 = v112;
        goto LABEL_140;
      }
      v82 = WdLogNewEntry5_WdError(v81);
      *(_QWORD *)(v82 + 24) = 1584LL;
      WdLogEvent5_WdError(v82);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P, v83);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v132);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v114);
      if ( v103 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v101);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v126);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
LABEL_134:
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v104);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v107);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        McTemplateK0q(v84, &EventProfilerExit, v85, 2102);
        return (unsigned int)v15;
      }
      return (unsigned int)v15;
    }
LABEL_140:
    if ( v6->CommandLength )
    {
      v15 = DXGCONTEXT::SubmitCommand(
              v59,
              v6,
              (struct COREDEVICEACCESS *)v114,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v101,
              v107,
              v61,
              v6->NumHistoryBuffers,
              v97);
      if ( v15 < 0 )
      {
LABEL_153:
        if ( P != &v130 && P )
          ExFreePoolWithTag(P, 0);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v132);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v114);
        if ( v103 )
        {
          v103 = 0;
          ExReleasePushLockSharedEx((char *)v102 + 120, 0LL);
          KeLeaveCriticalRegion();
          v93 = (DXGGLOBAL **)v102;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v102 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v93[2], (struct DXGADAPTER *)v93);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v126);
        if ( v100 )
          ExReleasePushLockSharedEx(v99 + 112, 0LL);
        else
          ExReleaseResourceLite(*(PERESOURCE *)(v99 + 104));
        KeLeaveCriticalRegion();
        goto LABEL_134;
      }
    }
    else
    {
      v15 = 0;
    }
    v88 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 1736LL);
    PresentHistoryToken = 0LL;
    Flags = v6->Flags;
    if ( (*(_BYTE *)&Flags & 2) != 0 )
    {
      PresentHistoryToken = v6->PresentHistoryToken;
    }
    else if ( v88 && *(_QWORD *)v88 && *(_DWORD *)(v88 + 12) != *((_DWORD *)v59 + 6) )
    {
      PresentHistoryToken = *(_QWORD *)v88;
    }
    if ( PresentHistoryToken )
    {
      v91 = v6->BroadcastContextCount;
      v92 = &v6->BroadcastContext[1];
      if ( v91 <= 1 )
        v92 = 0LL;
      v15 = DXGCONTEXT::HandleVistaBltStub(
              v59,
              PresentHistoryToken,
              (*(unsigned int *)&Flags >> 1) & 1,
              (struct COREDEVICEACCESS *)v114,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v101,
              v91 - 1,
              v92,
              v107);
    }
    goto LABEL_153;
  }
LABEL_95:
  COREACCESS::Release((COREACCESS *)v115);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v114);
  if ( v103 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v101);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v126);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v99);
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v104);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v107);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v98);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v57, &EventProfilerExit, v58, 2102);
  return 3221226166LL;
}
