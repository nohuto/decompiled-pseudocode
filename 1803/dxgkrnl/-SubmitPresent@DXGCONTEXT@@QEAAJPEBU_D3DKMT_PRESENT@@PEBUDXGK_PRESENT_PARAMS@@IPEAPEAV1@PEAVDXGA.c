/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100890
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B040C (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B0B9C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01B2E2C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@P.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0023A00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C00CE588 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010E280 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@PEAVD.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C010EAD8 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C018ABFC (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01B3E20 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B467C (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        const struct DXGK_PRESENT_PARAMS *a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION *a6,
        unsigned int a7,
        unsigned int a8,
        struct _DXGKARG_PRESENT *a9,
        struct _D3DKMT_PRESENT_RGNS *a10,
        struct _VIDMM_DMA_BUFFER *a11,
        struct VIDSCH_SUBMIT_DATA_BASE *a12,
        enum _D3DDDIFORMAT a13,
        struct _D3DKMT_PRESENT *a14)
{
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v24; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v29; // rax
  struct _KTHREAD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // rbx
  __int64 *v35; // rax
  __int64 v36; // rbx
  _QWORD *v37; // rax
  struct DXGALLOCATION **v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  struct _KTHREAD *v41; // rdi
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 *v46; // rax
  __int64 v47; // rax
  struct _KTHREAD *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // ebx
  __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rbx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  struct _DXGKARG_PRESENT *v57; // rcx
  __int64 v58; // rax
  struct CRefCountedBuffer *v59; // rdi
  struct _D3DKMT_PRESENT *v60; // rdx
  int v61; // eax
  __int64 v62; // rbx
  __int64 v63; // rax
  char v65; // bl
  unsigned int v66; // r10d
  unsigned int v67; // r9d
  struct DXGCONTEXT **v68; // r15
  int v69; // r8d
  const struct _D3DKMT_PRESENT *v70; // rdx
  int pDmaBufferPrivateData_high; // eax
  UINT v72; // eax
  struct _DXGKARG_PRESENT *v73; // rcx
  RECT *v74; // rcx
  __int64 MoveRectCount; // rdx
  RECT *p_DestRect; // rax
  __int64 v77; // rax
  struct _VIDMM_DMA_BUFFER *v78; // r9
  struct DXGALLOCATION *v79; // rcx
  __int64 v80; // rcx
  struct _KTHREAD *v81; // rdi
  __int64 v82; // rax
  int v83; // ebx
  __int64 v84; // rbx
  __int64 v85; // rcx
  __int64 *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  unsigned int v92; // edi
  struct _VIDMM_DMA_BUFFER *v93; // rax
  __int64 v94; // rbx
  D3DKMT_HANDLE *v95; // rdx
  struct DXGALLOCATION **v96; // rax
  __int64 v97; // rcx
  _QWORD *v98; // rax
  struct DXGCONTEXT **v99; // r15
  __int64 v100; // rcx
  _QWORD *v101; // rax
  unsigned int *v102; // rdx
  struct DXGALLOCATION **v103; // rax
  __int64 v104; // rcx
  _QWORD *v105; // rax
  struct DXGCONTEXT **v106; // rbx
  __int64 v107; // rcx
  _QWORD *v108; // rax
  __int64 v109; // rax
  _QWORD *v110; // r9
  __int64 v111; // r14
  _BYTE *PoolWithTag; // r9
  unsigned int v113; // edi
  unsigned int v114; // r10d
  struct DXGCONTEXT **v115; // rdx
  __int64 v116; // rax
  struct DXGALLOCATION *v117; // r12
  __int64 v118; // rax
  struct _DXGKARG_PRESENT *v119; // rcx
  __int64 v120; // rax
  unsigned int v121; // ebx
  int v122; // ecx
  unsigned int v123; // edx
  __int64 v124; // rcx
  char *v125; // r8
  _QWORD *v126; // rcx
  __int64 v127; // rax
  int v128; // ecx
  char *v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rcx
  char v132; // al
  __int64 v133; // rdi
  char *v134; // rdi
  char *v135; // rdx
  char *v136; // rcx
  __int64 v137; // r15
  __int64 v138; // r12
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rax
  BOOL v143; // r12d
  __int64 v144; // rdi
  struct _DXGKARG_PRESENT *v145; // r8
  void *v146; // rdx
  unsigned int v147; // edi
  unsigned int v148; // r12d
  struct DXGCONTEXT **v149; // r15
  struct _KTHREAD *v150; // rcx
  __int64 v151; // rax
  struct DXGCONTEXT *v152; // rdx
  __int64 v153; // rax
  int v154; // eax
  char *v155; // r8
  struct _KTHREAD *v156; // rdi
  __int64 v157; // rax
  __int64 v158; // rcx
  int v159; // ebx
  __int64 v160; // rbx
  __int64 *v161; // rax
  __int64 v162; // rbx
  _QWORD *v163; // rax
  struct DXGALLOCATION *v164; // rcx
  __int64 v165; // rcx
  struct _KTHREAD *v166; // rdi
  __int64 v167; // rax
  int v168; // ebx
  __int64 v169; // rbx
  __int64 v170; // rcx
  __int64 *v171; // rax
  __int64 v172; // rax
  struct _KTHREAD *v173; // rdi
  __int64 v174; // rax
  __int64 v175; // rcx
  int v176; // ebx
  __int64 v177; // rbx
  __int64 *v178; // rax
  __int64 v179; // rbx
  _QWORD *v180; // rax
  int v181; // [rsp+50h] [rbp-368h]
  struct _VIDMM_DMA_BUFFER *v182; // [rsp+58h] [rbp-360h]
  struct DXGALLOCATION *v183; // [rsp+60h] [rbp-358h] BYREF
  unsigned int v184; // [rsp+68h] [rbp-350h]
  unsigned int v185; // [rsp+6Ch] [rbp-34Ch]
  struct DXGALLOCATION *v186; // [rsp+70h] [rbp-348h] BYREF
  int v187; // [rsp+78h] [rbp-340h] BYREF
  __int64 v188; // [rsp+80h] [rbp-338h]
  struct _DXGKARG_PRESENT *v189; // [rsp+88h] [rbp-330h]
  unsigned int v190; // [rsp+90h] [rbp-328h]
  struct _D3DKMT_PRESENT *v191; // [rsp+98h] [rbp-320h]
  __int64 v192; // [rsp+A0h] [rbp-318h] BYREF
  unsigned int v193; // [rsp+A8h] [rbp-310h]
  int v194; // [rsp+ACh] [rbp-30Ch]
  unsigned int v195; // [rsp+B0h] [rbp-308h]
  struct DXGCONTEXT **v196; // [rsp+B8h] [rbp-300h]
  struct CRefCountedBuffer *v197; // [rsp+C0h] [rbp-2F8h] BYREF
  signed __int64 v198; // [rsp+C8h] [rbp-2F0h]
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+D0h] [rbp-2E8h]
  struct _D3DKMT_PRESENT *v200; // [rsp+D8h] [rbp-2E0h]
  struct DXGK_PRESENT_PARAMS *v201; // [rsp+E0h] [rbp-2D8h]
  struct DXGALLOCATION *v202; // [rsp+E8h] [rbp-2D0h]
  PVOID P; // [rsp+F0h] [rbp-2C8h]
  struct _EX_RUNDOWN_REF *v204; // [rsp+F8h] [rbp-2C0h] BYREF
  struct _EX_RUNDOWN_REF *v205; // [rsp+100h] [rbp-2B8h] BYREF
  struct _EX_RUNDOWN_REF *v206; // [rsp+108h] [rbp-2B0h] BYREF
  struct _EX_RUNDOWN_REF *v207[2]; // [rsp+110h] [rbp-2A8h] BYREF
  _BYTE *v208; // [rsp+120h] [rbp-298h] BYREF
  _BYTE v209[64]; // [rsp+128h] [rbp-290h] BYREF
  int v210; // [rsp+168h] [rbp-250h]
  __int64 v211; // [rsp+170h] [rbp-248h]
  __int64 v212; // [rsp+178h] [rbp-240h]
  __int64 v213; // [rsp+180h] [rbp-238h]
  __int64 v214; // [rsp+188h] [rbp-230h]
  __int64 v215; // [rsp+190h] [rbp-228h]
  __int64 v216; // [rsp+198h] [rbp-220h]
  __int64 v217; // [rsp+1A0h] [rbp-218h]
  __int64 v218; // [rsp+1A8h] [rbp-210h]
  __int64 v219; // [rsp+1B0h] [rbp-208h]
  __int64 v220; // [rsp+1B8h] [rbp-200h]
  __int64 v221; // [rsp+1C0h] [rbp-1F8h]
  __int64 v222; // [rsp+1C8h] [rbp-1F0h]
  _QWORD v223[12]; // [rsp+1D0h] [rbp-1E8h] BYREF
  _BYTE v224[320]; // [rsp+230h] [rbp-188h] BYREF

  v184 = a4;
  v201 = a3;
  v191 = a2;
  v189 = a9;
  v207[1] = (struct _EX_RUNDOWN_REF *)this;
  v196 = a5;
  v202 = a6;
  v193 = a7;
  v190 = a8;
  v182 = a11;
  v200 = a14;
  v15 = *((_QWORD *)this + 2);
  v16 = *(_QWORD *)(v15 + 40);
  v188 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 144)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v19 + 24) = 7035LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v183 = 0LL;
  v186 = 0LL;
  if ( a7 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v204, a7);
    DXGALLOCATIONREFERENCE::MoveAssign(&v183, AllocationSafe);
    v21 = (__int64)v204;
    if ( v204 )
      ExReleaseRundownProtection(v204 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v21) + 223) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22);
        *(_QWORD *)(v24 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v24);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v26 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v26 = *ThreadWin32Thread;
        }
        if ( v26 )
          v29 = *(_QWORD *)(v26 + 80);
        else
          v29 = 0LL;
        if ( v29 )
        {
          v30 = KeGetCurrentThread();
          if ( !v30 )
          {
            v31 = WdLogNewEntry5_WdAssertion(v27);
            *(_QWORD *)(v31 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v31);
          }
          v33 = PsGetCurrentProcessSessionId(v27);
          if ( !v33 || (unsigned int)PsGetThreadSessionId(v30) != v33 )
            goto LABEL_28;
          v34 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v35 = (__int64 *)PsGetThreadWin32Thread(v30);
            if ( v35 )
              v34 = *v35;
          }
          if ( v34 )
            v36 = *(_QWORD *)(v34 + 80);
          else
