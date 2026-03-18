/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C019DD80 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C019E3EC (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0013A14 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C00201C8 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0038E6C (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C00B1990 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_PRESENT@@PEAPEAVCRefCountedBuffer@.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B24D0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C016C16C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C0187B64 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01A0660 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        unsigned int a3,
        struct DXGCONTEXT **a4,
        struct DXGALLOCATION *a5,
        unsigned int a6,
        unsigned int a7,
        struct _DXGKARG_PRESENT *a8,
        struct _D3DKMT_PRESENT_RGNS *a9,
        struct _VIDMM_DMA_BUFFER *a10,
        struct VIDSCH_SUBMIT_DATA_BASE *a11,
        enum _D3DDDIFORMAT a12,
        struct _D3DKMT_PRESENT *a13)
{
  struct DXGCONTEXT **v13; // r15
  DXGCONTEXT *v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _EX_RUNDOWN_REF *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v29; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v31; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  struct _KTHREAD *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // ebx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rbx
  _QWORD *v46; // rax
  struct DXGALLOCATION **v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  struct _EX_RUNDOWN_REF *v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  struct _KTHREAD *v53; // r14
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rbx
  __int64 *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  struct _KTHREAD *v62; // r14
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // ebx
  __int64 v67; // r8
  __int64 v68; // rbx
  __int64 *v69; // rax
  __int64 v70; // rbx
  _QWORD *v71; // rax
  __int64 v72; // rdx
  struct _DXGKARG_PRESENT *v73; // rcx
  __int64 v74; // rax
  struct CRefCountedBuffer *v75; // rbx
  struct _D3DKMT_PRESENT *v76; // rdx
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // rax
  char v81; // r14
  __int64 v82; // rdx
  __int64 v83; // r8
  unsigned int v84; // r9d
  unsigned int v85; // r13d
  __int64 v86; // r8
  __int64 v87; // rdx
  int pDmaBuffer_high; // eax
  __int64 v89; // rax
  struct _D3DKMT_PRESENT_RGNS *v90; // r9
  UINT v91; // eax
  struct _DXGKARG_PRESENT *v92; // rcx
  RECT *v93; // rcx
  __int64 MoveRectCount; // rdx
  RECT *p_DestRect; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  unsigned int v99; // ebx
  struct _VIDMM_DMA_BUFFER *v100; // rax
  __int64 v101; // r14
  D3DKMT_HANDLE *v102; // rdx
  struct DXGALLOCATION **v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  _QWORD *v106; // rax
  struct _VIDMM_DMA_BUFFER *v107; // r9
  struct DXGCONTEXT **v108; // r15
  __int64 v109; // rdx
  __int64 v110; // rcx
  _QWORD *v111; // rax
  unsigned int *v112; // rdx
  struct DXGALLOCATION **v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  _QWORD *v116; // rax
  struct DXGCONTEXT **v117; // r14
  __int64 v118; // rdx
  __int64 v119; // rcx
  _QWORD *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  _QWORD *v124; // r10
  _BYTE *PoolWithTag; // r10
  struct DXGCONTEXT **v126; // rdx
  _QWORD *v127; // r8
  __int64 v128; // r9
  struct DXGALLOCATION *v129; // rcx
  __int64 v130; // rax
  struct _DXGKARG_PRESENT *v131; // rax
  __int64 v132; // rax
  unsigned int v133; // edi
  int v135; // ecx
  __int64 v136; // rax
  struct VIDMM_ALLOC **v137; // r9
  struct DXGALLOCATION *v138; // r14
  char *v139; // r13
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rax
  int v143; // edx
  char v144; // cl
  __int64 v145; // rbx
  char *v146; // rbx
  char *v147; // rdx
  __int64 v148; // rdx
  char *v149; // rcx
  __int64 v150; // r14
  __int64 v151; // r12
  __int64 v152; // rcx
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rax
  BOOL v156; // eax
  __int64 v157; // r9
  unsigned int v158; // r14d
  struct DXGCONTEXT **v159; // r12
  DXGCONTEXT *v160; // r13
  unsigned int v161; // esi
  struct _KTHREAD *v162; // rcx
  __int64 v163; // rax
  struct VIDMM_ALLOC **v164; // r9
  struct DXGALLOCATION *v165; // rcx
  __int64 v166; // rax
  struct _KTHREAD *v167; // rdi
  __int64 v168; // rax
  int v169; // ebx
  __int64 v170; // rbx
  __int64 *v171; // rax
  __int64 v172; // rcx
  __int64 v173; // rax
  struct _KTHREAD *v174; // rdi
  __int64 v175; // rax
  __int64 v176; // rcx
  int v177; // ebx
  __int64 v178; // rbx
  __int64 *v179; // rax
  __int64 v180; // rbx
  _QWORD *v181; // rax
  struct DXGALLOCATION *v182; // rcx
  __int64 v183; // rax
  struct _KTHREAD *v184; // rdi
  __int64 v185; // rax
  int v186; // ebx
  __int64 v187; // rbx
  __int64 *v188; // rax
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // rax
  struct _KTHREAD *v194; // rdi
  __int64 v195; // rax
  __int64 v196; // rdx
  __int64 v197; // rcx
  int v198; // ebx
  __int64 v199; // r8
  __int64 v200; // rbx
  __int64 *v201; // rax
  __int64 v202; // rbx
  _QWORD *v203; // rax
  int v204; // [rsp+40h] [rbp-378h]
  struct _VIDMM_DMA_BUFFER *v205; // [rsp+48h] [rbp-370h]
  struct DXGALLOCATION *v207; // [rsp+58h] [rbp-360h] BYREF
  struct DXGALLOCATION *v208; // [rsp+60h] [rbp-358h] BYREF
  int v209; // [rsp+68h] [rbp-350h] BYREF
  struct _DXGKARG_PRESENT *v210; // [rsp+70h] [rbp-348h]
  __int64 v211; // [rsp+78h] [rbp-340h]
  unsigned int v212; // [rsp+80h] [rbp-338h]
  unsigned int v213; // [rsp+84h] [rbp-334h]
  struct _D3DKMT_PRESENT *v214; // [rsp+88h] [rbp-330h]
  struct DXGALLOCATION *v215; // [rsp+90h] [rbp-328h]
  int v216; // [rsp+98h] [rbp-320h]
  unsigned int v217; // [rsp+9Ch] [rbp-31Ch]
  DXGCONTEXT *v218; // [rsp+A0h] [rbp-318h]
  unsigned int v219; // [rsp+A8h] [rbp-310h]
  PVOID P; // [rsp+B0h] [rbp-308h]
  struct CRefCountedBuffer *v221; // [rsp+B8h] [rbp-300h] BYREF
  signed __int64 v222; // [rsp+C0h] [rbp-2F8h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+C8h] [rbp-2F0h] BYREF
  struct _D3DKMT_PRESENT *v224; // [rsp+D0h] [rbp-2E8h]
  struct DXGCONTEXT **v225; // [rsp+D8h] [rbp-2E0h]
  int v226; // [rsp+E0h] [rbp-2D8h]
  struct _EX_RUNDOWN_REF *v227; // [rsp+E8h] [rbp-2D0h] BYREF
  struct _EX_RUNDOWN_REF *v228; // [rsp+F0h] [rbp-2C8h] BYREF
  struct _D3DKMT_PRESENT_RGNS *v229; // [rsp+F8h] [rbp-2C0h]
  char v230[8]; // [rsp+100h] [rbp-2B8h] BYREF
  char v231[8]; // [rsp+108h] [rbp-2B0h] BYREF
  DXGCONTEXT *v232; // [rsp+110h] [rbp-2A8h]
  _BYTE *v233; // [rsp+120h] [rbp-298h] BYREF
  _BYTE v234[64]; // [rsp+128h] [rbp-290h] BYREF
  unsigned int v235; // [rsp+168h] [rbp-250h]
  __int64 v236; // [rsp+170h] [rbp-248h]
  __int64 v237; // [rsp+178h] [rbp-240h]
  __int64 v238; // [rsp+180h] [rbp-238h]
  __int64 v239; // [rsp+188h] [rbp-230h]
  __int64 v240; // [rsp+190h] [rbp-228h]
  __int64 v241; // [rsp+198h] [rbp-220h]
  __int64 v242; // [rsp+1A0h] [rbp-218h]
  __int64 v243; // [rsp+1A8h] [rbp-210h]
  __int64 v244; // [rsp+1B0h] [rbp-208h]
  __int64 v245; // [rsp+1B8h] [rbp-200h]
  __int64 v246; // [rsp+1C0h] [rbp-1F8h]
  __int64 v247; // [rsp+1C8h] [rbp-1F0h]
  _QWORD v248[12]; // [rsp+1D0h] [rbp-1E8h] BYREF
  _BYTE v249[320]; // [rsp+230h] [rbp-188h] BYREF

  v13 = a4;
  v225 = a4;
  v214 = a2;
  v14 = this;
  v218 = this;
  v232 = this;
  v215 = a5;
  v219 = a6;
  v212 = a7;
  v210 = a8;
  v229 = a9;
  v205 = a10;
  v224 = a13;
  v15 = *((_QWORD *)this + 2);
  v16 = *(_QWORD *)(v15 + 40);
  v211 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 144)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19, v18, v20, a4);
    *(_QWORD *)(v21 + 24) = 6284LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v207 = 0LL;
  v208 = 0LL;
  if ( a6 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v227, a6);
    DXGALLOCATIONREFERENCE::MoveAssign(&v207, AllocationSafe);
    v25 = v227;
    if ( v227 )
      ExReleaseRundownProtection(v227 + 11);
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25, v23, v24, a4);
      *(_QWORD *)(v26 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v26);
    }
    v27 = *((unsigned int *)DXGGLOBAL::m_pGlobal + 203);
    if ( (_DWORD)v27 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v29 = WdLogNewEntry5_WdAssertion(v27, v23, v24, a4);
        *(_QWORD *)(v29 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v29);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v27, v23, v24, a4);
      if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        v31 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v31 = *ThreadWin32Thread;
        if ( v31 )
          v36 = *(_QWORD *)(v31 + 80);
        else
          v36 = 0LL;
        if ( v36 )
        {
          v37 = KeGetCurrentThread();
          if ( !v37 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v34, v33, v35, a4);
            *(_QWORD *)(v38 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v38);
          }
          v41 = PsGetCurrentProcessSessionId(v34, v33, v35, a4);
          if ( !v41 || (unsigned int)PsGetThreadSessionId(v37) != v41 )
            goto LABEL_28;
          v43 = 0LL;
          v44 = (__int64 *)PsGetThreadWin32Thread(v37);
          if ( v44 )
            v43 = *v44;
          if ( v43 )
            v45 = *(_QWORD *)(v43 + 80);
          else
