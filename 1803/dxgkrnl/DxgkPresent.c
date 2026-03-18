/*
 * XREFs of DxgkPresent @ 0x1C00C8F20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001070 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0016148 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C0019E50 (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C001A828 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C001A854 (--1CWin32kLocks@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     McTemplateK0qpqqqpp @ 0x1C001B8E4 (McTemplateK0qpqqqpp.c)
 *     McTemplateK0qqxxqq @ 0x1C001B9A0 (McTemplateK0qqxxqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C0099C78 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C00CAB90 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C01086D0 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0148EE4 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B1460 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C01B2984 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 */

__int64 __fastcall DxgkPresent(ULONG64 a1, int a2)
{
  bool v4; // si
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  char *v7; // rbx
  __int64 v8; // rcx
  PSLIST_ENTRY v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 *ThreadProperty; // rax
  __int64 *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // zf
  struct DXGGLOBAL *v23; // rax
  union _SLIST_HEADER *v24; // rbx
  __int64 v26; // rdx
  _OWORD *v27; // rax
  _OWORD *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGGLOBAL *v31; // rax
  union _SLIST_HEADER *v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rax
  int Next; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGCONTEXT *v43; // r13
  _QWORD *v44; // rbx
  __int64 v45; // rcx
  __int64 v46; // r8
  struct DXGGLOBAL *v47; // rax
  union _SLIST_HEADER *v48; // rbx
  __int64 v49; // rsi
  struct _KEVENT *v50; // rax
  struct _KEVENT *v51; // rbx
  unsigned __int8 v52; // bl
  __int64 v53; // r8
  unsigned int v54; // r14d
  __int64 v55; // rax
  __int64 v56; // r14
  _QWORD *PoolWithTag; // rcx
  __int64 v58; // r8
  size_t v59; // r15
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  struct DXGGLOBAL *v64; // rax
  union _SLIST_HEADER *v65; // rbx
  PVOID v66; // r9
  size_t v67; // rbx
  _BYTE *v68; // r9
  __int64 v69; // rax
  _QWORD *v70; // r15
  unsigned int v71; // ebx
  char *v72; // r10
  __int64 v73; // rax
  __int64 v74; // r9
  unsigned int v75; // ecx
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rax
  struct DXGADAPTER *v87; // rbx
  int v88; // eax
  int v89; // r14d
  _QWORD *v90; // rax
  DXGPRESENT *v91; // rax
  DXGPRESENT *v92; // rax
  __int64 v93; // rcx
  _QWORD *v94; // rax
  __int64 v95; // rcx
  __int64 v96; // r8
  struct DXGGLOBAL *v97; // rax
  union _SLIST_HEADER *v98; // rbx
  __int64 v99; // rcx
  __int64 v100; // rax
  struct DXGADAPTER *v101; // rbx
  __int64 v102; // r9
  __int64 v103; // rcx
  _QWORD *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r15
  __int64 v108; // rbx
  __int64 v109; // rcx
  PSLIST_ENTRY v110; // r14
  __int64 v111; // rcx
  int v112; // eax
  int v113; // r8d
  char v114; // al
  unsigned int v115; // eax
  __int64 v116; // rcx
  int v117; // eax
  int v118; // r9d
  char v119; // al
  int v120; // r8d
  unsigned int v121; // eax
  __int64 v122; // rax
  int v123; // r15d
  __int64 v124; // rcx
  __int64 v125; // r8
  struct DXGGLOBAL *v126; // rax
  union _SLIST_HEADER *v127; // rbx
  DXGGLOBAL **v128; // rdx
  _BYTE *v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  struct DXGGLOBAL *v132; // rax
  union _SLIST_HEADER *v133; // rbx
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rdi
  __int64 *v137; // rax
  __int64 *v138; // rbx
  __int64 v139; // rdi
  PLIST_ENTRY i; // rbx
  int v141; // [rsp+50h] [rbp-218h] BYREF
  __int64 v142; // [rsp+58h] [rbp-210h]
  __int64 v143; // [rsp+60h] [rbp-208h]
  int *v144; // [rsp+68h] [rbp-200h]
  char v145; // [rsp+70h] [rbp-1F8h]
  __int64 v146; // [rsp+78h] [rbp-1F0h] BYREF
  int v147; // [rsp+80h] [rbp-1E8h]
  _BYTE v148[16]; // [rsp+88h] [rbp-1E0h] BYREF
  __int64 v149; // [rsp+98h] [rbp-1D0h] BYREF
  struct DXGADAPTER *v150; // [rsp+A0h] [rbp-1C8h]
  char v151; // [rsp+A8h] [rbp-1C0h]
  PVOID v152; // [rsp+B0h] [rbp-1B8h] BYREF
  _BYTE v153[32]; // [rsp+B8h] [rbp-1B0h] BYREF
  unsigned int v154; // [rsp+D8h] [rbp-190h]
  struct DXGCONTEXT *v155; // [rsp+E0h] [rbp-188h] BYREF
  PVOID P; // [rsp+E8h] [rbp-180h] BYREF
  _BYTE v157[32]; // [rsp+F0h] [rbp-178h] BYREF
  int v158; // [rsp+110h] [rbp-158h]
  __int64 v159; // [rsp+118h] [rbp-150h]
  char v160[8]; // [rsp+120h] [rbp-148h] BYREF
  struct _KTHREAD **v161[2]; // [rsp+128h] [rbp-140h] BYREF
  DXGADAPTER *v162; // [rsp+138h] [rbp-130h]
  char v163; // [rsp+140h] [rbp-128h]
  struct _KTHREAD **v164[5]; // [rsp+148h] [rbp-120h] BYREF
  char v165; // [rsp+170h] [rbp-F8h]
  __int64 v166; // [rsp+180h] [rbp-E8h]
  struct _SLIST_ENTRY *v167[2]; // [rsp+188h] [rbp-E0h] BYREF
  _QWORD v168[6]; // [rsp+198h] [rbp-D0h] BYREF
  char v169; // [rsp+1C8h] [rbp-A0h]
  _BYTE v170[32]; // [rsp+1D0h] [rbp-98h] BYREF
  _BYTE v171[120]; // [rsp+1F0h] [rbp-78h] BYREF
  int AllocationInfo; // [rsp+280h] [rbp+18h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+288h] [rbp+20h]

  AllocationInfo = -1073741811;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Global = DXGGLOBAL::GetGlobal(v5);
  v7 = (char *)Global + 768;
  ++*((_DWORD *)Global + 197);
  v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 48);
  ListEntry = v9;
  if ( !v9 )
  {
    ++*((_DWORD *)v7 + 6);
    v9 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v7 + 6))(
                         *((unsigned int *)v7 + 9),
                         *((unsigned int *)v7 + 11),
                         *((unsigned int *)v7 + 10),
                         v7);
    ListEntry = v9;
  }
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
  memset(v9, 0, 0x600uLL);
  v12 = 0LL;
  if ( bTracingEnabled )
    v12 = (__int64)v9;
  v142 = 0LL;
  v141 = 2020;
  v144 = &AllocationInfo;
  v145 = 0;
  v143 = v12;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)&AllocationInfo, &EventProfilerEnter, v11, 2020);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v141, 2020);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v16 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v18 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v16 = *v18;
      }
    }
  }
  v159 = v16;
  if ( !v16 )
  {
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    *(_QWORD *)(v19 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v19);
LABEL_16:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141);
    v22 = v145 == 0;
