/*
 * XREFs of DxgkPresent @ 0x1C008FA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C000153C (--2-$DXGQUOTAALLOCATOR@$00$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0002754 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0004AD0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0006298 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_qpqqqpp @ 0x1C0039244 (Template_qpqqqpp.c)
 *     ?CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z @ 0x1C0091410 (-CopyPresentArgs@DXGPRESENT@@QEAAJPEAVDXGCONTEXT@@PEAU_D3DKMT_PRESENT@@@Z.c)
 *     ??0DXGPRESENT@@QEAA@I@Z @ 0x1C0091760 (--0DXGPRESENT@@QEAA@I@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??1CWin32kLocks@@QEAA@XZ @ 0x1C016CE44 (--1CWin32kLocks@@QEAA@XZ.c)
 *     ??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z @ 0x1C016CE68 (--0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C016DE28 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C019ECA4 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C019FE1C (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 */

__int64 __fastcall DxgkPresent(ULONG64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // r14
  char *v9; // rbx
  __int64 v10; // rax
  char *v11; // rbx
  __int64 v12; // rcx
  PSLIST_ENTRY v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  PSLIST_ENTRY v17; // rdi
  __int64 CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGCONTEXT *v25; // rbx
  struct DXGCONTEXT **ThreadProperty; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGGLOBAL *v31; // rax
  union _SLIST_HEADER *v32; // rbx
  __int64 v34; // rdx
  _OWORD *v35; // rax
  _OWORD *v36; // rcx
  struct DXGGLOBAL *Global; // rax
  union _SLIST_HEADER *v38; // rbx
  __int64 v39; // rax
  int Next; // ecx
  const struct _DXGKWIN32KENG_INTERFACE **v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  struct DXGCONTEXT *v51; // r13
  _QWORD *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  struct DXGGLOBAL *v56; // rax
  union _SLIST_HEADER *v57; // rbx
  __int64 v58; // r15
  struct _KEVENT *v59; // rbx
  struct _KEVENT *v60; // rbx
  unsigned __int8 v61; // bl
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned int v64; // ebx
  __int64 v65; // rax
  __int64 v66; // rbx
  _QWORD *PoolWithTag; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  struct DXGGLOBAL *v72; // rax
  union _SLIST_HEADER *v73; // rbx
  _BYTE *v74; // r9
  __int64 v75; // rax
  unsigned int v76; // ebx
  char *v77; // r11
  unsigned int v78; // ecx
  const struct _DXGKWIN32KENG_INTERFACE *v79; // r9
  unsigned int v80; // r8d
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // r10
  __int64 v87; // rdx
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rax
  __int64 v94; // rax
  struct DXGADAPTER *v95; // rbx
  int v96; // eax
  int v97; // r14d
  _QWORD *v98; // rax
  DXGPRESENT *v99; // rax
  __int64 v100; // rcx
  DXGPRESENT *v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  struct DXGGLOBAL *v106; // rax
  union _SLIST_HEADER *v107; // rbx
  __int64 v108; // rcx
  __int64 v109; // rax
  struct DXGADAPTER *v110; // rbx
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  _QWORD *v115; // rax
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r13
  __int64 v119; // rcx
  PSLIST_ENTRY v120; // r14
  __int64 v121; // rcx
  int v122; // r8d
  char v123; // al
  unsigned int v124; // eax
  __int64 v125; // rcx
  int v126; // eax
  int v127; // r9d
  char v128; // al
  int v129; // r8d
  unsigned int v130; // eax
  __int64 v131; // rax
  int v132; // r12d
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  struct DXGGLOBAL *v136; // rax
  union _SLIST_HEADER *v137; // rbx
  DXGGLOBAL **v138; // rdx
  _BYTE *v139; // rdx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  char *v144; // rbx
  __int64 v145; // rax
  char *v146; // rbx
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rdi
  __int64 *v151; // rax
  __int64 v152; // rdi
  PLIST_ENTRY i; // rbx
  __int64 v154; // [rsp+50h] [rbp-218h] BYREF
  int v155; // [rsp+58h] [rbp-210h]
  _BYTE v156[16]; // [rsp+60h] [rbp-208h] BYREF
  PVOID P; // [rsp+70h] [rbp-1F8h]
  _BYTE v158[32]; // [rsp+78h] [rbp-1F0h] BYREF
  unsigned int v159; // [rsp+98h] [rbp-1D0h]
  __int64 v160; // [rsp+A0h] [rbp-1C8h] BYREF
  struct DXGADAPTER *v161; // [rsp+A8h] [rbp-1C0h]
  char v162; // [rsp+B0h] [rbp-1B8h]
  PVOID v163; // [rsp+B8h] [rbp-1B0h]
  _BYTE v164[32]; // [rsp+C0h] [rbp-1A8h] BYREF
  int v165; // [rsp+E0h] [rbp-188h]
  PSLIST_ENTRY ListEntry; // [rsp+E8h] [rbp-180h]
  struct DXGCONTEXT *v167[4]; // [rsp+F0h] [rbp-178h] BYREF
  char v168[8]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v169[16]; // [rsp+118h] [rbp-150h] BYREF
  DXGADAPTER *v170; // [rsp+128h] [rbp-140h]
  char v171; // [rsp+130h] [rbp-138h]
  _BYTE v172[16]; // [rsp+138h] [rbp-130h] BYREF
  __int64 v173; // [rsp+148h] [rbp-120h]
  __int64 v174; // [rsp+158h] [rbp-110h]
  char v175; // [rsp+160h] [rbp-108h]
  _QWORD *v176; // [rsp+170h] [rbp-F8h]
  struct DXGCONTEXT *v177; // [rsp+178h] [rbp-F0h]
  __int64 v178; // [rsp+180h] [rbp-E8h]
  struct _SLIST_ENTRY *v179[2]; // [rsp+188h] [rbp-E0h] BYREF
  _QWORD v180[6]; // [rsp+198h] [rbp-D0h] BYREF
  char v181; // [rsp+1C8h] [rbp-A0h]
  _BYTE v182[32]; // [rsp+1D0h] [rbp-98h] BYREF
  _BYTE v183[120]; // [rsp+1F0h] [rbp-78h] BYREF
  int AllocationInfo; // [rsp+280h] [rbp+18h]
  int v186; // [rsp+280h] [rbp+18h]
  const struct _DXGKWIN32KENG_INTERFACE **v187; // [rsp+288h] [rbp+20h]

  LOBYTE(AllocationInfo) = 13;
  v8 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v9 = (char *)DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v10 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v10);
    v9 = (char *)DXGGLOBAL::m_pGlobal;
  }
  v11 = v9 + 688;
  ++*((_DWORD *)v11 + 5);
  v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v11);
  ListEntry = v13;
  if ( !v13 )
  {
    ++*((_DWORD *)v11 + 6);
    v13 = (PSLIST_ENTRY)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v11 + 6))(
                          *((unsigned int *)v11 + 9),
                          *((unsigned int *)v11 + 11),
                          *((unsigned int *)v11 + 10),
                          v11);
    ListEntry = v13;
  }
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v14 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
  memset(v13, 0, 0x5F0uLL);
  v17 = 0LL;
  if ( bTracingEnabled )
    v17 = v13;
  v167[2] = (struct DXGCONTEXT *)v17;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v15, &EventProfilerEnter, v16, 2020);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v19);
  v25 = (struct DXGCONTEXT *)ProcessDxgProcess;
  v187 = (const struct _DXGKWIN32KENG_INTERFACE **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct DXGCONTEXT **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
      {
        v25 = *ThreadProperty;
        v187 = (const struct _DXGKWIN32KENG_INTERFACE **)*ThreadProperty;
      }
    }
  }
  v167[1] = v25;
  if ( !v25 )
  {
    v27 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    *(_QWORD *)(v27 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v27);
    goto LABEL_18;
  }
  v34 = 11LL;
  if ( v8 )
  {
    v35 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v35 = (_OWORD *)MmUserProbeAddress;
    v36 = v13;
    do
    {
      *v36 = *v35;
      v36[1] = v35[1];
      v36[2] = v35[2];
      v36[3] = v35[3];
      v36[4] = v35[4];
      v36[5] = v35[5];
      v36[6] = v35[6];
      v36 += 8;
      *(v36 - 1) = v35[7];
      v35 += 8;
      --v34;
    }
    while ( v34 );
  }
  else
  {
    v36 = v13;
    v35 = (_OWORD *)a1;
    do
    {
      *v36 = *v35;
      v36[1] = v35[1];
      v36[2] = v35[2];
      v36[3] = v35[3];
      v36[4] = v35[4];
      v36[5] = v35[5];
      v36[6] = v35[6];
      v36 += 8;
      *(v36 - 1) = v35[7];
      v35 += 8;
      --v34;
    }
    while ( v34 );
  }
  *v36 = *v35;
  v36[1] = v35[1];
  v36[2] = v35[2];
  v36[3] = v35[3];
  v36[4] = v35[4];
  *((_QWORD *)v36 + 10) = *((_QWORD *)v35 + 10);
  if ( !a2 && (*(_DWORD *)(&v13[5].Next + 1) & 0x8000) == 0 )
  {
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qpqqqpp(
        HIDWORD(v17[1].Next),
        0LL,
        v23,
        (int)v17->Next,
        *((_QWORD *)&v17->Next + 1),
        (char)v17[1].Next,
        *((_DWORD *)&v17[5].Next + 2),
        6,
        HIDWORD(v17[1].Next),
        *((_DWORD *)&v17[1].Next + 2));
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v36, &EventProfilerExit, v23, 2020);
    Global = DXGGLOBAL::GetGlobal();
    v38 = (union _SLIST_HEADER *)((char *)Global + 688);
    ++*((_DWORD *)Global + 179);
    if ( ExQueryDepthSList((PSLIST_HEADER)Global + 43) < *((_WORD *)Global + 352) )
    {
      ExpInterlockedPushEntrySList(v38, v13);
    }
    else
    {
      ++LODWORD(v38[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v38[3].Region)(v13, v38);
    }
    return 3223191558LL;
  }
  if ( (*(_DWORD *)(&v13[5].Next + 1) & 0x10000000) != 0 )
  {
    if ( !*((_DWORD *)&v13[90].Next + 2) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v36, 0LL, v23, v24);
      *(_QWORD *)(v39 + 24) = 945LL;
      WdLogEvent5_WdAssertion(v39);
    }
    Next = (int)v13->Next;
    LODWORD(v13->Next) = *((_DWORD *)&v13[90].Next + 2);
    *((_DWORD *)&v13[90].Next + 2) = Next;
    v41 = v187;
    AllocationInfo = PreIndirectPresentReadAllocationInfo(
                       (struct DXGPROCESS *)v187,
                       (const struct _D3DKMT_PRESENT *)v13,
                       (struct INDIRECT_RESOURCE_INFO *)((char *)&v13[94].Next + 4));
    if ( AllocationInfo < 0 )
    {
      v46 = WdLogNewEntry5_WdWarning(v43, v42, v44, v45);
      *(_QWORD *)(v46 + 24) = HIDWORD(v13[1].Next);
      WdLogEvent5_WdWarning(v46);
    }
  }
  else
  {
    v41 = v187;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v156,
    (unsigned int)v13->Next,
    (struct DXGPROCESS *)v41,
    v167,
    0);
  v51 = v167[0];
  v177 = v167[0];
  if ( !v167[0] )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49, v50);
    v52[3] = -1073741811LL;
    v52[4] = PsGetCurrentProcess();
    v52[5] = LODWORD(v13->Next);
    WdLogEvent5_WdWarning(v52);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
