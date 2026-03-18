/*
 * XREFs of DxgkPresent @ 0x1C00BD0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C00027F8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00088FC (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0qpqqqpp @ 0x1C002949C (McTemplateK0qpqqqpp.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C00BEAA0 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C00BEDDC (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C00F071C (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C0170568 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C017058C (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01715F8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B5610 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C01B6B50 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 */

__int64 __fastcall DxgkPresent(ULONG64 a1, int a2)
{
  bool v4; // r14
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  char *v7; // rbx
  __int64 v8; // rcx
  PSLIST_ENTRY v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  PSLIST_ENTRY v14; // rdi
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 *ThreadProperty; // rax
  __int64 *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGGLOBAL *v29; // rax
  union _SLIST_HEADER *v30; // rbx
  __int64 v32; // rdx
  _OWORD *v33; // rax
  _OWORD *v34; // rcx
  struct DXGGLOBAL *v35; // rax
  union _SLIST_HEADER *v36; // rbx
  __int64 v37; // rax
  int Next; // ecx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  struct DXGCONTEXT *v46; // r13
  _QWORD *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct DXGGLOBAL *v53; // rax
  union _SLIST_HEADER *v54; // rbx
  __int64 v55; // r14
  struct _KEVENT *v56; // rbx
  struct _KEVENT *v57; // rbx
  unsigned __int8 v58; // bl
  __int64 v59; // r8
  unsigned int v60; // ebx
  __int64 v61; // rax
  __int64 v62; // rbx
  _QWORD *PoolWithTag; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  struct DXGGLOBAL *v68; // rax
  union _SLIST_HEADER *v69; // rbx
  PVOID v70; // r9
  _BYTE *v71; // r9
  __int64 v72; // rax
  _QWORD *v73; // r15
  unsigned int v74; // ebx
  char *v75; // r11
  __int64 v76; // rax
  __int64 v77; // r9
  unsigned int v78; // edx
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r10
  _QWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  __int64 v90; // rax
  struct DXGADAPTER *v91; // rbx
  int v92; // eax
  int v93; // r15d
  _QWORD *v94; // rax
  DXGPRESENT *v95; // rax
  __int64 v96; // rcx
  _QWORD *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  struct DXGGLOBAL *v101; // rax
  union _SLIST_HEADER *v102; // rbx
  __int64 v103; // rcx
  __int64 v104; // rax
  struct DXGADAPTER *v105; // rbx
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  _QWORD *v110; // rax
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rax
  __int64 v114; // r13
  __int64 v115; // rcx
  PSLIST_ENTRY v116; // r15
  __int64 v117; // rcx
  int v118; // eax
  int v119; // r8d
  char v120; // al
  unsigned int v121; // eax
  __int64 v122; // rcx
  int v123; // eax
  int v124; // r9d
  char v125; // al
  int v126; // r8d
  unsigned int v127; // eax
  __int64 v128; // rax
  int v129; // r12d
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  struct DXGGLOBAL *v133; // rax
  union _SLIST_HEADER *v134; // rbx
  DXGGLOBAL **v135; // rdx
  _BYTE *v136; // rdx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  struct DXGGLOBAL *v140; // rax
  union _SLIST_HEADER *v141; // rbx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rdi
  __int64 *v148; // rax
  __int64 *v149; // rbx
  __int64 v150; // rdi
  PLIST_ENTRY i; // rbx
  __int64 v152; // [rsp+60h] [rbp-208h] BYREF
  int v153; // [rsp+68h] [rbp-200h]
  _BYTE v154[16]; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v155; // [rsp+80h] [rbp-1E8h] BYREF
  struct DXGADAPTER *v156; // [rsp+88h] [rbp-1E0h]
  char v157; // [rsp+90h] [rbp-1D8h]
  PVOID v158; // [rsp+98h] [rbp-1D0h] BYREF
  _BYTE v159[32]; // [rsp+A0h] [rbp-1C8h] BYREF
  unsigned int v160; // [rsp+C0h] [rbp-1A8h]
  PVOID P; // [rsp+C8h] [rbp-1A0h] BYREF
  _BYTE v162[32]; // [rsp+D0h] [rbp-198h] BYREF
  int v163; // [rsp+F0h] [rbp-178h]
  struct DXGCONTEXT *v164[3]; // [rsp+F8h] [rbp-170h] BYREF
  struct DXGCONTEXT *v165; // [rsp+110h] [rbp-158h]
  char v166[8]; // [rsp+120h] [rbp-148h] BYREF
  _BYTE v167[16]; // [rsp+128h] [rbp-140h] BYREF
  DXGADAPTER *v168; // [rsp+138h] [rbp-130h]
  char v169; // [rsp+140h] [rbp-128h]
  _BYTE v170[16]; // [rsp+148h] [rbp-120h] BYREF
  __int64 v171; // [rsp+158h] [rbp-110h]
  __int64 v172; // [rsp+168h] [rbp-100h]
  char v173; // [rsp+170h] [rbp-F8h]
  __int64 v174; // [rsp+180h] [rbp-E8h]
  struct _SLIST_ENTRY *v175[2]; // [rsp+188h] [rbp-E0h] BYREF
  _QWORD v176[6]; // [rsp+198h] [rbp-D0h] BYREF
  char v177; // [rsp+1C8h] [rbp-A0h]
  _BYTE v178[32]; // [rsp+1D0h] [rbp-98h] BYREF
  _BYTE v179[120]; // [rsp+1F0h] [rbp-78h] BYREF
  int AllocationInfo; // [rsp+280h] [rbp+18h]
  int v182; // [rsp+280h] [rbp+18h]

  LOBYTE(AllocationInfo) = 13;
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Global = DXGGLOBAL::GetGlobal(v5);
  v7 = (char *)Global + 688;
  ++*((_DWORD *)Global + 177);
  v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)Global + 43);
  if ( !v9 )
  {
    ++*((_DWORD *)v7 + 6);
    v9 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v7 + 6))(
                         *((unsigned int *)v7 + 9),
                         *((unsigned int *)v7 + 11),
                         *((unsigned int *)v7 + 10),
                         v7);
  }
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v10 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
  memset(v9, 0, 0x5F0uLL);
  v14 = 0LL;
  if ( bTracingEnabled )
    v14 = v9;
  v164[2] = (struct DXGCONTEXT *)v14;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerEnter, v13, 2020);
  CurrentProcess = PsGetCurrentProcess(v12, v11);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v16);
  v20 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v22 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v20 = *v22;
      }
    }
  }
  v164[1] = (struct DXGCONTEXT *)v20;
  if ( !v20 )
  {
    v23 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    *(_QWORD *)(v23 + 32) = PsGetCurrentProcess(v25, v24);
    WdLogEvent5_WdError(v23);
    goto LABEL_16;
  }
  v32 = 11LL;
  if ( v4 )
  {
    v33 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v33 = (_OWORD *)MmUserProbeAddress;
    v34 = v9;
    do
    {
      *v34 = *v33;
      v34[1] = v33[1];
      v34[2] = v33[2];
      v34[3] = v33[3];
      v34[4] = v33[4];
      v34[5] = v33[5];
      v34[6] = v33[6];
      v34 += 8;
      *(v34 - 1) = v33[7];
      v33 += 8;
      --v32;
    }
    while ( v32 );
  }
  else
  {
    v34 = v9;
    v33 = (_OWORD *)a1;
    do
    {
      *v34 = *v33;
      v34[1] = v33[1];
      v34[2] = v33[2];
      v34[3] = v33[3];
      v34[4] = v33[4];
      v34[5] = v33[5];
      v34[6] = v33[6];
      v34 += 8;
      *(v34 - 1) = v33[7];
      v33 += 8;
      --v32;
    }
    while ( v32 );
  }
  *v34 = *v33;
  v34[1] = v33[1];
  v34[2] = v33[2];
  v34[3] = v33[3];
  v34[4] = v33[4];
  *((_QWORD *)v34 + 10) = *((_QWORD *)v33 + 10);
  if ( !a2 && (*(_DWORD *)(&v9[5].Next + 1) & 0x8000) == 0 )
  {
    if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        0LL,
        v19,
        (int)v14->Next,
        *((_QWORD *)&v14->Next + 1),
        (char)v14[1].Next,
        *((_DWORD *)&v14[5].Next + 2),
        6,
        HIDWORD(v14[1].Next),
        *((_DWORD *)&v14[1].Next + 2));
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v34, &EventProfilerExit, v19, 2020);
    v35 = DXGGLOBAL::GetGlobal((__int64)v34);
    v36 = (union _SLIST_HEADER *)((char *)v35 + 688);
    ++*((_DWORD *)v35 + 179);
    if ( ExQueryDepthSList((PSLIST_HEADER)v35 + 43) < *((_WORD *)v35 + 352) )
    {
      ExpInterlockedPushEntrySList(v36, v9);
    }
    else
    {
      ++LODWORD(v36[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v36[3].Region)(v9, v36);
    }
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x10000000) != 0 )
  {
    if ( !*((_DWORD *)&v9[90].Next + 2) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v37 + 24) = 1303LL;
      WdLogEvent5_WdAssertion(v37);
    }
    Next = (int)v9->Next;
    LODWORD(v9->Next) = *((_DWORD *)&v9[90].Next + 2);
    *((_DWORD *)&v9[90].Next + 2) = Next;
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       (struct DXGPROCESS *)v20,
                       (const struct _D3DKMT_PRESENT *)v9,
                       (struct INDIRECT_RESOURCE_INFO *)((char *)&v9[94].Next + 4));
    if ( AllocationInfo < 0 )
    {
      v42 = WdLogNewEntry5_WdWarning(v40, v39, v41);
      *(_QWORD *)(v42 + 24) = HIDWORD(v9[1].Next);
      WdLogEvent5_WdWarning(v42);
    }
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v154,
    (unsigned int)v9->Next,
    (struct DXGPROCESS *)v20,
    v164,
    0);
  v46 = v164[0];
  v165 = v164[0];
  if ( !v164[0] )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v44, v43, v45);
    v47[3] = -1073741811LL;
    v47[4] = PsGetCurrentProcess(v49, v48);
    v47[5] = LODWORD(v9->Next);
    WdLogEvent5_WdWarning(v47);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