LABEL_17:
    if ( v22 )
    {
      if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qpqqqpp(
          &DxgkControlGuid_Context,
          v143,
          v21,
          *(_DWORD *)v143,
          *(_QWORD *)(v143 + 8),
          *(_DWORD *)(v143 + 16),
          *(_DWORD *)(v143 + 88),
          *v144,
          *(_DWORD *)(v143 + 20),
          *(_DWORD *)(v143 + 24));
    }
    else if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qqxxqq(
        &DxgkControlGuid_Context,
        v143,
        v21,
        *(_DWORD *)v143,
        *(_DWORD *)(v143 + 56),
        *(_QWORD *)(v143 + 80),
        *(_QWORD *)(v143 + 88),
        *(_DWORD *)(v143 + 1096),
        *v144);
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v141);
    v23 = DXGGLOBAL::GetGlobal(v20);
    v24 = (union _SLIST_HEADER *)((char *)v23 + 768);
    ++*((_DWORD *)v23 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v23 + 48) < *((_WORD *)v23 + 392) )
    {
      ExpInterlockedPushEntrySList(v24, v9);
    }
    else
    {
      ++LODWORD(v24[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v24[3].Region)(v9, v24);
    }
    return 3221225485LL;
  }
  v26 = 11LL;
  if ( v4 )
  {
    v27 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v27 = (_OWORD *)MmUserProbeAddress;
    v28 = v9;
    do
    {
      *v28 = *v27;
      v28[1] = v27[1];
      v28[2] = v27[2];
      v28[3] = v27[3];
      v28[4] = v27[4];
      v28[5] = v27[5];
      v28[6] = v27[6];
      v28 += 8;
      *(v28 - 1) = v27[7];
      v27 += 8;
      --v26;
    }
    while ( v26 );
  }
  else
  {
    v28 = v9;
    v27 = (_OWORD *)a1;
    do
    {
      *v28 = *v27;
      v28[1] = v27[1];
      v28[2] = v27[2];
      v28[3] = v27[3];
      v28[4] = v27[4];
      v28[5] = v27[5];
      v28[6] = v27[6];
      v28 += 8;
      *(v28 - 1) = v27[7];
      v27 += 8;
      --v26;
    }
    while ( v26 );
  }
  *v28 = *v27;
  v28[1] = v27[1];
  v28[2] = v27[2];
  v28[3] = v27[3];
  v28[4] = v27[4];
  *((_QWORD *)v28 + 10) = *((_QWORD *)v27 + 10);
  if ( !a2 && (*(_DWORD *)(&v9[5].Next + 1) & 0x8000) == 0 )
  {
    AllocationInfo = -1071775738;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141);
    if ( v145 )
    {
      if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v143,
          v30,
          *(_DWORD *)v143,
          *(_DWORD *)(v143 + 56),
          *(_QWORD *)(v143 + 80),
          *(_QWORD *)(v143 + 88),
          *(_DWORD *)(v143 + 1096),
          *v144);
    }
    else if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v143,
        v30,
        *(_DWORD *)v143,
        *(_QWORD *)(v143 + 8),
        *(_DWORD *)(v143 + 16),
        *(_DWORD *)(v143 + 88),
        *v144,
        *(_DWORD *)(v143 + 20),
        *(_DWORD *)(v143 + 24));
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v141);
    v31 = DXGGLOBAL::GetGlobal(v29);
    v32 = (union _SLIST_HEADER *)((char *)v31 + 768);
    ++*((_DWORD *)v31 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v31 + 48) < *((_WORD *)v31 + 392) )
    {
      ExpInterlockedPushEntrySList(v32, v9);
    }
    else
    {
      ++LODWORD(v32[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v32[3].Region)(v9, v32);
    }
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x10000000) != 0 )
  {
    v33 = *((unsigned int *)&v9[90].Next + 2);
    if ( !(_DWORD)v33 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v34 + 24) = 1138LL;
      WdLogEvent5_WdAssertion(v34);
      LODWORD(v33) = *((_DWORD *)&v9[90].Next + 2);
    }
    Next = (int)v9->Next;
    LODWORD(v9->Next) = v33;
    *((_DWORD *)&v9[90].Next + 2) = Next;
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       (struct DXGPROCESS *)v16,
                       (const struct _D3DKMT_PRESENT *)v9,
                       (struct INDIRECT_RESOURCE_INFO *)((char *)&v9[94].Next + 4));
    if ( AllocationInfo < 0 )
    {
      v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v39 + 24) = HIDWORD(v9[1].Next);
      WdLogEvent5_WdWarning(v39);
    }
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v148,
    (unsigned int)v9->Next,
    (struct _KTHREAD **)v16,
    &v155,
    0);
  v43 = v155;
  if ( !v155 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v42);
    v44[3] = -1073741811LL;
    v44[4] = PsGetCurrentProcess();
    v44[5] = LODWORD(v9->Next);
    WdLogEvent5_WdWarning(v44);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v148);
    goto LABEL_16;
  }
  if ( *((_BYTE *)v155 + 401) && *((_DWORD *)&v9[5].Next + 3) )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v148);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141);
    if ( v145 )
    {
      if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v143,
          v46,
          *(_DWORD *)v143,
          *(_DWORD *)(v143 + 56),
          *(_QWORD *)(v143 + 80),
          *(_QWORD *)(v143 + 88),
          *(_DWORD *)(v143 + 1096),
          *v144);
    }
    else if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v143,
        v46,
        *(_DWORD *)v143,
        *(_QWORD *)(v143 + 8),
        *(_DWORD *)(v143 + 16),
        *(_DWORD *)(v143 + 88),
        *v144,
        *(_DWORD *)(v143 + 20),
        *(_DWORD *)(v143 + 24));
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v45, &EventProfilerExit, v46, v141);
    v47 = DXGGLOBAL::GetGlobal(v45);
    v48 = (union _SLIST_HEADER *)((char *)v47 + 768);
    ++*((_DWORD *)v47 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v47 + 48) < *((_WORD *)v47 + 392) )
    {
      ExpInterlockedPushEntrySList(v48, v9);
    }
    else
    {
      ++LODWORD(v48[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v48[3].Region)(v9, v48);
    }
    return 3221225474LL;
  }
  v49 = *((_QWORD *)v155 + 2);
  v166 = v49;
  v146 = v49;
  v147 = 0;
  if ( v49 )
  {
    v50 = *(struct _KEVENT **)(v49 + 16);
    v51 = v50 + 4;
    if ( *(_DWORD *)(v49 + 328) != 2 )
      v51 = v50 + 3;
    if ( !KeReadStateEvent(v51) )
      KeWaitForSingleObject(v51, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v49 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v49 + 16) + 16LL) + 96LL));
      v52 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v49 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v53, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v49 + 104), 1u);
      if ( v52 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v49 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v49 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v147 = 1;
  }
  v54 = *((_DWORD *)&v9[5].Next + 3);
  if ( v54 > 0x40 )
  {
    v55 = WdLogNewEntry5_WdWarning(v41, v40, v42);
    *(_QWORD *)(v55 + 24) = v43;
    *(_QWORD *)(v55 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v55);
    if ( v49 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v146);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v148);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141);
    v22 = v145 == 0;
    goto LABEL_17;
  }
  v56 = v54 + 1;
  PoolWithTag = 0LL;
  v152 = 0LL;
  v154 = 0;
  v58 = -1LL;
  if ( (unsigned int)v56 <= 4 )
  {
    PoolWithTag = v153;
    v152 = v153;
    v59 = 8 * v56;
  }
  else
  {
    v40 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v56;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v56 < 8 )
      goto LABEL_101;
    v59 = 8 * v56;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v56, 0x4B677844u);
    v152 = PoolWithTag;
    v58 = -1LL;
  }
  v154 = v56;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v59);
    PoolWithTag = v152;
    v58 = -1LL;
  }
