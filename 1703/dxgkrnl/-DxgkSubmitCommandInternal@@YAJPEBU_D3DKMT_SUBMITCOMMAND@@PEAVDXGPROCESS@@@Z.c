/*
 * XREFs of ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00CBD30
 * Callers:
 *     ?VmBusSubmitCommand@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033480 (-VmBusSubmitCommand@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitCommand @ 0x1C0096280 (DxgkSubmitCommand.c)
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0002754 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ??1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ @ 0x1C0014ABC (--1ENSURE_CONTEXT_ARRAY_DEREFERENCE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendSubmitCommand@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z @ 0x1C0031C68 (-VmBusSendSubmitCommand@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_SUBMITCOMMAND@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C008AC88 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C009E750 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C009E78C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C009E7C8 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C00B1B40 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C019EEA8 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 *     ?AllocateElements@?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C01A3B60 (-AllocateElements@-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAAPEAPEAU_VIDMM_MULTI_ALLOC@.c)
 */

__int64 __fastcall DxgkSubmitCommandInternal(const struct _D3DKMT_SUBMITCOMMAND *a1, struct DXGPROCESS *a2, __int64 a3)
{
  const struct _D3DKMT_SUBMITCOMMAND *v4; // rbx
  char CurrentThreadPreviousMode; // al
  _D3DKMT_SUBMITCOMMAND *v6; // r14
  _D3DKMT_SUBMITCOMMAND *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGCONTEXT *v11; // r15
  _QWORD *v12; // rax
  __int64 NumPrimaries; // rcx
  unsigned __int64 BroadcastContextCount; // rbx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // r13d
  struct DXGCONTEXT **PoolWithTag; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // r12d
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  __int64 v30; // rdi
  __int64 v31; // rcx
  int v32; // ebx
  struct _KEVENT *v33; // rsi
  struct _KEVENT *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int8 v37; // bl
  __int64 v38; // r8
  struct DXGPROCESS *v39; // rsi
  signed __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r9
  unsigned int v43; // r8d
  _QWORD *v44; // rbx
  signed __int64 v45; // rax
  signed __int64 v46; // rtt
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  struct DXGADAPTER *v55; // rbx
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  DXGCONTEXT *v66; // rbx
  _QWORD *v67; // rax
  struct _VIDMM_MULTI_ALLOC **v68; // r12
  unsigned int NumHistoryBuffers; // edx
  __int64 Elements; // r13
  __int64 v71; // rax
  __int64 v72; // rcx
  UINT v73; // ebx
  D3DKMT_HANDLE *HistoryBufferArray; // rax
  unsigned int *v75; // rdx
  unsigned int v76; // edi
  struct DXGALLOCATION **v77; // rsi
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v79; // rdx
  struct DXGALLOCATION *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  struct DXGCONTEXT *v84; // rdi
  _QWORD *v85; // rax
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  DXGGLOBAL **v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r8
  unsigned __int8 v100; // [rsp+40h] [rbp-448h]
  _BYTE v101[16]; // [rsp+48h] [rbp-440h] BYREF
  __int64 v102; // [rsp+58h] [rbp-430h] BYREF
  int v103; // [rsp+60h] [rbp-428h]
  __int64 v104; // [rsp+68h] [rbp-420h] BYREF
  struct DXGADAPTER *v105; // [rsp+70h] [rbp-418h]
  char v106; // [rsp+78h] [rbp-410h]
  struct DXGCONTEXT **v107; // [rsp+80h] [rbp-408h] BYREF
  unsigned int v108; // [rsp+88h] [rbp-400h]
  struct DXGCONTEXT *v109; // [rsp+90h] [rbp-3F8h] BYREF
  struct DXGCONTEXT **v110; // [rsp+98h] [rbp-3F0h] BYREF
  _BYTE v111[32]; // [rsp+A0h] [rbp-3E8h] BYREF
  unsigned int v112; // [rsp+C0h] [rbp-3C8h]
  unsigned int v113; // [rsp+C8h] [rbp-3C0h]
  UINT v114; // [rsp+CCh] [rbp-3BCh]
  struct DXGPROCESS *v115; // [rsp+D0h] [rbp-3B8h]
  struct DXGPROCESS *v116; // [rsp+D8h] [rbp-3B0h]
  char v117[8]; // [rsp+E0h] [rbp-3A8h] BYREF
  _BYTE v118[16]; // [rsp+E8h] [rbp-3A0h] BYREF
  DXGADAPTER *v119; // [rsp+F8h] [rbp-390h]
  char v120; // [rsp+100h] [rbp-388h]
  _BYTE v121[16]; // [rsp+108h] [rbp-380h] BYREF
  __int64 v122; // [rsp+118h] [rbp-370h]
  __int64 v123; // [rsp+128h] [rbp-360h]
  char v124; // [rsp+130h] [rbp-358h]
  char v125[8]; // [rsp+140h] [rbp-348h] BYREF
  struct DXGCONTEXT *v126; // [rsp+148h] [rbp-340h]
  __int64 v127; // [rsp+150h] [rbp-338h]
  __int64 v128; // [rsp+158h] [rbp-330h]
  _QWORD v129[6]; // [rsp+160h] [rbp-328h] BYREF
  char v130; // [rsp+190h] [rbp-2F8h]
  _BYTE v131[24]; // [rsp+198h] [rbp-2F0h] BYREF
  PVOID P; // [rsp+1B0h] [rbp-2D8h] BYREF
  char v133; // [rsp+1B8h] [rbp-2D0h] BYREF
  int v134; // [rsp+238h] [rbp-250h]
  DXGALLOCATIONREFERENCE *v135[18]; // [rsp+240h] [rbp-248h] BYREF
  _D3DKMT_SUBMITCOMMAND v136; // [rsp+2D0h] [rbp-1B8h] BYREF

  v115 = a2;
  v4 = a1;
  v116 = a2;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2102);
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v100 = CurrentThreadPreviousMode == 1;
  v6 = &v136;
  if ( CurrentThreadPreviousMode == 1 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_SUBMITCOMMAND *)MmUserProbeAddress;
    v7 = &v136;
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
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101, v6->BroadcastContext[0], a2, &v109, 0);
  v11 = v109;
  v126 = v109;
  if ( !v109 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v12[3] = a2;
    NumPrimaries = v6->BroadcastContext[0];
    v12[5] = -1073741811LL;
LABEL_159:
    v12[4] = NumPrimaries;
    WdLogEvent5_WdError(v12);
    goto LABEL_160;
  }
  BroadcastContextCount = v6->BroadcastContextCount;
  if ( (unsigned int)(BroadcastContextCount - 1) > 0x3F )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v12[3] = v11;
    NumPrimaries = v6->BroadcastContextCount;
    v12[5] = 64LL;
    goto LABEL_158;
  }
  if ( v6->NumPrimaries > 0x10 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v12[3] = v11;
    NumPrimaries = v6->NumPrimaries;
    v12[5] = 16LL;
LABEL_158:
    v12[6] = -1073741811LL;
    goto LABEL_159;
  }
  v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v109 + 2) + 16LL) + 16LL);
  if ( *(_BYTE *)(v15 + 186) )
  {
    v16 = DXGADAPTER::VmBusSendSubmitCommand((struct VMBCHANNEL__ **)v15, a2, v6);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v17, &EventProfilerExit, v18, 2102);
    return v16;
  }
  v20 = 0;
  PoolWithTag = 0LL;
  v110 = 0LL;
  v22 = 0;
  v112 = 0;
  v23 = 1;
  if ( (unsigned int)BroadcastContextCount <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v111;
    v110 = (struct DXGCONTEXT **)v111;
  }
  else
  {
    v24 = 0xFFFFFFFFFFFFFFFFuLL % BroadcastContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / BroadcastContextCount < 8 )
      goto LABEL_27;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8 * BroadcastContextCount, 0x4B677844u);
    v110 = PoolWithTag;
  }
  v112 = BroadcastContextCount;
  if ( !PoolWithTag )
  {
LABEL_28:
    v25 = WdLogNewEntry5_WdLowResource(PoolWithTag);
    *(_QWORD *)(v25 + 24) = 1364LL;
    WdLogEvent5_WdLowResource(v25);
    goto LABEL_29;
  }
  memset(PoolWithTag, 0, 8 * BroadcastContextCount);
  v22 = v112;
  PoolWithTag = v110;
