/*
 * XREFs of DxgkSubmitPresentBltToHwQueue @ 0x1C01A5B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001070 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C000AB0C (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C001A828 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C001A854 (--1CWin32kLocks@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0qpqqqpp @ 0x1C001B8E4 (McTemplateK0qpqqqpp.c)
 *     McTemplateK0qqxxqq @ 0x1C001B9A0 (McTemplateK0qqxxqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z @ 0x1C0023BA8 (-CopyPresentArgs@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGPROCESS@@@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002486C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C00249B8 (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0024A9C (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C0099C78 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B1460 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkSubmitPresentBltToHwQueue(ULONG64 a1)
{
  struct DXGGLOBAL *Global; // rax
  char *v3; // rbx
  __int64 v4; // rcx
  PSLIST_ENTRY v5; // rdi
  __int64 v6; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGGLOBAL *v18; // rax
  char *v19; // rbx
  _OWORD *v20; // rdx
  _OWORD *v21; // rcx
  __int64 v22; // rax
  unsigned int *v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  PSLIST_ENTRY v27; // r14
  _QWORD *v28; // rax
  struct _SLIST_ENTRY *Next; // r14
  __int64 v30; // rcx
  __int64 v31; // r8
  struct DXGGLOBAL *v32; // rax
  union _SLIST_HEADER *v33; // rbx
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // r12d
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  struct DXGGLOBAL *v41; // rax
  unsigned int v42; // r12d
  struct DXGCONTEXT **PoolWithTag; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  bool v47; // zf
  struct DXGGLOBAL *v48; // rax
  union _SLIST_HEADER *v49; // rbx
  struct _SLIST_ENTRY **v50; // r9
  SIZE_T v51; // r15
  struct _SLIST_ENTRY **v52; // r9
  __int64 v53; // rax
  struct DXGCONTEXT **v54; // rdx
  unsigned int v55; // r15d
  unsigned int v56; // r12d
  __int64 v57; // rax
  __int64 v58; // r8
  int v59; // ecx
  struct DXGCONTEXT *v60; // r12
  struct _SLIST_ENTRY *v61; // rcx
  __int64 v62; // r8
  struct DXGCONTEXT *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  struct DXGADAPTER *v71; // r15
  int v72; // r12d
  __int64 v73; // rcx
  __int64 v74; // r8
  struct DXGGLOBAL *v75; // rax
  union _SLIST_HEADER *v76; // rbx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r9
  int v80; // r15d
  __int64 v81; // rcx
  __int64 v82; // r8
  struct DXGGLOBAL *v83; // rax
  union _SLIST_HEADER *v84; // rbx
  unsigned int v85; // r14d
  __int64 v86; // rcx
  __int64 v87; // r8
  struct DXGGLOBAL *v88; // rax
  union _SLIST_HEADER *v89; // rbx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // r8
  struct DXGGLOBAL *v94; // rax
  union _SLIST_HEADER *v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  struct DXGPROCESS *v98; // rax
  int v99; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v100; // [rsp+58h] [rbp-1E0h]
  unsigned __int64 v101; // [rsp+60h] [rbp-1D8h]
  unsigned int *v102; // [rsp+68h] [rbp-1D0h]
  char v103; // [rsp+70h] [rbp-1C8h]
  _QWORD v104[2]; // [rsp+78h] [rbp-1C0h] BYREF
  _BYTE v105[16]; // [rsp+88h] [rbp-1B0h] BYREF
  char v106[8]; // [rsp+98h] [rbp-1A0h] BYREF
  struct _SLIST_ENTRY *v107; // [rsp+A0h] [rbp-198h]
  char v108; // [rsp+A8h] [rbp-190h]
  struct DXGCONTEXT **v109; // [rsp+B0h] [rbp-188h] BYREF
  _BYTE v110[32]; // [rsp+B8h] [rbp-180h] BYREF
  unsigned int v111; // [rsp+D8h] [rbp-160h]
  struct _SLIST_ENTRY **v112; // [rsp+E0h] [rbp-158h] BYREF
  _BYTE v113[32]; // [rsp+E8h] [rbp-150h] BYREF
  unsigned int v114; // [rsp+108h] [rbp-130h]
  struct VIDSCH_SUBMIT_DATA_BASE *v115[2]; // [rsp+110h] [rbp-128h] BYREF
  _QWORD v116[6]; // [rsp+120h] [rbp-118h] BYREF
  char v117; // [rsp+150h] [rbp-E8h]
  struct _KTHREAD **v118[12]; // [rsp+160h] [rbp-D8h] BYREF
  _BYTE v119[120]; // [rsp+1C0h] [rbp-78h] BYREF
  unsigned int v120; // [rsp+248h] [rbp+10h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+250h] [rbp+18h] BYREF
  struct DXGPROCESS *v122; // [rsp+258h] [rbp+20h]

  v120 = -1073741811;
  Global = DXGGLOBAL::GetGlobal(a1);
  v3 = (char *)Global + 768;
  ++*((_DWORD *)Global + 197);
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 48);
  ListEntry = v5;
  if ( !v5 )
  {
    ++*((_DWORD *)v3 + 6);
    v5 = (PSLIST_ENTRY)_guard_dispatch_icall_fptr();
    ListEntry = v5;
  }
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v6 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v6);
    return 3221225495LL;
  }
  memset(v5, 0, 0x600uLL);
  v100 = 0LL;
  v99 = 2020;
  v102 = &v120;
  v103 = 0;
  v101 = (unsigned __int64)v5 & -(__int64)(bTracingEnabled != 0);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((unsigned __int64)v5 & -(__int64)(bTracingEnabled != 0), &EventProfilerEnter, v8, 2020);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v99, 2020);
  Current = DXGPROCESS::GetCurrent(v10, v9);
  v122 = Current;
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    *(_QWORD *)(v13 + 32) = PsGetCurrentProcess(v15, v14);
    WdLogEvent5_WdError(v13);
    goto LABEL_11;
  }
  v20 = (_OWORD *)(a1 + 16);
  if ( a1 + 16 >= MmUserProbeAddress )
    v20 = (_OWORD *)MmUserProbeAddress;
  v21 = v5;
  v22 = 11LL;
  do
  {
    *v21 = *v20;
    v21[1] = v20[1];
    v21[2] = v20[2];
    v21[3] = v20[3];
    v21[4] = v20[4];
    v21[5] = v20[5];
    v21[6] = v20[6];
    v21 += 8;
    *(v21 - 1) = v20[7];
    v20 += 8;
    --v22;
  }
  while ( v22 );
  *v21 = *v20;
  v21[1] = v20[1];
  v21[2] = v20[2];
  v21[3] = v20[3];
  v21[4] = v20[4];
  *((_QWORD *)v21 + 10) = *((_QWORD *)v20 + 10);
  v23 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v23 = (unsigned int *)MmUserProbeAddress;
  v24 = *v23;
  v25 = (_QWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v25 = (_QWORD *)MmUserProbeAddress;
  *((_QWORD *)&v5[95].Next + 1) = *v25;
  DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE(
    (DXGHWQUEUEBYHANDLE *)v105,
    v24,
    (struct _KTHREAD **)Current,
    (struct DXGHWQUEUE **)&ListEntry,
    0);
  v27 = ListEntry;
  if ( !ListEntry )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v28[3] = Current;
    v28[4] = v24;
    v28[5] = -1073741811LL;
    WdLogEvent5_WdError(v28);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99);
    if ( v103 )
    {
      if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v101,
          v17,
          *(_DWORD *)v101,
          *(_DWORD *)(v101 + 56),
          *(_QWORD *)(v101 + 80),
          *(_QWORD *)(v101 + 88),
          *(_DWORD *)(v101 + 1096),
          *v102);
    }
    else if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v101,
        v17,
        *(_DWORD *)v101,
        *(_QWORD *)(v101 + 8),
        *(_DWORD *)(v101 + 16),
        *(_DWORD *)(v101 + 88),
        *v102,
        *(_DWORD *)(v101 + 20),
        *(_DWORD *)(v101 + 24));
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v99);
    v18 = DXGGLOBAL::GetGlobal(v16);
    v19 = (char *)v18 + 768;
    ++*((_DWORD *)v18 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v18 + 48) >= *((_WORD *)v18 + 392) )
    {
      ++*((_DWORD *)v19 + 8);
LABEL_23:
      _guard_dispatch_icall_fptr();
      return 3221225485LL;
    }
    goto LABEL_24;
  }
  v5[95].Next = ListEntry;
  Next = v27[1].Next;
  if ( BYTE1(Next[25].Next) && *((_DWORD *)&v5[5].Next + 3) )
  {
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99);
    if ( v103 )
    {
      if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v101,
          v31,
          *(_DWORD *)v101,
          *(_DWORD *)(v101 + 56),
          *(_QWORD *)(v101 + 80),
          *(_QWORD *)(v101 + 88),
          *(_DWORD *)(v101 + 1096),
          *v102);
    }
    else if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v101,
        v31,
        *(_DWORD *)v101,
        *(_QWORD *)(v101 + 8),
        *(_DWORD *)(v101 + 16),
        *(_DWORD *)(v101 + 88),
        *v102,
        *(_DWORD *)(v101 + 20),
        *(_DWORD *)(v101 + 24));
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v30, &EventProfilerExit, v31, v99);
    v32 = DXGGLOBAL::GetGlobal(v30);
    v33 = (union _SLIST_HEADER *)((char *)v32 + 768);
    ++*((_DWORD *)v32 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v32 + 48) < *((_WORD *)v32 + 392) )
    {
      ExpInterlockedPushEntrySList(v33, v5);
    }
    else
    {
      ++LODWORD(v33[2].Alignment);
      _guard_dispatch_icall_fptr();
    }
    return 3221225474LL;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v104,
    (struct DXGDEVICE *)Next[1].Next);
  v37 = *((_DWORD *)&v5[5].Next + 3);
  if ( v37 > 0x40 )
  {
    v38 = WdLogNewEntry5_WdWarning(v35, v34, v36);
    *(_QWORD *)(v38 + 24) = Next;
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v38);
    if ( v104[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
    goto LABEL_55;
  }
  v42 = v37 + 1;
  PoolWithTag = 0LL;
  v109 = 0LL;
  v111 = 0;
  if ( v42 <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v110;
    v109 = (struct DXGCONTEXT **)v110;
  }
  else
  {
    v34 = 0xFFFFFFFFFFFFFFFFuLL % v42;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v42 < 8 )
      goto LABEL_73;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v42, 0x4B677844u);
    v109 = PoolWithTag;
  }
  v111 = v42;
  if ( !PoolWithTag )
    goto LABEL_74;
  memset(PoolWithTag, 0, 8LL * v42);
  PoolWithTag = v109;
LABEL_73:
  if ( !PoolWithTag )
  {
LABEL_74:
    v44 = WdLogNewEntry5_WdWarning(PoolWithTag, v34, v36);
    *(_QWORD *)(v44 + 24) = 1542LL;
    WdLogEvent5_WdWarning(v44);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v109);
    if ( v104[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
LABEL_76:
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99);
    if ( v103 )
    {
      if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v101,
          v46,
          *(_DWORD *)v101,
          *(_DWORD *)(v101 + 56),
          *(_QWORD *)(v101 + 80),
          *(_QWORD *)(v101 + 88),
          *(_DWORD *)(v101 + 1096),
          *v102);
    }
    else if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v101,
        v46,
        *(_DWORD *)v101,
        *(_QWORD *)(v101 + 8),
        *(_DWORD *)(v101 + 16),
        *(_DWORD *)(v101 + 88),
        *v102,
        *(_DWORD *)(v101 + 20),
        *(_DWORD *)(v101 + 24));
    }
    v47 = (qword_1C0079010 & 2) == 0;
LABEL_84:
    if ( !v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v45, &EventProfilerExit, v46, v99);
    v48 = DXGGLOBAL::GetGlobal(v45);
    v49 = (union _SLIST_HEADER *)((char *)v48 + 768);
    ++*((_DWORD *)v48 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v48 + 48) < *((_WORD *)v48 + 392) )
    {
      ExpInterlockedPushEntrySList(v49, v5);
    }
    else
    {
      ++LODWORD(v49[2].Alignment);
      _guard_dispatch_icall_fptr();
    }
    return 3221225495LL;
  }
  v50 = 0LL;
  v112 = 0LL;
  v114 = 0;
  if ( v42 <= 4 )
  {
    v52 = (struct _SLIST_ENTRY **)v113;
    v112 = (struct _SLIST_ENTRY **)v113;
    v51 = 8LL * v42;
  }
  else
  {
    v34 = 0xFFFFFFFFFFFFFFFFuLL % v42;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v42 < 8 )
      goto LABEL_96;
    v51 = 8LL * v42;
    v52 = (struct _SLIST_ENTRY **)ExAllocatePoolWithTag(PagedPool, v51, 0x4B677844u);
    v112 = v52;
    PoolWithTag = v109;
  }
  v114 = v42;
  if ( !v52 )
  {
LABEL_97:
    v53 = WdLogNewEntry5_WdWarning(PoolWithTag, v34, v36);
    *(_QWORD *)(v53 + 24) = 1552LL;
    WdLogEvent5_WdWarning(v53);
    goto LABEL_98;
  }
  memset(v52, 0, v51);
  PoolWithTag = v109;
  v50 = v112;
LABEL_96:
  if ( !v50 )
    goto LABEL_97;
  *PoolWithTag = (struct DXGCONTEXT *)Next;
  *v112 = Next;
  v54 = v109;
  ListEntry = (PSLIST_ENTRY)v109;
  v55 = 0;
  if ( *((_DWORD *)&v5[5].Next + 3) )
  {
    while ( 1 )
    {
      v56 = *((_DWORD *)&v5[6].Next + v55);
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
      v57 = (v56 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v57 < *((_DWORD *)Current + 62)
        && (v58 = *((_QWORD *)Current + 29),
            v59 = *(_DWORD *)(v58 + 16 * v57 + 8),
            ((v56 >> 25) & 0x60) == (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x60))
        && (v59 & 0x2000) == 0
        && (v59 & 0x1F) == 7 )
      {
        v60 = *(struct DXGCONTEXT **)(v58 + 16LL * (unsigned int)v57);
      }
      else
      {
        v60 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      v62 = v55 + 1;
      v109[v62] = v60;
      v112[v62] = (struct _SLIST_ENTRY *)v60;
      v54 = v109;
      v63 = v109[v62];
      if ( !v63 )
        break;
      v61 = Next[1].Next;
      if ( *((struct _SLIST_ENTRY **)v63 + 2) != v61 )
        break;
      if ( v55 )
      {
        if ( DXGADAPTER::IsDxgmms2((DXGADAPTER *)v61[1].Next[1].Next) )
        {
          v64 = *((_QWORD *)&ListEntry->Next + v55);
          if ( *(_DWORD *)(v64 + 360) <= *(_DWORD *)(*((_QWORD *)ListEntry + v55 - 1) + 360LL) )
          {
            v69 = (_QWORD *)WdLogNewEntry5_WdError(v64);
            v69[3] = -1073741811LL;
            goto LABEL_119;
          }
        }
      }
      v55 = v62;
      if ( (unsigned int)v62 >= *((_DWORD *)&v5[5].Next + 3) )
        goto LABEL_114;
    }
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v61);
    v69[3] = Next;
    v69[4] = *((unsigned int *)&v5[6].Next + v55);
    v69[5] = v55;
    v69[6] = -1073741811LL;
LABEL_119:
    WdLogEvent5_WdError(v69);
    goto LABEL_120;
  }
LABEL_114:
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v116,
    v54,
    v111);
  if ( v117 )
  {
    if ( !v116[0] )
    {
      v68 = WdLogNewEntry5_WdWarning(v66, v65, v67);
      *(_QWORD *)(v68 + 24) = 1606LL;
      WdLogEvent5_WdWarning(v68);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
LABEL_98:
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v112);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v109);
      if ( v104[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
      goto LABEL_76;
    }
    v70 = WdLogNewEntry5_WdWarning(v66, v65, v67);
    *(_QWORD *)(v70 + 24) = 1611LL;
    WdLogEvent5_WdWarning(v70);
    goto LABEL_145;
  }
  *((_QWORD *)&v5[93].Next + 1) = v112;
  LOBYTE(v5[94].Next) = 1;
  v71 = (struct DXGADAPTER *)*((_QWORD *)&Next[1].Next[105].Next + 1);
  v72 = DXGCONTEXT::CopyPresentArgs((DXGPRESENT **)Next, (struct _D3DKMT_PRESENT *)v5, Current);
  v120 = v72;
  if ( v72 < 0 )
  {
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v112);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v109);
    if ( v104[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99);
    if ( v103 )
    {
      if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v101,
          v74,
          *(_DWORD *)v101,
          *(_DWORD *)(v101 + 56),
          *(_QWORD *)(v101 + 80),
          *(_QWORD *)(v101 + 88),
          *(_DWORD *)(v101 + 1096),
          *v102);
    }
    else if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v101,
        v74,
        *(_DWORD *)v101,
        *(_QWORD *)(v101 + 8),
        *(_DWORD *)(v101 + 16),
        *(_DWORD *)(v101 + 88),
        *v102,
        *(_DWORD *)(v101 + 20),
        *(_DWORD *)(v101 + 24));
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v73, &EventProfilerExit, v74, v99);
    v75 = DXGGLOBAL::GetGlobal(v73);
    v76 = (union _SLIST_HEADER *)((char *)v75 + 768);
    ++*((_DWORD *)v75 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v75 + 48) < *((_WORD *)v75 + 392) )
    {
      ExpInterlockedPushEntrySList(v76, v5);
    }
    else
    {
      ++LODWORD(v76[2].Alignment);
      _guard_dispatch_icall_fptr();
    }
    return (unsigned int)v72;
  }
  v77 = *((unsigned int *)&v5[5].Next + 2);
  if ( (v77 & 0x10000000) != 0 )
  {
    if ( !v71 )
    {
      v78 = WdLogNewEntry5_WdError(v77);
      *(_QWORD *)(v78 + 24) = 1632LL;
LABEL_144:
      WdLogEvent5_WdError(v78);
LABEL_145:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
LABEL_120:
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v112);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v109);
      if ( v104[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
LABEL_55:
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99);
      if ( v103 )
      {
        if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq(
            &DxgkControlGuid_Context,
            v101,
            v40,
            *(_DWORD *)v101,
            *(_DWORD *)(v101 + 56),
            *(_QWORD *)(v101 + 80),
            *(_QWORD *)(v101 + 88),
            *(_DWORD *)(v101 + 1096),
            *v102);
      }
      else if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qpqqqpp(
          &DxgkControlGuid_Context,
          v101,
          v40,
          *(_DWORD *)v101,
          *(_QWORD *)(v101 + 8),
          *(_DWORD *)(v101 + 16),
          *(_DWORD *)(v101 + 88),
          *v102,
          *(_DWORD *)(v101 + 20),
          *(_DWORD *)(v101 + 24));
      }
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v39, &EventProfilerExit, v40, v99);
      v41 = DXGGLOBAL::GetGlobal(v39);
      v19 = (char *)v41 + 768;
      ++*((_DWORD *)v41 + 199);
      if ( ExQueryDepthSList((PSLIST_HEADER)v41 + 48) >= *((_WORD *)v41 + 392) )
      {
        ++*((_DWORD *)v19 + 8);
        goto LABEL_23;
      }
LABEL_24:
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v19, v5);
      return 3221225485LL;
    }
    if ( (*((_DWORD *)v71 + 75) & 0x100) == 0 )
    {
      v78 = WdLogNewEntry5_WdError(v77);
      *(_QWORD *)(v78 + 24) = 1638LL;
      goto LABEL_144;
    }
  }
  else if ( v71 )
  {
    if ( (*((_DWORD *)v71 + 75) & 0x100) != 0 && (v77 & 0x18000) == 0 )
    {
      v78 = WdLogNewEntry5_WdError(v77);
      *(_QWORD *)(v78 + 24) = 1648LL;
      goto LABEL_144;
    }
  }
  else
  {
    v71 = (struct DXGADAPTER *)Next[1].Next[1].Next[1].Next;
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v119, *((const struct _DXGKWIN32KENG_INTERFACE *const *)Current + 13), v71);
  v107 = Next[1].Next[1].Next[1].Next;
  v108 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v118, (__int64)Next[1].Next, 2, v79, 0);
  v80 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v118);
  v120 = v80;
  if ( v80 < 0 )
    goto LABEL_155;
  if ( (*(_DWORD *)(&v5[5].Next + 1) & 0x200000) != 0 )
  {
    v85 = SubmitPresentHistoryToken(
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v5[22].Next + 1),
            (struct COREDEVICEACCESS *)v118,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v106,
            (struct CWin32kLocks *)v119,
            0,
            0LL,
            0LL,
            0LL,
            (struct DXGCONTEXT *)Next,
            0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118);
    if ( v108 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v119);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v112);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v109);
    if ( v104[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99);
    if ( v103 )
    {
      if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v101,
          v87,
          *(_DWORD *)v101,
          *(_DWORD *)(v101 + 56),
          *(_QWORD *)(v101 + 80),
          *(_QWORD *)(v101 + 88),
          *(_DWORD *)(v101 + 1096),
          *v102);
    }
    else if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v101,
        v87,
        *(_DWORD *)v101,
        *(_QWORD *)(v101 + 8),
        *(_DWORD *)(v101 + 16),
        *(_DWORD *)(v101 + 88),
        *v102,
        *(_DWORD *)(v101 + 20),
        *(_DWORD *)(v101 + 24));
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v86, &EventProfilerExit, v87, v99);
    v88 = DXGGLOBAL::GetGlobal(v86);
    v89 = (union _SLIST_HEADER *)((char *)v88 + 768);
    ++*((_DWORD *)v88 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v88 + 48) < *((_WORD *)v88 + 392) )
    {
      ExpInterlockedPushEntrySList(v89, v5);
    }
    else
    {
      ++LODWORD(v89[2].Alignment);
      _guard_dispatch_icall_fptr();
    }
    return v85;
  }
  else
  {
    v115[0] = 0LL;
    v115[1] = (struct VIDSCH_SUBMIT_DATA_BASE *)Next[1].Next[1].Next;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v115);
    if ( !v115[0] )
    {
      v91 = WdLogNewEntry5_WdLowResource(v90);
      *(_QWORD *)(v91 + 24) = 1690LL;
      WdLogEvent5_WdLowResource(v91);
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v115);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118);
      if ( v108 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
      CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v119);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v112);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v109);
      if ( v104[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99);
      if ( v103 )
      {
        if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qqxxqq(
            &DxgkControlGuid_Context,
            v101,
            v46,
            *(_DWORD *)v101,
            *(_DWORD *)(v101 + 56),
            *(_QWORD *)(v101 + 80),
            *(_QWORD *)(v101 + 88),
            *(_DWORD *)(v101 + 1096),
            *v102);
      }
      else if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0qpqqqpp(
          &DxgkControlGuid_Context,
          v101,
          v46,
          *(_DWORD *)v101,
          *(_QWORD *)(v101 + 8),
          *(_DWORD *)(v101 + 16),
          *(_DWORD *)(v101 + 88),
          *v102,
          *(_DWORD *)(v101 + 20),
          *(_DWORD *)(v101 + 24));
      }
      v47 = (qword_1C0079010 & 2) == 0;
      goto LABEL_84;
    }
    v120 = DXGCONTEXT::Present(
             (DXGCONTEXT *)Next,
             (const struct DXGK_PRESENT_PARAMS *)v5,
             v118,
             (struct DXGADAPTERSTOPRESETLOCKSHARED *)v106,
             (struct CWin32kLocks *)v119,
             v109,
             v115[0]);
    if ( v120 == -1071775482 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)v118[3]) )
      {
        v80 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v118);
        if ( v80 < 0 )
        {
          CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v115);
LABEL_155:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118);
          if ( v108 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
          CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v119);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v112);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v109);
          if ( v104[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
          DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99);
          if ( v103 )
          {
            if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0qqxxqq(
                &DxgkControlGuid_Context,
                v101,
                v82,
                *(_DWORD *)v101,
                *(_DWORD *)(v101 + 56),
                *(_QWORD *)(v101 + 80),
                *(_QWORD *)(v101 + 88),
                *(_DWORD *)(v101 + 1096),
                *v102);
          }
          else if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0qpqqqpp(
              &DxgkControlGuid_Context,
              v101,
              v82,
              *(_DWORD *)v101,
              *(_QWORD *)(v101 + 8),
              *(_DWORD *)(v101 + 16),
              *(_DWORD *)(v101 + 88),
              *v102,
              *(_DWORD *)(v101 + 20),
              *(_DWORD *)(v101 + 24));
          }
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v81, &EventProfilerExit, v82, v99);
          v83 = DXGGLOBAL::GetGlobal(v81);
          v84 = (union _SLIST_HEADER *)((char *)v83 + 768);
          ++*((_DWORD *)v83 + 199);
          if ( ExQueryDepthSList((PSLIST_HEADER)v83 + 48) < *((_WORD *)v83 + 392) )
          {
            ExpInterlockedPushEntrySList(v84, v5);
          }
          else
          {
            ++LODWORD(v84[2].Alignment);
            _guard_dispatch_icall_fptr();
          }
          return (unsigned int)v80;
        }
      }
      DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)Next[1].Next, (struct COREDEVICEACCESS *)v118);
    }
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v115);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118);
    if ( v108 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v106);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v119);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v112);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((PVOID *)&v109);
    if ( v104[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v104);
    DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v105);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v99);
    if ( v103 )
    {
      if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v101,
          v93,
          *(_DWORD *)v101,
          *(_DWORD *)(v101 + 56),
          *(_QWORD *)(v101 + 80),
          *(_QWORD *)(v101 + 88),
          *(_DWORD *)(v101 + 1096),
          *v102);
    }
    else if ( v101 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v101,
        v93,
        *(_DWORD *)v101,
        *(_QWORD *)(v101 + 8),
        *(_DWORD *)(v101 + 16),
        *(_DWORD *)(v101 + 88),
        *v102,
        *(_DWORD *)(v101 + 20),
        *(_DWORD *)(v101 + 24));
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v92, &EventProfilerExit, v93, v99);
    v94 = DXGGLOBAL::GetGlobal(v92);
    v95 = (union _SLIST_HEADER *)((char *)v94 + 768);
    ++*((_DWORD *)v94 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v94 + 48) < *((_WORD *)v94 + 392) )
    {
      ExpInterlockedPushEntrySList(v95, v5);
    }
    else
    {
      ++LODWORD(v95[2].Alignment);
      _guard_dispatch_icall_fptr();
    }
    v98 = DXGPROCESS::GetCurrent(v97, v96);
    DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(*((_QWORD *)v98 + 9) + 88LL));
    return v120;
  }
}