LABEL_101:
  if ( !PoolWithTag )
  {
    v60 = WdLogNewEntry5_WdWarning(0LL, v40, -1LL);
    *(_QWORD *)(v60 + 24) = 1192LL;
    WdLogEvent5_WdWarning(v60);
    goto LABEL_103;
  }
  v66 = 0LL;
  P = 0LL;
  v158 = 0;
  if ( (unsigned int)v56 <= 4 )
  {
    v68 = v157;
    P = v157;
    v67 = 8 * v56;
  }
  else
  {
    v40 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v56;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v56 < 8 )
      goto LABEL_124;
    v67 = 8 * v56;
    v68 = ExAllocatePoolWithTag(PagedPool, 8 * v56, 0x4B677844u);
    P = v68;
    PoolWithTag = v152;
  }
  v158 = v56;
  if ( !v68 )
  {
LABEL_125:
    v69 = WdLogNewEntry5_WdWarning(PoolWithTag, v40, v58);
    *(_QWORD *)(v69 + 24) = 1202LL;
    WdLogEvent5_WdWarning(v69);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
LABEL_103:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v152);
    if ( v49 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v146);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v148);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141);
    v63 = v143;
    if ( v145 )
    {
LABEL_106:
      if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v63,
          v62,
          *(_DWORD *)v63,
          *(_DWORD *)(v63 + 56),
          *(_QWORD *)(v63 + 80),
          *(_QWORD *)(v63 + 88),
          *(_DWORD *)(v63 + 1096),
          *v144);
