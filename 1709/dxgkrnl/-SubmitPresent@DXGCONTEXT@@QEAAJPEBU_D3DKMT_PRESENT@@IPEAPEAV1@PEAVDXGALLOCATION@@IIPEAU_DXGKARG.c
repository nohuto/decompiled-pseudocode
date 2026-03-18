/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4D00
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4654 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4D4C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008EC0 (-GetRenderHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00149A0 (-VidMmReferencePrimaryAllocationForSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MU.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D458 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C00290D0 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C3AC0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@1PEAU_DXGKA.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C00CEBE0 (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00FED50 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C019D4AC (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01B74A8 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z @ 0x1C01B7D00 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K@Z.c)
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
  DXGCONTEXT *v14; // r12
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
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // ebx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rbx
  _QWORD *v39; // rax
  struct DXGALLOCATION **v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct _KTHREAD *v43; // rdi
  __int64 v44; // rax
  int v45; // ebx
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 *v48; // rax
  __int64 v49; // rax
  struct _KTHREAD *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // ebx
  __int64 v55; // r8
  __int64 v56; // rbx
  __int64 *v57; // rax
  __int64 v58; // rbx
  _QWORD *v59; // rax
  __int64 v60; // rdx
  struct DXGCONTEXT *v61; // rcx
  __int64 v62; // rax
  struct CRefCountedBuffer *v63; // rbx
  struct _D3DKMT_PRESENT *v64; // rdx
  int v65; // eax
  __int64 v66; // rbx
  __int64 v67; // rax
  char v68; // di
  unsigned int v69; // r9d
  unsigned int v70; // r10d
  int v71; // r8d
  const struct _D3DKMT_PRESENT *v72; // rdx
  int v73; // eax
  __int64 v74; // rax
  struct _D3DKMT_PRESENT_RGNS *v75; // r9
  UINT v76; // eax
  RECT *v77; // rcx
  __int64 MoveRectCount; // rdx
  RECT *p_DestRect; // rax
  unsigned __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  unsigned int v83; // ebx
  struct _VIDMM_DMA_BUFFER *v84; // rax
  __int64 v85; // rdi
  D3DKMT_HANDLE *v86; // rdx
  struct DXGALLOCATION **v87; // rax
  __int64 v88; // rcx
  _QWORD *v89; // rax
  struct _VIDMM_DMA_BUFFER *v90; // r9
  __int64 v91; // r15
  __int64 v92; // rcx
  _QWORD *v93; // rax
  unsigned int *v94; // rdx
  struct DXGALLOCATION **v95; // rax
  __int64 v96; // rcx
  _QWORD *v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rcx
  _QWORD *v100; // rax
  __int64 v101; // rcx
  _BYTE *v102; // r10
  _BYTE *PoolWithTag; // r10
  DXGCONTEXT **v104; // rdx
  struct _VIDSCH_CONTEXT *RenderHwQueue; // rax
  struct _VIDSCH_CONTEXT **v106; // r8
  __int64 v107; // rdx
  __int64 v108; // r9
  struct _VIDSCH_CONTEXT *ImplicitHwQueue; // rax
  __int64 v110; // rdx
  struct DXGALLOCATION *v111; // r15
  __int64 v112; // rax
  struct _DXGKARG_PRESENT *v113; // rax
  __int64 v114; // rax
  unsigned int v115; // edi
  int v117; // ecx
  __int64 v118; // rax
  struct VIDMM_ALLOC **v119; // r9
  _QWORD *v120; // rcx
  __int64 v121; // rax
  int v122; // ecx
  char *v123; // rcx
  __int64 v124; // rax
  int v125; // ecx
  char v126; // cl
  __int64 v127; // rbx
  char *v128; // rbx
  char *v129; // rdx
  char *v130; // rcx
  __int64 v131; // r15
  __int64 v132; // r12
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rax
  BOOL v137; // eax
  unsigned int v138; // r15d
  struct DXGCONTEXT **v139; // r14
  struct _KTHREAD *v140; // rcx
  __int64 v141; // rax
  struct DXGCONTEXT *v142; // rcx
  __int64 v143; // rcx
  struct VIDMM_ALLOC **v144; // r9
  struct DXGALLOCATION *v145; // rcx
  __int64 v146; // rcx
  struct _KTHREAD *v147; // rdi
  __int64 v148; // rax
  int v149; // ebx
  __int64 v150; // rbx
  __int64 v151; // rcx
  __int64 *v152; // rax
  __int64 v153; // rax
  struct _KTHREAD *v154; // rdi
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  int v158; // ebx
  __int64 v159; // r8
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
  __int64 v175; // rdx
  __int64 v176; // rcx
  int v177; // ebx
  __int64 v178; // r8
  __int64 v179; // rbx
  __int64 *v180; // rax
  __int64 v181; // rbx
  _QWORD *v182; // rax
  int v183; // [rsp+40h] [rbp-388h]
  struct _VIDMM_DMA_BUFFER *v184; // [rsp+48h] [rbp-380h]
  unsigned int v185; // [rsp+50h] [rbp-378h]
  struct DXGALLOCATION *v187; // [rsp+68h] [rbp-360h] BYREF
  struct DXGALLOCATION *v188; // [rsp+70h] [rbp-358h] BYREF
  int v189; // [rsp+78h] [rbp-350h] BYREF
  __int64 v190; // [rsp+80h] [rbp-348h]
  unsigned int v191; // [rsp+88h] [rbp-340h]
  struct _D3DKMT_PRESENT *v192; // [rsp+90h] [rbp-338h]
  __int64 v193; // [rsp+98h] [rbp-330h] BYREF
  int v194; // [rsp+A0h] [rbp-328h]
  unsigned int v195; // [rsp+A4h] [rbp-324h]
  unsigned int v196; // [rsp+A8h] [rbp-320h]
  struct DXGALLOCATION *v197; // [rsp+B0h] [rbp-318h]
  PVOID P; // [rsp+B8h] [rbp-310h]
  struct CRefCountedBuffer *v199; // [rsp+C0h] [rbp-308h] BYREF
  signed __int64 v200; // [rsp+C8h] [rbp-300h] BYREF
  struct _VIDSCH_SYNC_OBJECT *BroadcastPresentSyncObject; // [rsp+D0h] [rbp-2F8h] BYREF
  struct _D3DKMT_PRESENT *v202; // [rsp+D8h] [rbp-2F0h]
  int v203; // [rsp+E0h] [rbp-2E8h]
  struct _EX_RUNDOWN_REF *v204; // [rsp+E8h] [rbp-2E0h] BYREF
  struct _EX_RUNDOWN_REF *v205; // [rsp+F0h] [rbp-2D8h] BYREF
  struct _D3DKMT_PRESENT_RGNS *v206; // [rsp+F8h] [rbp-2D0h]
  struct _EX_RUNDOWN_REF *v207; // [rsp+100h] [rbp-2C8h] BYREF
  struct _EX_RUNDOWN_REF *v208[2]; // [rsp+108h] [rbp-2C0h] BYREF
  DXGCONTEXT *v209; // [rsp+118h] [rbp-2B0h]
  struct DXGCONTEXT **v210; // [rsp+120h] [rbp-2A8h]
  _BYTE *v211; // [rsp+130h] [rbp-298h] BYREF
  _BYTE v212[64]; // [rsp+138h] [rbp-290h] BYREF
  unsigned int v213; // [rsp+178h] [rbp-250h]
  __int64 v214; // [rsp+180h] [rbp-248h]
  __int64 v215; // [rsp+188h] [rbp-240h]
  __int64 v216; // [rsp+190h] [rbp-238h]
  __int64 v217; // [rsp+198h] [rbp-230h]
  __int64 v218; // [rsp+1A0h] [rbp-228h]
  __int64 v219; // [rsp+1A8h] [rbp-220h]
  __int64 v220; // [rsp+1B0h] [rbp-218h]
  __int64 v221; // [rsp+1B8h] [rbp-210h]
  __int64 v222; // [rsp+1C0h] [rbp-208h]
  __int64 v223; // [rsp+1C8h] [rbp-200h]
  __int64 v224; // [rsp+1D0h] [rbp-1F8h]
  __int64 v225; // [rsp+1D8h] [rbp-1F0h]
  _QWORD v226[12]; // [rsp+1E0h] [rbp-1E8h] BYREF
  _BYTE v227[320]; // [rsp+240h] [rbp-188h] BYREF

  v210 = a4;
  v192 = a2;
  v14 = this;
  v209 = this;
  v208[1] = (struct _EX_RUNDOWN_REF *)this;
  v197 = a5;
  v196 = a6;
  v191 = a7;
  v206 = a9;
  v184 = a10;
  v202 = a13;
  v15 = *((_QWORD *)this + 2);
  v16 = *(_QWORD *)(v15 + 40);
  v190 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 144)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v19 + 24) = 6955LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v187 = 0LL;
  v188 = 0LL;
  if ( a6 )
  {
    AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v204, a6);
    DXGALLOCATIONREFERENCE::MoveAssign(&v187, AllocationSafe);
    v21 = (__int64)v204;
    if ( v204 )
      ExReleaseRundownProtection(v204 + 11);
    v22 = *((unsigned int *)DXGGLOBAL::GetGlobal(v21) + 203);
    if ( (_DWORD)v22 )
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
          v34 = PsGetCurrentProcessSessionId(v27);
          if ( !v34 || (unsigned int)PsGetThreadSessionId(v30) != v34 )
            goto LABEL_28;
          v36 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v37 = (__int64 *)PsGetThreadWin32Thread(v30);
            if ( v37 )
              v36 = *v37;
          }
          if ( v36 )
            v38 = *(_QWORD *)(v36 + 80);
          else
