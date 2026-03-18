/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00E71E0
 * Callers:
 *     DxgkSubmitCommand @ 0x1C00E51B0 (DxgkSubmitCommand.c)
 *     ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186E10 (-VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001070 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C001BA70 (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C0099C78 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00D5DFC (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00D65E0 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00D661C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00D6658 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00FFEA0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C0184F90 (-VmBusSendSubmitCommand@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMA.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B1648 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C01BF388 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(const struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2, __int64 a3)
{
  const struct _D3DKMT_SUBMITCOMMAND *v4; // rbx
  int v5; // r12d
  char CurrentThreadPreviousMode; // al
  _D3DKMT_SUBMITCOMMAND *v7; // r14
  _D3DKMT_SUBMITCOMMAND *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct DXGCONTEXT *v11; // r13
  _QWORD *v12; // rax
  __int64 NumPrimaries; // rcx
  unsigned __int64 BroadcastContextCount; // rdi
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGCONTEXT **PoolWithTag; // rcx
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  __int64 v27; // rax
  __int64 v28; // rdi
  struct _KEVENT *v29; // rcx
  struct _LIST_ENTRY *Blink; // rax
  int v31; // eax
  int v32; // ebx
  int v33; // r15d
  struct _KEVENT *v34; // rsi
  struct _KEVENT *v35; // rsi
  unsigned __int8 v36; // bl
  __int64 v37; // r8
  struct DXGPROCESS *v38; // r12
  signed __int64 v39; // rcx
  unsigned int v40; // edi
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rbx
  signed __int64 v44; // rax
  signed __int64 v45; // rtt
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // r15
  struct DXGADAPTER *v53; // rbx
  __int64 v54; // r9
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r8
  struct DXGCONTEXT *v62; // rsi
  _QWORD *v63; // rax
  struct _VIDMM_MULTI_ALLOC **v64; // rdi
  unsigned int NumHistoryBuffers; // edx
  char *Elements; // r12
  __int64 v67; // rax
  __int64 v68; // rcx
  UINT i; // ebx
  unsigned int *v70; // rdx
  unsigned int v71; // edi
  struct DXGALLOCATION **v72; // rsi
  struct DXGALLOCATION **AllocationSafe; // rax
  struct DXGALLOCATION *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // r8
  _QWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // r9
  unsigned __int64 PresentHistoryToken; // rdx
  unsigned int v86; // r9d
  unsigned int *v87; // r10
  DXGGLOBAL **v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // r8
  unsigned __int8 v91; // [rsp+40h] [rbp-458h]
  int v92; // [rsp+48h] [rbp-450h] BYREF
  __int64 v93; // [rsp+50h] [rbp-448h]
  _BYTE v94[16]; // [rsp+58h] [rbp-440h] BYREF
  __int64 v95; // [rsp+68h] [rbp-430h] BYREF
  int v96; // [rsp+70h] [rbp-428h]
  __int64 v97; // [rsp+78h] [rbp-420h] BYREF
  struct DXGADAPTER *v98; // [rsp+80h] [rbp-418h]
  char v99; // [rsp+88h] [rbp-410h]
  struct DXGCONTEXT **v100; // [rsp+90h] [rbp-408h] BYREF
  unsigned int v101; // [rsp+98h] [rbp-400h]
  struct DXGCONTEXT *v102; // [rsp+A0h] [rbp-3F8h] BYREF
  struct DXGCONTEXT **v103; // [rsp+A8h] [rbp-3F0h] BYREF
  _BYTE v104[32]; // [rsp+B0h] [rbp-3E8h] BYREF
  unsigned int v105; // [rsp+D0h] [rbp-3C8h]
  unsigned int v106; // [rsp+D8h] [rbp-3C0h]
  UINT v107; // [rsp+DCh] [rbp-3BCh]
  struct DXGPROCESS *v108; // [rsp+E0h] [rbp-3B8h]
  struct DXGPROCESS *v109; // [rsp+E8h] [rbp-3B0h]
  char v110[8]; // [rsp+F0h] [rbp-3A8h] BYREF
  struct _KTHREAD **v111[2]; // [rsp+F8h] [rbp-3A0h] BYREF
  DXGADAPTER *v112; // [rsp+108h] [rbp-390h]
  char v113; // [rsp+110h] [rbp-388h]
  struct _KTHREAD **v114[5]; // [rsp+118h] [rbp-380h] BYREF
  char v115; // [rsp+140h] [rbp-358h]
  char v116[8]; // [rsp+150h] [rbp-348h] BYREF
  struct _VIDMM_MULTI_ALLOC **v117; // [rsp+158h] [rbp-340h]
  __int64 v118; // [rsp+160h] [rbp-338h]
  __int64 v119; // [rsp+168h] [rbp-330h]
  _QWORD v120[6]; // [rsp+170h] [rbp-328h] BYREF
  char v121; // [rsp+1A0h] [rbp-2F8h]
  _BYTE v122[24]; // [rsp+1A8h] [rbp-2F0h] BYREF
  void *v123; // [rsp+1C0h] [rbp-2D8h] BYREF
  char v124; // [rsp+1C8h] [rbp-2D0h] BYREF
  int v125; // [rsp+248h] [rbp-250h]
  DXGALLOCATIONREFERENCE *v126[18]; // [rsp+250h] [rbp-248h] BYREF
  _D3DKMT_SUBMITCOMMAND v127; // [rsp+2E0h] [rbp-1B8h] BYREF

  v108 = a2;
  v4 = a1;
  v109 = a2;
  v5 = 0;
  v93 = 0LL;
  v92 = 2102;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2102);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v92, 2102);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v91 = CurrentThreadPreviousMode == 1;
  v7 = &v127;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    v8 = &v127;
    v9 = 3LL;
    do
    {
      *(_OWORD *)&v8->Commands = *(_OWORD *)&v4->Commands;
      *(_OWORD *)&v8->PresentHistoryToken = *(_OWORD *)&v4->PresentHistoryToken;
      *(_OWORD *)&v8->BroadcastContext[1] = *(_OWORD *)&v4->BroadcastContext[1];
      *(_OWORD *)&v8->BroadcastContext[5] = *(_OWORD *)&v4->BroadcastContext[5];
      *(_OWORD *)&v8->BroadcastContext[9] = *(_OWORD *)&v4->BroadcastContext[9];
      *(_OWORD *)&v8->BroadcastContext[13] = *(_OWORD *)&v4->BroadcastContext[13];
      *(_OWORD *)&v8->BroadcastContext[17] = *(_OWORD *)&v4->BroadcastContext[17];
      v8 = (_D3DKMT_SUBMITCOMMAND *)((char *)v8 + 128);
      *(_OWORD *)&v8[-1].NumHistoryBuffers = *(_OWORD *)&v4->BroadcastContext[21];
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)((char *)v4 + 128);
      --v9;
    }
    while ( v9 );
  }
  else
  {
    v7 = (_D3DKMT_SUBMITCOMMAND *)v4;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v94,
    v7->BroadcastContext[0],
    (struct _KTHREAD **)a2,
    &v102,
    0);
  v11 = v102;
  if ( !v102 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v12[3] = a2;
    NumPrimaries = v7->BroadcastContext[0];
    v12[5] = -1073741811LL;
LABEL_165:
    v12[4] = NumPrimaries;
    goto LABEL_166;
  }
  if ( (*((_DWORD *)v102 + 91) & 0x10) != 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v12[3] = v11;
LABEL_166:
    WdLogEvent5_WdError(v12);
    goto LABEL_167;
  }
  BroadcastContextCount = v7->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v12[3] = v11;
    NumPrimaries = v7->BroadcastContextCount;
    v12[5] = 64LL;
    goto LABEL_164;
  }
  if ( v7->NumPrimaries > 0x10 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v12[3] = v11;
    NumPrimaries = v7->NumPrimaries;
    v12[5] = 16LL;
LABEL_164:
    v12[6] = -1073741811LL;
    goto LABEL_165;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v102 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v15 + 185) )
  {
    v16 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommand((DXG_GUEST_VIRTUALGPU_VMBUS *)(v15 + 4080), a2, v7);
    goto LABEL_20;
  }
  PoolWithTag = 0LL;
  v103 = 0LL;
  v21 = 0;
  v105 = 0;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v104;
    v103 = (struct DXGCONTEXT **)v104;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / BroadcastContextCount < 8 )
      goto LABEL_30;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8 * BroadcastContextCount, 0x4B677844u);
    v103 = PoolWithTag;
  }
  v105 = BroadcastContextCount;
  if ( !PoolWithTag )
  {
LABEL_31:
    v22 = WdLogNewEntry5_WdLowResource(PoolWithTag);
    *(_QWORD *)(v22 + 24) = 1415LL;
    WdLogEvent5_WdLowResource(v22);
    goto LABEL_32;
  }
  memset(PoolWithTag, 0, 8 * BroadcastContextCount);
  v21 = v105;
  PoolWithTag = v103;