LABEL_16:
    if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v26,
        v28,
        (int)v14->Next,
        *((_QWORD *)&v14->Next + 1),
        (char)v14[1].Next,
        *((_DWORD *)&v14[5].Next + 2),
        AllocationInfo,
        HIDWORD(v14[1].Next),
        *((_DWORD *)&v14[1].Next + 2));
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, 2020);
    v29 = DXGGLOBAL::GetGlobal(v27);
    v30 = (union _SLIST_HEADER *)((char *)v29 + 688);
    ++*((_DWORD *)v29 + 179);
    if ( ExQueryDepthSList((PSLIST_HEADER)v29 + 43) < *((_WORD *)v29 + 352) )
    {
      ExpInterlockedPushEntrySList(v30, v9);
    }
    else
    {
      ++LODWORD(v30[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v30[3].Region)(v9, v30);
    }
    return 3221225485LL;
  }
  if ( *((_BYTE *)v164[0] + 401) && *((_DWORD *)&v9[5].Next + 3) )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
    if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v50,
        v52,
        (int)v14->Next,
        *((_QWORD *)&v14->Next + 1),
        (char)v14[1].Next,
        *((_DWORD *)&v14[5].Next + 2),
        AllocationInfo,
        HIDWORD(v14[1].Next),
        *((_DWORD *)&v14[1].Next + 2));
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v51, &EventProfilerExit, v52, 2020);
    v53 = DXGGLOBAL::GetGlobal(v51);
    v54 = (union _SLIST_HEADER *)((char *)v53 + 688);
    ++*((_DWORD *)v53 + 179);
    if ( ExQueryDepthSList((PSLIST_HEADER)v53 + 43) < *((_WORD *)v53 + 352) )
    {
      ExpInterlockedPushEntrySList(v54, v9);
    }
    else
    {
      ++LODWORD(v54[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v54[3].Region)(v9, v54);
    }
    return 3221225474LL;
  }
  v55 = *((_QWORD *)v164[0] + 2);
  v174 = v55;
  v152 = v55;
  v153 = 0;
  if ( v55 )
  {
    v56 = *(struct _KEVENT **)(v55 + 16);
    if ( *(_DWORD *)(v55 + 328) == 2 )
      v57 = v56 + 4;
    else
      v57 = v56 + 3;
    if ( !KeReadStateEvent(v57) )
      KeWaitForSingleObject(v57, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v55 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v55 + 16) + 16LL) + 96LL));
      v58 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v55 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v59, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v55 + 104), 1u);
      if ( v58 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v55 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v55 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v153 = 1;
  }
  v60 = *((_DWORD *)&v9[5].Next + 3);
  if ( v60 > 0x40 )
  {
    v61 = WdLogNewEntry5_WdWarning(v44, v43, v45);
    *(_QWORD *)(v61 + 24) = v46;
    *(_QWORD *)(v61 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v61);
LABEL_81:
    if ( v55 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v152);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
    goto LABEL_16;
  }
  v62 = v60 + 1;
  PoolWithTag = 0LL;
  v158 = 0LL;
  v160 = 0;
  if ( (unsigned int)v62 <= 4 )
  {
    PoolWithTag = v159;
    v158 = v159;
  }
  else
  {
    v45 = (unsigned int)v62;
    v43 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v62;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v62 < 8 )
      goto LABEL_90;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v62, 0x4B677844u);
    v158 = PoolWithTag;
  }
  v160 = v62;
  if ( !PoolWithTag )
  {
LABEL_91:
    v64 = WdLogNewEntry5_WdWarning(PoolWithTag, v43, v45);
    *(_QWORD *)(v64 + 24) = 1357LL;
    WdLogEvent5_WdWarning(v64);
LABEL_92:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v158);
    if ( v55 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v152);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
    if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v65,
        v67,
        (int)v14->Next,
        *((_QWORD *)&v14->Next + 1),
        (char)v14[1].Next,
        *((_DWORD *)&v14[5].Next + 2),
        AllocationInfo,
        HIDWORD(v14[1].Next),
        *((_DWORD *)&v14[1].Next + 2));
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v66, &EventProfilerExit, v67, 2020);
    v68 = DXGGLOBAL::GetGlobal(v66);
    v69 = (union _SLIST_HEADER *)((char *)v68 + 688);
    ++*((_DWORD *)v68 + 179);
    if ( ExQueryDepthSList((PSLIST_HEADER)v68 + 43) < *((_WORD *)v68 + 352) )
    {
      ExpInterlockedPushEntrySList(v69, v9);
    }
    else
    {
      ++LODWORD(v69[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v69[3].Region)(v9, v69);
    }
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8LL * (unsigned int)v62);
  PoolWithTag = v158;
