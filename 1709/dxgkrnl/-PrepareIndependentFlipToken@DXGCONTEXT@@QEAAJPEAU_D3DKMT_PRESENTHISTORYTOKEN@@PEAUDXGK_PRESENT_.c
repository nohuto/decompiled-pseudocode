/*
 * XREFs of ?PrepareIndependentFlipToken@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00CBE30
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C000F660 (-VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULT.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00143B8 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C00143D4 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0028FEC (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C00290D0 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C00F2FB4 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C00FE5E0 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C00FED50 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C01001B8 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0100230 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ??1?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAA@XZ @ 0x1C010026C (--1-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C010028C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ??1?$PagedPoolZeroedArray@PEAUVIDMM_ALLOC@@$03@@QEAA@XZ @ 0x1C01002DC (--1-$PagedPoolZeroedArray@PEAUVIDMM_ALLOC@@$03@@QEAA@XZ.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C0175340 (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C019D7CC (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C01CFC68 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

__int64 __fastcall DXGCONTEXT::PrepareIndependentFlipToken(
        void **this,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct DXGK_PRESENT_PARAMS *a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v4; // rbx
  struct DXGK_PRESENT_PARAMS *v5; // rdi
  struct _D3DKMT_PRESENTHISTORYTOKEN *v6; // rsi
  __int64 v8; // rdx
  ULONG_PTR Count; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v14; // r15
  __int64 v15; // r15
  char *v16; // r15
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  int *v26; // r8
  int v27; // eax
  _QWORD *v28; // rax
  int v29; // r12d
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // edx
  _QWORD *v31; // r8
  _QWORD *v32; // r10
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  unsigned __int8 PostCompositionStretching; // r13
  bool v37; // r9
  __int64 v38; // rax
  __int128 v39; // xmm1
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  char v45; // cl
  __int64 v46; // rax
  unsigned int v47; // r13d
  char *PoolWithTag; // rcx
  __int64 v49; // r8
  __int64 v51; // r15
  struct DXGALLOCATION *v52; // r13
  char *v53; // rdi
  _QWORD *v54; // rdx
  _QWORD *v55; // rcx
  struct _VIDSCH_CONTEXT *ImplicitHwQueue; // rax
  __int64 v57; // rcx
  __int64 v58; // r12
  unsigned int *v59; // rdx
  struct DXGALLOCATION **v60; // r13
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  char *v66; // rdx
  struct DXGK_PRESENT_PARAMS *v67; // r8
  char *v68; // rdx
  struct VIDMM_ALLOC **v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // r8d
  _QWORD *v74; // rax
  UINT *v75; // rcx
  DXGK_ALLOCATIONLIST *pAllocationList; // rdx
  UINT v77; // r13d
  __int64 v78; // r15
  __int64 v79; // r12
  UINT v80; // esi
  __int64 v81; // rbx
  struct _EX_RUNDOWN_REF *v82; // r11
  __int64 v83; // rax
  __int64 v84; // r15
  char *v85; // rsi
  __int64 v86; // rdi
  _QWORD *v87; // rax
  int v88; // [rsp+30h] [rbp-388h]
  int v89; // [rsp+30h] [rbp-388h]
  unsigned int v90; // [rsp+80h] [rbp-338h] BYREF
  UINT v91; // [rsp+84h] [rbp-334h]
  struct _EX_RUNDOWN_REF *v92; // [rsp+88h] [rbp-330h] BYREF
  int v93; // [rsp+90h] [rbp-328h] BYREF
  int v94; // [rsp+94h] [rbp-324h]
  unsigned int v95; // [rsp+98h] [rbp-320h] BYREF
  int v96; // [rsp+9Ch] [rbp-31Ch] BYREF
  unsigned int v97; // [rsp+A0h] [rbp-318h]
  char *v98; // [rsp+A8h] [rbp-310h]
  int v99; // [rsp+B0h] [rbp-308h] BYREF
  int v100; // [rsp+B4h] [rbp-304h] BYREF
  int v101; // [rsp+B8h] [rbp-300h] BYREF
  unsigned int v102; // [rsp+BCh] [rbp-2FCh]
  struct VIDMM_ALLOC **v103; // [rsp+C0h] [rbp-2F8h]
  __int64 v104; // [rsp+C8h] [rbp-2F0h]
  int v105; // [rsp+D0h] [rbp-2E8h] BYREF
  struct DXGK_PRESENT_PARAMS *v106; // [rsp+D8h] [rbp-2E0h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v107; // [rsp+E0h] [rbp-2D8h]
  __int64 v108; // [rsp+E8h] [rbp-2D0h]
  struct VIDSCH_SUBMIT_DATA_BASE *v109; // [rsp+F0h] [rbp-2C8h]
  __int64 v110; // [rsp+F8h] [rbp-2C0h]
  _BYTE v111[16]; // [rsp+100h] [rbp-2B8h] BYREF
  struct tagRECT v112; // [rsp+110h] [rbp-2A8h] BYREF
  char v113[4]; // [rsp+120h] [rbp-298h] BYREF
  char v114[4]; // [rsp+124h] [rbp-294h] BYREF
  char v115[4]; // [rsp+128h] [rbp-290h] BYREF
  char v116[4]; // [rsp+12Ch] [rbp-28Ch] BYREF
  __int64 v117; // [rsp+130h] [rbp-288h]
  char *v118; // [rsp+138h] [rbp-280h]
  DXGCONTEXT *v119; // [rsp+140h] [rbp-278h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v120; // [rsp+148h] [rbp-270h]
  struct DXGK_PRESENT_PARAMS *v121; // [rsp+150h] [rbp-268h]
  struct VIDSCH_SUBMIT_DATA_BASE *v122; // [rsp+158h] [rbp-260h]
  struct _EX_RUNDOWN_REF *v123; // [rsp+160h] [rbp-258h] BYREF
  char *v124; // [rsp+168h] [rbp-250h] BYREF
  char v125; // [rsp+170h] [rbp-248h] BYREF
  unsigned int v126; // [rsp+190h] [rbp-228h]
  char v127[8]; // [rsp+198h] [rbp-220h] BYREF
  char v128[8]; // [rsp+1A0h] [rbp-218h] BYREF
  char v129[8]; // [rsp+1A8h] [rbp-210h] BYREF
  char v130[8]; // [rsp+1B0h] [rbp-208h] BYREF
  __int64 v131; // [rsp+1B8h] [rbp-200h]
  __int64 v132; // [rsp+1C0h] [rbp-1F8h]
  __int64 v133; // [rsp+1C8h] [rbp-1F0h]
  __int64 v134; // [rsp+1D0h] [rbp-1E8h]
  __int64 v135; // [rsp+1D8h] [rbp-1E0h]
  _DXGKARG_PRESENT v136; // [rsp+1E0h] [rbp-1D8h] BYREF
  __int128 v137; // [rsp+290h] [rbp-128h] BYREF
  struct tagRECT v138; // [rsp+2A0h] [rbp-118h] BYREF
  _QWORD v139[6]; // [rsp+2B0h] [rbp-108h] BYREF
  _QWORD v140[17]; // [rsp+2E0h] [rbp-D8h] BYREF
  int v141; // [rsp+368h] [rbp-50h]

  v4 = a4;
  v109 = a4;
  v5 = a3;
  v106 = a3;
  v6 = a2;
  v107 = a2;
  v119 = (DXGCONTEXT *)this;
  v120 = a2;
  v121 = a3;
  v122 = a4;
  if ( a2->Model != D3DKMT_PM_REDIRECTED_FLIP || !a3 )
    return 0LL;
  *((_QWORD *)a4 + 4) = 0LL;
  DXGPROCESS::GetAllocationSafe(*((_QWORD *)this[2] + 5), (DXGALLOCATIONREFERENCE *)&v92, *((_DWORD *)a3 + 5));
  if ( !v92
    || (v8 = *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL), *(_QWORD *)(*(_QWORD *)(v92[1].Count + 16) + 16LL) != v8) )
  {
LABEL_136:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92);
    return 0LL;
  }
  Count = v92[5].Count;
  if ( *((_QWORD *)v4 + 3) && Count && (*(_DWORD *)(Count + 4) & 1) != 0 )
  {
    Count = *(_QWORD *)(*(_QWORD *)(Count + 56) + 168LL);
    *((_QWORD *)v4 + 4) = Count;
  }
  v110 = *((_QWORD *)v5 + 187);
  v117 = v110;
  CurrentProcess = PsGetCurrentProcess(Count, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v11);
  v108 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v14 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v108 = *v14;
      }
    }
  }
  v95 = (*(_DWORD *)(v92[6].Count + 4) >> 6) & 0xF;
  v99 = 0;
  v96 = 0;
  v100 = 0;
  v101 = 0;
  v90 = 0;
  v93 = 0;
  v15 = 584LL;
  if ( !*((_BYTE *)v4 + 348) )
    v15 = 456LL;
  v16 = (char *)v4 + v15;
  (*(void (__fastcall **)(_QWORD, unsigned int *, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, UINT64, char *, int *, int *, unsigned int *, UINT64 *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 504LL) + 8LL) + 320LL))(
    *(_QWORD *)(*((_QWORD *)this[2] + 2) + 512LL),
    &v95,
    &v6->Token.SurfaceComplete + 7,
    v6->CompositionBindingId,
    v16,
    &v99,
    &v96,
    &v90,
    &v6->Token.Flip.confirmationCookie,
    &v100,
    &v101,
    &v93,
    &v137,
    &v138);
  v17 = v95;
  v6->Token.Flip.VidPnSourceId = v95;
  *((_DWORD *)v4 + 29) = v17;
  RtlCopyLuid((PLUID)v4 + 19, &v6->Token.Flip.compSurfLuid);
  *((_QWORD *)v4 + 20) = v6->CompositionBindingId;
  v18 = *(_DWORD *)v4 & 0xFFFEFFFF;
  *(_DWORD *)v4 = v18;
  v19 = ((unsigned __int8)v18 ^ (unsigned __int8)*((_DWORD *)v5 + 22)) & 4 ^ v18;
  *(_DWORD *)v4 = v19;
  v20 = ((unsigned __int8)v19 ^ (unsigned __int8)*((_DWORD *)v5 + 22)) & 8 ^ v19;
  *(_DWORD *)v4 = v20;
  v21 = ((unsigned __int8)v20 ^ (unsigned __int8)(v6->Token.Flip.Flags.Value >> 1)) & 0x10 ^ v20;
  *(_DWORD *)v4 = v21;
  v22 = (v21 ^ (32 * v6->Token.Flip.Flags.Value)) & 0x10000000 ^ v21;
  *(_DWORD *)v4 = v22;
  v23 = (v22 ^ (4 * *((_DWORD *)v5 + 22))) & 0x80000 ^ v22;
  *(_DWORD *)v4 = v23;
  v24 = (v23 ^ (4 * *((_DWORD *)v5 + 22))) & 0x100000 ^ v23;
  *(_DWORD *)v4 = v24;
  *(_DWORD *)v4 = v24 ^ (v24 ^ (4 * *((_DWORD *)v5 + 22))) & 0x200000;
  v6->Token.Flip.dxgContext = *(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL);
  *((_DWORD *)v4 + 28) = v6->Token.Flip.PresentCount;
  *((_DWORD *)v4 + 46) = v6->Token.Flip.SwapChainIndex;
  *(_DWORD *)v4 ^= (*(_DWORD *)v4 ^ (v6->Token.Flip.Flags.Value << 6)) & 0x2000000;
  *((_DWORD *)v4 + 36) = v6->Token.Flip.CustomDuration;
  *((_DWORD *)v4 + 37) = v6->Token.Flip.CustomDurationFlipInterval;
  *((_DWORD *)v4 + 34) = *((_DWORD *)this + 89);
  if ( *((_BYTE *)v4 + 348) )
    *((_DWORD *)v4 + 120) = -1;
  if ( bTracingEnabled )
    *((_QWORD *)v4 + 22) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2)
                                                                                             + 528LL)
                                                                                 + 8LL)
                                                                     + 336LL))(
                             *(_QWORD *)(*((_QWORD *)this[2] + 2) + 536LL),
                             *((unsigned int *)v5 + 5));
  FlipInterval = v6->Token.Flip.FlipInterval;
  *((_DWORD *)v4 + 31) = FlipInterval;
  v26 = (int *)((char *)v4 + 124);
  v105 = 1;
  if ( FlipInterval == D3DDDI_FLIPINTERVAL_IMMEDIATE
    && ((v6->Token.Flip.Flags.Value & 0x800000) == 0
     || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 1692LL) & 0x40) == 0) )
  {
    v26 = &v105;
  }
  v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 504LL)
                                                                     + 8LL)
                                                         + 424LL))(
          *((_QWORD *)this[2] + 75),
          v95,
          v26);
  *((_DWORD *)v4 + 30) = v27;
  if ( v27 != 5 && *((_DWORD *)v4 + 31) )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v28[3] = v6;
    v28[4] = v6->Token.Flip.FenceValue;
    v28[5] = v6->Token.Flip.PresentCount;
    v28[6] = *((int *)v4 + 30);
LABEL_26:
    WdLogEvent5_WdPresentTokenEvent(v28);
    goto LABEL_136;
  }
  if ( !v99 )
  {
    if ( v100 )
    {
      LOBYTE(v88) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, char *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 504LL) + 8LL) + 312LL))(
        *(_QWORD *)(*((_QWORD *)this[2] + 2) + 512LL),
        *((unsigned int *)v4 + 29),
        &v6->Token.SurfaceComplete + 7,
        *((_QWORD *)v4 + 20),
        v90,
        0,
        v88,
        v113,
        v127);
      ADAPTER_DISPLAY::UpdateIndependentFlipState(
        *(ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 209) + 2304LL),
        *((_DWORD *)v4 + 29),
        v90,
        0);
    }
    else if ( !v101 )
    {
      goto LABEL_136;
    }
    v6->Token.Flip.Flags.Value |= 0x1000000u;
    goto LABEL_136;
  }
  *((_QWORD *)v4 + 21) = v6->Token.Flip.confirmationCookie;
  v29 = 0;
  v94 = 0;
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)v6->Token.Flip.Flags.Value;
  if ( (*(_DWORD *)&Value & 0x200000) == 0 )
  {
    LOBYTE(v88) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, char *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 504LL) + 8LL) + 312LL))(
      *(_QWORD *)(*((_QWORD *)this[2] + 2) + 512LL),
      *((unsigned int *)v4 + 29),
      &v6->Token.SurfaceComplete + 7,
      *((_QWORD *)v4 + 20),
      v90,
      0,
      v88,
      v114,
      v128);
    v6->Token.Flip.Flags.Value |= 0x1000000u;
    ADAPTER_DISPLAY::UpdateIndependentFlipState(
      *(ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 209) + 2304LL),
      *((_DWORD *)v4 + 29),
      v90,
      0);
    v28 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v28[3] = 1801LL;
    goto LABEL_26;
  }
  if ( v96 || (v31 = this[2], v32 = (_QWORD *)v31[2], v33 = v32[2], *(_QWORD *)(v33 + 896)) && *(_BYTE *)(v33 + 2266) )
  {
    v35 = *((_QWORD *)this[2] + 209);
    if ( (*(_DWORD *)&Value & 0x400000) != 0 )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v111, *(struct ADAPTER_DISPLAY **)(v35 + 2304));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v111);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching(
                                    *(DXGADAPTER ***)(*((_QWORD *)this[2] + 209) + 2304LL),
                                    *((_DWORD *)v4 + 29));
      if ( PostCompositionStretching
        && (IsYUVAllocation(*(void **)(v92[6].Count + 16), *((struct ADAPTER_RENDER **)this[2] + 2))
         || DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2]
                                                                                                  + 209)
                                                                                                + 2304LL)
                                                                                    + 112LL)
                                                                        + 3760LL * *((unsigned int *)v4 + 29))) > 1) )
      {
        PostCompositionStretching = 0;
      }
      *(_QWORD *)&v112.left = 0LL;
      *(_QWORD *)&v112.right = 0LL;
      v37 = !v90 && PostCompositionStretching;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              *((_DWORD *)v4 + 29),
              v90,
              &v6->Token.Flip,
              v37,
              *((struct ADAPTER_RENDER **)this[2] + 2),
              *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 209) + 2304LL),
              &v112) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v111);
        LOBYTE(v89) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, char *, char *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 504LL) + 8LL) + 312LL))(
          *(_QWORD *)(*((_QWORD *)this[2] + 2) + 512LL),
          *((unsigned int *)v4 + 29),
          &v6->Token.SurfaceComplete + 7,
          *((_QWORD *)v4 + 20),
          v90,
          0,
          v89,
          v116,
          v130);
        v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
        *(_QWORD *)(v44 + 24) = v90;
        WdLogEvent5_WdWarning(v44);
        v6->Token.Flip.Flags.Value |= 0x1000000u;
        ADAPTER_DISPLAY::UpdateIndependentFlipState(
          *(ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 209) + 2304LL),
          *((_DWORD *)v4 + 29),
          v90,
          0);
        DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v111);
        goto LABEL_136;
      }
      *(_WORD *)v16 = *((_WORD *)&v6->Token.SurfaceComplete + 362);
      *((_WORD *)v16 + 2) = *((_WORD *)&v6->Token.SurfaceComplete + 364);
      *((_WORD *)v16 + 1) = *((_WORD *)&v6->Token.SurfaceComplete + 366);
      *((_WORD *)v16 + 3) = *((_WORD *)&v6->Token.SurfaceComplete + 368);
      *((_DWORD *)v16 + 6) = v6->Token.Flip.ColorSpace;
      if ( PostCompositionStretching )
      {
        v38 = *(_QWORD *)v16;
        *((_QWORD *)v16 + 1) = *(_QWORD *)v16;
        *((_QWORD *)v16 + 2) = v38;
        v39 = *(_OWORD *)((char *)&v6->Token.SurfaceComplete + 724);
        v137 = v39;
        v138 = v112;
        if ( (_DWORD)v39 == v112.left
          && __PAIR64__(DWORD2(v137), DWORD1(v39)) == *(_QWORD *)&v112.top
          && HIDWORD(v137) == v112.bottom )
        {
          v40 = 0LL;
          v137 = 0uLL;
          v138 = (struct tagRECT)0LL;
        }
        else
        {
          v40 = 1LL;
        }
        v93 = v40;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 504LL)
                                                                                                  + 8LL)
                                                                                      + 880LL))(
          *(_QWORD *)(*((_QWORD *)this[2] + 2) + 512LL),
          *((unsigned int *)v4 + 29),
          v40,
          &v137,
          &v138);
        UpdatePostComposition(
          *((_DWORD *)v4 + 29),
          v93 != 0,
          DWORD2(v137) - v137,
          HIDWORD(v137) - DWORD1(v137),
          *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 209) + 2304LL));
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 504LL)
                                                                         + 8LL)
                                                             + 336LL))(
        *(_QWORD *)(*((_QWORD *)this[2] + 2) + 512LL),
        *((unsigned int *)v4 + 29),
        v16,
        v90);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v111);
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v111);
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState(*(ADAPTER_DISPLAY **)(v35 + 2304), *((_DWORD *)v4 + 29), v90, 1u);
    }
    *(_DWORD *)v4 = (v93 << 31) | (*(_DWORD *)v4 ^ (*(_DWORD *)v4 ^ (v96 << 26)) & 0x4000000) & 0x7FFFFFFF;
    *((_OWORD *)v4 + 24) = v137;
    *((struct tagRECT *)v4 + 25) = v138;
  }
  else
  {
    if ( v6->Token.Flip.SourceRect.right - v6->Token.Flip.SourceRect.left != v6->Token.Flip.DestWidth
      || v6->Token.Flip.SourceRect.bottom - v6->Token.Flip.SourceRect.top != v6->Token.Flip.DestHeight
      || (*(_DWORD *)&Value & 0x400000) != 0 )
    {
      LOBYTE(v88) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, char *, char *))(*(_QWORD *)(v32[63] + 8LL) + 312LL))(
        v32[64],
        *((unsigned int *)v4 + 29),
        &v6->Token.SurfaceComplete + 7,
        *((_QWORD *)v4 + 20),
        v90,
        0,
        v88,
        v115,
        v129);
      v34 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v34[3] = v6->Token.Flip.SourceRect.right - v6->Token.Flip.SourceRect.left;
      v34[4] = v6->Token.Flip.SourceRect.bottom - v6->Token.Flip.SourceRect.top;
      v34[5] = v6->Token.Flip.DestWidth;
      v34[6] = v6->Token.Flip.DestHeight;
      WdLogEvent5_WdPresentTokenEvent(v34);
      v6->Token.Flip.Flags.Value |= 0x1000000u;
      ADAPTER_DISPLAY::UpdateIndependentFlipState(
        *(ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 209) + 2304LL),
        *((_DWORD *)v4 + 29),
        0,
        0);
      goto LABEL_136;
    }
    ADAPTER_DISPLAY::UpdateIndependentFlipState(*(ADAPTER_DISPLAY **)(v31[209] + 2304LL), *((_DWORD *)v4 + 29), 0, 1u);
  }
  v45 = v90;
  v6->Token.Flip.PlaneIndex = v90;
  v46 = 440LL;
  if ( !*((_BYTE *)v4 + 348) )
    v46 = 424LL;
  *(_DWORD *)((char *)v4 + v46) ^= (*(_DWORD *)((char *)v4 + v46) ^ (1 << v45)) & 0x3FF;
  v47 = 1;
  v91 = 1;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this[2] + 2) + 16LL)) )
  {
    v47 = *((_DWORD *)v5 + 23) + 1;
    v91 = v47;
  }
  v97 = 0;
  PoolWithTag = 0LL;
  v98 = 0LL;
  v124 = 0LL;
  v126 = 0;
  if ( v47 <= 4 )
  {
    PoolWithTag = &v125;
LABEL_71:
    v124 = PoolWithTag;
    v98 = PoolWithTag;
    v126 = v47;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v47);
      PoolWithTag = v124;
      v98 = v124;
    }
    goto LABEL_73;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v47 >= 8 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v47, 0x4B677844u);
    goto LABEL_71;
  }
LABEL_73:
  v118 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_76:
    PagedPoolZeroedArray<VIDMM_ALLOC *,4>::~PagedPoolZeroedArray<VIDMM_ALLOC *,4>(&v124);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92);
    return 3221225495LL;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v139, v47);
  v49 = v139[0];
  v104 = v139[0];
  if ( !v139[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v139);
    goto LABEL_76;
  }
  v51 = 0LL;
  while ( (unsigned int)v51 < v47 )
  {
    if ( (_DWORD)v51 )
    {
      v58 = 8 * v51;
      LODWORD(v103) = *(_DWORD *)(*(_QWORD *)(8 * v51 + *((_QWORD *)v5 + 187)) + 360LL);
      v102 = 0;
      v59 = (unsigned int *)(*((_QWORD *)v5 + 182) + 4LL * (unsigned int)(v51 - 1));
      if ( v59 + 1 < v59 || (unsigned __int64)(v59 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v102 = *v59;
      v60 = (struct DXGALLOCATION **)(v58 + v49);
      AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                  v108,
                                                  (DXGALLOCATIONREFERENCE *)&v123,
                                                  v102);
      DXGALLOCATIONREFERENCE::MoveAssign(v60, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v123);
      v52 = *v60;
      if ( !v52 )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdError(v62);
        v63[3] = v102;
        v63[4] = -1073741811LL;
        v63[5] = 2036LL;
        WdLogEvent5_WdError(v63);
        v29 = -1073741811;
        v94 = -1073741811;
        v47 = v91;
        break;
      }
      v135 = *(_QWORD *)(*(_QWORD *)(v58 + *((_QWORD *)v5 + 187)) + 16LL);
      v131 = *(_QWORD *)(*((_QWORD *)v52 + 1) + 16LL);
      v132 = *(_QWORD *)(v131 + 16);
      v133 = *(_QWORD *)(v135 + 16);
      v64 = *(_QWORD *)(v133 + 16);
      v134 = v64;
      if ( v132 != v64 )
      {
        _mm_lfence();
        v65 = (_QWORD *)WdLogNewEntry5_WdError(v64);
        v65[3] = *(_QWORD *)(*(_QWORD *)(v58 + *((_QWORD *)v5 + 187)) + 16LL);
        v65[4] = *(_QWORD *)(v58 + v104);
        v65[5] = -1073741811LL;
        WdLogEvent5_WdError(v65);
        v29 = -1073741811;
        v94 = -1073741811;
        v47 = v91;
        break;
      }
      v53 = (char *)v4 + 440;
      if ( *((_BYTE *)v4 + 348) )
        v66 = &v53[48 * (unsigned int)(v51 * *((_DWORD *)v4 + 111))
                 + 24
                 + *((_DWORD *)v4 + 111) * ((8 * *((_DWORD *)v4 + 112) + 175) & 0xFFFFFFF8)];
      else
        v66 = (char *)v4 + 440;
      *(_QWORD *)v66 = *(_QWORD *)(*((_QWORD *)v52 + 6) + 16LL);
      v67 = v106;
      if ( *((_BYTE *)v4 + 348) )
        v68 = &v53[48 * (unsigned int)(v51 * *((_DWORD *)v4 + 111))
                 + 16
                 + *((_DWORD *)v4 + 111) * ((8 * *((_DWORD *)v4 + 112) + 175) & 0xFFFFFFF8)];
      else
        v68 = (char *)v4 + 496;
      *(_QWORD *)v68 = *(_QWORD *)(*(_QWORD *)(v58 + *((_QWORD *)v106 + 187)) + 184LL);
      *((_DWORD *)v4 + 34) |= 1 << (char)v103;
      ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue(*(DXGCONTEXT **)(v58 + *((_QWORD *)v67 + 187)));
      v57 = v58 + *((unsigned int *)v4 + 106);
      goto LABEL_102;
    }
    v52 = (struct DXGALLOCATION *)v92;
    v53 = (char *)v4 + 440;
    if ( *((_BYTE *)v4 + 348) )
      v54 = (_QWORD *)((char *)v4 + *((_DWORD *)v4 + 111) * ((8 * *((_DWORD *)v4 + 112) + 175) & 0xFFFFFFF8) + 464);
    else
      v54 = (_QWORD *)((char *)v4 + 440);
    *v54 = *(_QWORD *)(v92[6].Count + 16);
    if ( *((_BYTE *)v4 + 348) )
      v55 = (_QWORD *)((char *)v4 + *((_DWORD *)v4 + 111) * ((8 * *((_DWORD *)v4 + 112) + 175) & 0xFFFFFFF8) + 456);
    else
      v55 = (_QWORD *)((char *)v4 + 496);
    *v55 = this[23];
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)this[2] + 2) + 16LL)) )
    {
      ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue((DXGCONTEXT *)this);
      v57 = *((unsigned int *)v4 + 106);
LABEL_102:
      *(_QWORD *)((char *)v4 + v57) = ImplicitHwQueue;
    }
    if ( *((_BYTE *)v4 + 348) )
      v69 = (struct VIDMM_ALLOC **)&v53[48 * (unsigned int)(v51 * *((_DWORD *)v53 + 1))
                                      + 48
                                      + *((_DWORD *)v53 + 1) * ((8 * *((_DWORD *)v53 + 2) + 175) & 0xFFFFFFF8)];
    else
      v69 = (struct VIDMM_ALLOC **)((char *)v4 + 432);
    v103 = v69;
    v29 = VIDMM_EXPORT::VidMmReferenceAllocationForTokenSubmission(
            *(VIDMM_EXPORT **)(*((_QWORD *)this[2] + 2) + 528LL),
            *((struct VIDMM_DEVICE **)this[2] + 74),
            *((struct _VIDMM_MULTI_ALLOC **)v52 + 3),
            v69,
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this[2] + 2) + 536LL));
    v94 = v29;
    if ( v29 < 0 )
    {
      v71 = WdLogNewEntry5_WdError(v70);
      *(_QWORD *)(v71 + 24) = v52;
      *(_QWORD *)(v71 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v71);
      v5 = v106;
      v47 = v91;
      break;
    }
    *(_QWORD *)&v98[8 * v51] = *v103;
    ++v97;
    v72 = *((_QWORD *)v52 + 5);
    if ( v72 )
      v73 = (*(_DWORD *)(v72 + 4) >> 3) & 1;
    else
      v73 = 0;
    if ( *((_BYTE *)v4 + 348) )
      v53[48 * (unsigned int)(v51 * *((_DWORD *)v53 + 1))
        + 56
        + *((_DWORD *)v53 + 1) * ((8 * *((_DWORD *)v53 + 2) + 175) & 0xFFFFFFF8)] = v73;
    else
      *((_DWORD *)v4 + 121) = (v73 << 23) | *((_DWORD *)v4 + 121) & 0xFF7FFFFF;
    *(_DWORD *)v4 |= 0x1000000u;
    v74 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v74[3] = v6;
    v74[4] = v6->Token.Flip.FenceValue;
    v74[5] = v6->Token.Flip.PresentCount;
    v74[6] = *((_QWORD *)&v6->Token.SurfaceComplete + 7);
    v74[7] = v6->CompositionBindingId;
    WdLogEvent5_WdPresentTokenEvent(v74);
    v51 = (unsigned int)(v51 + 1);
    v5 = v106;
    v47 = v91;
    v49 = v104;
  }
  *((_DWORD *)v4 + 35) = v47;
  if ( v29 < 0 )
    goto LABEL_130;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 16LL) + 1692LL) & 0x20) != 0 )
  {
    memset(&v136, 0, sizeof(v136));
    v136.Flags.Value |= 0x2000u;
    v75 = (UINT *)*((_QWORD *)v4 + 3);
    if ( v75 )
    {
      v136.PrivateDriverDataSize = *v75;
      v136.pPrivateDriverData = v75 + 2;
    }
    v140[0] = 0LL;
    v141 = 0;
    PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(v140, v47);
    pAllocationList = (DXGK_ALLOCATIONLIST *)v140[0];
    v136.pAllocationList = (DXGK_ALLOCATIONLIST *)v140[0];
    if ( v140[0] )
    {
      v77 = 0;
      if ( v91 )
      {
        v78 = 0LL;
        v79 = 0LL;
        v80 = v91;
        v81 = v104;
        while ( 1 )
        {
          *(_WORD *)((char *)&pAllocationList[1].hDeviceSpecificAllocation + v78 + 2) = *(_WORD *)(*(_QWORD *)(v79 + *((_QWORD *)v5 + 187))
                                                                                                 + 360LL);
          v82 = v92;
          if ( v77 )
            v82 = *(struct _EX_RUNDOWN_REF **)(v79 + v81);
          *(struct _EX_RUNDOWN_REF *)((char *)&v136.pAllocationList->hDeviceSpecificAllocation + v78) = v82[4];
          v83 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[2] + 2) + 528LL)
                                                                                         + 8LL)
                                                                             + 248LL))(
                  *(_QWORD *)(*((_QWORD *)this[2] + 2) + 536LL),
                  v82[3].Count,
                  *(unsigned __int8 *)(*(_QWORD *)(v79 + *((_QWORD *)v5 + 187)) + 399LL),
                  *(unsigned __int16 *)((char *)&v136.pAllocationList[1].hDeviceSpecificAllocation + v78 + 2));
          *(_QWORD *)((char *)&v136.pAllocationList->8 + v78) = v83;
          ++v77;
          v79 += 8LL;
          v78 += 32LL;
          if ( v77 >= v80 )
            break;
          pAllocationList = v136.pAllocationList;
        }
        v4 = v109;
        v6 = v107;
      }
      v136.FlipInterval = *((_DWORD *)v4 + 31);
      v136.Flags.Value ^= (*(_WORD *)&v136.Flags.0 ^ (unsigned __int16)(*(_DWORD *)v4 >> 11)) & 0x1700;
      v136.NumSrcAllocations = v91;
      v29 = ADAPTER_RENDER::DdiPresent(*((ADAPTER_RENDER **)this[2] + 2), this[23], &v136);
    }
    PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::~PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>(v140);
  }
  if ( v29 < 0 )
  {
LABEL_130:
    if ( v97 )
    {
      v84 = v110;
      v85 = &v98[-v110];
      v86 = v97;
      do
      {
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this[2] + 2) + 528LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this[2] + 2) + 536LL),
          1 << *(_DWORD *)(*(_QWORD *)v84 + 360LL),
          *(struct VIDMM_ALLOC **)&v85[v84]);
        v84 += 8LL;
        --v86;
      }
      while ( v86 );
      v6 = v107;
    }
    v87 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v87[3] = v6;
    v87[4] = v6->Token.Flip.FenceValue;
    v87[5] = v6->Token.Flip.PresentCount;
    v87[6] = *((_QWORD *)&v6->Token.SurfaceComplete + 7);
    v87[7] = v6->CompositionBindingId;
    WdLogEvent5_WdPresentTokenEvent(v87);
    v6->Token.Flip.Flags.Value |= 0x1000000u;
    *(_DWORD *)v4 &= ~0x1000000u;
    v29 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v139);
  PagedPoolZeroedArray<VIDMM_ALLOC *,4>::~PagedPoolZeroedArray<VIDMM_ALLOC *,4>(&v124);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v92);
  return (unsigned int)v29;
}
