/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CCDE0
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C001A370 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C001A3B4 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0033BDC (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ @ 0x1C00D4248 (--1-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C010CC2C (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C010EAD8 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C011020C (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0110284 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAUVIDMM_ALLOC@@$03@@QEAA@XZ @ 0x1C01102C0 (--1-$PagedPoolZeroedArray@PEAUVIDMM_ALLOC@@$03@@QEAA@XZ.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C0154C58 (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C018B078 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C01B031C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C01D8060 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01DB434 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall PrepareIndependentFlipToken(
        struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct DXGK_PRESENT_PARAMS *a2,
        struct VIDSCH_SUBMIT_DATA_BASE *a3,
        struct DXGCONTEXT *a4,
        struct _PRESENT_REDIRECTED_PARAMS *a5)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v6; // rbx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v14; // rsi
  ADAPTER_DISPLAY *v15; // r14
  struct DXGK_PRESENT_PARAMS *v16; // rax
  unsigned int v17; // esi
  struct DXGALLOCATION *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r13
  char *v22; // r13
  unsigned int v23; // eax
  unsigned int v24; // edx
  struct DXGK_PRESENT_PARAMS *v25; // rcx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // ecx
  int v30; // ecx
  DXGADAPTER *v31; // rcx
  int v32; // eax
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  int *v34; // r8
  int v35; // eax
  _QWORD *v36; // rax
  int v38; // esi
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // edx
  __int64 v40; // rax
  _QWORD *v41; // rax
  unsigned __int8 PostCompositionStretching; // r12
  bool v43; // r9
  __int64 v44; // rax
  __int128 v45; // xmm1
  _BOOL8 v46; // r8
  ADAPTER_RENDER *v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  D3DDDI_HDR_METADATA_TYPE HDRMetaDataType; // ecx
  __int64 v53; // rcx
  __int64 v54; // rax
  char v55; // cl
  __int64 v56; // rax
  unsigned int v57; // edx
  POOL_TYPE v58; // r9d
  char *PoolWithTag; // r13
  __int64 v60; // r14
  __int64 v61; // r9
  UINT v62; // r15d
  char *v63; // r12
  struct DXGALLOCATION *v64; // r13
  _QWORD *v65; // rdx
  DXGADAPTER *v66; // rax
  _QWORD *v67; // rcx
  __int64 v68; // r8
  unsigned int *v69; // rdx
  __int64 v70; // r14
  struct DXGALLOCATION **v71; // rsi
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v73; // rcx
  _QWORD *v74; // rax
  _QWORD *v75; // r13
  struct DXGCONTEXT *v76; // r14
  DXGADAPTER *v77; // r12
  struct DXGK_PRESENT_PARAMS *v78; // r9
  __int64 v79; // rcx
  _QWORD *v80; // rax
  _QWORD *v81; // rdx
  _QWORD *v82; // rdx
  __int64 v83; // rdx
  _QWORD *v84; // r14
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  _QWORD *v89; // rax
  UINT v90; // r15d
  UINT *v91; // rcx
  DXGK_ALLOCATIONLIST *pAllocationList; // rdx
  int v93; // eax
  unsigned __int8 v94; // r12
  UINT v95; // r15d
  __int64 v96; // r14
  __int64 v97; // rsi
  struct DXGCONTEXT *v98; // r13
  struct DXGK_PRESENT_PARAMS *v99; // rdi
  ADAPTER_RENDER *v100; // rbx
  __int16 v101; // ax
  struct DXGALLOCATION *v102; // rdx
  __int64 v103; // rax
  void *v104; // rdx
  __int64 v105; // rsi
  ADAPTER_RENDER *v106; // rbx
  __int64 v107; // r14
  char *v108; // r13
  _QWORD *v109; // rax
  int v110; // [rsp+30h] [rbp-3E8h]
  int v111; // [rsp+30h] [rbp-3E8h]
  unsigned int v112; // [rsp+80h] [rbp-398h] BYREF
  UINT v113; // [rsp+84h] [rbp-394h]
  ADAPTER_RENDER *v114; // [rsp+88h] [rbp-390h]
  struct DXGALLOCATION *v115; // [rsp+90h] [rbp-388h] BYREF
  DXGADAPTER *v116; // [rsp+98h] [rbp-380h]
  char *v117; // [rsp+A0h] [rbp-378h]
  int v118; // [rsp+A8h] [rbp-370h] BYREF
  int v119; // [rsp+ACh] [rbp-36Ch]
  unsigned int v120; // [rsp+B0h] [rbp-368h]
  struct DXGCONTEXT *v121; // [rsp+B8h] [rbp-360h]
  unsigned int v122; // [rsp+C4h] [rbp-354h] BYREF
  int v123; // [rsp+C8h] [rbp-350h] BYREF
  struct DXGK_PRESENT_PARAMS *v124; // [rsp+D0h] [rbp-348h]
  int v125; // [rsp+D8h] [rbp-340h] BYREF
  int v126; // [rsp+DCh] [rbp-33Ch] BYREF
  int v127; // [rsp+E0h] [rbp-338h] BYREF
  unsigned int v128; // [rsp+E4h] [rbp-334h]
  __int64 v129; // [rsp+E8h] [rbp-330h]
  _QWORD *v130; // [rsp+F0h] [rbp-328h]
  struct VIDSCH_SUBMIT_DATA_BASE *v131; // [rsp+F8h] [rbp-320h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v132; // [rsp+100h] [rbp-318h]
  int v133; // [rsp+108h] [rbp-310h] BYREF
  int v134; // [rsp+10Ch] [rbp-30Ch]
  unsigned int v135; // [rsp+110h] [rbp-308h]
  __int64 v136; // [rsp+118h] [rbp-300h]
  __int64 v137; // [rsp+120h] [rbp-2F8h]
  struct DXGK_PRESENT_PARAMS *v138; // [rsp+128h] [rbp-2F0h]
  __int64 v139; // [rsp+130h] [rbp-2E8h]
  __int64 v140; // [rsp+138h] [rbp-2E0h]
  ADAPTER_RENDER *v141; // [rsp+140h] [rbp-2D8h]
  _BYTE v142[24]; // [rsp+148h] [rbp-2D0h] BYREF
  struct tagRECT v143; // [rsp+160h] [rbp-2B8h] BYREF
  char v144[4]; // [rsp+170h] [rbp-2A8h] BYREF
  char v145[4]; // [rsp+174h] [rbp-2A4h] BYREF
  char v146[4]; // [rsp+178h] [rbp-2A0h] BYREF
  char v147[4]; // [rsp+17Ch] [rbp-29Ch] BYREF
  int v148; // [rsp+180h] [rbp-298h]
  char v149[8]; // [rsp+188h] [rbp-290h] BYREF
  ADAPTER_RENDER *v150; // [rsp+190h] [rbp-288h]
  char *v151; // [rsp+198h] [rbp-280h]
  struct VIDSCH_SUBMIT_DATA_BASE *v152; // [rsp+1A0h] [rbp-278h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v153; // [rsp+1A8h] [rbp-270h]
  struct DXGK_PRESENT_PARAMS *v154; // [rsp+1B0h] [rbp-268h]
  struct DXGCONTEXT *v155; // [rsp+1B8h] [rbp-260h]
  char *v156; // [rsp+1C0h] [rbp-258h] BYREF
  char v157; // [rsp+1C8h] [rbp-250h] BYREF
  unsigned int v158; // [rsp+1E8h] [rbp-230h]
  char v159[8]; // [rsp+1F0h] [rbp-228h] BYREF
  char v160[8]; // [rsp+1F8h] [rbp-220h] BYREF
  char v161[8]; // [rsp+200h] [rbp-218h] BYREF
  char v162[8]; // [rsp+208h] [rbp-210h] BYREF
  __int64 v163; // [rsp+210h] [rbp-208h]
  __int64 v164; // [rsp+218h] [rbp-200h]
  __int64 v165; // [rsp+220h] [rbp-1F8h]
  __int64 v166; // [rsp+228h] [rbp-1F0h]
  __int64 v167; // [rsp+230h] [rbp-1E8h]
  _DXGKARG_PRESENT v168; // [rsp+240h] [rbp-1D8h] BYREF
  __int128 v169; // [rsp+2F0h] [rbp-128h] BYREF
  struct tagRECT v170; // [rsp+300h] [rbp-118h] BYREF
  _QWORD v171[6]; // [rsp+310h] [rbp-108h] BYREF
  _QWORD v172[17]; // [rsp+340h] [rbp-D8h] BYREF
  int v173; // [rsp+3C8h] [rbp-50h]

  v121 = a4;
  v6 = a3;
  v131 = a3;
  v124 = a2;
  v7 = a1;
  v132 = a1;
  v153 = a1;
  v154 = a2;
  v152 = a3;
  v155 = a4;
  if ( a1->Model != D3DKMT_PM_REDIRECTED_FLIP || a4 && !a2 )
    return 0LL;
  v8 = 0LL;
  if ( a4 )
  {
    v130 = (_QWORD *)*((_QWORD *)a4 + 2);
    v9 = *(_QWORD *)(v130[2] + 16LL);
  }
  else
  {
    v8 = *(_QWORD *)a5;
    v9 = *((_QWORD *)a5 + 2);
    v130 = (_QWORD *)*((_QWORD *)a5 + 3);
  }
  v139 = v9;
  v116 = (DXGADAPTER *)v9;
  if ( !a4 && !*(_BYTE *)(v9 + 2418) )
    return 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  v129 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v14 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v12 = *v14;
        v129 = *v14;
      }
      else
      {
        v12 = v129;
      }
    }
    else
    {
      v12 = ProcessDxgProcess;
    }
  }
  v114 = *(ADAPTER_RENDER **)(v9 + 2464);
  v150 = v114;
  v141 = v114;
  v15 = *(ADAPTER_DISPLAY **)(v9 + 2456);
  v16 = v124;
  if ( !a4 )
    v16 = 0LL;
  v138 = v16;
  if ( a4 )
    v17 = *((_DWORD *)v16 + 5);
  else
    v17 = *(_DWORD *)(v8 + 1100);
  DXGPROCESS::GetAllocationSafe(v12, (DXGALLOCATIONREFERENCE *)&v115, v17);
  v18 = v115;
  if ( !v115 || *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v115 + 1) + 16LL) + 16LL) != *(_QWORD *)(v130[2] + 16LL) )
  {
LABEL_48:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v115);
    return 0LL;
  }
  v19 = *((_QWORD *)v115 + 5);
  if ( *((_QWORD *)v6 + 3) && v19 && (*(_DWORD *)(v19 + 4) & 1) != 0 )
    *((_QWORD *)v6 + 4) = *(_QWORD *)(*(_QWORD *)(v19 + 56) + 168LL);
  if ( a4 )
    v20 = *((_QWORD *)v124 + 187);
  else
    v20 = 0LL;
  v140 = v20;
  v137 = v20;
  v122 = (*(_DWORD *)(*((_QWORD *)v18 + 6) + 4LL) >> 6) & 0xF;
  v125 = 0;
  v123 = 0;
  v126 = 0;
  v127 = 0;
  v112 = 0;
  v118 = 0;
  v21 = 640LL;
  if ( !*((_BYTE *)v6 + 348) )
    v21 = 504LL;
  v22 = (char *)v6 + v21;
  (*(void (__fastcall **)(_QWORD, unsigned int *, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, UINT64, char *, int *, int *, unsigned int *, UINT64 *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v114 + 65) + 8LL) + 408LL))(
    *((_QWORD *)v114 + 66),
    &v122,
    &v7->Token.SurfaceComplete + 7,
    v7->CompositionBindingId,
    v22,
    &v125,
    &v123,
    &v112,
    &v7->Token.Flip.confirmationCookie,
    &v126,
    &v127,
    &v118,
    &v169,
    &v170);
  v23 = v122;
  v7->Token.Flip.VidPnSourceId = v122;
  *((_DWORD *)v6 + 29) = v23;
  RtlCopyLuid((PLUID)v6 + 19, &v7->Token.Flip.compSurfLuid);
  *((_QWORD *)v6 + 20) = v7->CompositionBindingId;
  v24 = *(_DWORD *)v6 & 0xFFFEFFFF;
  *(_DWORD *)v6 = v24;
  if ( a4 )
  {
    v25 = v138;
    v26 = (*((_DWORD *)v138 + 22) ^ v24) & 4 ^ v24;
    *(_DWORD *)v6 = v26;
    v27 = (v26 ^ (4 * *((_DWORD *)v25 + 22))) & 0x80000 ^ v26;
    *(_DWORD *)v6 = v27;
    v28 = (v27 ^ (4 * *((_DWORD *)v25 + 22))) & 0x100000 ^ v27;
    *(_DWORD *)v6 = v28;
    v24 = v28 ^ (v28 ^ (4 * *((_DWORD *)v25 + 22))) & 0x200000;
    *(_DWORD *)v6 = v24;
  }
  v29 = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)(v7->Token.Flip.Flags.Value >> 23)) & 8;
  *(_DWORD *)v6 = v29;
  v30 = ((unsigned __int8)v29 ^ (unsigned __int8)(v7->Token.Flip.Flags.Value >> 1)) & 0x10 ^ v29;
  *(_DWORD *)v6 = v30;
  *(_DWORD *)v6 = v30 ^ (v30 ^ (32 * v7->Token.Flip.Flags.Value)) & 0x10000000;
  v31 = v116;
  v7->Token.Flip.dxgContext = (UINT_PTR)v116;
  *((_DWORD *)v6 + 28) = v7->Token.Flip.PresentCount;
  *((_DWORD *)v6 + 46) = v7->Token.Flip.SwapChainIndex;
  *(_DWORD *)v6 ^= (*(_DWORD *)v6 ^ (v7->Token.Flip.Flags.Value << 6)) & 0x2000000;
  *((_DWORD *)v6 + 36) = v7->Token.Flip.CustomDuration;
  *((_DWORD *)v6 + 37) = v7->Token.Flip.CustomDurationFlipInterval;
  if ( a4 )
    v32 = *((_DWORD *)a4 + 89);
  else
    v32 = 1;
  *((_DWORD *)v6 + 34) = v32;
  if ( *((_BYTE *)v6 + 348) )
    *((_DWORD *)v6 + 134) = -1;
  if ( bTracingEnabled )
  {
    *((_QWORD *)v6 + 22) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v114 + 68) + 8LL) + 336LL))(
                             *((_QWORD *)v114 + 69),
                             v17);
    v31 = v116;
  }
  FlipInterval = v7->Token.Flip.FlipInterval;
  *((_DWORD *)v6 + 31) = FlipInterval;
  v34 = (int *)((char *)v6 + 124);
  v133 = 1;
  if ( FlipInterval == D3DDDI_FLIPINTERVAL_IMMEDIATE
    && ((v7->Token.Flip.Flags.Value & 0x800000) == 0 || (*((_DWORD *)v31 + 457) & 0x40) == 0) )
  {
    v34 = &v133;
  }
  v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)v114 + 65) + 8LL) + 520LL))(
          v130[77],
          v122,
          v34);
  *((_DWORD *)v6 + 30) = v35;
  if ( v35 != 5 && *((_DWORD *)v6 + 31) )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v36[3] = v7;
    v36[4] = v7->Token.Flip.FenceValue;
    v36[5] = v7->Token.Flip.PresentCount;
    v36[6] = *((int *)v6 + 30);