LABEL_30:
  if ( !PoolWithTag )
    goto LABEL_31;
  v100 = PoolWithTag;
  v101 = v21;
  _m_prefetchw((char *)v11 + 32);
  v25 = *((_QWORD *)v11 + 4);
  if ( !v25 )
  {
LABEL_39:
    v27 = WdLogNewEntry5_WdError(PoolWithTag);
    *(_QWORD *)(v27 + 24) = v102;
    WdLogEvent5_WdError(v27);
LABEL_81:
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v100);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v103);
LABEL_167:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v94);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v89, &EventProfilerExit, v90, v92);
    return 3221225485LL;
  }
  while ( 1 )
  {
    PoolWithTag = (struct DXGCONTEXT **)(v25 + 1);
    v26 = v25;
    v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 4, v25 + 1, v25);
    if ( v26 == v25 )
      break;
    if ( !v25 )
      goto LABEL_39;
  }
  *v103 = v102;
  v28 = *((_QWORD *)v11 + 2);
  v95 = v28;
  v29 = *(struct _KEVENT **)(v28 + 16);
  Blink = v29->Header.WaitListHead.Blink;
  if ( SLODWORD(Blink[131].Blink) >= 0x2000 || BYTE4(Blink[149].Blink) )
  {
    v31 = *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v29) + 223);
    v96 = v31;
    v29 = *(struct _KEVENT **)(v28 + 16);
    v32 = v31;
    v33 = v31;
    v5 = v31;
  }
  else
  {
    v96 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
  }
  if ( *(_DWORD *)(v28 + 328) == 2 )
  {
    v34 = v29 + 4;
    if ( !KeReadStateEvent(v29 + 4) )
    {
      KeWaitForSingleObject(v34, Executive, 0, 0, 0LL);
      v32 = v33;
    }
  }
  else
  {
    v35 = v29 + 3;
    v32 = v31;
    if ( !KeReadStateEvent(v29 + 3) )
    {
      KeWaitForSingleObject(v35, Executive, 0, 0, 0LL);
      v32 = v5;
    }
  }
  KeEnterCriticalRegion();
  if ( v32 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v28 + 112, 0LL) )
      goto LABEL_60;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 96LL));
    v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v28 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 104), 0) )
      goto LABEL_60;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 96LL));
    v36 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v37, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v28 + 104), 1u);
  }
  if ( v36 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v28 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_60:
  v38 = v108;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v122, (struct _KTHREAD **)v108);
  if ( v7->BroadcastContextCount > 1 )
  {
    v40 = 1;
LABEL_62:
    v41 = (v7->BroadcastContext[v40] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v41 < *((_DWORD *)v38 + 62)
      && (v42 = *((_QWORD *)v38 + 29),
          v39 = *(unsigned int *)(v42 + 16 * v41 + 8),
          v7->BroadcastContext[v40] >> 30 == ((*(_DWORD *)(v42 + 16 * v41 + 8) >> 5) & 3))
      && (v39 & 0x2000) == 0
      && (v39 & 0x1F) != 0
      && (v39 &= 0x1Fu, (_BYTE)v39 == 7) )
    {
      v43 = *(_QWORD *)(v42 + 16LL * (unsigned int)v41);
      if ( v43 )
      {
        v39 = *(_QWORD *)(v43 + 16);
        if ( v39 == *((_QWORD *)v11 + 2) )
        {
          if ( (*(_DWORD *)(v43 + 364) & 0x10) == 0 )
          {
            _m_prefetchw((const void *)(v43 + 32));
            v44 = *(_QWORD *)(v43 + 32);
            while ( v44 )
            {
              v39 = v44 + 1;
              v45 = v44;
              v44 = _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 32), v44 + 1, v44);
              if ( v45 == v44 )
              {
                v103[v40++] = (struct DXGCONTEXT *)v43;
                if ( v40 < v7->BroadcastContextCount )
                  goto LABEL_62;
                goto LABEL_74;
              }
            }
          }
          v50 = (_QWORD *)WdLogNewEntry5_WdError(v39);
          v50[3] = v43;
          goto LABEL_79;
        }
      }
    }
    else
    {
      v43 = 0LL;
    }
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v39);
    v50[3] = v102;
    v50[4] = v43;
    v50[5] = v40;
    v50[6] = -1073741811LL;