LABEL_90:
  if ( !PoolWithTag )
    goto LABEL_91;
  v70 = 0LL;
  P = 0LL;
  v163 = 0;
  if ( (unsigned int)v62 <= 4 )
  {
    v71 = v162;
    P = v162;
  }
  else
  {
    v45 = (unsigned int)v62;
    v43 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v62;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v62 < 8 )
      goto LABEL_109;
    v71 = ExAllocatePoolWithTag(PagedPool, 8 * v62, 0x4B677844u);
    P = v71;
    PoolWithTag = v158;
  }
  v163 = v62;
  if ( !v71 )
  {
LABEL_110:
    v72 = WdLogNewEntry5_WdWarning(PoolWithTag, v43, v45);
    *(_QWORD *)(v72 + 24) = 1367LL;
    WdLogEvent5_WdWarning(v72);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
    goto LABEL_92;
  }
  memset(v71, 0, 8LL * (unsigned int)v62);
  PoolWithTag = v158;
  v70 = P;
LABEL_109:
  if ( !v70 )
    goto LABEL_110;
  *PoolWithTag = v46;
  *(_QWORD *)P = v46;
  v73 = v158;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v178, (struct DXGPROCESS *)v20);
  v74 = 0;
  if ( *((_DWORD *)&v9[5].Next + 3) )
  {
    v75 = (char *)v158;
    while ( 1 )
    {
      v76 = (*((_DWORD *)&v9[6].Next + v74) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v76 < *(_DWORD *)(v20 + 240)
        && (v77 = *(_QWORD *)(v20 + 224),
            v78 = *(_DWORD *)(v77 + 16 * v76 + 8),
            *((_DWORD *)&v9[6].Next + v74) >> 30 == ((v78 >> 5) & 3))
        && (v78 & 0x2000) == 0
        && (v78 & 0x1F) != 0
        && (*(_BYTE *)(v77 + 16LL * (unsigned int)v76 + 8) & 0x1F) == 7 )
      {
        v79 = *(_QWORD *)(v77 + 16LL * (unsigned int)v76);
      }
      else
      {
        v79 = 0LL;
      }
      v80 = v74 + 1;
      v81 = 8 * v80;
      *(_QWORD *)&v75[v81] = v79;
      *(_QWORD *)((char *)P + v81) = v79;
      v75 = (char *)v158;
      v82 = *((_QWORD *)v158 + v80);
      if ( !v82 )
        break;
      v81 = *((_QWORD *)v46 + 2);
      if ( *(_QWORD *)(v82 + 16) != v81 )
        break;
      if ( v74
        && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v81 + 16) + 16LL))
        && *(_DWORD *)(v73[v84] + 360LL) <= *(_DWORD *)(v73[v74 - 1] + 360LL) )
      {
        v85 = (_QWORD *)WdLogNewEntry5_WdError(v83);
        v85[3] = -1073741811LL;
        goto LABEL_128;
      }
      v74 = v80;
      if ( (unsigned int)v80 >= *((_DWORD *)&v9[5].Next + 3) )
        goto LABEL_131;
    }
    v85 = (_QWORD *)WdLogNewEntry5_WdError(v81);
    v85[3] = v46;
    v85[4] = *((unsigned int *)&v9[6].Next + v74);
    v85[5] = v74;
    v85[6] = -1073741811LL;