LABEL_28:
            v36 = 0LL;
          if ( *(_DWORD *)(v36 + 136) )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32);
            v37[3] = 275LL;
            v37[4] = 38LL;
            v37[5] = *(int *)(v36 + 136);
            v37[6] = 0LL;
            v37[7] = 0LL;
            WdLogEvent5_WdCriticalError(v37);
          }
        }
      }
      v16 = v188;
    }
  }
  if ( v190 )
  {
    v38 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v205, v190);
    DXGALLOCATIONREFERENCE::MoveAssign(&v186, v38);
    v39 = (__int64)v205;
    if ( v205 )
      ExReleaseRundownProtection(v205 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v39) + 223) )
    {
      v41 = KeGetCurrentThread();
      if ( !v41 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v40);
        *(_QWORD *)(v42 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v42);
      }
      v43 = PsGetCurrentProcessSessionId(v40);
      if ( v43 && (unsigned int)PsGetThreadSessionId(v41) == v43 )
      {
        v44 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v46 = (__int64 *)PsGetThreadWin32Thread(v41);
          if ( v46 )
            v44 = *v46;
        }
        if ( v44 )
          v47 = *(_QWORD *)(v44 + 80);
        else
          v47 = 0LL;
        if ( v47 )
        {
          v48 = KeGetCurrentThread();
          if ( !v48 )
          {
            v49 = WdLogNewEntry5_WdAssertion(v45);
            *(_QWORD *)(v49 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v49);
          }
          v51 = PsGetCurrentProcessSessionId(v45);
          if ( !v51 || (unsigned int)PsGetThreadSessionId(v48) != v51 )
            goto LABEL_56;
          v52 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v53 = (__int64 *)PsGetThreadWin32Thread(v48);
            if ( v53 )
              v52 = *v53;
          }
          if ( v52 )
            v54 = *(_QWORD *)(v52 + 80);
          else