LABEL_79:
    WdLogEvent5_WdError(v50);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v122);
LABEL_80:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
    goto LABEL_81;
  }
LABEL_74:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v122);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v120,
    v103,
    v105);
  if ( v121 )
  {
    if ( v120[0] )
    {
      v51 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v51 + 24) = 1501LL;
      WdLogEvent5_WdWarning(v51);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
      goto LABEL_80;
    }
    v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
    *(_QWORD *)(v49 + 24) = 1496LL;
    WdLogEvent5_WdWarning(v49);
LABEL_77:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v100);
LABEL_32:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v103);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v94);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v92);
    return 3221225495LL;
  }
  v52 = *((_QWORD *)v11 + 2);
  v118 = v52;
  v98 = *(struct DXGADAPTER **)(*(_QWORD *)(v52 + 16) + 16LL);
  v99 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v98 + 3);
  v97 = -1LL;
  v53 = v98;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v53 + 120, 0LL);
  v99 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v110, v52, 0, v54, 0);
  if ( v113 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55);
    v56[3] = 275LL;
    v56[4] = 4LL;
    v56[5] = v111;
    v56[6] = 0LL;
    v56[7] = 0LL;
    WdLogEvent5_WdCriticalError(v56);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v112 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v112 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v57, &EventBlockThread, v58, 72);
      KeWaitForSingleObject((char *)v112 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v112);
  }
  v113 = 1;
  v59 = *((unsigned int *)v114[4] + 106);
  if ( (_DWORD)v59 == 1 )
  {
    if ( v115 )
    {
      COREACCESS::AcquireShared((DXGADAPTER **)v114);
      v59 = *((unsigned int *)v114[2] + 44);
      if ( (_DWORD)v59 != 1 )
      {
        COREACCESS::Release(v114);
        goto LABEL_98;
      }
    }
    v62 = v102;
    if ( !*((_BYTE *)v102 + 398) )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v59);
      v63[3] = v38;
      v63[4] = v7->BroadcastContext[0];
      v63[5] = -1073741811LL;
      v63[6] = 1523LL;
      WdLogEvent5_WdError(v63);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
      if ( v99 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v97);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
      goto LABEL_80;
    }
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)v126);
    v123 = 0LL;
    v125 = 0;
    v64 = 0LL;
    NumHistoryBuffers = v7->NumHistoryBuffers;
    if ( NumHistoryBuffers )
    {
      Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements((__int64)v126, NumHistoryBuffers);
      v67 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&v123, v7->NumHistoryBuffers);
      v64 = (struct _VIDMM_MULTI_ALLOC **)v67;
      v117 = (struct _VIDMM_MULTI_ALLOC **)v67;
      if ( !Elements || !v67 )
      {
        v83 = WdLogNewEntry5_WdLowResource(v68);
        *(_QWORD *)(v83 + 24) = 1558LL;
        WdLogEvent5_WdLowResource(v83);
        PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v123);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v126);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
        if ( v99 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v97);
        goto LABEL_77;
      }
      for ( i = 0; ; ++i )
      {
        v107 = i;
        if ( i >= v7->NumHistoryBuffers )
          break;
        v70 = &v7->HistoryBufferArray[i];
        if ( v91 )
        {
          if ( (unsigned __int64)v70 >= MmUserProbeAddress )
            v70 = (unsigned int *)MmUserProbeAddress;
          v71 = *v70;
        }
        else
        {
          v71 = *v70;
        }
        v106 = v71;
        v72 = (struct DXGALLOCATION **)&Elements[8 * i];
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    (__int64)v108,
                                                    (DXGALLOCATIONREFERENCE *)v116,
                                                    v71);
        DXGALLOCATIONREFERENCE::MoveAssign(v72, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v116);
        v74 = *v72;
        if ( !*v72 )
        {
          v75 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v75 + 24) = v71;
          WdLogEvent5_WdError(v75);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v123);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v126);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
          if ( v99 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v97);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v100);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v103);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v94);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v76, &EventProfilerExit, v77, v92);
          return 3221225485LL;
        }
        v119 = *((_QWORD *)v11 + 2);
        if ( *((_QWORD *)v74 + 1) != v119 )
        {
          _mm_lfence();
          v78 = (_QWORD *)WdLogNewEntry5_WdError(v74);
          v78[3] = *(_QWORD *)&Elements[8 * i];
          v78[4] = *((_QWORD *)*v72 + 1);
          v78[5] = *((_QWORD *)v11 + 2);
          WdLogEvent5_WdError(v78);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v123);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v126);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
          if ( v99 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v97);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v100);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v103);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v94);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v79, &EventProfilerExit, v80, v92);
          return 3221225485LL;
        }
        v64 = v117;
        v117[i] = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v74 + 3);
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v118 + 16) + 544LL)
                                                                                        + 8LL)
                                                                            + 1064LL))(
              *(_QWORD *)(*(_QWORD *)(v118 + 16) + 552LL),
              v64);
      if ( v16 >= 0 )
      {
        v62 = v102;
        goto LABEL_139;
      }
      v82 = WdLogNewEntry5_WdError(v81);
      *(_QWORD *)(v82 + 24) = 1630LL;
      WdLogEvent5_WdError(v82);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v123);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v126);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
      if ( v99 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v97);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