LABEL_28:
            v45 = 0LL;
          if ( *(_DWORD *)(v45 + 136) )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v39, v42);
            v46[3] = 275LL;
            v46[4] = 25LL;
            v46[5] = *(int *)(v45 + 136);
            v46[6] = 0LL;
            v46[7] = 0LL;
            WdLogEvent5_WdCriticalError(v46);
          }
        }
      }
      v16 = v211;
    }
  }
  if ( v212 )
  {
    v47 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v228, v212);
    DXGALLOCATIONREFERENCE::MoveAssign(&v208, v47);
    v50 = v228;
    if ( v228 )
      ExReleaseRundownProtection(v228 + 11);
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v51 = WdLogNewEntry5_WdAssertion(v50, v48, v49, a4);
      *(_QWORD *)(v51 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v51);
    }
    v52 = *((unsigned int *)DXGGLOBAL::m_pGlobal + 203);
    if ( (_DWORD)v52 )
    {
      v53 = KeGetCurrentThread();
      if ( !v53 )
      {
        v54 = WdLogNewEntry5_WdAssertion(v52, v48, v49, a4);
        *(_QWORD *)(v54 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v54);
      }
      v55 = PsGetCurrentProcessSessionId(v52, v48, v49, a4);
      if ( v55 && (unsigned int)PsGetThreadSessionId(v53) == v55 )
      {
        v56 = 0LL;
        v57 = (__int64 *)PsGetThreadWin32Thread(v53);
        if ( v57 )
          v56 = *v57;
        if ( v56 )
          v61 = *(_QWORD *)(v56 + 80);
        else
          v61 = 0LL;
        if ( v61 )
        {
          v62 = KeGetCurrentThread();
          if ( !v62 )
          {
            v63 = WdLogNewEntry5_WdAssertion(v59, v58, v60, a4);
            *(_QWORD *)(v63 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v63);
          }
          v66 = PsGetCurrentProcessSessionId(v59, v58, v60, a4);
          if ( !v66 || (unsigned int)PsGetThreadSessionId(v62) != v66 )
            goto LABEL_56;
          v68 = 0LL;
          v69 = (__int64 *)PsGetThreadWin32Thread(v62);
          if ( v69 )
            v68 = *v69;
          if ( v68 )
            v70 = *(_QWORD *)(v68 + 80);
          else
LABEL_56:
            v70 = 0LL;
          if ( *(_DWORD *)(v70 + 136) )
          {
            v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v65, v64, v67);
            v71[3] = 275LL;
            v71[4] = 25LL;
            v71[5] = *(int *)(v70 + 136);
            v71[6] = 0LL;
            v71[7] = 0LL;
            WdLogEvent5_WdCriticalError(v71);
          }
        }
      }
    }
  }
  v72 = *((_QWORD *)v14 + 2);
  v73 = *(struct _DXGKARG_PRESENT **)(*(_QWORD *)(v72 + 16) + 16LL);
  if ( *(struct _DXGKARG_PRESENT **)(v72 + 1800) != v73
    || ((v74 = *(_QWORD *)(v211 + 72)) == 0
      ? (v73 = 0LL)
      : (v73 = (struct _DXGKARG_PRESENT *)((*(unsigned int (__fastcall **)(_QWORD))(v74 + 224))(0LL) != 0)),
        (_BYTE)v73) )
  {
    *((_DWORD *)a11 + 29) = 0;
  }
  v75 = 0LL;
  v221 = 0LL;
  v76 = v214;
  if ( v214 )
  {
    v77 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL),
            v214,
            &v221,
            (__int64)a4);
    v79 = v77;
    if ( v77 < 0 )
    {
      v80 = WdLogNewEntry5_WdError(v73, v78);
      *(_QWORD *)(v80 + 24) = v79;
      WdLogEvent5_WdError(v80);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v208);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v207);
      return (unsigned int)v79;
    }
    v75 = v221;
    v76 = v214;
  }
  P = v75;
  v81 = 0;
  if ( (*(int *)(v17 + 1944) >= 0x2000 || *(_BYTE *)(v17 + 2228)) && *(_DWORD *)(v17 + 1504) >= 0x5007u && v76 )
  {
    v81 = 1;
    if ( v75 )
    {
      v73 = v210;
      v210->PrivateDriverDataSize = v76->PrivateDriverDataSize;
      v73->pPrivateDriverData = (char *)v75 + 8;
    }
    *((_QWORD *)a11 + 3) = v75;
    goto LABEL_79;
  }
  if ( !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v17) )
  {
LABEL_79:
    v84 = a3;
    goto LABEL_80;
  }
  v84 = a3;
  if ( a3 )
  {
    LODWORD(v79) = -1073741811;
    v204 = -1073741811;
LABEL_201:
    v107 = v205;
    goto LABEL_202;
  }