LABEL_112:
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v61, &EventProfilerExit, v62, v141);
      v64 = DXGGLOBAL::GetGlobal(v61);
      v65 = (union _SLIST_HEADER *)((char *)v64 + 768);
      ++*((_DWORD *)v64 + 199);
      if ( ExQueryDepthSList((PSLIST_HEADER)v64 + 48) < *((_WORD *)v64 + 392) )
      {
        ExpInterlockedPushEntrySList(v65, v9);
      }
      else
      {
        ++LODWORD(v65[2].Alignment);
        ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v65[3].Region)(v9, v65);
      }
      return 3221225495LL;
    }
LABEL_109:
    if ( v63 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v63,
        v62,
        *(_DWORD *)v63,
        *(_QWORD *)(v63 + 8),
        *(_DWORD *)(v63 + 16),
        *(_DWORD *)(v63 + 88),
        *v144,
        *(_DWORD *)(v63 + 20),
        *(_DWORD *)(v63 + 24));
    goto LABEL_112;
  }
  memset(v68, 0, v67);
  PoolWithTag = v152;
  v66 = P;
LABEL_124:
  if ( !v66 )
    goto LABEL_125;
  *PoolWithTag = v43;
  *(_QWORD *)P = v43;
  v70 = v152;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v170, (struct _KTHREAD **)v16);
  v71 = 0;
  if ( *((_DWORD *)&v9[5].Next + 3) )
  {
    v72 = (char *)v152;
    while ( 1 )
    {
      v73 = (*((_DWORD *)&v9[6].Next + v71) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v73 < *(_DWORD *)(v16 + 248)
        && (v74 = *(_QWORD *)(v16 + 232),
            v75 = *(_DWORD *)(v74 + 16 * v73 + 8),
            *((_DWORD *)&v9[6].Next + v71) >> 30 == ((v75 >> 5) & 3))
        && (v75 & 0x2000) == 0
        && (v75 & 0x1F) == 7 )
      {
        v76 = *(_QWORD *)(v74 + 16LL * (unsigned int)v73);
      }
      else
      {
        v76 = 0LL;
      }
      v77 = v71 + 1;
      v78 = 8 * v77;
      *(_QWORD *)&v72[v78] = v76;
      *(_QWORD *)((char *)P + v78) = v76;
      v72 = (char *)v152;
      v79 = *((_QWORD *)v152 + v77);
      if ( !v79 )
        break;
      v78 = *((_QWORD *)v43 + 2);
      if ( *(_QWORD *)(v79 + 16) != v78 )
        break;
      if ( v71
        && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v78 + 16) + 16LL))
        && *(_DWORD *)(v70[v71] + 360LL) <= *(_DWORD *)(v70[v71 - 1] + 360LL) )
      {
        v85 = (_QWORD *)WdLogNewEntry5_WdError(v80);
        v85[3] = -1073741811LL;
        goto LABEL_148;
      }
      v71 = v77;
      if ( (unsigned int)v77 >= *((_DWORD *)&v9[5].Next + 3) )
        goto LABEL_140;
    }
    v85 = (_QWORD *)WdLogNewEntry5_WdError(v78);
    v85[3] = v43;
    v85[4] = *((unsigned int *)&v9[6].Next + v71);
    v85[5] = v71;
    v85[6] = -1073741811LL;