LABEL_28:
            v38 = 0LL;
          if ( *(_DWORD *)(v38 + 136) )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32, v35);
            v39[3] = 275LL;
            v39[4] = 25LL;
            v39[5] = *(int *)(v38 + 136);
            v39[6] = 0LL;
            v39[7] = 0LL;
            WdLogEvent5_WdCriticalError(v39);
          }
        }
      }
      v16 = v190;
    }
  }
  if ( v191 )
  {
    v40 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v205, v191);
    DXGALLOCATIONREFERENCE::MoveAssign(&v188, v40);
    v41 = (__int64)v205;
    if ( v205 )
      ExReleaseRundownProtection(v205 + 11);
    v42 = *((unsigned int *)DXGGLOBAL::GetGlobal(v41) + 203);
    if ( (_DWORD)v42 )
    {
      v43 = KeGetCurrentThread();
      if ( !v43 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v44 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v44);
      }
      v45 = PsGetCurrentProcessSessionId(v42);
      if ( v45 && (unsigned int)PsGetThreadSessionId(v43) == v45 )
      {
        v46 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v48 = (__int64 *)PsGetThreadWin32Thread(v43);
          if ( v48 )
            v46 = *v48;
        }
        if ( v46 )
          v49 = *(_QWORD *)(v46 + 80);
        else
          v49 = 0LL;
        if ( v49 )
        {
          v50 = KeGetCurrentThread();
          if ( !v50 )
          {
            v51 = WdLogNewEntry5_WdAssertion(v47);
            *(_QWORD *)(v51 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v51);
          }
          v54 = PsGetCurrentProcessSessionId(v47);
          if ( !v54 || (unsigned int)PsGetThreadSessionId(v50) != v54 )
            goto LABEL_56;
          v56 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v57 = (__int64 *)PsGetThreadWin32Thread(v50);
            if ( v57 )
              v56 = *v57;
          }
          if ( v56 )
            v58 = *(_QWORD *)(v56 + 80);
          else