LABEL_56:
            v54 = 0LL;
          if ( *(_DWORD *)(v54 + 136) )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50);
            v55[3] = 275LL;
            v55[4] = 38LL;
            v55[5] = *(int *)(v54 + 136);
            v55[6] = 0LL;
            v55[7] = 0LL;
            WdLogEvent5_WdCriticalError(v55);
          }
        }
      }
    }
  }
  v56 = *((_QWORD *)this + 2);
  v57 = *(struct _DXGKARG_PRESENT **)(*(_QWORD *)(v56 + 16) + 16LL);
  if ( *(struct _DXGKARG_PRESENT **)(v56 + 1688) != v57
    || ((v58 = *(_QWORD *)(v188 + 104)) == 0
      ? (v57 = 0LL)
      : (v57 = (struct _DXGKARG_PRESENT *)((*(unsigned int (__fastcall **)(_QWORD))(v58 + 224))(0LL) != 0)),
        (_BYTE)v57) )
  {
    *((_DWORD *)a12 + 29) = 0;
  }
  v59 = 0LL;
  v197 = 0LL;
  v60 = v191;
  if ( v191 )
  {
    v61 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            v191->PrivateDriverDataSize,
            (char *)v191->pPrivateDriverData,
            &v197);
    v62 = v61;
    if ( v61 < 0 )
    {
      v63 = WdLogNewEntry5_WdError(v57);
      *(_QWORD *)(v63 + 24) = v62;
      WdLogEvent5_WdError(v63);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v186);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v183);
      return (unsigned int)v62;
    }
    v59 = v197;
    v60 = v191;
  }
  P = v59;
  v65 = 0;
  if ( (*(int *)(v17 + 2104) >= 0x2000 || *(_BYTE *)(v17 + 2396)) && *(_DWORD *)(v17 + 1664) >= 0x5007u && v60 )
  {
    v65 = 1;
    if ( v59 )
    {
      v57 = v189;
      v189->PrivateDriverDataSize = v60->PrivateDriverDataSize;
      v57->pPrivateDriverData = (char *)v59 + 8;
    }
    *((_QWORD *)a12 + 3) = v59;
    goto LABEL_76;
  }
  if ( !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v17) )
  {
LABEL_76:
    v66 = v184;
    goto LABEL_77;
  }
  v66 = v184;
  if ( v184 )
    goto LABEL_93;