LABEL_18:
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qpqqqpp(
        HIDWORD(v17[1].Next),
        v28,
        v30,
        (int)v17->Next,
        *((_QWORD *)&v17->Next + 1),
        (char)v17[1].Next,
        *((_DWORD *)&v17[5].Next + 2),
        AllocationInfo,
        HIDWORD(v17[1].Next),
        *((_DWORD *)&v17[1].Next + 2));
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v29, &EventProfilerExit, v30, 2020);
    v31 = DXGGLOBAL::GetGlobal();
    v32 = (union _SLIST_HEADER *)((char *)v31 + 688);
    ++*((_DWORD *)v31 + 179);
    if ( ExQueryDepthSList((PSLIST_HEADER)v31 + 43) < *((_WORD *)v31 + 352) )
    {
      ExpInterlockedPushEntrySList(v32, v13);
    }
    else
    {
      ++LODWORD(v32[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v32[3].Region)(v13, v32);
    }
    return 3221225485LL;
  }
  if ( *((_BYTE *)v167[0] + 369) && *((_DWORD *)&v13[5].Next + 3) )
  {
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qpqqqpp(
        HIDWORD(v17[1].Next),
        v53,
        v55,
        (int)v17->Next,
        *((_QWORD *)&v17->Next + 1),
        (char)v17[1].Next,
        *((_DWORD *)&v17[5].Next + 2),
        AllocationInfo,
        HIDWORD(v17[1].Next),
        *((_DWORD *)&v17[1].Next + 2));
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v54, &EventProfilerExit, v55, 2020);
    v56 = DXGGLOBAL::GetGlobal();
    v57 = (union _SLIST_HEADER *)((char *)v56 + 688);
    ++*((_DWORD *)v56 + 179);
    if ( ExQueryDepthSList((PSLIST_HEADER)v56 + 43) < *((_WORD *)v56 + 352) )
    {
      ExpInterlockedPushEntrySList(v57, v13);
    }
    else
    {
      ++LODWORD(v57[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v57[3].Region)(v13, v57);
    }
    return 3221225474LL;
  }
  v58 = *((_QWORD *)v167[0] + 2);
  v178 = v58;
  v154 = v58;
  v155 = 0;
  if ( v58 )
  {
    v59 = *(struct _KEVENT **)(v58 + 16);
    if ( *(_DWORD *)(v58 + 328) == 2 )
      v60 = v59 + 4;
    else
      v60 = v59 + 3;
    if ( !KeReadStateEvent(v60) )
      KeWaitForSingleObject(v60, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v58 + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v58 + 16) + 16LL) + 96LL));
      v61 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v58 + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v62, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v58 + 104), 1u);
      if ( v61 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v58 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v58 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v63 = 1LL;
    v155 = 1;
  }
  else
  {
    v63 = 1LL;
  }
  v64 = *((_DWORD *)&v13[5].Next + 3);
  if ( v64 > 0x40 )
  {
    v65 = WdLogNewEntry5_WdWarning(v48, v47, v49, 1LL);
    *(_QWORD *)(v65 + 24) = v51;
    *(_QWORD *)(v65 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v65);
LABEL_85:
    if ( v58 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
    goto LABEL_18;
  }
  v66 = v64 + 1;
  PoolWithTag = 0LL;
  P = 0LL;
  v159 = 0;
  if ( (unsigned int)v66 <= 4 )
  {
    PoolWithTag = v158;
    P = v158;
  }
  else
  {
    v49 = (unsigned int)v66;
    v47 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v66;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v66 < 8 )
      goto LABEL_94;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v66, 0x4B677844u);
    P = PoolWithTag;
  }
  v159 = v66;
  if ( !PoolWithTag )
  {
LABEL_95:
    v68 = WdLogNewEntry5_WdWarning(PoolWithTag, v47, v49, v63);
    *(_QWORD *)(v68 + 24) = 999LL;
    WdLogEvent5_WdWarning(v68);
LABEL_96:
    if ( P != v158 && P )
      ExFreePoolWithTag(P, 0);
    if ( v58 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qpqqqpp(
        HIDWORD(v17[1].Next),
        v69,
        v71,
        (int)v17->Next,
        *((_QWORD *)&v17->Next + 1),
        (char)v17[1].Next,
        *((_DWORD *)&v17[5].Next + 2),
        AllocationInfo,
        HIDWORD(v17[1].Next),
        *((_DWORD *)&v17[1].Next + 2));
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v70, &EventProfilerExit, v71, 2020);
    v72 = DXGGLOBAL::GetGlobal();
    v73 = (union _SLIST_HEADER *)((char *)v72 + 688);
    ++*((_DWORD *)v72 + 179);
    if ( ExQueryDepthSList((PSLIST_HEADER)v72 + 43) < *((_WORD *)v72 + 352) )
    {
      ExpInterlockedPushEntrySList(v73, v13);
    }
    else
    {
      ++LODWORD(v73[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v73[3].Region)(v13, v73);
    }
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8LL * (unsigned int)v66);
  PoolWithTag = P;
LABEL_94:
  if ( !PoolWithTag )
    goto LABEL_95;
  v74 = 0LL;
  v163 = 0LL;
  v165 = 0;
  if ( (unsigned int)v66 <= 4 )
  {
    v74 = v164;
    v163 = v164;
  }
  else
  {
    v49 = (unsigned int)v66;
    v47 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)v66;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v66 < 8 )
      goto LABEL_116;
    v74 = ExAllocatePoolWithTag(PagedPool, 8 * v66, 0x4B677844u);
    v163 = v74;
    PoolWithTag = P;
  }
  v165 = v66;
  if ( !v74 )
  {
LABEL_117:
    v75 = WdLogNewEntry5_WdWarning(PoolWithTag, v47, v49, v74);
    *(_QWORD *)(v75 + 24) = 1009LL;
    WdLogEvent5_WdWarning(v75);
LABEL_118:
    if ( v163 != v164 && v163 )
      ExFreePoolWithTag(v163, 0);
    goto LABEL_96;
  }
  memset(v74, 0, 8LL * (unsigned int)v66);
  PoolWithTag = P;
  v74 = v163;