LABEL_56:
            v58 = 0LL;
          if ( *(_DWORD *)(v58 + 136) )
          {
            v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53, v52, v55);
            v59[3] = 275LL;
            v59[4] = 25LL;
            v59[5] = *(int *)(v58 + 136);
            v59[6] = 0LL;
            v59[7] = 0LL;
            WdLogEvent5_WdCriticalError(v59);
          }
        }
      }
    }
  }
  v60 = *((_QWORD *)v14 + 2);
  v61 = *(struct DXGCONTEXT **)(*(_QWORD *)(v60 + 16) + 16LL);
  if ( *(struct DXGCONTEXT **)(v60 + 1672) != v61
    || (v62 = *(_QWORD *)(v190 + 96)) != 0 && (*(unsigned int (__fastcall **)(_QWORD))(v62 + 224))(0LL) )
  {
    *((_DWORD *)a11 + 29) = 0;
  }
  v63 = 0LL;
  v199 = 0LL;
  v64 = v192;
  if ( v192 )
  {
    v65 = ReadPresentPrivateDriverData(
            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 16LL),
            v192->PrivateDriverDataSize,
            v192->pPrivateDriverData,
            &v199);
    v66 = v65;
    if ( v65 < 0 )
    {
      v67 = WdLogNewEntry5_WdError(v61);
      *(_QWORD *)(v67 + 24) = v66;
      WdLogEvent5_WdError(v67);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v188);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v187);
      return (unsigned int)v66;
    }
    v63 = v199;
    v64 = v192;
  }
  P = v63;
  v68 = 0;
  if ( (*(int *)(v17 + 1968) >= 0x2000 || *(_BYTE *)(v17 + 2252)) && *(_DWORD *)(v17 + 1528) >= 0x5007u && v64 )
  {
    v68 = 1;
    if ( v63 )
    {
      v61 = (struct DXGCONTEXT *)a8;
      a8->PrivateDriverDataSize = v64->PrivateDriverDataSize;
      a8->pPrivateDriverData = (char *)v63 + 8;
    }
    *((_QWORD *)a11 + 3) = v63;
    goto LABEL_77;
  }
  if ( !DXGADAPTER::IsDxgmms2((DXGADAPTER *)v17) )
  {
LABEL_77:
    v69 = a3;
    goto LABEL_78;
  }
  v69 = a3;
  if ( a3 )
  {
    LODWORD(v66) = -1073741811;
LABEL_208:
    v183 = v66;
    goto LABEL_209;
  }