LABEL_128:
    WdLogEvent5_WdError(v85);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178);
    goto LABEL_129;
  }
LABEL_131:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v178);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v176,
    v158,
    v160);
  if ( v177 )
  {
    if ( !v176[0] )
    {
      v89 = WdLogNewEntry5_WdWarning(v87, v86, v88);
      *(_QWORD *)(v89 + 24) = 1430LL;
      WdLogEvent5_WdWarning(v89);
LABEL_134:
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
      goto LABEL_92;
    }
    v90 = WdLogNewEntry5_WdWarning(v87, v86, v88);
    *(_QWORD *)(v90 + 24) = 1435LL;
    WdLogEvent5_WdWarning(v90);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
LABEL_129:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v158);
    goto LABEL_81;
  }
  *((_QWORD *)&v9[93].Next + 1) = P;
  LOBYTE(v9[94].Next) = 1;
  v91 = *(struct DXGADAPTER **)(*((_QWORD *)v46 + 2) + 1672LL);
  v92 = *((_DWORD *)&v9[5].Next + 2);
  if ( (v92 & 0x8000) != 0 )
  {
    if ( (v92 & 0x400000) != 0 || v9[90].Next )
    {
      v94 = (_QWORD *)WdLogNewEntry5_WdError(v87);
      v94[3] = -1073741811LL;
      v94[4] = v46;
      v94[5] = *((unsigned int *)&v9[5].Next + 2);
      v94[6] = v9[90].Next;
      WdLogEvent5_WdError(v94);
      v93 = -1073741811;
    }
    else
    {
      v93 = 0;
    }
  }
  else
  {
    if ( *((_QWORD *)v46 + 19) )
      goto LABEL_146;
    v95 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x670uLL);
    if ( v95 )
      v95 = DXGPRESENT::DXGPRESENT(v95, *(_DWORD *)(*((_QWORD *)v46 + 2) + 1680LL));
    *((_QWORD *)v46 + 19) = v95;
    if ( v95 )
    {
LABEL_146:
      v93 = DXGPRESENT::CopyPresentArgs(*((DXGPRESENT **)v46 + 19), v46, (struct _D3DKMT_PRESENT *)v9);
    }
    else
    {
      v97 = (_QWORD *)WdLogNewEntry5_WdLowResource(v96);
      v97[3] = -1073741801LL;
      v97[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL) + 16LL);
      v97[5] = v20;
      v97[6] = v46;
      WdLogEvent5_WdLowResource(v97);
      v93 = -1073741801;
    }
  }
  LOBYTE(AllocationInfo) = v93;
  if ( v93 < 0 )
    goto LABEL_148;
  v103 = *((unsigned int *)&v9[5].Next + 2);
  if ( (v103 & 0x10000000) != 0 )
  {
    if ( !v91 )
    {
      v104 = WdLogNewEntry5_WdError(v103);
      *(_QWORD *)(v104 + 24) = 1456LL;
LABEL_163:
      WdLogEvent5_WdError(v104);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
      goto LABEL_129;
    }
    if ( (*((_DWORD *)v91 + 75) & 0x100) == 0 )
    {
      v104 = WdLogNewEntry5_WdError(v103);
      *(_QWORD *)(v104 + 24) = 1462LL;
      goto LABEL_163;
    }
  }
  else if ( v91 )
  {
    if ( (*((_DWORD *)v91 + 75) & 0x100) != 0 && (v103 & 0x18000) == 0 )
    {
      v104 = WdLogNewEntry5_WdError(v103);
      *(_QWORD *)(v104 + 24) = 1472LL;
      goto LABEL_163;
    }
  }
  else
  {
    v91 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL) + 16LL);
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v179, *(const struct _DXGKWIN32KENG_INTERFACE *const *)(v20 + 96), v91);
  v156 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL) + 16LL);
  v157 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v156 + 3);
  v155 = -1LL;
  v105 = v156;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v105 + 120, 0LL);
  v157 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v166, *((_QWORD *)v46 + 2), 2, v106, 0);
  if ( v169 )
  {
    v110 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v108, v107, v109);
    v110[3] = 275LL;
    v110[4] = 4LL;
    v110[5] = v167;
    v110[6] = 0LL;
    v110[7] = 0LL;
    WdLogEvent5_WdCriticalError(v110);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v168 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v168 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v111, &EventBlockThread, v112, 72);
      KeWaitForSingleObject((char *)v168 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v168);
  }
  v169 = 1;
  if ( *(_DWORD *)(v172 + 408) != 1 )
    goto LABEL_182;
  if ( v173 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v170);
    if ( *(_DWORD *)(v171 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v170);
LABEL_182:
      COREACCESS::Release((COREACCESS *)v167);
      v93 = -1073741130;
      goto LABEL_187;
    }
  }
  v93 = 0;