LABEL_116:
  if ( !v74 )
    goto LABEL_117;
  *PoolWithTag = v51;
  *(_QWORD *)v163 = v51;
  v176 = P;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
    (DXGHANDLETABLELOCKSHARED *)v182,
    (struct DXGPROCESS *)v41,
    v49,
    (__int64)v74);
  v76 = 0;
  if ( *((_DWORD *)&v13[5].Next + 3) )
  {
    v77 = (char *)P;
    while ( 1 )
    {
      v78 = (*((_DWORD *)&v13[6].Next + v76) >> 6) & 0xFFFFFF;
      if ( v78 < *((_DWORD *)v41 + 52)
        && (v79 = v41[24],
            v80 = *((_DWORD *)v79 + 4 * v78 + 2),
            *((_DWORD *)&v13[6].Next + v76) >> 30 == ((v80 >> 4) & 3))
        && (v80 & 0x1000) == 0
        && (v80 & 0xF) != 0
        && (*((_BYTE *)v79 + 16 * v78 + 8) & 0xF) == 7 )
      {
        v81 = *((_QWORD *)v79 + 2 * v78);
      }
      else
      {
        v81 = 0LL;
      }
      v82 = v76 + 1;
      v83 = 8 * v82;
      *(_QWORD *)&v77[v83] = v81;
      *(_QWORD *)((char *)v163 + v83) = v81;
      v77 = (char *)P;
      v84 = *((_QWORD *)P + v82);
      if ( !v84 )
        break;
      v83 = *((_QWORD *)v51 + 2);
      if ( *(_QWORD *)(v84 + 16) != v83 )
        break;
      if ( v76 )
      {
        if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v83 + 16) + 16LL)) )
        {
          v87 = *(unsigned int *)(v176[v86] + 344LL);
          if ( (unsigned int)v87 <= *(_DWORD *)(v176[v76 - 1] + 344LL) )
          {
            v88 = (_QWORD *)WdLogNewEntry5_WdError(v85, v87);
            v88[3] = -1073741811LL;
            goto LABEL_138;
          }
        }
      }
      v76 = v82;
      if ( (unsigned int)v82 >= *((_DWORD *)&v13[5].Next + 3) )
        goto LABEL_146;
    }
    v88 = (_QWORD *)WdLogNewEntry5_WdError(v83, v81);
    v88[3] = v51;
    v88[4] = *((unsigned int *)&v13[6].Next + v76);
    v88[5] = v76;
    v88[6] = -1073741811LL;