LABEL_78:
  v70 = v69 + 1;
  v185 = v69 + 1;
  v71 = *((_DWORD *)*a4 + 89);
  v72 = 0LL;
  if ( v69 )
  {
    while ( 1 )
    {
      v72 = (const struct _D3DKMT_PRESENT *)(unsigned int)((_DWORD)v72 + 1);
      v61 = a4[(_QWORD)v72];
      v73 = *((_DWORD *)v61 + 89);
      if ( (v73 & v71) != 0 )
        break;
      v71 |= v73;
      if ( (unsigned int)v72 >= v69 )
        goto LABEL_83;
    }
LABEL_82:
    v74 = WdLogNewEntry5_WdError(v61);
    *(_QWORD *)(v74 + 24) = v14;
    LODWORD(v66) = -1073741811;
    *(_QWORD *)(v74 + 32) = -1073741811LL;
LABEL_207:
    WdLogEvent5_WdError(v74);
    goto LABEL_208;
  }
LABEL_83:
  *((_DWORD *)a11 + 34) = v71;
  v75 = v206;
  if ( v206 )
  {
    v61 = (struct DXGCONTEXT *)*((_QWORD *)v14 + 2);
    v72 = *(const struct _D3DKMT_PRESENT **)(*((_QWORD *)v61 + 2) + 16LL);
    if ( (v72->BroadcastContext[51] & 0x10) != 0 && v72 == *((const struct _D3DKMT_PRESENT **)v61 + 209) )
    {
      v76 = v206->MoveRectCount + v206->DirtyRectCount;
      if ( v76 <= 0x14 )
      {
        a8->SubRectCnt = v76;
        a8->pDstSubRects = (const RECT *)v227;
        v77 = (RECT *)v227;
        MoveRectCount = v75->MoveRectCount;
        if ( (_DWORD)MoveRectCount )
        {
          p_DestRect = &v75->pMoveRects->DestRect;
          do
          {
            *v77 = *p_DestRect;
            p_DestRect = (RECT *)((char *)p_DestRect + 24);
            ++v77;
            --MoveRectCount;
          }
          while ( MoveRectCount );
        }
        memmove(v77, v75->pDirtyRects, 16LL * v75->DirtyRectCount);
        v70 = v185;
      }
    }
  }
  if ( ((*((_DWORD *)a11 + 30) - 3) & 0xFFFFFFFD) != 0 )
  {
    if ( v70 <= 1 )
    {
      LODWORD(v66) = DXGCONTEXT::SubmitPresentWithDmaBuffer(
                       (UINT *)v14,
                       v72,
                       v187,
                       v188,
                       a8,
                       a10,
                       a11,
                       (struct COREDEVICEACCESS *)v202);
      v183 = v66;
      v90 = 0LL;
LABEL_210:
      if ( v90 )
        (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL)
                                                                                           + 528LL)
                                                                               + 8LL)
                                                                   + 496LL))(
          v90,
          0LL);
      if ( P )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag(P, 0);
        LODWORD(v66) = v183;
      }
      v145 = v188;
      if ( v188 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v188 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v145) + 203) )
      {
        v147 = KeGetCurrentThread();
        if ( !v147 )
        {
          v148 = WdLogNewEntry5_WdAssertion(v146);
          *(_QWORD *)(v148 + 24) = 94LL;
          WdLogEvent5_WdAssertion(v148);
        }
        v149 = PsGetCurrentProcessSessionId(v146);
        if ( v149 && (unsigned int)PsGetThreadSessionId(v147) == v149 )
        {
          v150 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v152 = (__int64 *)PsGetThreadWin32Thread(v147);
            if ( v152 )
              v150 = *v152;
          }
          if ( v150 )
            v153 = *(_QWORD *)(v150 + 80);
          else
            v153 = 0LL;
          if ( v153 )
          {
            v154 = KeGetCurrentThread();
            if ( !v154 )
            {
              v155 = WdLogNewEntry5_WdAssertion(v151);
              *(_QWORD *)(v155 + 24) = 94LL;
              WdLogEvent5_WdAssertion(v155);
            }
            v158 = PsGetCurrentProcessSessionId(v151);
            if ( !v158 || (unsigned int)PsGetThreadSessionId(v154) != v158 )
              goto LABEL_239;
            v160 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v161 = (__int64 *)PsGetThreadWin32Thread(v154);
              if ( v161 )
                v160 = *v161;
            }
            if ( v160 )
              v162 = *(_QWORD *)(v160 + 80);
            else
LABEL_239:
              v162 = 0LL;
            if ( *(_DWORD *)(v162 + 136) )
            {
              v163 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v157, v156, v159);
              v163[3] = 275LL;
              v163[4] = 25LL;
              v163[5] = *(int *)(v162 + 136);
              v163[6] = 0LL;
              v163[7] = 0LL;
              WdLogEvent5_WdCriticalError(v163);
            }
          }
        }
        LODWORD(v66) = v183;
      }
      v164 = v187;
      if ( v187 )
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v187 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v164) + 203) )
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
            v177 = PsGetCurrentProcessSessionId(v170);
            if ( !v177 || (unsigned int)PsGetThreadSessionId(v173) != v177 )
              goto LABEL_266;
            v179 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v180 = (__int64 *)PsGetThreadWin32Thread(v173);
              if ( v180 )
                v179 = *v180;
            }
            if ( v179 )
              v181 = *(_QWORD *)(v179 + 80);
            else