LABEL_27:
  if ( !PoolWithTag )
    goto LABEL_28;
  v107 = PoolWithTag;
  v108 = v22;
  _m_prefetchw((char *)v11 + 32);
  v28 = *((_QWORD *)v11 + 4);
  if ( !v28 )
  {
LABEL_156:
    v97 = WdLogNewEntry5_WdError(PoolWithTag, v24);
    *(_QWORD *)(v97 + 24) = v109;
    WdLogEvent5_WdError(v97);
    goto LABEL_74;
  }
  while ( 1 )
  {
    PoolWithTag = (struct DXGCONTEXT **)(v28 + 1);
    v29 = v28;
    v28 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 4, v28 + 1, v28);
    if ( v29 == v28 )
      break;
    if ( !v28 )
      goto LABEL_156;
  }
  *v110 = v109;
  v30 = *((_QWORD *)v11 + 2);
  v102 = v30;
  v31 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL);
  if ( *(int *)(v31 + 1944) >= 0x2000 || *(_BYTE *)(v31 + 2228) )
    v32 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 203);
  else
    v32 = 0;
  v103 = v32;
  v33 = *(struct _KEVENT **)(v30 + 16);
  if ( *(_DWORD *)(v30 + 328) == 2 )
  {
    if ( KeReadStateEvent(v33 + 4) )
      goto LABEL_47;
    v34 = v33 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v33 + 3) )
      goto LABEL_47;
    v34 = v33 + 3;
  }
  KeWaitForSingleObject(v34, Executive, 0, 0, 0LL);