LABEL_77:
  v67 = v66 + 1;
  v185 = v66 + 1;
  v68 = v196;
  v69 = *((_DWORD *)*v196 + 89);
  v70 = 0LL;
  if ( v66 )
  {
    while ( 1 )
    {
      v70 = (const struct _D3DKMT_PRESENT *)(unsigned int)((_DWORD)v70 + 1);
      v57 = (struct _DXGKARG_PRESENT *)v196[(_QWORD)v70];
      pDmaBufferPrivateData_high = HIDWORD(v57[2].pDmaBufferPrivateData);
      if ( (pDmaBufferPrivateData_high & v69) != 0 )
        break;
      v69 |= pDmaBufferPrivateData_high;
      if ( (unsigned int)v70 >= v66 )
        goto LABEL_80;
    }
LABEL_112:
    v88 = WdLogNewEntry5_WdError(v57);
    *(_QWORD *)(v88 + 24) = this;
    *(_QWORD *)(v88 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v88);
    goto LABEL_93;
  }
LABEL_80:
  *((_DWORD *)a12 + 34) = v69;
  if ( a10 )
  {
    v57 = (struct _DXGKARG_PRESENT *)*((_QWORD *)this + 2);
    v70 = (const struct _D3DKMT_PRESENT *)*((_QWORD *)v57->pDmaBufferPrivateData + 2);
    if ( (v70->BroadcastContext[51] & 0x10) != 0 && v70 == *(const struct _D3DKMT_PRESENT **)&v57[10].DmaSize )
    {
      v72 = a10->MoveRectCount + a10->DirtyRectCount;
      if ( v72 <= 0x14 )
      {
        v73 = v189;
        v189->SubRectCnt = v72;
        v73->pDstSubRects = (const RECT *)v224;
        v74 = (RECT *)v224;
        MoveRectCount = a10->MoveRectCount;
        if ( (_DWORD)MoveRectCount )
        {
          p_DestRect = &a10->pMoveRects->DestRect;
          do
          {
            *v74 = *p_DestRect;
            p_DestRect = (RECT *)((char *)p_DestRect + 24);
            ++v74;
            --MoveRectCount;
          }
          while ( MoveRectCount );
        }
        memmove(v74, a10->pDirtyRects, 16LL * a10->DirtyRectCount);
        v67 = v185;
      }
    }
  }
  if ( ((*((_DWORD *)a12 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    if ( (*((_DWORD *)this + 91) & 0x10) != 0 )
    {
      v77 = WdLogNewEntry5_WdError(v57);
      *(_QWORD *)(v77 + 24) = this;
      WdLogEvent5_WdError(v77);
LABEL_93:
      v181 = -1073741811;
LABEL_94:
      v78 = v182;
LABEL_95:
      if ( v78 )
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 544LL)
                                                                               + 8LL)
                                                                   + 496LL))(
          v78,
          0LL);
      if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 1, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag(P, 0);
      v79 = v186;
      if ( v186 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v186 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v79) + 223) )
      {
        v81 = KeGetCurrentThread();
        if ( !v81 )
        {
          v82 = WdLogNewEntry5_WdAssertion(v80);
          *(_QWORD *)(v82 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v82);
        }
        v83 = PsGetCurrentProcessSessionId(v80);
        if ( v83 && (unsigned int)PsGetThreadSessionId(v81) == v83 )
        {
          v84 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v86 = (__int64 *)PsGetThreadWin32Thread(v81);
            if ( v86 )
              v84 = *v86;
          }
          if ( v84 )
            v87 = *(_QWORD *)(v84 + 80);
          else
            v87 = 0LL;
          if ( v87 )
          {
            v156 = KeGetCurrentThread();
            if ( !v156 )
            {
              v157 = WdLogNewEntry5_WdAssertion(v85);
              *(_QWORD *)(v157 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v157);
            }
            v159 = PsGetCurrentProcessSessionId(v85);
            if ( !v159 || (unsigned int)PsGetThreadSessionId(v156) != v159 )
              goto LABEL_248;
            v160 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v161 = (__int64 *)PsGetThreadWin32Thread(v156);
              if ( v161 )
                v160 = *v161;
            }
            if ( v160 )
              v162 = *(_QWORD *)(v160 + 80);
            else
LABEL_248:
              v162 = 0LL;
            if ( *(_DWORD *)(v162 + 136) )
            {
              v163 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v158);
              v163[3] = 275LL;
              v163[4] = 38LL;
              v163[5] = *(int *)(v162 + 136);
              v163[6] = 0LL;
              v163[7] = 0LL;
              WdLogEvent5_WdCriticalError(v163);
            }
          }
        }
      }
      v164 = v183;
      if ( v183 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v183 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v164) + 223) )
      {
        v166 = KeGetCurrentThread();
        if ( !v166 )
        {
          v167 = WdLogNewEntry5_WdAssertion(v165);
          *(_QWORD *)(v167 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v167);
        }
        v168 = PsGetCurrentProcessSessionId(v165);
        if ( v168 && (unsigned int)PsGetThreadSessionId(v166) == v168 )
        {
          v169 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v171 = (__int64 *)PsGetThreadWin32Thread(v166);
            if ( v171 )
              v169 = *v171;
          }
          if ( v169 )
            v172 = *(_QWORD *)(v169 + 80);
          else
            v172 = 0LL;
          if ( v172 )
          {
            v173 = KeGetCurrentThread();
            if ( !v173 )
            {
              v174 = WdLogNewEntry5_WdAssertion(v170);
              *(_QWORD *)(v174 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v174);
            }
            v176 = PsGetCurrentProcessSessionId(v170);
            if ( !v176 || (unsigned int)PsGetThreadSessionId(v173) != v176 )
              goto LABEL_274;
            v177 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v178 = (__int64 *)PsGetThreadWin32Thread(v173);
              if ( v178 )
                v177 = *v178;
            }
            if ( v177 )
              v179 = *(_QWORD *)(v177 + 80);
            else
LABEL_274:
              v179 = 0LL;
            if ( *(_DWORD *)(v179 + 136) )
            {
              v180 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v175);
              v180[3] = 275LL;
              v180[4] = 38LL;
              v180[5] = *(int *)(v179 + 136);
              v180[6] = 0LL;
              v180[7] = 0LL;
              WdLogEvent5_WdCriticalError(v180);
            }
          }
        }
      }
      return (unsigned int)v181;
    }
    if ( v67 <= 1 )
    {
      v181 = DXGCONTEXT::SubmitPresentWithDmaBuffer(
               this,
               v70,
               v201,
               v183,
               v186,
               v189,
               a11,
               a12,
               (struct COREDEVICEACCESS *)v200);
      v78 = 0LL;
      goto LABEL_95;
    }
    if ( !v65 )
      goto LABEL_112;
    BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)this + 2));
    if ( !BroadcastPresentSyncObject )
    {
      v90 = WdLogNewEntry5_WdError(v89);
      *(_QWORD *)(v90 + 24) = -1073741801LL;
      *(_QWORD *)(v90 + 32) = 7421LL;
      WdLogEvent5_WdError(v90);
      v181 = -1073741801;
      goto LABEL_94;
    }
    v91 = *((_QWORD *)this + 2);
    v198 = _InterlockedIncrement64((volatile signed __int64 *)(v91 + 1736));
    *(_DWORD *)a12 |= 0xC00u;
    v92 = 0;
    v93 = a11;
    while ( v92 < v185 )
    {
      if ( v92 )
      {
        LODWORD(v94) = 0;
        v194 = 0;
        v195 = 0;
        if ( v193 )
        {
          v95 = &v191->BroadcastSrcAllocation[v92 - 1];
          if ( v95 + 1 < v95 || (unsigned __int64)(v95 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v94 = *v95;
          v194 = v94;
          v96 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v188, (DXGALLOCATIONREFERENCE *)&v206, v94);
          DXGALLOCATIONREFERENCE::MoveAssign(&v183, v96);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v206);
          if ( !v183 )
          {
            v98 = (_QWORD *)WdLogNewEntry5_WdError(v97);
            v98[3] = v94;
            v98[4] = -1073741811LL;
            v98[5] = 7447LL;
            WdLogEvent5_WdError(v98);
            v181 = -1073741811;
            v78 = v182;
            goto LABEL_95;
          }
          v99 = &v68[v92];
          v211 = *((_QWORD *)*v99 + 2);
          v212 = *(_QWORD *)(*((_QWORD *)v183 + 1) + 16LL);
          v213 = *(_QWORD *)(v212 + 16);
          v214 = *(_QWORD *)(v211 + 16);
          v100 = *(_QWORD *)(v214 + 16);
          v215 = v100;
          if ( v213 != v100 )
          {
            _mm_lfence();
            v101 = (_QWORD *)WdLogNewEntry5_WdError(v100);
            v216 = *((_QWORD *)*v99 + 2);
            v101[3] = v216;
            v101[4] = v183;
            v101[5] = -1073741811LL;
            WdLogEvent5_WdError(v101);
            v181 = -1073741811;
            v78 = v182;
            goto LABEL_95;
          }
          v68 = v196;
        }
        if ( v190 )
        {
          v102 = &v191->BroadcastDstAllocation[v92 - 1];
          if ( v102 + 1 < v102 || (unsigned __int64)(v102 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v195 = *v102;
          v103 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v188, (DXGALLOCATIONREFERENCE *)v207, v195);
          DXGALLOCATIONREFERENCE::MoveAssign(&v186, v103);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v207);
          if ( !v186 )
          {
            v105 = (_QWORD *)WdLogNewEntry5_WdError(v104);
            v105[3] = (unsigned int)v94;
            v105[4] = -1073741811LL;
            v105[5] = 7470LL;
            WdLogEvent5_WdError(v105);
            v181 = -1073741811;
            v78 = v182;
            goto LABEL_95;
          }
          v106 = &v68[v92];
          v217 = *((_QWORD *)*v106 + 2);
          v218 = *(_QWORD *)(*((_QWORD *)v186 + 1) + 16LL);
          v219 = *(_QWORD *)(v218 + 16);
          v220 = *(_QWORD *)(v217 + 16);
          v107 = *(_QWORD *)(v220 + 16);
          v221 = v107;
          if ( v219 != v107 )
          {
            _mm_lfence();
            v108 = (_QWORD *)WdLogNewEntry5_WdError(v107);
            v222 = *((_QWORD *)*v106 + 2);
            v108[3] = v222;
            v108[4] = v186;
            v108[5] = -1073741811LL;
            WdLogEvent5_WdError(v108);
            v181 = -1073741811;
            v78 = v182;
            goto LABEL_95;
          }
        }
        v93 = v182;
      }
      if ( (int)DXGCONTEXT::SubmitPresentWithDmaBuffer(
                  v68[v92],
                  v200,
                  v201,
                  v183,
                  v186,
                  v189,
                  v93,
                  a12,
                  (struct COREDEVICEACCESS *)v200) < 0 )
      {
        v109 = WdLogNewEntry5_WdError(v91);
        *(_QWORD *)(v109 + 24) = -1073741811LL;
        *(_QWORD *)(v109 + 32) = 7508LL;
        WdLogEvent5_WdError(v109);
        goto LABEL_93;
      }
      v93 = 0LL;
      v182 = 0LL;
      *(_DWORD *)a12 &= ~0x800u;
      ++v92;
    }
    v110 = 0LL;
    v208 = 0LL;
    v210 = 0;
    v111 = v184;
    if ( v184 <= 8 )
    {
      PoolWithTag = v209;
      v208 = v209;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v184 < 8 )
        goto LABEL_147;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v184, 0x4B677844u);
      v208 = PoolWithTag;
    }
    v210 = v111;
    if ( !PoolWithTag )
    {
LABEL_148:
      v181 = -1073741801;
      PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v208);
      goto LABEL_94;
    }
    memset(PoolWithTag, 0, 8 * v111);
    v110 = v208;