LABEL_47:
    WdLogEvent5_WdPresentTokenEvent(v36);
    goto LABEL_48;
  }
  if ( !v125 )
  {
    if ( v126 )
    {
      LOBYTE(v110) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v114 + 65) + 8LL) + 400LL))(
        *((_QWORD *)v114 + 66),
        (unsigned int)(1 << *((_DWORD *)v6 + 29)),
        &v7->Token.SurfaceComplete + 7,
        *((_QWORD *)v6 + 20),
        &v112,
        0,
        v110,
        v144,
        v159);
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v15, *((_DWORD *)v6 + 29), v112, 0);
      v7->Token.Flip.Flags.Value |= 0x1000000u;
    }
    else if ( v127 )
    {
      v7->Token.Flip.Flags.Value |= 0x1000000u;
    }
    goto LABEL_48;
  }
  *((_QWORD *)v6 + 21) = v7->Token.Flip.confirmationCookie;
  v38 = 0;
  v119 = 0;
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)v7->Token.Flip.Flags.Value;
  if ( (*(_DWORD *)&Value & 0x200000) == 0 )
  {
    LOBYTE(v110) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v114 + 65) + 8LL) + 400LL))(
      *((_QWORD *)v114 + 66),
      (unsigned int)(1 << *((_DWORD *)v6 + 29)),
      &v7->Token.SurfaceComplete + 7,
      *((_QWORD *)v6 + 20),
      &v112,
      0,
      v110,
      v145,
      v160);
    v7->Token.Flip.Flags.Value |= 0x1000000u;
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v15, *((_DWORD *)v6 + 29), v112, 0);
    v36 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v36[3] = 1684LL;
    goto LABEL_47;
  }
  if ( v123 || (v40 = *((_QWORD *)v114 + 2), *(_QWORD *)(v40 + 896)) && *(_BYTE *)(v40 + 2410) )
  {
    if ( (*(_DWORD *)&Value & 0x400000) != 0 )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v142, v15);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v142);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching(
                                    (DXGADAPTER **)v15,
                                    *((_DWORD *)v6 + 29));
      if ( PostCompositionStretching
        && (IsYUVAllocation(*(void **)(*((_QWORD *)v115 + 6) + 16LL), v114)
         || DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)v15 + 14)
                                                                        + 3760LL * *((unsigned int *)v6 + 29))) > 1) )
      {
        PostCompositionStretching = 0;
      }
      *(_QWORD *)&v143.left = 0LL;
      *(_QWORD *)&v143.right = 0LL;
      v43 = !v112 && PostCompositionStretching;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              *((_DWORD *)v6 + 29),
              v112,
              &v7->Token.Flip,
              v43,
              v114,
              v15,
              &v143) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142);
        LOBYTE(v111) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v114 + 65) + 8LL) + 400LL))(
          *((_QWORD *)v114 + 66),
          (unsigned int)(1 << *((_DWORD *)v6 + 29)),
          &v7->Token.SurfaceComplete + 7,
          *((_QWORD *)v6 + 20),
          &v112,
          0,
          v111,
          v147,
          v162);
        v51 = WdLogNewEntry5_WdWarning(v49, v48, v50);
        *(_QWORD *)(v51 + 24) = v112;
        WdLogEvent5_WdWarning(v51);
        v7->Token.Flip.Flags.Value |= 0x1000000u;
        ADAPTER_DISPLAY::UpdateIndependentFlipState(v15, *((_DWORD *)v6 + 29), v112, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v142);
        goto LABEL_48;
      }
      *(_WORD *)v22 = *((_WORD *)&v7->Token.SurfaceComplete + 362);
      *((_WORD *)v22 + 2) = *((_WORD *)&v7->Token.SurfaceComplete + 364);
      *((_WORD *)v22 + 1) = *((_WORD *)&v7->Token.SurfaceComplete + 366);
      *((_WORD *)v22 + 3) = *((_WORD *)&v7->Token.SurfaceComplete + 368);
      *((_DWORD *)v22 + 6) = v7->Token.Flip.ColorSpace;
      if ( PostCompositionStretching )
      {
        v44 = *(_QWORD *)v22;
        *((_QWORD *)v22 + 1) = *(_QWORD *)v22;
        *((_QWORD *)v22 + 2) = v44;
        v45 = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 724);
        v169 = v45;
        v170 = v143;
        v46 = (_DWORD)v45 != v143.left
           || __PAIR64__(DWORD2(v169), DWORD1(v45)) != *(_QWORD *)&v143.top
           || HIDWORD(v169) != v143.bottom;
        v118 = v46;
        if ( !v46 )
        {
          v169 = 0uLL;
          v170 = (struct tagRECT)0LL;
        }
        v47 = v114;
        (*(void (__fastcall **)(_QWORD, _QWORD, _BOOL8, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v114 + 65)
                                                                                                 + 8LL)
                                                                                     + 1000LL))(
          *((_QWORD *)v114 + 66),
          *((unsigned int *)v6 + 29),
          v46,
          &v169,
          &v170);
        UpdatePostComposition(*((_DWORD *)v6 + 29), v118 != 0, DWORD2(v169) - v169, HIDWORD(v169) - DWORD1(v169), v15);
      }
      else
      {
        v47 = v114;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*((_QWORD *)v47 + 65) + 8LL) + 424LL))(
        *((_QWORD *)v47 + 66),
        *((unsigned int *)v6 + 29),
        v22,
        v112);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v142);
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v15, *((_DWORD *)v6 + 29), v112, 1u);
    }
    *(_DWORD *)v6 = (v118 << 31) | (*(_DWORD *)v6 ^ (*(_DWORD *)v6 ^ (v123 << 26)) & 0x4000000) & 0x7FFFFFFF;
    *(_OWORD *)((char *)v6 + 428) = v169;
    *(struct tagRECT *)((char *)v6 + 444) = v170;
  }
  else
  {
    if ( v7->Token.Flip.SourceRect.right - v7->Token.Flip.SourceRect.left != v7->Token.Flip.DestWidth
      || v7->Token.Flip.SourceRect.bottom - v7->Token.Flip.SourceRect.top != v7->Token.Flip.DestHeight
      || (*(_DWORD *)&Value & 0x400000) != 0 )
    {
      LOBYTE(v110) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int *, _DWORD, int, char *, char *))(*(_QWORD *)(*((_QWORD *)v114 + 65) + 8LL) + 400LL))(
        *((_QWORD *)v114 + 66),
        (unsigned int)(1 << *((_DWORD *)v6 + 29)),
        &v7->Token.SurfaceComplete + 7,
        *((_QWORD *)v6 + 20),
        &v112,
        0,
        v110,
        v146,
        v161);
      v41 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v41[3] = v7->Token.Flip.SourceRect.right - v7->Token.Flip.SourceRect.left;
      v41[4] = v7->Token.Flip.SourceRect.bottom - v7->Token.Flip.SourceRect.top;
      v41[5] = v7->Token.Flip.DestWidth;
      v41[6] = v7->Token.Flip.DestHeight;
      WdLogEvent5_WdPresentTokenEvent(v41);
      v7->Token.Flip.Flags.Value |= 0x1000000u;
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v15, *((_DWORD *)v6 + 29), 0, 0);
      goto LABEL_48;
    }
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v15, *((_DWORD *)v6 + 29), 0, 1u);
  }
  if ( (v7->Token.Flip.Flags.Value & 0x40) != 0 )
  {
    *(_DWORD *)v6 |= 0x40000000u;
    HDRMetaDataType = v7->Token.Flip.HDRMetaDataType;
    *((_DWORD *)v6 + 88) = HDRMetaDataType;
    if ( HDRMetaDataType )
    {
      v53 = (unsigned int)(HDRMetaDataType - 1);
      if ( (_DWORD)v53 )
      {
        if ( (_DWORD)v53 == 1 )
        {
          *(_OWORD *)((char *)v6 + 356) = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 148);
          *(_OWORD *)((char *)v6 + 372) = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 164);
          *(_OWORD *)((char *)v6 + 388) = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 180);
          *(_OWORD *)((char *)v6 + 404) = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 196);
          *(D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *)((char *)v6 + 420) = *(D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *)((char *)&v7->Token.SurfaceComplete + 212);
        }
        else
        {
          v54 = WdLogNewEntry5_WdAssertion(v53);
          *(_QWORD *)(v54 + 24) = 1885LL;
          WdLogEvent5_WdAssertion(v54);
          *(_DWORD *)v6 &= ~0x40000000u;
        }
      }
      else
      {
        *(_OWORD *)((char *)v6 + 356) = *(_OWORD *)((char *)&v7->Token.SurfaceComplete + 148);
        *(D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *)((char *)v6 + 372) = *(D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *)((char *)&v7->Token.SurfaceComplete + 164);
        *((_DWORD *)v6 + 95) = v7->Token.Flip.ScatterBlts.Blts[0].SourceRect.top;
      }
    }
  }
  v55 = v112;
  v7->Token.Flip.PlaneIndex = v112;
  v56 = 496LL;
  if ( !*((_BYTE *)v6 + 348) )
    v56 = 472LL;
  *(_DWORD *)((char *)v6 + v56) ^= (*(_DWORD *)((char *)v6 + v56) ^ (1 << v55)) & 0x3FF;
  v113 = 1;
  if ( DXGADAPTER::IsDxgmms2(v116) && a4 )
  {
    v57 = *((_DWORD *)v138 + 23) + 1;
    v113 = v57;
  }
  v120 = 0;
  PoolWithTag = 0LL;
  v117 = 0LL;
  v156 = 0LL;
  v158 = 0;
  v60 = v57;
  if ( v57 <= 4 )
  {
    PoolWithTag = &v157;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v57 < 8 )
      goto LABEL_107;
    PoolWithTag = (char *)ExAllocatePoolWithTag(v58, 8LL * v57, 0x4B677844u);
    v57 = v113;
  }
  v156 = PoolWithTag;
  v117 = PoolWithTag;
  v158 = v57;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8 * v60);
    PoolWithTag = v156;
    v117 = v156;
  }