LABEL_47:
  KeEnterCriticalRegion();
  if ( v32 )
  {
    if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v30 + 112, 0LL) )
      goto LABEL_58;
    KeLeaveCriticalRegion();
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 96LL));
    v37 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v30 + 112));
  }
  else
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v30 + 104), 0) )
      goto LABEL_58;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 96LL));
    v37 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v38, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v30 + 104), 1u);
  }
  if ( v37 )
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v30 + 16) + 16LL));
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL) + 96LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_58:
  v39 = v115;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v131, v115, v35, v36);
  if ( v6->BroadcastContextCount > 1 )
  {
    while ( 1 )
    {
      v40 = (v6->BroadcastContext[v23] >> 6) & 0xFFFFFF;
      v41 = v6->BroadcastContext[v23] >> 30;
      if ( (unsigned int)v40 >= *((_DWORD *)v39 + 52) )
        break;
      v42 = *((_QWORD *)v39 + 24);
      v43 = *(_DWORD *)(v42 + 16LL * (unsigned int)v40 + 8);
      if ( (_DWORD)v41 != ((v43 >> 4) & 3)
        || (v43 & 0x1000) != 0
        || (v43 & 0xF) == 0
        || (*(_BYTE *)(v42 + 16LL * (unsigned int)v40 + 8) & 0xF) != 7 )
      {
        break;
      }
      v44 = *(_QWORD **)(v42 + 16LL * (unsigned int)v40);
      if ( !v44 )
        goto LABEL_76;
      v40 = v44[2];
      if ( v40 != *((_QWORD *)v11 + 2) )
        goto LABEL_76;
      _m_prefetchw(v44 + 4);
      v45 = v44[4];
      do
      {
        if ( !v45 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdError(v40, v41);
          v47[3] = v44;
          goto LABEL_72;
        }
        v40 = v45 + 1;
        v46 = v45;
        v45 = _InterlockedCompareExchange64(v44 + 4, v45 + 1, v45);
      }
      while ( v46 != v45 );
      v110[v23++] = (struct DXGCONTEXT *)v44;
      if ( v23 >= v6->BroadcastContextCount )
        goto LABEL_77;
    }
    v44 = 0LL;
LABEL_76:
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v40, v41);
    v47[3] = v109;
    v47[4] = v44;
    v47[5] = v23;
    v47[6] = -1073741811LL;