LABEL_137:
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v100);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v103);
LABEL_20:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v94);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v92);
      return (unsigned int)v16;
    }
LABEL_139:
    if ( v7->CommandLength )
    {
      v16 = DXGCONTEXT::SubmitCommand(
              v62,
              v7,
              (struct COREDEVICEACCESS *)v110,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v97,
              v103,
              v64,
              v7->NumHistoryBuffers,
              v91);
      if ( v16 < 0 )
      {
LABEL_154:
        if ( v123 != &v124 )
          operator delete[](v123);
        PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v126);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
        if ( v99 )
        {
          v99 = 0;
          ExReleasePushLockSharedEx((char *)v98 + 120, 0LL);
          KeLeaveCriticalRegion();
          v88 = (DXGGLOBAL **)v98;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(v88[2], (struct DXGADAPTER *)v88);
        }
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
        if ( v96 )
          ExReleasePushLockSharedEx(v95 + 112, 0LL);
        else
          ExReleaseResourceLite(*(PERESOURCE *)(v95 + 104));
        KeLeaveCriticalRegion();
        goto LABEL_137;
      }
    }
    else
    {
      v16 = 0;
    }
    v84 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 1752LL);
    PresentHistoryToken = 0LL;
    if ( ((*(_DWORD *)&v7->Flags >> 1) & 1) != 0 )
    {
      PresentHistoryToken = v7->PresentHistoryToken;
    }
    else if ( v84 && *(_QWORD *)v84 && *(_DWORD *)(v84 + 12) != *((_DWORD *)v62 + 6) )
    {
      PresentHistoryToken = *(_QWORD *)v84;
    }
    if ( PresentHistoryToken )
    {
      v86 = v7->BroadcastContextCount;
      v87 = &v7->BroadcastContext[1];
      if ( v86 <= 1 )
        v87 = 0LL;
      v16 = DXGCONTEXT::HandleVistaBltStub(
              v62,
              PresentHistoryToken,
              (*(_DWORD *)&v7->Flags >> 1) & 1,
              (struct COREDEVICEACCESS *)v110,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v97,
              v86 - 1,
              v87,
              v103);
    }
    goto LABEL_154;
  }
LABEL_98:
  COREACCESS::Release(v111);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
  if ( v99 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v97);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v120);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v95);
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v100);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v103);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v94);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v60, &EventProfilerExit, v61, v92);
  return 3221226166LL;
}