LABEL_138:
    WdLogEvent5_WdError(v88);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v182);
    goto LABEL_139;
  }
LABEL_146:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v182);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v180,
    P,
    v159);
  if ( v181 )
  {
    if ( !v180[0] )
    {
      v93 = WdLogNewEntry5_WdWarning(v90, v89, v91, v92);
      *(_QWORD *)(v93 + 24) = 1072LL;
      WdLogEvent5_WdWarning(v93);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v180);
      goto LABEL_118;
    }
    v94 = WdLogNewEntry5_WdWarning(v90, v89, v91, v92);
    *(_QWORD *)(v94 + 24) = 1077LL;
    WdLogEvent5_WdWarning(v94);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v180);
LABEL_139:
    if ( v163 != v164 && v163 )
      ExFreePoolWithTag(v163, 0);
    if ( P != v158 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_85;
  }
  *((_QWORD *)&v13[93].Next + 1) = v163;
  LOBYTE(v13[94].Next) = 1;
  v95 = *(struct DXGADAPTER **)(*((_QWORD *)v51 + 2) + 1800LL);
  v96 = *((_DWORD *)&v13[5].Next + 2);
  if ( (v96 & 0x8000) != 0 )
  {
    if ( (v96 & 0x400000) != 0 || v13[90].Next )
    {
      v98 = (_QWORD *)WdLogNewEntry5_WdError(v90, v89);
      v98[3] = -1073741811LL;
      v98[4] = v51;
      v98[5] = *((unsigned int *)&v13[5].Next + 2);
      v98[6] = v13[90].Next;
      WdLogEvent5_WdError(v98);
      v97 = -1073741811;
    }
    else
    {
      v97 = 0;
    }
  }
  else if ( *((_QWORD *)v51 + 19)
         || ((v99 = (DXGPRESENT *)DXGQUOTAALLOCATOR<1,1265072196>::operator new(0x668uLL)) == 0LL
           ? (v101 = 0LL)
           : (v101 = DXGPRESENT::DXGPRESENT(v99, *(_DWORD *)(*((_QWORD *)v51 + 2) + 1808LL))),
             (*((_QWORD *)v51 + 19) = v101) != 0LL) )
  {
    v97 = DXGPRESENT::CopyPresentArgs(*((DXGPRESENT **)v51 + 19), v51, (struct _D3DKMT_PRESENT *)v13);
  }
  else
  {
    v102 = (_QWORD *)WdLogNewEntry5_WdLowResource(v100);
    v102[3] = -1073741801LL;
    v102[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v51 + 2) + 16LL) + 16LL);
    v102[5] = v41;
    v102[6] = v51;
    WdLogEvent5_WdLowResource(v102);
    v97 = -1073741801;
  }
  LOBYTE(AllocationInfo) = v97;
  if ( v97 < 0 )
    goto LABEL_163;
  v108 = *((unsigned int *)&v13[5].Next + 2);
  if ( (v108 & 0x10000000) != 0 )
  {
    if ( !v95 )
    {
      v109 = WdLogNewEntry5_WdError(v108, v89);
      *(_QWORD *)(v109 + 24) = 1098LL;
LABEL_184:
      WdLogEvent5_WdError(v109);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v180);
      goto LABEL_139;
    }
    if ( (*((_DWORD *)v95 + 75) & 0x100) == 0 )
    {
      v109 = WdLogNewEntry5_WdError(v108, v89);
      *(_QWORD *)(v109 + 24) = 1104LL;
      goto LABEL_184;
    }
  }
  else if ( v95 )
  {
    if ( (*((_DWORD *)v95 + 75) & 0x100) != 0 && (v108 & 0x18000) == 0 )
    {
      v109 = WdLogNewEntry5_WdError(v108, v89);
      *(_QWORD *)(v109 + 24) = 1114LL;
      goto LABEL_184;
    }
  }
  else
  {
    v95 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v51 + 2) + 16LL) + 16LL);
  }
  CWin32kLocks::CWin32kLocks((CWin32kLocks *)v183, v187[9], v95);
  v161 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v51 + 2) + 16LL) + 16LL);
  v162 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)v161 + 3);
  v160 = -1LL;
  v110 = v161;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v110 + 120, 0LL);
  v162 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v168, *((_QWORD *)v51 + 2), 2LL, v111, 0);
  if ( v171 )
  {
    v115 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v113, v112, v114);
    v115[3] = 275LL;
    v115[4] = 4LL;
    v115[5] = v169;
    v115[6] = 0LL;
    v115[7] = 0LL;
    WdLogEvent5_WdCriticalError(v115);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v170 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v170 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v116, &EventBlockThread, v117, 72);
      KeWaitForSingleObject((char *)v170 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v170);
  }
  v171 = 1;
  if ( *(_DWORD *)(v174 + 408) != 1 )
    goto LABEL_203;
  if ( v175 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v172);
    if ( *(_DWORD *)(v173 + 176) != 1 )
    {
      COREACCESS::Release((COREACCESS *)v172);
LABEL_203:
      COREACCESS::Release((COREACCESS *)v169);
      v97 = -1073741130;
      goto LABEL_208;
    }
  }
  v97 = 0;