LABEL_72:
    WdLogEvent5_WdError(v47);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v131);
    goto LABEL_73;
  }
LABEL_77:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v131);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v129,
    v110,
    v112);
  if ( v130 )
  {
    if ( !v129[0] )
    {
      v52 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
      *(_QWORD *)(v52 + 24) = 1437LL;
      WdLogEvent5_WdWarning(v52);
LABEL_80:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v107);
LABEL_29:
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v110);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v26, &EventProfilerExit, v27, 2102);
      return 3221225495LL;
    }
    v53 = WdLogNewEntry5_WdWarning(v49, v48, v50, v51);
    *(_QWORD *)(v53 + 24) = 1442LL;
    WdLogEvent5_WdWarning(v53);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
LABEL_73:
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
LABEL_74:
    ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v107);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v110);
LABEL_160:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v98, &EventProfilerExit, v99, 2102);
    return 3221225485LL;
  }
  v54 = *((_QWORD *)v11 + 2);
  v127 = v54;
  v105 = *(struct DXGADAPTER **)(*(_QWORD *)(v54 + 16) + 16LL);
  v106 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v105 + 3);
  v104 = -1LL;
  v55 = v105;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v55 + 120, 0LL);
  v106 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v117, v54, 0LL, v56, 0);
  if ( v120 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v58, v57, v59);
    v60[3] = 275LL;
    v60[4] = 4LL;
    v60[5] = v118;
    v60[6] = 0LL;
    v60[7] = 0LL;
    WdLogEvent5_WdCriticalError(v60);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v119 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v119 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v61, &EventBlockThread, v62, 72);
      KeWaitForSingleObject((char *)v119 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v119);
  }
  v120 = 1;
  v63 = *(unsigned int *)(v123 + 408);
  if ( (_DWORD)v63 != 1 )
    goto LABEL_95;
  if ( v124 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v121);
    v63 = *(unsigned int *)(v122 + 176);
    if ( (_DWORD)v63 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v121);