LABEL_107:
  v151 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_110:
    PagedPoolZeroedArray<VIDMM_ALLOC *,4>::~PagedPoolZeroedArray<VIDMM_ALLOC *,4>(&v156);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v115);
    return 3221225495LL;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v171);
  v61 = v171[0];
  v136 = v171[0];
  if ( !v171[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v171);
    goto LABEL_110;
  }
  v62 = 0;
  v63 = v117;
  while ( 1 )
  {
    v128 = v120;
    v135 = v120;
    if ( v62 >= v113 )
      break;
    if ( v62 )
    {
      v134 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v124 + 187) + 8LL * v62) + 360LL);
      v148 = 0;
      v69 = (unsigned int *)(*((_QWORD *)v138 + 182) + 4LL * (v62 - 1));
      if ( v69 + 1 < v69 || (unsigned __int64)(v69 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v70 = *v69;
      v71 = (struct DXGALLOCATION **)(v61 + 8LL * v62);
      AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                  v129,
                                                  (DXGALLOCATIONREFERENCE *)v149,
                                                  *v69);
      DXGALLOCATIONREFERENCE::MoveAssign(v71, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v149);
      v64 = *v71;
      if ( !*v71 )
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdError(v73);
        v74[3] = v70;
        v74[4] = -1073741811LL;
        v74[5] = 1959LL;
        WdLogEvent5_WdError(v74);
        v38 = -1073741811;
        v119 = -1073741811;
        v75 = v117;
        v76 = v121;
        v77 = v116;
        goto LABEL_157;
      }
      v78 = v124;
      v163 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v124 + 187) + 8LL * v62) + 16LL);
      v164 = *(_QWORD *)(*((_QWORD *)v64 + 1) + 16LL);
      v165 = *(_QWORD *)(v164 + 16);
      v166 = *(_QWORD *)(v163 + 16);
      v79 = *(_QWORD *)(v166 + 16);
      v167 = v79;
      if ( v165 != v79 )
      {
        _mm_lfence();
        v80 = (_QWORD *)WdLogNewEntry5_WdError(v79);
        v80[3] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v124 + 187) + 8LL * v62) + 16LL);
        v80[4] = *v71;
        v80[5] = -1073741811LL;
        WdLogEvent5_WdError(v80);
        v38 = -1073741811;
        v119 = -1073741811;
        v75 = v117;
        v76 = v121;
        v77 = v116;
        goto LABEL_157;
      }
      if ( *((_BYTE *)v6 + 348) )
        v81 = (_QWORD *)((char *)v6
                       + 48 * *((_DWORD *)v6 + 125) * v62
                       + *((_DWORD *)v6 + 125) * ((8 * *((_DWORD *)v6 + 126) + 175) & 0xFFFFFFF8)
                       + 520);
      else
        v81 = (_QWORD *)((char *)v6 + 488);
      *v81 = *(_QWORD *)(*((_QWORD *)v64 + 6) + 16LL);
      if ( !*((_BYTE *)v116 + 2418) )
      {
        if ( *((_BYTE *)v6 + 348) )
          v82 = (_QWORD *)((char *)v6
                         + 48 * *((_DWORD *)v6 + 125) * v62
                         + *((_DWORD *)v6 + 125) * ((8 * *((_DWORD *)v6 + 126) + 175) & 0xFFFFFFF8)
                         + 512);
        else
          v82 = (_QWORD *)((char *)v6 + 544);
        *v82 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v78 + 187) + 8LL * v62) + 184LL);
      }
      *((_DWORD *)v6 + 34) |= 1 << v134;
      v83 = *(_QWORD *)(*((_QWORD *)v78 + 187) + 8LL * v62);
      if ( (*(_DWORD *)(v83 + 364) & 0x10) == 0 )
        *(_QWORD *)((char *)v6 + 8 * v62 + *((unsigned int *)v6 + 120)) = *(_QWORD *)(v83 + 232);
    }
    else
    {
      v64 = v115;
      if ( *((_BYTE *)v6 + 348) )
        v65 = (_QWORD *)((char *)v6 + *((_DWORD *)v6 + 125) * ((8 * *((_DWORD *)v6 + 126) + 175) & 0xFFFFFFF8) + 520);
      else
        v65 = (_QWORD *)((char *)v6 + 488);
      *v65 = *(_QWORD *)(*((_QWORD *)v115 + 6) + 16LL);
      v66 = v116;
      if ( !*((_BYTE *)v116 + 2418) )
      {
        if ( *((_BYTE *)v6 + 348) )
        {
          v67 = (_QWORD *)((char *)v6 + *((_DWORD *)v6 + 125) * ((8 * *((_DWORD *)v6 + 126) + 175) & 0xFFFFFFF8) + 512);
          v66 = v116;
        }
        else
        {
          v67 = (_QWORD *)((char *)v6 + 544);
        }
        *v67 = *((_QWORD *)v121 + 23);
      }
      if ( DXGADAPTER::IsDxgmms2(v66) && v68 && (*(_DWORD *)(v68 + 364) & 0x10) == 0 )
        *(_QWORD *)((char *)v6 + *((unsigned int *)v6 + 120)) = *(_QWORD *)(v68 + 232);
    }
    if ( *((_BYTE *)v6 + 348) )
      v84 = (_QWORD *)((char *)v6
                     + 48 * v62 * *((_DWORD *)v6 + 125)
                     + *((_DWORD *)v6 + 125) * ((8 * *((_DWORD *)v6 + 126) + 175) & 0xFFFFFFF8)
                     + 544);
    else
      v84 = (_QWORD *)((char *)v6 + 480);
    v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)(*((_QWORD *)v114 + 68) + 8LL) + 416LL))(
            v130[76],
            *((_QWORD *)v64 + 3),
            v84,
            *((_QWORD *)v114 + 69));
    v119 = v38;
    if ( v38 < 0 )
    {
      v86 = WdLogNewEntry5_WdError(v85);
      *(_QWORD *)(v86 + 24) = v64;
      *(_QWORD *)(v86 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v86);
      break;
    }
    *(_QWORD *)&v63[8 * v62] = *v84;
    ++v120;
    v87 = *((_QWORD *)v64 + 5);
    if ( v87 && (*(_DWORD *)(v87 + 4) & 8) != 0 )
      v88 = *(_QWORD *)(*(_QWORD *)(v87 + 56) + 176LL);
    else
      v88 = 0LL;
    if ( *((_BYTE *)v6 + 348) )
      *(_QWORD *)((char *)v6
                + 48 * *((_DWORD *)v6 + 125) * v62
                + *((_DWORD *)v6 + 125) * ((8 * *((_DWORD *)v6 + 126) + 175) & 0xFFFFFFF8)
                + 552) = v88;
    else
      *((_QWORD *)v6 + 69) = v88;
    *(_DWORD *)v6 |= 0x1000000u;
    v89 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v89[3] = v7;
    v89[4] = v7->Token.Flip.FenceValue;
    v89[5] = v7->Token.Flip.PresentCount;
    v89[6] = *((_QWORD *)&v7->Token.SurfaceComplete + 7);
    v89[7] = v7->CompositionBindingId;
    WdLogEvent5_WdPresentTokenEvent(v89);
    ++v62;
    v61 = v136;
  }
  v77 = v116;
  v76 = v121;
  v75 = v117;