LABEL_148:
    WdLogEvent5_WdError(v85);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v170);
    goto LABEL_149;
  }
LABEL_140:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v170);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v168,
    v152,
    v154);
  if ( v169 )
  {
    if ( !v168[0] )
    {
      v84 = WdLogNewEntry5_WdWarning(v82, v81, v83);
      *(_QWORD *)(v84 + 24) = 1265LL;
      WdLogEvent5_WdWarning(v84);
      goto LABEL_143;
    }
    v86 = WdLogNewEntry5_WdWarning(v82, v81, v83);
    *(_QWORD *)(v86 + 24) = 1270LL;
    WdLogEvent5_WdWarning(v86);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v168);
LABEL_149:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v152);
    if ( v49 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v146);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v148);
    goto LABEL_16;
  }
  *((_QWORD *)&v9[93].Next + 1) = P;
  LOBYTE(v9[94].Next) = 1;
  v87 = *(struct DXGADAPTER **)(*((_QWORD *)v43 + 2) + 1688LL);
  v88 = *((_DWORD *)&v9[5].Next + 2);
  if ( (v88 & 0x8000) != 0 )
  {
    if ( (v88 & 0x400000) != 0 || v9[90].Next )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdError(v82);
      v90[3] = -1073741811LL;
      v90[4] = v43;
      v90[5] = *((unsigned int *)&v9[5].Next + 2);
      v90[6] = v9[90].Next;
      WdLogEvent5_WdError(v90);
      v89 = -1073741811;
    }
    else
    {
      v89 = 0;
    }
  }
  else
  {
    v91 = (DXGPRESENT *)*((_QWORD *)v43 + 19);
    if ( v91
      || ((v92 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL)) == 0LL
        ? (v91 = 0LL)
        : (v91 = DXGPRESENT::DXGPRESENT(v92, *(_DWORD *)(*((_QWORD *)v43 + 2) + 1696LL))),
          (*((_QWORD *)v43 + 19) = v91) != 0LL) )
    {
      *((_BYTE *)v43 + 402) = 1;
      v89 = DXGPRESENT::CopyPresentArgs(v91, v43, (struct _D3DKMT_PRESENT *)v9);
    }
    else
    {
      v94 = (_QWORD *)WdLogNewEntry5_WdLowResource(v93);
      v94[3] = -1073741801LL;
      v94[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 16LL);
      v94[5] = v16;
      v94[6] = v43;
      WdLogEvent5_WdLowResource(v94);
      v89 = -1073741801;
    }
  }
  AllocationInfo = v89;
  if ( v89 < 0 )
    goto LABEL_167;
  v99 = *((unsigned int *)&v9[5].Next + 2);
  if ( (v99 & 0x10000000) != 0 )
  {
    if ( !v87 )
    {
      v100 = WdLogNewEntry5_WdError(v99);
      *(_QWORD *)(v100 + 24) = 1291LL;
LABEL_186:
      WdLogEvent5_WdError(v100);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v168);
      goto LABEL_149;
    }
    if ( (*((_DWORD *)v87 + 75) & 0x100) == 0 )
    {
      v100 = WdLogNewEntry5_WdError(v99);
      *(_QWORD *)(v100 + 24) = 1297LL;
      goto LABEL_186;
    }
  }
  else if ( v87 )
  {
    if ( (*((_DWORD *)v87 + 75) & 0x100) != 0 && (v99 & 0x18000) == 0 )
    {
      v100 = WdLogNewEntry5_WdError(v99);
      *(_QWORD *)(v100 + 24) = 1307LL;
      goto LABEL_186;
    }
  }
  else
  {
    v87 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 16LL);
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v171, *(const struct _DXGKWIN32KENG_INTERFACE *const *)(v16 + 104), v87);
  v150 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL) + 16LL);
  v151 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v150 + 3);
  v149 = -1LL;
  v101 = v150;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v101 + 120, 0LL);
  v151 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v160, *((_QWORD *)v43 + 2), 2, v102, 0);
  if ( v163 )
  {
    v104 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v103);
    v104[3] = 275LL;
    v104[4] = 4LL;
    v104[5] = v161;
    v104[6] = 0LL;
    v104[7] = 0LL;
    WdLogEvent5_WdCriticalError(v104);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v162 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v162 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v105, &EventBlockThread, v106, 72);
      KeWaitForSingleObject((char *)v162 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v162);
  }
  v163 = 1;
  if ( *((_DWORD *)v164[4] + 106) != 1 )
    goto LABEL_205;
  if ( v165 )
  {
    COREACCESS::AcquireShared((DXGADAPTER **)v164);
    if ( *((_DWORD *)v164[2] + 44) != 1 )
    {
      COREACCESS::Release(v164);
LABEL_205:
      COREACCESS::Release(v161);
      v89 = -1073741130;
      goto LABEL_210;
    }
  }
  v89 = 0;