LABEL_95:
      COREACCESS::Release((COREACCESS *)v118);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
      if ( v106 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v107);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v110);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v64, &EventProfilerExit, v65, 2102);
      return 3221226166LL;
    }
  }
  v66 = v109;
  if ( !*((_BYTE *)v109 + 366) )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdError(v63, v57);
    v67[3] = v39;
    v67[4] = v6->BroadcastContext[0];
    v67[5] = -1073741811LL;
    v67[6] = 1464LL;
    WdLogEvent5_WdError(v67);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
    if ( v106 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
    goto LABEL_73;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)v135);
  P = 0LL;
  v134 = 0;
  v68 = 0LL;
  NumHistoryBuffers = v6->NumHistoryBuffers;
  if ( NumHistoryBuffers )
  {
    Elements = PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements((__int64 *)v135, NumHistoryBuffers);
    v71 = PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::AllocateElements(&P, v6->NumHistoryBuffers);
    v68 = (struct _VIDMM_MULTI_ALLOC **)v71;
    if ( Elements && v71 )
    {
      v73 = 0;
      v114 = 0;
      while ( v73 < v6->NumHistoryBuffers )
      {
        HistoryBufferArray = v6->HistoryBufferArray;
        if ( v100 )
        {
          v75 = &HistoryBufferArray[v73];
          if ( (unsigned __int64)v75 >= MmUserProbeAddress )
            v75 = (unsigned int *)MmUserProbeAddress;
          v76 = *v75;
        }
        else
        {
          v76 = HistoryBufferArray[v73];
        }
        v113 = v76;
        v77 = (struct DXGALLOCATION **)(8LL * v73 + Elements);
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    (__int64)v115,
                                                    (DXGALLOCATIONREFERENCE *)v125,
                                                    v76);
        DXGALLOCATIONREFERENCE::MoveAssign(v77, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v125);
        v80 = *v77;
        if ( !*v77 )
        {
          v81 = WdLogNewEntry5_WdError(0LL, v79);
          *(_QWORD *)(v81 + 24) = v76;
          WdLogEvent5_WdError(v81);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v135);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
          if ( v106 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v107);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v110);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101);
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v82, &EventProfilerExit, v83, 2102);
          return 3221225485LL;
        }
        v84 = v126;
        v128 = *((_QWORD *)v126 + 2);
        if ( *((_QWORD *)v80 + 1) != v128 )
        {
          _mm_lfence();
          v85 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79);
          v85[3] = *v77;
          v85[4] = *((_QWORD *)*v77 + 1);
          v85[5] = *((_QWORD *)v84 + 2);
          WdLogEvent5_WdError(v85);
          PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
          PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v135);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
          if ( v106 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
          ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v107);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v110);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101);
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v86, &EventProfilerExit, v87, 2102);
          return 3221225485LL;
        }
        v68[v73++] = (struct _VIDMM_MULTI_ALLOC *)*((_QWORD *)v80 + 3);
        v114 = v73;
      }
      v16 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC **, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v127 + 16) + 432LL)
                                                                                                + 8LL)
                                                                                    + 1048LL))(
              *(_QWORD *)(*(_QWORD *)(v127 + 16) + 440LL),
              v68,
              v6->NumHistoryBuffers);
      if ( (v16 & 0x80000000) == 0 )
      {
        v66 = v109;
        v20 = 0;
        goto LABEL_139;
      }
      v90 = WdLogNewEntry5_WdError(v89, v88);
      *(_QWORD *)(v90 + 24) = 1571LL;
      WdLogEvent5_WdError(v90);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v135);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
      if ( v106 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)&v102);
      ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v107);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v110);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        Template_q(v91, &EventProfilerExit, v92, 2102);
        return v16;
      }
      return v16;
    }
    v93 = WdLogNewEntry5_WdLowResource(v72);
    *(_QWORD *)(v93 + 24) = 1499LL;
    WdLogEvent5_WdLowResource(v93);
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&P);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v135);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
    if ( v106 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v104);
    goto LABEL_80;
  }
LABEL_139:
  if ( !v6->CommandLength
    || (v20 = DXGCONTEXT::SubmitCommand(
                v66,
                v6,
                (struct COREDEVICEACCESS *)v117,
                (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v104,
                v110,
                v68,
                v6->NumHistoryBuffers,
                v100),
        v20 >= 0) )
  {
    if ( (*(_DWORD *)&v6->Flags & 2) != 0 )
      v20 = DXGCONTEXT::HandleVistaBltStub(
              v66,
              v6->PresentHistoryToken,
              (struct COREDEVICEACCESS *)v117,
              (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v104,
              v110);
  }
  if ( P != &v133 && P )
    ExFreePoolWithTag(P, 0);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(v135);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
  if ( v106 )
  {
    v106 = 0;
    ExReleasePushLockSharedEx((char *)v105 + 120, 0LL);
    KeLeaveCriticalRegion();
    v94 = (DXGGLOBAL **)v105;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v94[2], (struct DXGADAPTER *)v94);
  }
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
  if ( v103 )
    ExReleasePushLockSharedEx(v102 + 112, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v102 + 104));
  KeLeaveCriticalRegion();
  ENSURE_CONTEXT_ARRAY_DEREFERENCE::~ENSURE_CONTEXT_ARRAY_DEREFERENCE((ENSURE_CONTEXT_ARRAY_DEREFERENCE *)&v107);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v110);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v95, &EventProfilerExit, v96, 2102);
  return (unsigned int)v20;
}