LABEL_80:
  v85 = v84 + 1;
  v213 = v84 + 1;
  v86 = *((unsigned int *)*v13 + 85);
  v87 = 0LL;
  if ( v84 )
  {
    while ( 1 )
    {
      v87 = (unsigned int)(v87 + 1);
      v73 = (struct _DXGKARG_PRESENT *)v13[v87];
      pDmaBuffer_high = HIDWORD(v73[2].pDmaBuffer);
      if ( (pDmaBuffer_high & (unsigned int)v86) != 0 )
        break;
      v86 = pDmaBuffer_high | (unsigned int)v86;
      if ( (unsigned int)v87 >= v84 )
        goto LABEL_85;
    }
LABEL_84:
    v89 = WdLogNewEntry5_WdError(v73, v87);
    *(_QWORD *)(v89 + 24) = v14;
    LODWORD(v79) = -1073741811;
    *(_QWORD *)(v89 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v89);
    v204 = -1073741811;
    goto LABEL_201;
  }
LABEL_85:
  *((_DWORD *)a11 + 34) = v86;
  v90 = v229;
  if ( v229 )
  {
    v87 = *((_QWORD *)v14 + 2);
    v73 = *(struct _DXGKARG_PRESENT **)(*(_QWORD *)(v87 + 16) + 16LL);
    if ( (*(&v73[1].Reserved + 1) & 0x10) != 0 )
    {
      v73 = *(struct _DXGKARG_PRESENT **)(*(_QWORD *)(v87 + 16) + 16LL);
      if ( v73 == *(struct _DXGKARG_PRESENT **)(v87 + 1800) )
      {
        v91 = v229->MoveRectCount + v229->DirtyRectCount;
        if ( v91 <= 0x14 )
        {
          v92 = v210;
          v210->SubRectCnt = v91;
          v92->pDstSubRects = (const RECT *)v249;
          v93 = (RECT *)v249;
          MoveRectCount = v90->MoveRectCount;
          if ( (_DWORD)MoveRectCount )
          {
            p_DestRect = &v90->pMoveRects->DestRect;
            do
            {
              *v93 = *p_DestRect;
              p_DestRect = (RECT *)((char *)p_DestRect + 24);
              ++v93;
              --MoveRectCount;
            }
            while ( MoveRectCount );
          }
          memmove(v93, v90->pDirtyRects, 16LL * v90->DirtyRectCount);
        }
      }
    }
  }
  if ( ((*((_DWORD *)a11 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    if ( v85 <= 1 )
    {
      LODWORD(v79) = DXGCONTEXT::SubmitPresentWithDmaBuffer(
                       (UINT *)v14,
                       (const struct _D3DKMT_PRESENT *)v87,
                       v207,
                       v208,
                       v210,
                       a10,
                       a11,
                       (struct COREDEVICEACCESS *)v224);
      v204 = v79;
      v107 = 0LL;
LABEL_202:
      if ( v107 )
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL)
                                                                                           + 432LL)
                                                                               + 8LL)
                                                                   + 496LL))(
          v107,
          0LL);
      if ( P )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag(P, 0);
        LODWORD(v79) = v204;
      }
      v165 = v208;
      if ( v208 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v208 + 11);
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v166 = WdLogNewEntry5_WdAssertion(v165, v82, v83, v107);
        *(_QWORD *)(v166 + 24) = 1815LL;
        WdLogEvent5_WdAssertion(v166);
      }
      if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 203) )
      {
        v167 = KeGetCurrentThread();
        if ( !v167 )
        {
          v168 = WdLogNewEntry5_WdAssertion(v165, v82, v83, v107);
          *(_QWORD *)(v168 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v168);
        }
        v169 = PsGetCurrentProcessSessionId(v165, v82, v83, v107);
        if ( v169 && (unsigned int)PsGetThreadSessionId(v167) == v169 )
        {
          v170 = 0LL;
          v171 = (__int64 *)PsGetThreadWin32Thread(v167);
          if ( v171 )
            v170 = *v171;
          if ( v170 )
            v173 = *(_QWORD *)(v170 + 80);
          else
            v173 = 0LL;
          if ( v173 )
          {
            v174 = KeGetCurrentThread();
            if ( !v174 )
            {
              v175 = WdLogNewEntry5_WdAssertion(v172, v82, v83, v107);
              *(_QWORD *)(v175 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v175);
            }
            v177 = PsGetCurrentProcessSessionId(v172, v82, v83, v107);
            if ( !v177 || (unsigned int)PsGetThreadSessionId(v174) != v177 )
              goto LABEL_231;
            v178 = 0LL;
            v179 = (__int64 *)PsGetThreadWin32Thread(v174);
            if ( v179 )
              v178 = *v179;
            if ( v178 )
              v180 = *(_QWORD *)(v178 + 80);
            else
LABEL_231:
              v180 = 0LL;
            if ( *(_DWORD *)(v180 + 136) )
            {
              v181 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v176, v82, v83);
              v181[3] = 275LL;
              v181[4] = 25LL;
              v181[5] = *(int *)(v180 + 136);
              v181[6] = 0LL;
              v181[7] = 0LL;
              WdLogEvent5_WdCriticalError(v181);
            }
          }
        }
        LODWORD(v79) = v204;
      }
      v182 = v207;
      if ( v207 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v207 + 11);
      if ( !DXGGLOBAL::m_pGlobal )
      {
        v183 = WdLogNewEntry5_WdAssertion(v182, v82, v83, v107);
        *(_QWORD *)(v183 + 24) = 1815LL;
        WdLogEvent5_WdAssertion(v183);
      }
      if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 203) )
      {
        v184 = KeGetCurrentThread();
        if ( !v184 )
        {
          v185 = WdLogNewEntry5_WdAssertion(v182, v82, v83, v107);
          *(_QWORD *)(v185 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v185);
        }
        v186 = PsGetCurrentProcessSessionId(v182, v82, v83, v107);
        if ( v186 && (unsigned int)PsGetThreadSessionId(v184) == v186 )
        {
          v187 = 0LL;
          v188 = (__int64 *)PsGetThreadWin32Thread(v184);
          if ( v188 )
            v187 = *v188;
          if ( v187 )
            v193 = *(_QWORD *)(v187 + 80);
          else
            v193 = 0LL;
          if ( v193 )
          {
            v194 = KeGetCurrentThread();
            if ( !v194 )
            {
              v195 = WdLogNewEntry5_WdAssertion(v190, v189, v191, v192);
              *(_QWORD *)(v195 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v195);
            }
            v198 = PsGetCurrentProcessSessionId(v190, v189, v191, v192);
            if ( !v198 || (unsigned int)PsGetThreadSessionId(v194) != v198 )
              goto LABEL_258;
            v200 = 0LL;
            v201 = (__int64 *)PsGetThreadWin32Thread(v194);
            if ( v201 )
              v200 = *v201;
            if ( v200 )
              v202 = *(_QWORD *)(v200 + 80);
            else
LABEL_258:
              v202 = 0LL;
            if ( *(_DWORD *)(v202 + 136) )
            {
              v203 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v197, v196, v199);
              v203[3] = 275LL;
              v203[4] = 25LL;
              v203[5] = *(int *)(v202 + 136);
              v203[6] = 0LL;
              v203[7] = 0LL;
              WdLogEvent5_WdCriticalError(v203);
            }
          }
        }
        LODWORD(v79) = v204;
      }
      return (unsigned int)v79;
    }
    if ( !v81 )
      goto LABEL_84;
    BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)v14 + 2));
    if ( !BroadcastPresentSyncObject )
    {
      v98 = WdLogNewEntry5_WdError(v97, v96);
      *(_QWORD *)(v98 + 24) = -1073741801LL;
      *(_QWORD *)(v98 + 32) = 6625LL;
      WdLogEvent5_WdError(v98);
      LODWORD(v79) = -1073741801;
      v204 = -1073741801;
      goto LABEL_201;
    }
    v222 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v14 + 2) + 1848LL));
    *(_DWORD *)a11 |= 0xC00u;
    v99 = 0;
    v100 = a10;
    while ( v99 < v85 )
    {
      if ( v99 )
      {
        LODWORD(v101) = 0;
        v216 = 0;
        v217 = 0;
        if ( v219 )
        {
          v102 = &v214->BroadcastSrcAllocation[v99 - 1];
          if ( v102 + 1 < v102 || (unsigned __int64)(v102 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v101 = *v102;
          v216 = v101;
          v103 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v211, (DXGALLOCATIONREFERENCE *)v230, v101);
          DXGALLOCATIONREFERENCE::MoveAssign(&v207, v103);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v230);
          if ( !v207 )
          {
            v106 = (_QWORD *)WdLogNewEntry5_WdError(v105, v104);
            v106[3] = v101;
            LODWORD(v79) = -1073741811;
            v106[4] = -1073741811LL;
            v106[5] = 6651LL;
            WdLogEvent5_WdError(v106);
            v204 = -1073741811;
            v107 = v205;
            goto LABEL_202;
          }
          v108 = &v13[v99];
          v236 = *((_QWORD *)*v108 + 2);
          v237 = *(_QWORD *)(*((_QWORD *)v207 + 1) + 16LL);
          v109 = *(_QWORD *)(v237 + 16);
          v238 = v109;
          v239 = *(_QWORD *)(v236 + 16);
          v110 = *(_QWORD *)(v239 + 16);
          v240 = v110;
          if ( v109 != v110 )
          {
            _mm_lfence();
            v111 = (_QWORD *)WdLogNewEntry5_WdError(v110, v109);
            v241 = *((_QWORD *)*v108 + 2);
            v111[3] = v241;
            v111[4] = v207;
            LODWORD(v79) = -1073741811;
            v111[5] = -1073741811LL;
            WdLogEvent5_WdError(v111);
            v204 = -1073741811;
            v107 = v205;
            goto LABEL_202;
          }
          v13 = v225;
        }
        if ( v212 )
        {
          v112 = &v214->BroadcastDstAllocation[v99 - 1];
          if ( v112 + 1 < v112 || (unsigned __int64)(v112 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v217 = *v112;
          v113 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v211, (DXGALLOCATIONREFERENCE *)v231, v217);
          DXGALLOCATIONREFERENCE::MoveAssign(&v208, v113);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v231);
          if ( !v208 )
          {
            v116 = (_QWORD *)WdLogNewEntry5_WdError(v115, v114);
            v116[3] = (unsigned int)v101;
            LODWORD(v79) = -1073741811;
            v116[4] = -1073741811LL;
            v116[5] = 6674LL;
            WdLogEvent5_WdError(v116);
            v204 = -1073741811;
            v107 = v205;
            goto LABEL_202;
          }
          v117 = &v13[v99];
          v242 = *((_QWORD *)*v117 + 2);
          v243 = *(_QWORD *)(*((_QWORD *)v208 + 1) + 16LL);
          v118 = *(_QWORD *)(v243 + 16);
          v244 = v118;
          v245 = *(_QWORD *)(v242 + 16);
          v119 = *(_QWORD *)(v245 + 16);
          v246 = v119;
          if ( v118 != v119 )
          {
            _mm_lfence();
            v120 = (_QWORD *)WdLogNewEntry5_WdError(v119, v118);
            v247 = *((_QWORD *)*v117 + 2);
            v120[3] = v247;
            v120[4] = v208;
            LODWORD(v79) = -1073741811;
            v120[5] = -1073741811LL;
            WdLogEvent5_WdError(v120);
            v204 = -1073741811;
            v107 = v205;
            goto LABEL_202;
          }
        }
        v100 = v205;
      }
      if ( (int)DXGCONTEXT::SubmitPresentWithDmaBuffer(
                  (UINT *)v13[v99],
                  v224,
                  v207,
                  v208,
                  v210,
                  v100,
                  a11,
                  (struct COREDEVICEACCESS *)v224) < 0 )
      {
        v123 = WdLogNewEntry5_WdError(v122, v121);
        LODWORD(v79) = -1073741811;
        *(_QWORD *)(v123 + 24) = -1073741811LL;
        *(_QWORD *)(v123 + 32) = 6710LL;
        WdLogEvent5_WdError(v123);
        v204 = -1073741811;
        goto LABEL_201;
      }
      v100 = 0LL;
      v205 = 0LL;
      *(_DWORD *)a11 &= ~0x800u;
      ++v99;
    }
    v124 = 0LL;
    v233 = 0LL;
    v235 = 0;
    if ( a3 <= 8 )
    {
      PoolWithTag = v234;
      v233 = v234;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / a3 < 8 )
        goto LABEL_128;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x4B677844u);
      v233 = PoolWithTag;
    }
    v235 = a3;
    if ( !PoolWithTag )
      goto LABEL_129;
    memset(PoolWithTag, 0, 8LL * a3);
    v124 = v233;