LABEL_187:
  LOBYTE(AllocationInfo) = v93;
  if ( v93 < 0 )
  {
LABEL_188:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v166);
    if ( v157 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v179);
LABEL_148:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v158);
    if ( v55 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v152);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
    if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qpqqqpp(
        &DxgkControlGuid_Context,
        v98,
        v100,
        (int)v14->Next,
        *((_QWORD *)&v14->Next + 1),
        (char)v14[1].Next,
        *((_DWORD *)&v14[5].Next + 2),
        AllocationInfo,
        HIDWORD(v14[1].Next),
        *((_DWORD *)&v14[1].Next + 2));
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v99, &EventProfilerExit, v100, 2020);
    v101 = DXGGLOBAL::GetGlobal(v99);
    v102 = (union _SLIST_HEADER *)((char *)v101 + 688);
    ++*((_DWORD *)v101 + 179);
    if ( ExQueryDepthSList((PSLIST_HEADER)v101 + 43) < *((_WORD *)v101 + 352) )
    {
      ExpInterlockedPushEntrySList(v102, v9);
    }
    else
    {
      ++LODWORD(v102[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v102[3].Region)(v9, v102);
    }
    return (unsigned int)v93;
  }
  v113 = *((_QWORD *)v46 + 2);
  if ( (*(_DWORD *)(&v9[5].Next + 1) & 0x200000) != 0 )
  {
    v93 = SubmitPresentHistoryToken(
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v9[22].Next + 1),
            (struct COREDEVICEACCESS *)v166,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v155,
            (struct CWin32kLocks *)v179,
            0,
            0LL,
            0LL,
            0LL,
            v164[0],
            *(struct DXGADAPTER **)(*(_QWORD *)(v113 + 16) + 16LL),
            0);
    goto LABEL_188;
  }
  v114 = *(_QWORD *)(v113 + 16);
  v175[1] = (struct _SLIST_ENTRY *)v114;
  ++*(_DWORD *)(v114 + 1124);
  v116 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v114 + 1104));
  if ( !v116 )
  {
    ++*(_DWORD *)(v114 + 1128);
    v116 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v114 + 1152))(
                           *(unsigned int *)(v114 + 1140),
                           *(unsigned int *)(v114 + 1148),
                           *(unsigned int *)(v114 + 1144),
                           v114 + 1104);
  }
  v175[0] = v116;
  if ( !v116 )
  {
    v128 = WdLogNewEntry5_WdLowResource(v115);
    *(_QWORD *)(v128 + 24) = 1515LL;
    WdLogEvent5_WdLowResource(v128);
    CVidSchSubmitData::~CVidSchSubmitData(v175);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v166);
    if ( v157 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v179);
    goto LABEL_134;
  }
  v117 = *(_QWORD *)(v114 + 16);
  v118 = *(_DWORD *)(v117 + 1968);
  if ( v118 < 0x2000 )
    v119 = 1;
  else
    v119 = *(_DWORD *)(v117 + 248);
  if ( v118 >= 0x2000 || (v120 = *(_BYTE *)(v117 + 2252)) != 0 )
    v120 = 1;
  if ( v120 )
    v121 = *(_DWORD *)(v117 + 2176) * (48 * v119 + ((8 * v119 + 175) & 0xFFFFFFF8)) + 8 * v119 + 456;
  else
    v121 = 1152;
  memset(v116, 0, v121);
  v122 = *(_QWORD *)(v114 + 16);
  v123 = *(_DWORD *)(v122 + 1968);
  if ( v123 < 0x2000 )
    v124 = 1;
  else
    v124 = *(_DWORD *)(v122 + 248);
  if ( v123 >= 0x2000 || (v125 = *(_BYTE *)(v122 + 2252)) != 0 )
    v125 = 1;
  v126 = *(_DWORD *)(v122 + 2176);
  *((_BYTE *)&v116[21].Next + 12) = v125;
  if ( v125 )
  {
    *((_DWORD *)&v116[27].Next + 3) = v126;
    LODWORD(v116[28].Next) = v124;
    HIDWORD(v116[28].Next) = v126 * (48 * v124 + ((8 * v124 + 175) & 0xFFFFFFF8)) + 16;
    v127 = v126 * (48 * v124 + ((8 * v124 + 175) & 0xFFFFFFF8)) + 456;
    *((_DWORD *)&v116[26].Next + 2) = v127;
    *((_DWORD *)&v116[26].Next + 3) = 8 * v124 + v127;
  }
  v182 = DXGCONTEXT::Present(
           v164[0],
           (struct _D3DKMT_PRESENT *)v9,
           (struct COREDEVICEACCESS *)v166,
           (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v155,
           (struct CWin32kLocks *)v179,
           (struct DXGCONTEXT **)v158,
           (struct VIDSCH_SUBMIT_DATA_BASE *)v116);
  if ( v182 == -1071775482 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v168) )
    {
      v129 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v166);
      if ( v129 < 0 )
      {
        CVidSchSubmitData::~CVidSchSubmitData(v175);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v166);
        if ( v157 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v179);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&P);
        PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>(&v158);
        if ( v55 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v152);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
        if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0qpqqqpp(
            &DxgkControlGuid_Context,
            v130,
            v132,
            (int)v14->Next,
            *((_QWORD *)&v14->Next + 1),
            (char)v14[1].Next,
            *((_DWORD *)&v14[5].Next + 2),
            6,
            HIDWORD(v14[1].Next),
            *((_DWORD *)&v14[1].Next + 2));
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v131, &EventProfilerExit, v132, 2020);
        v133 = DXGGLOBAL::GetGlobal(v131);
        v134 = (union _SLIST_HEADER *)((char *)v133 + 688);
        ++*((_DWORD *)v133 + 179);
        if ( ExQueryDepthSList((PSLIST_HEADER)v133 + 43) < *((_WORD *)v133 + 352) )
        {
          ExpInterlockedPushEntrySList(v134, v9);
        }
        else
        {
          ++LODWORD(v134[2].Alignment);
          ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v134[3].Region)(v9, v134);
        }
        return (unsigned int)v129;
      }
    }
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v165 + 2), (struct COREDEVICEACCESS *)v166);
  }
  ++*(_DWORD *)(v114 + 1132);
  if ( ExQueryDepthSList((PSLIST_HEADER)(v114 + 1104)) < *(_WORD *)(v114 + 1120) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v114 + 1104), v116);
  }
  else
  {
    ++*(_DWORD *)(v114 + 1136);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v114 + 1160))(v116, v114 + 1104);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v166);
  if ( v157 )
  {
    v157 = 0;
    ExReleasePushLockSharedEx((char *)v156 + 120, 0LL);
    KeLeaveCriticalRegion();
    v135 = (DXGGLOBAL **)v156;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v156 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v135[2], (struct DXGADAPTER *)v135);
  }
  if ( v182 >= 0 )
  {
    v136 = (_BYTE *)(a1 + 1488);
    if ( a1 + 1488 >= MmUserProbeAddress )
      v136 = (_BYTE *)MmUserProbeAddress;
    *v136 = v9[94].Next;
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v179);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v176);
  if ( P != v162 && P )
    ExFreePoolWithTag(P, 0);
  if ( v158 != v159 && v158 )
    ExFreePoolWithTag(v158, 0);
  if ( v55 && v153 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v55 + 104));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v154);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qpqqqpp(
      &DxgkControlGuid_Context,
      v137,
      v139,
      (int)v14->Next,
      *((_QWORD *)&v14->Next + 1),
      (char)v14[1].Next,
      *((_DWORD *)&v14[5].Next + 2),
      v182,
      HIDWORD(v14[1].Next),
      *((_DWORD *)&v14[1].Next + 2));
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v138, &EventProfilerExit, v139, 2020);
  v140 = DXGGLOBAL::GetGlobal(v138);
  v141 = (union _SLIST_HEADER *)((char *)v140 + 688);
  ++*((_DWORD *)v140 + 179);
  if ( ExQueryDepthSList((PSLIST_HEADER)v140 + 43) < *((_WORD *)v140 + 352) )
  {
    ExpInterlockedPushEntrySList(v141, v9);
  }
  else
  {
    ++LODWORD(v141[2].Alignment);
    ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v141[3].Region)(v9, v141);
  }
  v144 = PsGetCurrentProcess(v143, v142);
  v146 = PsGetProcessDxgProcess(v144, v145);
  v147 = v146;
  if ( v146 )
  {
    if ( (*(_BYTE *)(v146 + 307) & 4) != 0 )
    {
      v148 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v149 = v148;
      if ( v148 )
      {
        ObfDereferenceObject(v148);
        v147 = *v149;
      }
    }
  }
  v150 = *(_QWORD *)(v147 + 64);
  for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v150 + 88), (PKSPIN_LOCK)(v150 + 104));
        i;
        i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v150 + 88), (PKSPIN_LOCK)(v150 + 104)) )
  {
    ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
    operator delete(i);
  }
  return (unsigned int)v182;
}