LABEL_266:
              v181 = 0LL;
            if ( *(_DWORD *)(v181 + 136) )
            {
              v182 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v176, v175, v178);
              v182[3] = 275LL;
              v182[4] = 25LL;
              v182[5] = *(int *)(v181 + 136);
              v182[6] = 0LL;
              v182[7] = 0LL;
              WdLogEvent5_WdCriticalError(v182);
            }
          }
        }
        LODWORD(v66) = v183;
      }
      return (unsigned int)v66;
    }
    if ( !v68 )
      goto LABEL_82;
    BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*((DXGDEVICE **)v14 + 2));
    if ( !BroadcastPresentSyncObject )
    {
      v82 = WdLogNewEntry5_WdError(v81);
      *(_QWORD *)(v82 + 24) = -1073741801LL;
      *(_QWORD *)(v82 + 32) = 7319LL;
      WdLogEvent5_WdError(v82);
      LODWORD(v66) = -1073741801;
      goto LABEL_208;
    }
    v200 = _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v14 + 2) + 1720LL));
    *(_DWORD *)a11 |= 0xC00u;
    v83 = 0;
    v84 = a10;
    while ( v83 < v185 )
    {
      if ( v83 )
      {
        LODWORD(v85) = 0;
        v194 = 0;
        v195 = 0;
        if ( v196 )
        {
          v86 = &v192->BroadcastSrcAllocation[v83 - 1];
          if ( v86 + 1 < v86 || (unsigned __int64)(v86 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v85 = *v86;
          v194 = v85;
          v87 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v190, (DXGALLOCATIONREFERENCE *)&v207, v85);
          DXGALLOCATIONREFERENCE::MoveAssign(&v187, v87);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v207);
          if ( !v187 )
          {
            v89 = (_QWORD *)WdLogNewEntry5_WdError(v88);
            v89[3] = v85;
            LODWORD(v66) = -1073741811;
            v89[4] = -1073741811LL;
            v89[5] = 7345LL;
            WdLogEvent5_WdError(v89);
            v183 = -1073741811;
            v90 = v184;
            goto LABEL_210;
          }
          v91 = v83;
          v214 = *((_QWORD *)a4[v91] + 2);
          v215 = *(_QWORD *)(*((_QWORD *)v187 + 1) + 16LL);
          v216 = *(_QWORD *)(v215 + 16);
          v217 = *(_QWORD *)(v214 + 16);
          v92 = *(_QWORD *)(v217 + 16);
          v218 = v92;
          if ( v216 != v92 )
          {
            _mm_lfence();
            v93 = (_QWORD *)WdLogNewEntry5_WdError(v92);
            v219 = *((_QWORD *)a4[v91] + 2);
            v93[3] = v219;
            v93[4] = v187;
            LODWORD(v66) = -1073741811;
            v93[5] = -1073741811LL;
            WdLogEvent5_WdError(v93);
            v183 = -1073741811;
            v90 = v184;
            goto LABEL_210;
          }
        }
        if ( v191 )
        {
          v94 = &v192->BroadcastDstAllocation[v83 - 1];
          if ( v94 + 1 < v94 || (unsigned __int64)(v94 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          v195 = *v94;
          v95 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(v190, (DXGALLOCATIONREFERENCE *)v208, v195);
          DXGALLOCATIONREFERENCE::MoveAssign(&v188, v95);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v208);
          if ( !v188 )
          {
            v97 = (_QWORD *)WdLogNewEntry5_WdError(v96);
            v97[3] = (unsigned int)v85;
            LODWORD(v66) = -1073741811;
            v97[4] = -1073741811LL;
            v97[5] = 7368LL;
            WdLogEvent5_WdError(v97);
            v183 = -1073741811;
            v90 = v184;
            goto LABEL_210;
          }
          v98 = v83;
          v220 = *((_QWORD *)a4[v98] + 2);
          v221 = *(_QWORD *)(*((_QWORD *)v188 + 1) + 16LL);
          v222 = *(_QWORD *)(v221 + 16);
          v223 = *(_QWORD *)(v220 + 16);
          v99 = *(_QWORD *)(v223 + 16);
          v224 = v99;
          if ( v222 != v99 )
          {
            _mm_lfence();
            v100 = (_QWORD *)WdLogNewEntry5_WdError(v99);
            v225 = *((_QWORD *)a4[v98] + 2);
            v100[3] = v225;
            v100[4] = v188;
            LODWORD(v66) = -1073741811;
            v100[5] = -1073741811LL;
            WdLogEvent5_WdError(v100);
            v183 = -1073741811;
            v90 = v184;
            goto LABEL_210;
          }
        }
        v84 = v184;
      }
      if ( (int)DXGCONTEXT::SubmitPresentWithDmaBuffer(
                  (UINT *)a4[v83],
                  v202,
                  v187,
                  v188,
                  a8,
                  v84,
                  a11,
                  (struct COREDEVICEACCESS *)v202) < 0 )
      {
        v74 = WdLogNewEntry5_WdError(v101);
        LODWORD(v66) = -1073741811;
        *(_QWORD *)(v74 + 24) = -1073741811LL;
        *(_QWORD *)(v74 + 32) = 7404LL;
        goto LABEL_207;
      }
      v84 = 0LL;
      v184 = 0LL;
      *(_DWORD *)a11 &= ~0x800u;
      ++v83;
    }
    v102 = 0LL;
    v211 = 0LL;
    v213 = 0;
    if ( a3 <= 8 )
    {
      PoolWithTag = v212;
      v211 = v212;
    }
    else
    {
      v80 = 0xFFFFFFFFFFFFFFFFuLL % a3;
      if ( 0xFFFFFFFFFFFFFFFFuLL / a3 < 8 )
        goto LABEL_125;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a3, 0x4B677844u);
      v211 = PoolWithTag;
    }
    v213 = a3;
    if ( !PoolWithTag )
      goto LABEL_126;
    memset(PoolWithTag, 0, 8LL * a3);
    v102 = v211;