LABEL_210:
  AllocationInfo = v89;
  if ( v89 < 0 )
  {
LABEL_211:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v160);
    if ( v151 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v149);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v171);
LABEL_167:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v168);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v152);
    if ( v49 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v146);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v148);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141);
    if ( v145 )
    {
      if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqxxqq(
          &DxgkControlGuid_Context,
          v143,
          v96,
          *(_DWORD *)v143,
          *(_DWORD *)(v143 + 56),
          *(_QWORD *)(v143 + 80),
          *(_QWORD *)(v143 + 88),
          *(_DWORD *)(v143 + 1096),
          *v144);
    }
    else if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v143,
        v96,
        *(_DWORD *)v143,
        *(_QWORD *)(v143 + 8),
        *(_DWORD *)(v143 + 16),
        *(_DWORD *)(v143 + 88),
        *v144,
        *(_DWORD *)(v143 + 20),
        *(_DWORD *)(v143 + 24));
    }
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v95, &EventProfilerExit, v96, v141);
    v97 = DXGGLOBAL::GetGlobal(v95);
    v98 = (union _SLIST_HEADER *)((char *)v97 + 768);
    ++*((_DWORD *)v97 + 199);
    if ( ExQueryDepthSList((PSLIST_HEADER)v97 + 48) < *((_WORD *)v97 + 392) )
    {
      ExpInterlockedPushEntrySList(v98, v9);
    }
    else
    {
      ++LODWORD(v98[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v98[3].Region)(v9, v98);
    }
    return (unsigned int)v89;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x200000) != 0 )
  {
    v89 = SubmitPresentHistoryToken(
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v9[22].Next + 1),
            (struct COREDEVICEACCESS *)v160,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v149,
            (struct CWin32kLocks *)v171,
            0,
            0LL,
            0LL,
            0LL,
            v155,
            0LL);
    goto LABEL_211;
  }
  v107 = *(_QWORD *)(*((_QWORD *)v43 + 2) + 16LL);
  v167[1] = (struct _SLIST_ENTRY *)v107;
  v108 = v107 + 1120;
  ++*(_DWORD *)(v107 + 1140);
  v110 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v107 + 1120));
  if ( !v110 )
  {
    ++*(_DWORD *)(v107 + 1144);
    v110 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v107 + 1168))(
                           *(unsigned int *)(v107 + 1156),
                           *(unsigned int *)(v107 + 1164),
                           *(unsigned int *)(v107 + 1160),
                           v107 + 1120);
  }
  v167[0] = v110;
  if ( !v110 )
  {
    v122 = WdLogNewEntry5_WdLowResource(v109);
    *(_QWORD *)(v122 + 24) = 1349LL;
    WdLogEvent5_WdLowResource(v122);
    CVidSchSubmitData::~CVidSchSubmitData(v167);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v160);
    if ( v151 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v149);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v171);