LABEL_157:
  v90 = v113;
  *((_DWORD *)v6 + 35) = v113;
  if ( v38 < 0 )
    goto LABEL_185;
  if ( (*((_DWORD *)v77 + 457) & 0x20) != 0 )
  {
    memset(&v168, 0, sizeof(v168));
    v168.Flags.Value = 0x2000;
    v91 = (UINT *)*((_QWORD *)v6 + 3);
    if ( v91 )
    {
      v168.PrivateDriverDataSize = *v91;
      v168.pPrivateDriverData = v91 + 2;
    }
    v172[0] = 0LL;
    v173 = 0;
    PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(v172, v90);
    pAllocationList = (DXGK_ALLOCATIONLIST *)v172[0];
    v168.pAllocationList = (DXGK_ALLOCATIONLIST *)v172[0];
    if ( v172[0] )
    {
      v93 = *((_DWORD *)v77 + 459);
      v94 = (v93 & 0x80u) != 0 && (v93 & 0x40) == 0;
      v95 = 0;
      if ( v113 )
      {
        v96 = 0LL;
        v97 = 0LL;
        v98 = v121;
        v99 = v124;
        v100 = v114;
        while ( 1 )
        {
          if ( v98 )
            v101 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)v99 + 187) + v97) + 360LL);
          else
            v101 = 0;
          *(_WORD *)((char *)&pAllocationList[1].hDeviceSpecificAllocation + v96 + 2) = v101;
          if ( v95 )
            v102 = *(struct DXGALLOCATION **)(v136 + v97);
          else
            v102 = v115;
          if ( v98 )
            v94 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v99 + 187) + v97) + 399LL);
          *(HANDLE *)((char *)&v168.pAllocationList->hDeviceSpecificAllocation + v96) = (HANDLE)*((_QWORD *)v102 + 4);
          v103 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v100 + 68) + 8LL)
                                                                           + 248LL))(
                   *((_QWORD *)v100 + 69),
                   *((_QWORD *)v102 + 3),
                   v94,
                   *(unsigned __int16 *)((char *)&v168.pAllocationList[1].hDeviceSpecificAllocation + v96 + 2));
          *(_QWORD *)((char *)&v168.pAllocationList->8 + v96) = v103;
          ++v95;
          v97 += 8LL;
          v96 += 32LL;
          if ( v95 >= v113 )
            break;
          pAllocationList = v168.pAllocationList;
        }
        v6 = v131;
        v7 = v132;
        v75 = v117;
        v76 = v121;
      }
      v168.FlipInterval = *((_DWORD *)v6 + 31);
      v168.Flags.Value ^= (*(_WORD *)&v168.Flags.0 ^ (unsigned __int16)(*(_DWORD *)v6 >> 11)) & 0x1700;
      v168.NumSrcAllocations = v113;
      if ( *((_BYTE *)v116 + 2418) )
        v104 = 0LL;
      else
        v104 = (void *)*((_QWORD *)v76 + 23);
      v38 = ADAPTER_RENDER::DdiPresent(v114, v104, &v168);
    }
    PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::~PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>(v172);
  }
  if ( v38 < 0 )
  {
LABEL_185:
    if ( v120 )
    {
      v105 = v128;
      v106 = v141;
      if ( v76 )
      {
        v107 = v137;
        v108 = (char *)v75 - v137;
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v106 + 68) + 8LL) + 424LL))(
            *((_QWORD *)v106 + 69),
            (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v107 + 360LL)),
            *(_QWORD *)&v108[v107],
            0LL);
          v107 += 8LL;
          --v105;
        }
        while ( v105 );
      }
      else
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v106 + 68) + 8LL) + 424LL))(
            *((_QWORD *)v106 + 69),
            1LL,
            *v75++,
            0LL);
          --v105;
        }
        while ( v105 );
      }
      v7 = v132;
      v6 = v131;
    }
    v109 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v109[3] = v7;
    v109[4] = v7->Token.Flip.FenceValue;
    v109[5] = v7->Token.Flip.PresentCount;
    v109[6] = *((_QWORD *)&v7->Token.SurfaceComplete + 7);
    v109[7] = v7->CompositionBindingId;
    WdLogEvent5_WdPresentTokenEvent(v109);
    v7->Token.Flip.Flags.Value |= 0x1000000u;
    *(_DWORD *)v6 &= ~0x1000000u;
    v38 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v171);
  PagedPoolZeroedArray<VIDMM_ALLOC *,4>::~PagedPoolZeroedArray<VIDMM_ALLOC *,4>(&v156);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v115);
  return (unsigned int)v38;
}