LABEL_208:
  LOBYTE(AllocationInfo) = v97;
  if ( v97 < 0 )
  {
LABEL_209:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v168);
    if ( v162 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v160);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v183);
LABEL_163:
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v180);
    if ( v163 != v164 && v163 )
      ExFreePoolWithTag(v163, 0);
    if ( P != v158 && P )
      ExFreePoolWithTag(P, 0);
    if ( v58 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
    if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_qpqqqpp(
        HIDWORD(v17[1].Next),
        v103,
        v105,
        (int)v17->Next,
        *((_QWORD *)&v17->Next + 1),
        (char)v17[1].Next,
        *((_DWORD *)&v17[5].Next + 2),
        AllocationInfo,
        HIDWORD(v17[1].Next),
        *((_DWORD *)&v17[1].Next + 2));
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v104, &EventProfilerExit, v105, 2020);
    v106 = DXGGLOBAL::GetGlobal();
    v107 = (union _SLIST_HEADER *)((char *)v106 + 688);
    ++*((_DWORD *)v106 + 179);
    if ( ExQueryDepthSList((PSLIST_HEADER)v106 + 43) < *((_WORD *)v106 + 352) )
    {
      ExpInterlockedPushEntrySList(v107, v13);
    }
    else
    {
      ++LODWORD(v107[2].Alignment);
      ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v107[3].Region)(v13, v107);
    }
    return (unsigned int)v97;
  }
  if ( (*(_DWORD *)(&v13[5].Next + 1) & 0x200000) != 0 )
  {
    v97 = DXGCONTEXT::SubmitPresentHistoryToken(
            v167[0],
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(&v13[22].Next + 1),
            (struct COREDEVICEACCESS *)v168,
            (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v160,
            (struct CWin32kLocks *)v183,
            0,
            0LL,
            0LL,
            0LL);
    goto LABEL_209;
  }
  v118 = *(_QWORD *)(*((_QWORD *)v51 + 2) + 16LL);
  v179[1] = (struct _SLIST_ENTRY *)v118;
  ++*(_DWORD *)(v118 + 1028);
  v120 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v118 + 1008));
  if ( !v120 )
  {
    ++*(_DWORD *)(v118 + 1032);
    v120 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v118 + 1056))(
                           *(unsigned int *)(v118 + 1044),
                           *(unsigned int *)(v118 + 1052),
                           *(unsigned int *)(v118 + 1048),
                           v118 + 1008);
  }
  v179[0] = v120;
  if ( !v120 )
  {
    v131 = WdLogNewEntry5_WdLowResource(v119);
    *(_QWORD *)(v131 + 24) = 1147LL;
    WdLogEvent5_WdLowResource(v131);
    CVidSchSubmitData::~CVidSchSubmitData(v179);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v168);
    if ( v162 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v160);
    CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v183);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v180);
    goto LABEL_118;
  }
  v121 = *(_QWORD *)(v118 + 16);
  if ( *(int *)(v121 + 1944) < 0x2000 )
    v122 = 1;
  else
    v122 = *(_DWORD *)(v121 + 248);
  if ( *(int *)(v121 + 1944) >= 0x2000 || (v123 = *(_BYTE *)(v121 + 2228)) != 0 )
    v123 = 1;
  if ( v123 )
    v124 = *(_DWORD *)(v121 + 2152) * (48 * v122 + ((8 * v122 + 167) & 0xFFFFFFF8)) + 8 * v122 + 448;
  else
    v124 = 936;
  memset(v120, 0, v124);
  v125 = *(_QWORD *)(v118 + 16);
  v126 = *(_DWORD *)(v125 + 1944);
  if ( v126 < 0x2000 )
    v127 = 1;
  else
    v127 = *(_DWORD *)(v125 + 248);
  if ( v126 >= 0x2000 || (v128 = *(_BYTE *)(v125 + 2228)) != 0 )
    v128 = 1;
  v129 = *(_DWORD *)(v125 + 2152);
  *((_BYTE *)&v120[21].Next + 12) = v128;
  if ( v128 )
  {
    HIDWORD(v120[27].Next) = v129;
    *((_DWORD *)&v120[27].Next + 2) = v127;
    *((_DWORD *)&v120[27].Next + 3) = v129 * (48 * v127 + ((8 * v127 + 167) & 0xFFFFFFF8)) + 16;
    v130 = v129 * (48 * v127 + ((8 * v127 + 167) & 0xFFFFFFF8)) + 448;
    LODWORD(v120[26].Next) = v130;
    HIDWORD(v120[26].Next) = 8 * v127 + v130;
  }
  v186 = DXGCONTEXT::Present(
           v167[0],
           (struct _D3DKMT_PRESENT *)v13,
           (struct COREDEVICEACCESS *)v168,
           (struct DXGADAPTERSTOPRESETLOCKSHARED *)&v160,
           (struct CWin32kLocks *)v183,
           (struct DXGCONTEXT **)P,
           (struct VIDSCH_SUBMIT_DATA_BASE *)v120);
  if ( v186 == -1071775482 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v170) )
    {
      v132 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v168);
      if ( v132 < 0 )
      {
        CVidSchSubmitData::~CVidSchSubmitData(v179);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v168);
        if ( v162 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v160);
        CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v183);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v180);
        if ( v163 != v164 && v163 )
          ExFreePoolWithTag(v163, 0);
        if ( P != v158 && P )
          ExFreePoolWithTag(P, 0);
        if ( v58 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v154);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
        if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_qpqqqpp(
            HIDWORD(v17[1].Next),
            v133,
            v135,
            (int)v17->Next,
            *((_QWORD *)&v17->Next + 1),
            (char)v17[1].Next,
            *((_DWORD *)&v17[5].Next + 2),
            6,
            HIDWORD(v17[1].Next),
            *((_DWORD *)&v17[1].Next + 2));
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v134, &EventProfilerExit, v135, 2020);
        v136 = DXGGLOBAL::GetGlobal();
        v137 = (union _SLIST_HEADER *)((char *)v136 + 688);
        ++*((_DWORD *)v136 + 179);
        if ( ExQueryDepthSList((PSLIST_HEADER)v136 + 43) < *((_WORD *)v136 + 352) )
        {
          ExpInterlockedPushEntrySList(v137, v13);
        }
        else
        {
          ++LODWORD(v137[2].Alignment);
          ((void (__fastcall *)(PSLIST_ENTRY, union _SLIST_HEADER *))v137[3].Region)(v13, v137);
        }
        return (unsigned int)v132;
      }
    }
    DXGDEVICE::CloseInternalCddPrimaryHandle(*((DXGDEVICE **)v177 + 2), (struct COREDEVICEACCESS *)v168);
  }
  ++*(_DWORD *)(v118 + 1036);
  if ( ExQueryDepthSList((PSLIST_HEADER)(v118 + 1008)) < *(_WORD *)(v118 + 1024) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v118 + 1008), v120);
  }
  else
  {
    ++*(_DWORD *)(v118 + 1040);
    (*(void (__fastcall **)(PSLIST_ENTRY, __int64))(v118 + 1064))(v120, v118 + 1008);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v168);
  if ( v162 )
  {
    v162 = 0;
    ExReleasePushLockSharedEx((char *)v161 + 120, 0LL);
    KeLeaveCriticalRegion();
    v138 = (DXGGLOBAL **)v161;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v161 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(v138[2], (struct DXGADAPTER *)v138);
  }
  if ( v186 >= 0 )
  {
    v139 = (_BYTE *)(a1 + 1488);
    if ( a1 + 1488 >= MmUserProbeAddress )
      v139 = (_BYTE *)MmUserProbeAddress;
    *v139 = v13[94].Next;
  }
  CWin32kLocks::~CWin32kLocks((CWin32kLocks *)v183);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v180);
  if ( v163 != v164 && v163 )
    ExFreePoolWithTag(v163, 0);
  if ( P != v158 && P )
    ExFreePoolWithTag(P, 0);
  if ( v58 && v155 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v58 + 104));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v156);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qpqqqpp(
      HIDWORD(v17[1].Next),
      v140,
      v142,
      (int)v17->Next,
      *((_QWORD *)&v17->Next + 1),
      (char)v17[1].Next,
      *((_DWORD *)&v17[5].Next + 2),
      v186,
      HIDWORD(v17[1].Next),
      *((_DWORD *)&v17[1].Next + 2));
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v141, &EventProfilerExit, v142, 2020);
  v144 = (char *)DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v145 = WdLogNewEntry5_WdAssertion(v141, v140, v142, v143);
    *(_QWORD *)(v145 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v145);
    v144 = (char *)DXGGLOBAL::m_pGlobal;
  }
  v146 = v144 + 688;
  ++*((_DWORD *)v146 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v146) < *((_WORD *)v146 + 8) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v146, v13);
  }
  else
  {
    ++*((_DWORD *)v146 + 8);
    (*((void (__fastcall **)(PSLIST_ENTRY, char *))v146 + 7))(v13, v146);
  }
  v147 = PsGetCurrentProcess();
  v149 = PsGetProcessDxgProcess(v147, v148);
  v150 = v149;
  if ( v149 )
  {
    if ( (*(_BYTE *)(v149 + 275) & 2) != 0 )
    {
      v151 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( v151 )
        v150 = *v151;
    }
  }
  v152 = *(_QWORD *)(v150 + 64);
  for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v152 + 88), (PKSPIN_LOCK)(v152 + 104));
        i;
        i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v152 + 88), (PKSPIN_LOCK)(v152 + 104)) )
  {
    ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
    operator delete(i);
  }
  return (unsigned int)v186;
}