LABEL_147:
    if ( v110 )
    {
      v113 = 1;
      v114 = v185;
      if ( v185 <= 1 )
      {
LABEL_153:
        v181 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                         + 520LL)
                                                                             + 8LL)
                                                                 + 648LL))(
                 0LL,
                 0LL,
                 (unsigned int)v111);
        if ( v181 >= 0 )
          v181 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL)
                                                                                                 + 632LL))(
                   *((_QWORD *)this + 29),
                   BroadcastPresentSyncObject,
                   v198);
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v208);
      }
      else
      {
        v115 = v68 + 1;
        while ( (*((_DWORD *)*v115 + 91) & 0x10) == 0 )
        {
          v91 = v113 - 1;
          v110[v91] = *((_QWORD *)*v115 + 29);
          ++v113;
          ++v115;
          if ( v113 >= v114 )
            goto LABEL_153;
        }
        v116 = WdLogNewEntry5_WdError(v91);
        *(_QWORD *)(v116 + 24) = v68[v113];
        WdLogEvent5_WdError(v116);
        v181 = -1073741811;
        PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>((PVOID *)&v208);
      }
      goto LABEL_94;
    }
    goto LABEL_148;
  }
  v117 = v202;
  if ( !v202 )
  {
    v118 = WdLogNewEntry5_WdAssertion(v57);
    *(_QWORD *)(v118 + 24) = 7178LL;
    WdLogEvent5_WdAssertion(v118);
  }
  v119 = v189;
  if ( v189->pDmaBuffer )
  {
    v120 = WdLogNewEntry5_WdAssertion(v189);
    *(_QWORD *)(v120 + 24) = 7179LL;
    WdLogEvent5_WdAssertion(v120);
    v119 = v189;
  }
  if ( !v184 || !v65 )
  {
    v122 = 2048;
    v123 = v185;
    if ( v185 > 1 )
      v122 = 3072;
    *(_DWORD *)a12 = *(_DWORD *)a12 & 0xFFFFFBFF | v122;
    *((_DWORD *)a12 + 35) = v123;
    v124 = 496LL;
    if ( !*((_BYTE *)a12 + 348) )
      v124 = 472LL;
    *(_DWORD *)((char *)a12 + v124) = *(_DWORD *)((_BYTE *)a12 + v124) & 0xFFFFFC00 | 1;
    if ( *((_BYTE *)a12 + 348) )
      v125 = (char *)a12 + *((_DWORD *)a12 + 125) * ((8 * *((_DWORD *)a12 + 126) + 175) & 0xFFFFFFF8) + 544;
    else
      v125 = (char *)a12 + 480;
    v181 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 544LL)
                                                                         + 8LL)
                                                             + 408LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 608LL),
             *((_QWORD *)v117 + 3),
             v125);
    if ( v181 >= 0 )
    {
      v126 = *(_QWORD **)(*((_QWORD *)this + 2) + 16LL);
      v127 = v126[2];
      if ( *(int *)(v127 + 2104) >= 0x2000 || *(_BYTE *)(v127 + 2396) )
      {
        v128 = 0xFFFF;
        v187 = 0xFFFF;
        v192 = -1LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(v126[68] + 8LL) + 216LL))(
          v126[69],
          *(_QWORD *)(*((_QWORD *)v117 + 6) + 8LL),
          &v187,
          &v192);
        v128 = v187;
      }
      if ( *((_BYTE *)a12 + 348) )
        *(_WORD *)((char *)a12 + *((_DWORD *)a12 + 125) * ((8 * *((_DWORD *)a12 + 126) + 175) & 0xFFFFFFF8) + 528) = v128;
      else
        *((_DWORD *)a12 + 133) ^= (*((_DWORD *)a12 + 133) ^ (v128 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a12 + 348) )
        v129 = (char *)a12 + *((_DWORD *)a12 + 125) * ((8 * *((_DWORD *)a12 + 126) + 175) & 0xFFFFFFF8) + 536;
      else
        v129 = (char *)a12 + 496;
      *(_QWORD *)v129 = v192;
      v130 = *((_QWORD *)v117 + 5);
      if ( v130 && (*(_DWORD *)(v130 + 4) & 8) != 0 )
        v131 = *(_QWORD *)(*(_QWORD *)(v130 + 56) + 176LL);
      else
        v131 = 0LL;
      if ( *((_BYTE *)a12 + 348) )
        *(_QWORD *)((char *)a12 + *((_DWORD *)a12 + 125) * ((8 * *((_DWORD *)a12 + 126) + 175) & 0xFFFFFFF8) + 552) = v131;
      else
        *((_QWORD *)a12 + 69) = v131;
      v132 = *((_BYTE *)a12 + 348);
      v133 = 640LL;
      if ( !v132 )
        v133 = 504LL;
      v134 = (char *)a12 + v133;
      if ( v132 )
        v135 = (char *)a12 + *((_DWORD *)a12 + 125) * ((8 * *((_DWORD *)a12 + 126) + 175) & 0xFFFFFFF8) + 520;
      else
        v135 = (char *)a12 + 488;
      *(_QWORD *)v135 = *(_QWORD *)(*((_QWORD *)v117 + 6) + 16LL);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2418LL) )
      {
        if ( *((_BYTE *)a12 + 348) )
          v136 = (char *)a12 + *((_DWORD *)a12 + 125) * ((8 * *((_DWORD *)a12 + 126) + 175) & 0xFFFFFFF8) + 512;
        else
          v136 = (char *)a12 + 544;
        *(_QWORD *)v136 = *((_QWORD *)this + 23);
      }
      if ( *((_BYTE *)a12 + 348) )
        *((_DWORD *)a12 + 134) = -1;
      v137 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL);
      v138 = *((unsigned int *)a12 + 29);
      v139 = *(_QWORD *)(v137 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v139 + 160) )
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v139 + 144));
      if ( (unsigned int)v138 >= *(_DWORD *)(v137 + 80) )
      {
        v140 = WdLogNewEntry5_WdAssertion(v139);
        *(_QWORD *)(v140 + 24) = 4926LL;
        WdLogEvent5_WdAssertion(v140);
      }
      v141 = *(_QWORD *)(v137 + 112) + 3760 * v138;
      *(_WORD *)v134 = 0;
      *((_WORD *)v134 + 1) = *(_WORD *)(v141 + 1012);
      *((_WORD *)v134 + 2) = 0;
      *((_WORD *)v134 + 3) = *(_WORD *)(v141 + 1016);
      v142 = *(_QWORD *)v134;
      *((_QWORD *)v134 + 1) = *(_QWORD *)v134;
      *((_QWORD *)v134 + 2) = v142;
      v143 = a13 == D3DDDIFMT_A16B16G16R16F || a13 == D3DDDIFMT_A32B32G32R32F;
      *((_DWORD *)v134 + 6) = v143;
      *((_DWORD *)v134 + 7) &= 0xFFFFFFE7;
      *((_DWORD *)v134 + 8) = 0;
      v144 = *((_QWORD *)v202 + 4);
      if ( *((_BYTE *)this + 398) )
      {
        memset(v223, 0, sizeof(v223));
        v223[4] = v144;
        v223[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                    *((_QWORD *)v183 + 3),
                    *((unsigned __int8 *)this + 399),
                    *((unsigned int *)this + 90));
        v223[6] = v192;
        LOWORD(v223[7]) = v187;
      }
      else
      {
        memset(v223, 0, 24);
        memset(&v223[6], 0, 24);
        v223[3] = v144;
        v223[4] = 2 * (v187 & 0x1Fu);
        v223[5] = v192;
      }
      v145 = v189;
      v189->pAllocationList = (DXGK_ALLOCATIONLIST *)v223;
      v146 = 0LL;
      if ( (v145->Flags.Value & 1) != 0
        || !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2418LL) )
      {
        v146 = (void *)*((_QWORD *)this + 23);
      }
      v181 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v146, v145);
      if ( v181 >= 0 )
      {
        v147 = 0;
        v148 = v185;
        if ( v185 )
        {
          v149 = v196;
          do
          {
            v150 = KeGetCurrentThread();
            if ( *((struct _KTHREAD **)*v149 + 52) != v150 )
            {
              v151 = WdLogNewEntry5_WdAssertion(v150);
              *(_QWORD *)(v151 + 24) = 7362LL;
              WdLogEvent5_WdAssertion(v151);
            }
            if ( (*((_DWORD *)this + 91) & 0x10) != 0 )
              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(this, 0LL, 0);
            v152 = *v149;
            v153 = *((_QWORD *)*v149 + 2);
            if ( (*((_DWORD *)*v149 + 91) & 0x10) != 0 )
              v154 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v153 + 16) + 520LL) + 8LL)
                                                                                         + 440LL))(
                       *((_QWORD *)v152 + 33),
                       a12);
            else
              v154 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v153 + 16) + 520LL) + 8LL)
                                                                                         + 432LL))(
                       *((_QWORD *)v152 + 29),
                       a12);
            v181 = v154;
            if ( v154 < 0 )
              break;
            *(_DWORD *)a12 &= ~0x800u;
            ++v147;
            ++v149;
          }
          while ( v147 < v148 );
        }
      }
      if ( v181 < 0 )
      {
        if ( *((_BYTE *)a12 + 348) )
          v155 = (char *)a12 + *((_DWORD *)a12 + 125) * ((8 * *((_DWORD *)a12 + 126) + 175) & 0xFFFFFFF8) + 544;
        else
          v155 = (char *)a12 + 480;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 424LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
          *((unsigned int *)a12 + 34),
          *(_QWORD *)v155,
          0LL);
      }
    }
    goto LABEL_94;
  }
  v121 = DXGCONTEXT::SubmitPresentLda(this, v191, v184, v68, v117, v119, a12);
  if ( a11 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 496LL))(
      a11,
      0LL);
  if ( v59 )
    CRefCountedBuffer::RefCountedBufferRelease(v59);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v186);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v183);
  return v121;
}