LABEL_143:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v168);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v152);
    if ( v49 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v146);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v148);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141);
    v63 = v143;
    if ( v145 )
      goto LABEL_106;
    goto LABEL_109;
  }
  v111 = *(_QWORD *)(v107 + 16);
  v112 = *(_DWORD *)(v111 + 2104);
  if ( v112 < 0x2000 )
    v113 = 1;
  else
    v113 = *(_DWORD *)(v111 + 248);
  if ( v112 >= 0x2000 || (v114 = *(_BYTE *)(v111 + 2396)) != 0 )
    v114 = 1;
  if ( v114 )
    v115 = *(_DWORD *)(v111 + 2312) * (48 * v113 + ((8 * v113 + 175) & 0xFFFFFFF8)) + 8 * v113 + 512;
  else
    v115 = 1280;
  memset(v110, 0, v115);
  v116 = *(_QWORD *)(v107 + 16);
  v117 = *(_DWORD *)(v116 + 2104);
  if ( v117 < 0x2000 )
    v118 = 1;
  else
    v118 = *(_DWORD *)(v116 + 248);
  if ( v117 >= 0x2000 || (v119 = *(_BYTE *)(v116 + 2396)) != 0 )
    v119 = 1;
  v120 = *(_DWORD *)(v116 + 2312);
  *((_BYTE *)&v110[21].Next + 12) = v119;
  if ( v119 )
  {
    HIDWORD(v110[31].Next) = v120;
    *((_DWORD *)&v110[31].Next + 2) = v118;
    *((_DWORD *)&v110[31].Next + 3) = v120 * (48 * v118 + ((8 * v118 + 175) & 0xFFFFFFF8)) + 16;
    v121 = v120 * (48 * v118 + ((8 * v118 + 175) & 0xFFFFFFF8)) + 512;
    LODWORD(v110[30].Next) = v121;
    HIDWORD(v110[30].Next) = 8 * v118 + v121;
  }
  AllocationInfo = DXGCONTEXT::Present(
                     v155,
                     (const struct DXGK_PRESENT_PARAMS *)v9,
                     (struct COREDEVICEACCESS *)v160,
                     (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v149,
                     (struct CWin32kLocks *)v171,
                     (struct DXGCONTEXT **)v152,
                     (struct VIDSCH_SUBMIT_DATA_BASE *)v110);
  if ( AllocationInfo == -1071775482 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v162) )
    {
      v123 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v160);
      if ( v123 < 0 )
      {
        CVidSchSubmitData::~CVidSchSubmitData(v167);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v160);
        if ( v151 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v149);
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v171);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v168);
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v152);
        if ( v49 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v146);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v148);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141);
        if ( v145 )
        {
          if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqxxqq(
              &DxgkControlGuid_Context,
              v143,
              v125,
              *(_DWORD *)v143,
              *(_DWORD *)(v143 + 56),
              *(_QWORD *)(v143 + 80),
              *(_QWORD *)(v143 + 88),
              *(_DWORD *)(v143 + 1096),
              *v144);
        }
        else if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0qpqqqpp(
            &DxgkControlGuid_Context,
            v143,
            v125,
            *(_DWORD *)v143,
            *(_QWORD *)(v143 + 8),
            *(_DWORD *)(v143 + 16),
            *(_DWORD *)(v143 + 88),
            *v144,
            *(_DWORD *)(v143 + 20),
            *(_DWORD *)(v143 + 24));
        }
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v124, &EventProfilerExit, v125, v141);
        v126 = DXGGLOBAL::GetGlobal(v124);
        v127 = (union _SLIST_HEADER *)((char *)v126 + 768);
        ++*((_DWORD *)v126 + 199);
        if ( ExQueryDepthSList((PSLIST_HEADER)v126 + 48) < *((_WORD *)v126 + 392) )
        {
          ExpInterlockedPushEntrySList(v127, v9);
        }
        else
        {
          ++LODWORD(v127[2].Alignment);
          ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v127[3].Region)(v9, v127);
        }
        return (unsigned int)v123;
      }
    }
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v43 + 2), (struct COREDEVICEACCESS *)v160);
  }
  ++*(_DWORD *)(v108 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v108) < *(_WORD *)(v108 + 16) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v108, v110);
  }
  else
  {
    ++*(_DWORD *)(v108 + 32);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v108 + 56))(v110, v108);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v160);
  if ( v151 )
  {
    v151 = 0;
    ExReleasePushLockSharedEx((char *)v150 + 120, 0LL);
    KeLeaveCriticalRegion();
    v128 = (DXGGLOBAL **)v150;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v150 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v128[2], (struct DXGADAPTER *)v128);
  }
  if ( AllocationInfo >= 0 )
  {
    v129 = (_BYTE *)(a1 + 1488);
    if ( a1 + 1488 >= MmUserProbeAddress )
      v129 = (_BYTE *)MmUserProbeAddress;
    *v129 = v9[94].Next;
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v171);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v168);
  if ( P != v157 && P )
    ExFreePoolWithTag(P, 0);
  if ( v152 != v153 && v152 )
    ExFreePoolWithTag(v152, 0);
  if ( v49 && v147 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v49 + 104));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v148);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v141);
  if ( v145 )
  {
    if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqxxqq(
        &DxgkControlGuid_Context,
        v143,
        v131,
        *(_DWORD *)v143,
        *(_DWORD *)(v143 + 56),
        *(_QWORD *)(v143 + 80),
        *(_QWORD *)(v143 + 88),
        *(_DWORD *)(v143 + 1096),
        *v144);
  }
  else if ( v143 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    McTemplateK0qpqqqpp(
      &DxgkControlGuid_Context,
      v143,
      v131,
      *(_DWORD *)v143,
      *(_QWORD *)(v143 + 8),
      *(_DWORD *)(v143 + 16),
      *(_DWORD *)(v143 + 88),
      *v144,
      *(_DWORD *)(v143 + 20),
      *(_DWORD *)(v143 + 24));
  }
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v130, &EventProfilerExit, v131, v141);
  v132 = DXGGLOBAL::GetGlobal(v130);
  v133 = (union _SLIST_HEADER *)((char *)v132 + 768);
  ++*((_DWORD *)v132 + 199);
  if ( ExQueryDepthSList((PSLIST_HEADER)v132 + 48) < *((_WORD *)v132 + 392) )
  {
    ExpInterlockedPushEntrySList(v133, v9);
  }
  else
  {
    ++LODWORD(v133[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v133[3].Region)(v9, v133);
  }
  v134 = PsGetCurrentProcess();
  v135 = PsGetProcessDxgProcess(v134);
  v136 = v135;
  if ( v135 )
  {
    if ( (*(_BYTE *)(v135 + 323) & 4) != 0 )
    {
      v137 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v138 = v137;
      if ( v137 )
      {
        ObfDereferenceObject(v137);
        v136 = *v138;
      }
    }
  }
  v139 = *(_QWORD *)(v136 + 72);
  for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v139 + 88), (PKSPIN_LOCK)(v139 + 104));
        i;
        i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v139 + 88), (PKSPIN_LOCK)(v139 + 104)) )
  {
    ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
    operator delete(i);
  }
  return (unsigned int)AllocationInfo;
}