LABEL_125:
    if ( v102 )
    {
      if ( v185 > 1 )
      {
        v104 = a4 + 1;
        do
        {
          RenderHwQueue = DXGCONTEXT::GetRenderHwQueue(*v104);
          *v106 = RenderHwQueue;
          v104 = (DXGCONTEXT **)(v107 + 8);
        }
        while ( v108 != 1 );
      }
      v203 = 0;
      LODWORD(v66) = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, struct _VIDSCH_SYNC_OBJECT **, _DWORD, signed __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 504LL) + 8LL) + 544LL))(
                       a3,
                       v102,
                       1LL,
                       &BroadcastPresentSyncObject,
                       0,
                       &v200);
      v183 = v66;
      if ( (int)v66 >= 0 )
      {
        ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue(v14);
        LODWORD(v66) = (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, struct _VIDSCH_SYNC_OBJECT *, signed __int64))(*(_QWORD *)(v110 + 8) + 536LL))(
                         ImplicitHwQueue,
                         BroadcastPresentSyncObject,
                         v200);
        v183 = v66;
      }
      goto LABEL_132;
    }
LABEL_126:
    LODWORD(v66) = -1073741801;
    v183 = -1073741801;
LABEL_132:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(&v211, v80);
LABEL_209:
    v90 = v184;
    goto LABEL_210;
  }
  v111 = v197;
  if ( !v197 )
  {
    v112 = WdLogNewEntry5_WdAssertion(v61);
    *(_QWORD *)(v112 + 24) = 7098LL;
    WdLogEvent5_WdAssertion(v112);
  }
  v113 = a8;
  if ( a8->pDmaBuffer )
  {
    v114 = WdLogNewEntry5_WdAssertion(v61);
    *(_QWORD *)(v114 + 24) = 7099LL;
    WdLogEvent5_WdAssertion(v114);
    v113 = a8;
  }
  if ( !a3 || !v68 )
  {
    v117 = 2048;
    if ( v185 > 1 )
      v117 = 3072;
    *(_DWORD *)a11 = *(_DWORD *)a11 & 0xFFFFFBFF | v117;
    *((_DWORD *)a11 + 35) = v185;
    v118 = 440LL;
    if ( !*((_BYTE *)a11 + 348) )
      v118 = 424LL;
    *(_DWORD *)((char *)a11 + v118) = *(_DWORD *)((_BYTE *)a11 + v118) & 0xFFFFFC00 | 1;
    if ( *((_BYTE *)a11 + 348) )
      v119 = (struct VIDMM_ALLOC **)((char *)a11
                                   + *((_DWORD *)a11 + 111) * ((8 * *((_DWORD *)a11 + 112) + 175) & 0xFFFFFFF8)
                                   + 488);
    else
      v119 = (struct VIDMM_ALLOC **)((char *)a11 + 432);
    LODWORD(v66) = VIDMM_EXPORT::VidMmReferencePrimaryAllocationForSubmission(
                     *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 528LL),
                     *(struct VIDMM_DEVICE **)(*((_QWORD *)v14 + 2) + 592LL),
                     *((struct _VIDMM_MULTI_ALLOC **)v111 + 3),
                     v119);
    v183 = v66;
    if ( (int)v66 >= 0 )
    {
      v120 = *(_QWORD **)(*((_QWORD *)v14 + 2) + 16LL);
      v121 = v120[2];
      if ( *(int *)(v121 + 1968) >= 0x2000 || *(_BYTE *)(v121 + 2252) )
      {
        v122 = 0xFFFF;
        v189 = 0xFFFF;
        v193 = -1LL;
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, int *, __int64 *))(*(_QWORD *)(v120[66] + 8LL) + 216LL))(
          v120[67],
          *(_QWORD *)(*((_QWORD *)v111 + 6) + 8LL),
          &v189,
          &v193);
        v122 = v189;
      }
      if ( *((_BYTE *)a11 + 348) )
        *(_WORD *)((char *)a11 + *((_DWORD *)a11 + 111) * ((8 * *((_DWORD *)a11 + 112) + 175) & 0xFFFFFFF8) + 472) = v122;
      else
        *((_DWORD *)a11 + 121) ^= (*((_DWORD *)a11 + 121) ^ (v122 << 17)) & 0x3E0000;
      if ( *((_BYTE *)a11 + 348) )
        v123 = (char *)a11 + *((_DWORD *)a11 + 111) * ((8 * *((_DWORD *)a11 + 112) + 175) & 0xFFFFFFF8) + 480;
      else
        v123 = (char *)a11 + 448;
      *(_QWORD *)v123 = v193;
      v124 = *((_QWORD *)v111 + 5);
      if ( v124 )
        v125 = (*(_DWORD *)(v124 + 4) >> 3) & 1;
      else
        v125 = 0;
      if ( *((_BYTE *)a11 + 348) )
        *((_BYTE *)a11 + *((_DWORD *)a11 + 111) * ((8 * *((_DWORD *)a11 + 112) + 175) & 0xFFFFFFF8) + 496) = v125;
      else
        *((_DWORD *)a11 + 121) = *((_DWORD *)a11 + 121) & 0xFF7FFFFF | (v125 << 23);
      v126 = *((_BYTE *)a11 + 348);
      v127 = 584LL;
      if ( !v126 )
        v127 = 456LL;
      v128 = (char *)a11 + v127;
      if ( v126 )
        v129 = (char *)a11 + *((_DWORD *)a11 + 111) * ((8 * *((_DWORD *)a11 + 112) + 175) & 0xFFFFFFF8) + 464;
      else
        v129 = (char *)a11 + 440;
      *(_QWORD *)v129 = *(_QWORD *)(*((_QWORD *)v111 + 6) + 16LL);
      if ( *((_BYTE *)a11 + 348) )
        v130 = (char *)a11 + *((_DWORD *)a11 + 111) * ((8 * *((_DWORD *)a11 + 112) + 175) & 0xFFFFFFF8) + 456;
      else
        v130 = (char *)a11 + 496;
      *(_QWORD *)v130 = *((_QWORD *)v14 + 23);
      if ( *((_BYTE *)a11 + 348) )
        *((_DWORD *)a11 + 120) = -1;
      v131 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 1672LL) + 2304LL);
      v132 = *((unsigned int *)a11 + 29);
      v133 = *(_QWORD *)(v131 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v133 + 160) )
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v133 + 144));
      if ( (unsigned int)v132 >= *(_DWORD *)(v131 + 80) )
      {
        v134 = WdLogNewEntry5_WdAssertion(v133);
        *(_QWORD *)(v134 + 24) = 4584LL;
        WdLogEvent5_WdAssertion(v134);
      }
      v135 = *(_QWORD *)(v131 + 112) + 3760 * v132;
      *(_WORD *)v128 = 0;
      *((_WORD *)v128 + 1) = *(_WORD *)(v135 + 1012);
      *((_WORD *)v128 + 2) = 0;
      *((_WORD *)v128 + 3) = *(_WORD *)(v135 + 1016);
      v136 = *(_QWORD *)v128;
      *((_QWORD *)v128 + 1) = *(_QWORD *)v128;
      *((_QWORD *)v128 + 2) = v136;
      v137 = a12 == D3DDDIFMT_A16B16G16R16F || a12 == D3DDDIFMT_A32B32G32R32F;
      *((_DWORD *)v128 + 6) = v137;
      *((_DWORD *)v128 + 7) &= 0xFFFFFFE7;
      *((_DWORD *)v128 + 8) = 0;
      v14 = v209;
      if ( *((_BYTE *)v209 + 398) )
      {
        memset(v226, 0, sizeof(v226));
        v226[4] = *((_QWORD *)v197 + 4);
        v226[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v209 + 2) + 16LL) + 528LL)
                                                                                        + 8LL)
                                                                            + 248LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v209 + 2) + 16LL) + 536LL),
                    *((_QWORD *)v187 + 3),
                    *((unsigned __int8 *)v209 + 399),
                    *((unsigned int *)v209 + 90));
        v226[6] = v193;
        LOWORD(v226[7]) = v189;
      }
      else
      {
        memset(v226, 0, 24);
        v226[4] = 0LL;
        memset(&v226[6], 0, 24);
        v226[3] = *((_QWORD *)v197 + 4);
        v226[4] = 2 * (v189 & 0x1Fu);
        v226[5] = v193;
      }
      a8->pAllocationList = (DXGK_ALLOCATIONLIST *)v226;
      LODWORD(v66) = ADAPTER_RENDER::DdiPresent(
                       *(ADAPTER_RENDER **)(*((_QWORD *)v14 + 2) + 16LL),
                       *((void **)v14 + 23),
                       a8);
      v183 = v66;
      if ( (int)v66 >= 0 )
      {
        v138 = 0;
        if ( v185 )
        {
          v139 = v210;
          do
          {
            v140 = KeGetCurrentThread();
            if ( *((struct _KTHREAD **)*v139 + 52) != v140 )
            {
              v141 = WdLogNewEntry5_WdAssertion(v140);
              *(_QWORD *)(v141 + 24) = 7267LL;
              WdLogEvent5_WdAssertion(v141);
            }
            if ( (*((_DWORD *)v14 + 91) & 0x10) != 0 )
              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues(v14, 0LL, 0);
            v142 = *v139;
            if ( (*((_DWORD *)*v139 + 91) & 0x10) != 0 )
              v143 = *((_QWORD *)v142 + 32);
            else
              v143 = *((_QWORD *)v142 + 29);
            LODWORD(v66) = (*(__int64 (__fastcall **)(__int64, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 504LL) + 8LL)
                                                                                                + 344LL))(
                             v143,
                             a11);
            v183 = v66;
            if ( (int)v66 < 0 )
              break;
            *(_DWORD *)a11 &= ~0x800u;
            ++v138;
            ++v139;
          }
          while ( v138 < v185 );
        }
      }
      if ( (int)v66 < 0 )
      {
        if ( *((_BYTE *)a11 + 348) )
          v144 = (struct VIDMM_ALLOC **)((char *)a11
                                       + *((_DWORD *)a11 + 111) * ((8 * *((_DWORD *)a11 + 112) + 175) & 0xFFFFFFF8)
                                       + 488);
        else
          v144 = (struct VIDMM_ALLOC **)((char *)a11 + 432);
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 528LL),
          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 536LL),
          *((_DWORD *)a11 + 34),
          *v144);
      }
    }
    goto LABEL_209;
  }
  v115 = DXGCONTEXT::SubmitPresentLda(v14, v192, a3, a4, v111, v113, a11);
  if ( a10 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL)
                                                                                       + 528LL)
                                                                           + 8LL)
                                                               + 496LL))(
      a10,
      0LL);
  if ( v63 )
    CRefCountedBuffer::RefCountedBufferRelease(v63);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v188);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v187);
  return v115;
}