LABEL_128:
    if ( v124 )
    {
      v126 = v13 + 1;
      v127 = v124;
      v128 = v85 - 1;
      do
      {
        *v127++ = *((_QWORD *)*v126++ + 29);
        --v128;
      }
      while ( v128 );
      v226 = 0;
      LODWORD(v79) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 408LL) + 8LL) + 544LL))(
                       a3,
                       v124,
                       1LL,
                       &BroadcastPresentSyncObject,
                       0,
                       &v222);
      v204 = v79;
      if ( (int)v79 >= 0 )
      {
        LODWORD(v79) = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 408LL) + 8LL) + 536LL))(
                         *((_QWORD *)v14 + 29),
                         BroadcastPresentSyncObject,
                         v222);
        v204 = v79;
      }
      goto LABEL_134;
    }
LABEL_129:
    LODWORD(v79) = -1073741801;
    v204 = -1073741801;
LABEL_134:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v233);
    goto LABEL_201;
  }
  v129 = v215;
  if ( !v215 )
  {
    v130 = WdLogNewEntry5_WdAssertion(0LL, v87, v86, v90);
    *(_QWORD *)(v130 + 24) = 6424LL;
    WdLogEvent5_WdAssertion(v130);
  }
  v131 = v210;
  if ( v210->pDmaBuffer )
  {
    v132 = WdLogNewEntry5_WdAssertion(v129, v87, v86, v90);
    *(_QWORD *)(v132 + 24) = 6425LL;
    WdLogEvent5_WdAssertion(v132);
    v131 = v210;
  }
  if ( !a3 || !v81 )
  {
    v135 = 0;
    if ( v85 > 1 )
      v135 = 1024;
    *(_DWORD *)a11 = *(_DWORD *)a11 & 0xFFFFFBFF | v135 | 0x800;
    *((_DWORD *)a11 + 35) = v85;
    v136 = 416LL;
    if ( *((_BYTE *)a11 + 348) )
      v136 = 432LL;
    *((_BYTE *)a11 + v136) = 1;
    if ( *((_BYTE *)a11 + 348) )
      v137 = (struct VIDMM_ALLOC **)((char *)a11
                                   + *((_DWORD *)a11 + 109) * ((8 * *((_DWORD *)a11 + 110) + 167) & 0xFFFFFFF8)
                                   + 480);
    else
      v137 = (struct VIDMM_ALLOC **)((char *)a11 + 424);
    v138 = v215;
    LODWORD(v79) = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                     *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 432LL),
                     *(struct VIDMM_DEVICE **)(*((_QWORD *)v14 + 2) + 592LL),
                     *((struct _VIDMM_MULTI_ALLOC **)v215 + 3),
                     v137);
    v204 = v79;
    if ( (int)v79 >= 0 )
    {
      if ( *((_BYTE *)a11 + 348) )
        v139 = (char *)a11 + *((_DWORD *)a11 + 109) * ((8 * *((_DWORD *)a11 + 110) + 167) & 0xFFFFFFF8) + 472;
      else
        v139 = (char *)a11 + 440;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2)
                                                                                                + 16LL)
                                                                                    + 432LL)
                                                                        + 8LL)
                                                            + 216LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 440LL),
        *(_QWORD *)(*((_QWORD *)v138 + 6) + 8LL),
        &v209,
        v139);
      if ( *((_BYTE *)a11 + 348) )
        *(_WORD *)((char *)a11 + *((_DWORD *)a11 + 109) * ((8 * *((_DWORD *)a11 + 110) + 167) & 0xFFFFFFF8) + 464) = v209;
      else
        *((_DWORD *)a11 + 119) ^= (*((_DWORD *)a11 + 119) ^ (v209 << 17)) & 0x3E0000;
      v142 = *((_QWORD *)v138 + 5);
      if ( v142 )
        v143 = (*(_DWORD *)(v142 + 4) >> 3) & 1;
      else
        v143 = 0;
      if ( *((_BYTE *)a11 + 348) )
        *((_BYTE *)a11 + *((_DWORD *)a11 + 109) * ((8 * *((_DWORD *)a11 + 110) + 167) & 0xFFFFFFF8) + 488) = v143 != 0;
      else
        *((_DWORD *)a11 + 119) = (v143 << 23) | *((_DWORD *)a11 + 119) & 0xFF7FFFFF;
      v144 = *((_BYTE *)a11 + 348);
      v145 = 448LL;
      if ( v144 )
        v145 = 576LL;
      v146 = (char *)a11 + v145;
      if ( v144 )
        v147 = (char *)a11 + *((_DWORD *)a11 + 109) * ((8 * *((_DWORD *)a11 + 110) + 167) & 0xFFFFFFF8) + 456;
      else
        v147 = (char *)a11 + 432;
      *(_QWORD *)v147 = *(_QWORD *)(*((_QWORD *)v138 + 6) + 16LL);
      v148 = *((_QWORD *)v14 + 23);
      if ( *((_BYTE *)a11 + 348) )
        v149 = (char *)a11 + *((_DWORD *)a11 + 109) * ((8 * *((_DWORD *)a11 + 110) + 167) & 0xFFFFFFF8) + 448;
      else
        v149 = (char *)a11 + 480;
      *(_QWORD *)v149 = v148;
      if ( *((_BYTE *)a11 + 348) )
        *((_DWORD *)a11 + 118) = -1;
      v150 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 1800LL) + 2280LL);
      v151 = *((unsigned int *)a11 + 29);
      v152 = *(_QWORD *)(v150 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v152 + 160) )
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v152 + 144));
      if ( (unsigned int)v151 >= *(_DWORD *)(v150 + 80) )
      {
        v153 = WdLogNewEntry5_WdAssertion(v152, v148, v140, v141);
        *(_QWORD *)(v153 + 24) = 4417LL;
        WdLogEvent5_WdAssertion(v153);
      }
      v154 = *(_QWORD *)(v150 + 112) + 3208 * v151;
      *(_WORD *)v146 = 0;
      *((_WORD *)v146 + 1) = *(_WORD *)(v154 + 972);
      *((_WORD *)v146 + 2) = 0;
      *((_WORD *)v146 + 3) = *(_WORD *)(v154 + 976);
      v155 = *(_QWORD *)v146;
      *((_QWORD *)v146 + 1) = *(_QWORD *)v146;
      *((_QWORD *)v146 + 2) = v155;
      v156 = a12 == D3DDDIFMT_A16B16G16R16F || a12 == D3DDDIFMT_A32B32G32R32F;
      *((_DWORD *)v146 + 6) = v156;
      *((_DWORD *)v146 + 7) &= 0xFFFFFFE7;
      v14 = v218;
      if ( *((_BYTE *)v218 + 366) )
      {
        memset(v248, 0, sizeof(v248));
        v248[4] = *((_QWORD *)v215 + 4);
        v248[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v218 + 2) + 16LL) + 432LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v218 + 2) + 16LL) + 440LL),
                    *((_QWORD *)v207 + 3),
                    *((unsigned __int8 *)v218 + 367),
                    *((unsigned int *)v218 + 86));
        v248[6] = *(_QWORD *)v139;
        LOWORD(v248[7]) = v209;
      }
      else
      {
        memset(v248, 0, 24);
        memset(&v248[4], 0, 40);
        v248[3] = *((_QWORD *)v215 + 4);
        v248[4] = 2 * (v209 & 0x1Fu);
        v248[5] = *(_QWORD *)v139;
      }
      v210->pAllocationList = (DXGK_ALLOCATIONLIST *)v248;
      LODWORD(v79) = ADAPTER_RENDER::DdiPresent(
                       *(ADAPTER_RENDER **)(*((_QWORD *)v14 + 2) + 16LL),
                       *((void **)v14 + 23),
                       v210);
      v204 = v79;
      if ( (int)v79 >= 0 )
      {
        v158 = 0;
        if ( v213 )
        {
          v159 = v225;
          v160 = v218;
          v161 = v213;
          do
          {
            v162 = KeGetCurrentThread();
            if ( *((struct _KTHREAD **)*v159 + 48) != v162 )
            {
              v163 = WdLogNewEntry5_WdAssertion(v162, v82, v83, v157);
              *(_QWORD *)(v163 + 24) = 6582LL;
              WdLogEvent5_WdAssertion(v163);
            }
            LODWORD(v79) = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v160 + 2) + 16LL) + 408LL) + 8LL)
                                                                                               + 344LL))(
                             *((_QWORD *)*v159 + 29),
                             a11);
            v204 = v79;
            if ( (int)v79 < 0 )
              break;
            *(_DWORD *)a11 &= ~0x800u;
            ++v158;
            ++v159;
          }
          while ( v158 < v161 );
          v14 = v160;
        }
      }
      if ( (int)v79 < 0 )
      {
        if ( *((_BYTE *)a11 + 348) )
          v164 = (struct VIDMM_ALLOC **)((char *)a11
                                       + *((_DWORD *)a11 + 109) * ((8 * *((_DWORD *)a11 + 110) + 167) & 0xFFFFFFF8)
                                       + 480);
        else
          v164 = (struct VIDMM_ALLOC **)((char *)a11 + 424);
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 432LL),
          *(struct VIDMM_DEVICE **)(*((_QWORD *)v14 + 2) + 592LL),
          *((_DWORD *)a11 + 34),
          *v164);
      }
    }
    goto LABEL_201;
  }
  v133 = DXGCONTEXT::SubmitPresentLda(v14, v214, a3, v13, v215, v131, a11);
  if ( a10 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL)
                                                                                       + 432LL)
                                                                           + 8LL)
                                                               + 496LL))(
      a10,
      0LL);
  if ( v75 )
    CRefCountedBuffer::RefCountedBufferRelease(v75);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v208);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v207);
  return v133;
}
