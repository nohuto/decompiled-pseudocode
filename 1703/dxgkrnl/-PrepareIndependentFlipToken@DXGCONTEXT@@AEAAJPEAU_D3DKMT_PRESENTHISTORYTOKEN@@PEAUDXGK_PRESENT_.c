/*
 * XREFs of ?PrepareIndependentFlipToken@DXGCONTEXT@@AEAAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BA040
 * Callers:
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C0013624 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0013640 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x1C0034C14 (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0038D00 (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0038D74 (-VidMmReferenceAllocationForTokenSubmission@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULT.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z @ 0x1C0038E6C (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@KPEAUVIDMM_ALLOC@@H@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UpdatePostComposition@DXGCONTEXT@@QEAAXIEII@Z @ 0x1C016B760 (-UpdatePostComposition@DXGCONTEXT@@QEAAXIEII@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C016C16C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C0171718 (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z @ 0x1C01880E4 (-IsYUVAllocation@DXGDEVICE@@QEAAHPEAX@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C019DBD4 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C019DC24 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAUtagRECT@@@Z @ 0x1C01B7BC0 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@DXGCONTEXT@@AEAA_NIIPEAU_D3DKMT_FLIPMODEL_PRES.c)
 */

__int64 __fastcall DXGCONTEXT::PrepareIndependentFlipToken(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct DXGK_PRESENT_PARAMS *a3,
        struct VIDSCH_SUBMIT_DATA_BASE *a4)
{
  struct DXGK_PRESENT_PARAMS *v5; // rdi
  struct _D3DKMT_PRESENTHISTORYTOKEN *v6; // rsi
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 *ThreadProperty; // rax
  __int64 v14; // r14
  char *v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  int *v25; // r8
  int v26; // eax
  __int64 v27; // r9
  _QWORD *v28; // rax
  int v29; // r15d
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // r8d
  __int64 v31; // rax
  int v32; // edx
  _QWORD *v33; // rax
  __int64 v34; // r8
  unsigned __int8 PostCompositionStretching; // r12
  bool v36; // al
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int128 v41; // xmm1
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // cl
  __int64 v50; // rdx
  UINT v51; // r12d
  char *PoolWithTag; // rcx
  __int64 v53; // r8
  __int64 v54; // r14
  struct DXGALLOCATION *v55; // r12
  char *v56; // rdi
  char *v57; // rdx
  char *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // r15
  unsigned int *v62; // rdx
  struct DXGALLOCATION **v63; // r12
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  _QWORD *v70; // rax
  char *v71; // rdx
  struct DXGK_PRESENT_PARAMS *v72; // r8
  char *v73; // rdx
  struct VIDMM_ALLOC **v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // ecx
  _QWORD *v80; // rax
  UINT *v81; // rdx
  DXGK_ALLOCATIONLIST *pAllocationList; // r9
  UINT v83; // edx
  __int64 v84; // r14
  __int64 v85; // r15
  __int64 v86; // rsi
  struct DXGALLOCATION *v87; // r11
  __int64 v88; // rax
  __int64 v89; // r14
  char *v90; // rsi
  __int64 v91; // rdi
  _QWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // [rsp+30h] [rbp-388h]
  unsigned int v102; // [rsp+80h] [rbp-338h] BYREF
  int v103; // [rsp+84h] [rbp-334h]
  struct DXGALLOCATION *v104; // [rsp+88h] [rbp-330h] BYREF
  int v105; // [rsp+90h] [rbp-328h] BYREF
  int v106; // [rsp+94h] [rbp-324h]
  unsigned int v107; // [rsp+98h] [rbp-320h] BYREF
  int v108; // [rsp+9Ch] [rbp-31Ch] BYREF
  unsigned int v109; // [rsp+A0h] [rbp-318h]
  _QWORD *v110; // [rsp+A8h] [rbp-310h]
  int v111; // [rsp+B0h] [rbp-308h] BYREF
  int v112; // [rsp+B4h] [rbp-304h] BYREF
  int v113; // [rsp+B8h] [rbp-300h] BYREF
  unsigned int v114; // [rsp+BCh] [rbp-2FCh]
  struct VIDMM_ALLOC **v115; // [rsp+C0h] [rbp-2F8h]
  __int64 v116; // [rsp+C8h] [rbp-2F0h]
  int v117; // [rsp+D0h] [rbp-2E8h] BYREF
  struct DXGK_PRESENT_PARAMS *v118; // [rsp+D8h] [rbp-2E0h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v119; // [rsp+E0h] [rbp-2D8h]
  __int64 v120; // [rsp+E8h] [rbp-2D0h]
  __int64 v121; // [rsp+F0h] [rbp-2C8h]
  _BYTE v122[24]; // [rsp+F8h] [rbp-2C0h] BYREF
  struct tagRECT v123; // [rsp+110h] [rbp-2A8h] BYREF
  _BYTE v124[4]; // [rsp+120h] [rbp-298h] BYREF
  _BYTE v125[4]; // [rsp+124h] [rbp-294h] BYREF
  _BYTE v126[8]; // [rsp+128h] [rbp-290h] BYREF
  __int64 v127; // [rsp+130h] [rbp-288h]
  char *v128; // [rsp+138h] [rbp-280h]
  DXGCONTEXT *v129; // [rsp+140h] [rbp-278h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v130; // [rsp+148h] [rbp-270h]
  struct DXGK_PRESENT_PARAMS *v131; // [rsp+150h] [rbp-268h]
  struct VIDSCH_SUBMIT_DATA_BASE *v132; // [rsp+158h] [rbp-260h]
  _BYTE v133[4]; // [rsp+160h] [rbp-258h] BYREF
  _BYTE v134[4]; // [rsp+164h] [rbp-254h] BYREF
  char *v135; // [rsp+168h] [rbp-250h] BYREF
  char v136; // [rsp+170h] [rbp-248h] BYREF
  UINT v137; // [rsp+190h] [rbp-228h]
  _BYTE v138[8]; // [rsp+198h] [rbp-220h] BYREF
  __int64 v139; // [rsp+1A0h] [rbp-218h]
  __int64 v140; // [rsp+1A8h] [rbp-210h]
  __int64 v141; // [rsp+1B0h] [rbp-208h]
  __int64 v142; // [rsp+1B8h] [rbp-200h]
  __int64 v143; // [rsp+1C0h] [rbp-1F8h]
  _BYTE v144[8]; // [rsp+1C8h] [rbp-1F0h] BYREF
  _BYTE v145[8]; // [rsp+1D0h] [rbp-1E8h] BYREF
  _BYTE v146[8]; // [rsp+1D8h] [rbp-1E0h] BYREF
  _DXGKARG_PRESENT v147; // [rsp+1E0h] [rbp-1D8h] BYREF
  __int128 v148; // [rsp+290h] [rbp-128h] BYREF
  struct tagRECT v149; // [rsp+2A0h] [rbp-118h] BYREF
  _QWORD v150[6]; // [rsp+2B0h] [rbp-108h] BYREF
  DXGK_ALLOCATIONLIST *v151; // [rsp+2E0h] [rbp-D8h] BYREF
  _BYTE v152[128]; // [rsp+2E8h] [rbp-D0h] BYREF
  UINT v153; // [rsp+368h] [rbp-50h]

  v5 = a3;
  v118 = a3;
  v6 = a2;
  v119 = a2;
  v129 = this;
  v130 = a2;
  v131 = a3;
  v132 = a4;
  result = 0LL;
  if ( a2->Model != D3DKMT_PM_REDIRECTED_FLIP || !a3 )
    return result;
  *((_QWORD *)a4 + 4) = 0LL;
  DXGPROCESS::GetAllocationSafe(
    *(_QWORD *)(*((_QWORD *)this + 2) + 40LL),
    (DXGALLOCATIONREFERENCE *)&v104,
    *((_DWORD *)a3 + 5));
  if ( !v104
    || *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v104 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 16LL)
                                                                                  + 16LL) )
  {
LABEL_143:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v104);
    return 0LL;
  }
  v9 = *((_QWORD *)v104 + 5);
  if ( *((_QWORD *)a4 + 3) && v9 && (*(_DWORD *)(v9 + 4) & 1) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 168LL);
    *((_QWORD *)a4 + 4) = v9;
  }
  v121 = *((_QWORD *)v5 + 187);
  v127 = v121;
  CurrentProcess = PsGetCurrentProcess(v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v11);
  v120 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v120 = *ThreadProperty;
    }
  }
  v107 = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
  v111 = 0;
  v108 = 0;
  v112 = 0;
  v113 = 0;
  v102 = 0;
  v105 = 0;
  v14 = 448LL;
  if ( *((_BYTE *)a4 + 348) )
    v14 = 576LL;
  v15 = (char *)a4 + v14;
  (*(void (__fastcall **)(_QWORD, unsigned int *, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, UINT64, char *, int *, int *, unsigned int *, UINT64 *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL) + 8LL) + 320LL))(
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 416LL),
    &v107,
    &v6->Token.SurfaceComplete + 7,
    v6->CompositionBindingId,
    v15,
    &v111,
    &v108,
    &v102,
    &v6->Token.Flip.confirmationCookie,
    &v112,
    &v113,
    &v105,
    &v148,
    &v149);
  v16 = v107;
  v6->Token.Flip.VidPnSourceId = v107;
  *((_DWORD *)a4 + 29) = v16;
  RtlCopyLuid((PLUID)a4 + 19, &v6->Token.Flip.compSurfLuid);
  *((_QWORD *)a4 + 20) = v6->CompositionBindingId;
  v17 = *(_DWORD *)a4 & 0xFFFEFFFF;
  *(_DWORD *)a4 = v17;
  v18 = ((unsigned __int8)v17 ^ (unsigned __int8)*((_DWORD *)v5 + 22)) & 4 ^ v17;
  *(_DWORD *)a4 = v18;
  v19 = ((unsigned __int8)v18 ^ (unsigned __int8)*((_DWORD *)v5 + 22)) & 8 ^ v18;
  *(_DWORD *)a4 = v19;
  v20 = ((unsigned __int8)v19 ^ (unsigned __int8)(v6->Token.Flip.Flags.Value >> 1)) & 0x10 ^ v19;
  *(_DWORD *)a4 = v20;
  v21 = (v20 ^ (32 * v6->Token.Flip.Flags.Value)) & 0x10000000 ^ v20;
  *(_DWORD *)a4 = v21;
  v22 = (v21 ^ (4 * *((_DWORD *)v5 + 22))) & 0x80000 ^ v21;
  *(_DWORD *)a4 = v22;
  v23 = (v22 ^ (4 * *((_DWORD *)v5 + 22))) & 0x100000 ^ v22;
  *(_DWORD *)a4 = v23;
  *(_DWORD *)a4 = v23 ^ (v23 ^ (4 * *((_DWORD *)v5 + 22))) & 0x200000;
  v6->Token.Flip.dxgContext = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  *((_DWORD *)a4 + 28) = v6->Token.Flip.PresentCount;
  *((_DWORD *)a4 + 46) = v6->Token.Flip.SwapChainIndex;
  *(_DWORD *)a4 ^= (*(_DWORD *)a4 ^ (v6->Token.Flip.Flags.Value << 6)) & 0x2000000;
  *((_DWORD *)a4 + 36) = v6->Token.Flip.CustomDuration;
  *((_DWORD *)a4 + 37) = v6->Token.Flip.CustomDurationFlipInterval;
  *((_DWORD *)a4 + 34) = *((_DWORD *)this + 85);
  if ( *((_BYTE *)a4 + 348) )
    *((_DWORD *)a4 + 118) = -1;
  if ( bTracingEnabled )
    *((_QWORD *)a4 + 22) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 432LL)
                                                                                 + 8LL)
                                                                     + 336LL))(
                             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
                             *((unsigned int *)v5 + 5));
  FlipInterval = v6->Token.Flip.FlipInterval;
  *((_DWORD *)a4 + 31) = FlipInterval;
  v25 = (int *)((char *)a4 + 124);
  v117 = 1;
  if ( FlipInterval == D3DDDI_FLIPINTERVAL_IMMEDIATE
    && ((v6->Token.Flip.Flags.Value & 0x800000) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1668LL) & 0x40) == 0) )
  {
    v25 = &v117;
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 408LL)
                                                                     + 8LL)
                                                         + 424LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 600LL),
          v107,
          v25);
  *((_DWORD *)a4 + 30) = v26;
  if ( v26 != 5 && *((_DWORD *)a4 + 31) )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v28[3] = v6;
    v28[4] = v6->Token.Flip.FenceValue;
    v28[5] = v6->Token.Flip.PresentCount;
    v28[6] = *((int *)a4 + 30);
    WdLogEvent5_WdPresentTokenEvent(v28);
    goto LABEL_143;
  }
  if ( !v111 )
  {
    if ( v112 )
    {
      LOBYTE(v101) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, _BYTE *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL) + 8LL) + 312LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 416LL),
        *((unsigned int *)a4 + 29),
        &v6->Token.SurfaceComplete + 7,
        *((_QWORD *)a4 + 20),
        v102,
        0,
        v101,
        v133,
        v145);
    }
    else if ( !v113 )
    {
      goto LABEL_143;
    }
LABEL_30:
    v6->Token.Flip.Flags.Value |= 0x1000000u;
    goto LABEL_143;
  }
  *((_QWORD *)a4 + 21) = v6->Token.Flip.confirmationCookie;
  v29 = 0;
  v106 = 0;
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)v6->Token.Flip.Flags.Value;
  if ( (*(_DWORD *)&Value & 0x200000) == 0 )
  {
    LOBYTE(v101) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, _BYTE *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL) + 8LL) + 312LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 416LL),
      *((unsigned int *)a4 + 29),
      &v6->Token.SurfaceComplete + 7,
      *((_QWORD *)a4 + 20),
      v102,
      0,
      v101,
      v134,
      v146);
    v6->Token.Flip.Flags.Value |= 0x1000000u;
    v31 = WdLogNewEntry5_WdPresentTokenEvent();
    *(_QWORD *)(v31 + 24) = 1421LL;
    WdLogEvent5_WdPresentTokenEvent(v31);
    goto LABEL_143;
  }
  v32 = v108;
  if ( v108
    || DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)) )
  {
    LOBYTE(v27) = 0;
    v34 = *(_DWORD *)&Value & 0x400000;
    if ( !(_DWORD)v34
      && ((unsigned __int16)*(_DWORD *)v15 != v6->Token.Flip.SourceRect.left
       || (unsigned __int16)*((_DWORD *)v15 + 1) != v6->Token.Flip.SourceRect.top
       || *((unsigned __int16 *)v15 + 1) != v6->Token.Flip.SourceRect.right
       || *((unsigned __int16 *)v15 + 3) != v6->Token.Flip.SourceRect.bottom) )
    {
      LOBYTE(v27) = 1;
    }
    if ( (_DWORD)v34 || (_BYTE)v27 )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX(
        (DXGDISPLAYSTATEMUTEX *)v122,
        *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL),
        v34,
        v27);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v122);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching(
                                    *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL) + 2280LL),
                                    *((_DWORD *)a4 + 29));
      if ( PostCompositionStretching
        && ((unsigned int)DXGDEVICE::IsYUVAllocation(
                            *((DXGDEVICE **)this + 2),
                            *(void **)(*((_QWORD *)v104 + 6) + 16LL))
         || DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1800LL)
                                                                                                + 2280LL)
                                                                                    + 112LL)
                                                                        + 3208LL * *((unsigned int *)a4 + 29))) > 1) )
      {
        PostCompositionStretching = 0;
      }
      v36 = 0;
      *(_QWORD *)&v123.left = 0LL;
      *(_QWORD *)&v123.right = 0LL;
      if ( !v102 )
        v36 = PostCompositionStretching != 0;
      if ( !DXGCONTEXT::CheckAndUpdateMultiPlaneOverlayFromInternalState(
              this,
              *((_DWORD *)a4 + 29),
              v102,
              &v6->Token.Flip,
              v36,
              &v123) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v122, v37, v38, v39);
        LOBYTE(v101) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, _BYTE *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL) + 8LL) + 312LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 416LL),
          *((unsigned int *)a4 + 29),
          &v6->Token.SurfaceComplete + 7,
          *((_QWORD *)a4 + 20),
          v102,
          0,
          v101,
          v125,
          v144);
        v97 = WdLogNewEntry5_WdWarning(v94, v93, v95, v96);
        *(_QWORD *)(v97 + 24) = v102;
        WdLogEvent5_WdWarning(v97);
        v6->Token.Flip.Flags.Value |= 0x1000000u;
        DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v122, v98, v99, v100);
        goto LABEL_143;
      }
      *(_WORD *)v15 = *((_WORD *)&v6->Token.SurfaceComplete + 362);
      *((_WORD *)v15 + 2) = *((_WORD *)&v6->Token.SurfaceComplete + 364);
      *((_WORD *)v15 + 1) = *((_WORD *)&v6->Token.SurfaceComplete + 366);
      *((_WORD *)v15 + 3) = *((_WORD *)&v6->Token.SurfaceComplete + 368);
      *((_DWORD *)v15 + 6) = v6->Token.Flip.ColorSpace;
      if ( PostCompositionStretching )
      {
        v40 = *(_QWORD *)v15;
        *((_QWORD *)v15 + 1) = *(_QWORD *)v15;
        *((_QWORD *)v15 + 2) = v40;
        v41 = *(_OWORD *)((char *)&v6->Token.SurfaceComplete + 724);
        v148 = v41;
        v149 = v123;
        if ( (_DWORD)v41 == v123.left
          && __PAIR64__(DWORD2(v148), DWORD1(v41)) == *(_QWORD *)&v123.top
          && HIDWORD(v148) == v123.bottom )
        {
          v42 = 0LL;
          v148 = 0uLL;
          v149 = (struct tagRECT)0LL;
        }
        else
        {
          v42 = 1LL;
        }
        v105 = v42;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 408LL)
                                                                                                  + 8LL)
                                                                                      + 880LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 416LL),
          *((unsigned int *)a4 + 29),
          v42,
          &v148,
          &v149);
        DXGCONTEXT::UpdatePostComposition(
          this,
          *((_DWORD *)a4 + 29),
          v105 != 0,
          DWORD2(v148) - v148,
          HIDWORD(v148) - DWORD1(v148));
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 16LL)
                                                                                     + 408LL)
                                                                         + 8LL)
                                                             + 336LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 416LL),
        *((unsigned int *)a4 + 29),
        v15,
        v102);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v122, v43, v44, v45);
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v122, v46, v47, v48);
      v32 = v108;
    }
    *(_DWORD *)a4 = (v105 << 31) | (*(_DWORD *)a4 ^ (*(_DWORD *)a4 ^ (v32 << 26)) & 0x4000000) & 0x7FFFFFFF;
    *((_OWORD *)a4 + 24) = v148;
    *((struct tagRECT *)a4 + 25) = v149;
  }
  else if ( v6->Token.Flip.SourceRect.right - v6->Token.Flip.SourceRect.left != v6->Token.Flip.DestWidth
         || v6->Token.Flip.SourceRect.bottom - v6->Token.Flip.SourceRect.top != v6->Token.Flip.DestHeight
         || (*(_DWORD *)&Value & 0x400000) != 0 )
  {
    LOBYTE(v101) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN *, _QWORD, unsigned int, _DWORD, int, _BYTE *, _BYTE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 408LL) + 8LL) + 312LL))(
      *(_QWORD *)(*(_QWORD *)(v27 + 16) + 416LL),
      *((unsigned int *)a4 + 29),
      &v6->Token.SurfaceComplete + 7,
      *((_QWORD *)a4 + 20),
      v102,
      0,
      v101,
      v124,
      v138);
    v33 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v33[3] = v6->Token.Flip.SourceRect.right - v6->Token.Flip.SourceRect.left;
    v33[4] = v6->Token.Flip.SourceRect.bottom - v6->Token.Flip.SourceRect.top;
    v33[5] = v6->Token.Flip.DestWidth;
    v33[6] = v6->Token.Flip.DestHeight;
    WdLogEvent5_WdPresentTokenEvent(v33);
    goto LABEL_30;
  }
  v49 = v102;
  v6->Token.Flip.PlaneIndex = v102;
  v50 = 416LL;
  if ( *((_BYTE *)a4 + 348) )
    v50 = 432LL;
  *((_BYTE *)a4 + v50) = 1 << v49;
  v51 = 1;
  v103 = 1;
  if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v51 = *((_DWORD *)v5 + 23) + 1;
    v103 = v51;
  }
  v109 = 0;
  PoolWithTag = 0LL;
  v110 = 0LL;
  v135 = 0LL;
  v137 = 0;
  if ( v51 <= 4 )
  {
    PoolWithTag = &v136;
LABEL_71:
    v135 = PoolWithTag;
    v110 = PoolWithTag;
    v137 = v51;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v51);
      PoolWithTag = v135;
      v110 = v135;
    }
    goto LABEL_73;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v51 >= 8 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v51, 0x4B677844u);
    goto LABEL_71;
  }
LABEL_73:
  v128 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_76:
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v135);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v104);
    return 3221225495LL;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v150, v51);
  v53 = v150[0];
  v116 = v150[0];
  if ( !v150[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v150);
    goto LABEL_76;
  }
  v54 = 0LL;
  while ( (unsigned int)v54 < v51 )
  {
    if ( (_DWORD)v54 )
    {
      v61 = 8 * v54;
      LODWORD(v115) = *(_DWORD *)(*(_QWORD *)(8 * v54 + *((_QWORD *)v5 + 187)) + 344LL);
      v114 = 0;
      v62 = (unsigned int *)(*((_QWORD *)v5 + 182) + 4LL * (unsigned int)(v54 - 1));
      if ( v62 + 1 < v62 || (unsigned __int64)(v62 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v114 = *v62;
      v63 = (struct DXGALLOCATION **)(v53 + v61);
      AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                  v120,
                                                  (DXGALLOCATIONREFERENCE *)v126,
                                                  v114);
      DXGALLOCATIONREFERENCE::MoveAssign(v63, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v126);
      v55 = *v63;
      if ( !v55 )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdError(v66, v65);
        v67[3] = v114;
        v67[4] = -1073741811LL;
        v67[5] = 1641LL;
        WdLogEvent5_WdError(v67);
        v29 = -1073741811;
        v106 = -1073741811;
        v51 = v103;
        break;
      }
      v68 = *(_QWORD *)(*(_QWORD *)(v61 + *((_QWORD *)v5 + 187)) + 16LL);
      v139 = v68;
      v140 = *(_QWORD *)(*((_QWORD *)v55 + 1) + 16LL);
      v141 = *(_QWORD *)(v140 + 16);
      v142 = *(_QWORD *)(v68 + 16);
      v69 = *(_QWORD *)(v142 + 16);
      v143 = v69;
      if ( v141 != v69 )
      {
        _mm_lfence();
        v70 = (_QWORD *)WdLogNewEntry5_WdError(v69, v68);
        v70[3] = *(_QWORD *)(*(_QWORD *)(v61 + *((_QWORD *)v5 + 187)) + 16LL);
        v70[4] = *(_QWORD *)(v116 + 8 * v54);
        v70[5] = -1073741811LL;
        WdLogEvent5_WdError(v70);
        v29 = -1073741811;
        v106 = -1073741811;
        v51 = v103;
        break;
      }
      v56 = (char *)a4 + 432;
      if ( *((_BYTE *)a4 + 348) )
        v71 = (char *)a4
            + 48 * (unsigned int)(*((_DWORD *)a4 + 109) * v54)
            + *((_DWORD *)a4 + 109) * ((8 * *((_DWORD *)a4 + 110) + 167) & 0xFFFFFFF8)
            + 456;
      else
        v71 = (char *)a4 + 432;
      *(_QWORD *)v71 = *(_QWORD *)(*((_QWORD *)v55 + 6) + 16LL);
      v72 = v118;
      if ( *((_BYTE *)a4 + 348) )
        v73 = &v56[48 * (unsigned int)(v54 * *((_DWORD *)a4 + 109))
                 + 16
                 + *((_DWORD *)a4 + 109) * ((8 * *((_DWORD *)a4 + 110) + 167) & 0xFFFFFFF8)];
      else
        v73 = (char *)a4 + 480;
      *(_QWORD *)v73 = *(_QWORD *)(*(_QWORD *)(v61 + *((_QWORD *)v118 + 187)) + 184LL);
      *((_DWORD *)a4 + 34) |= 1 << (char)v115;
      v59 = v61 + *((unsigned int *)a4 + 104);
      v60 = *(_QWORD *)(*(_QWORD *)(v61 + *((_QWORD *)v72 + 187)) + 232LL);
      goto LABEL_102;
    }
    v55 = v104;
    v56 = (char *)a4 + 432;
    if ( *((_BYTE *)a4 + 348) )
      v57 = (char *)a4 + *((_DWORD *)a4 + 109) * ((8 * *((_DWORD *)a4 + 110) + 167) & 0xFFFFFFF8) + 456;
    else
      v57 = (char *)a4 + 432;
    *(_QWORD *)v57 = *(_QWORD *)(*((_QWORD *)v104 + 6) + 16LL);
    if ( *((_BYTE *)a4 + 348) )
      v58 = (char *)a4 + *((_DWORD *)a4 + 109) * ((8 * *((_DWORD *)a4 + 110) + 167) & 0xFFFFFFF8) + 448;
    else
      v58 = (char *)a4 + 480;
    *(_QWORD *)v58 = *((_QWORD *)this + 23);
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v59 = *((unsigned int *)a4 + 104);
      v60 = *((_QWORD *)this + 29);
LABEL_102:
      *(_QWORD *)((char *)a4 + v59) = v60;
    }
    if ( *((_BYTE *)a4 + 348) )
      v74 = (struct VIDMM_ALLOC **)&v56[48 * (unsigned int)(v54 * *((_DWORD *)v56 + 1))
                                      + 48
                                      + *((_DWORD *)v56 + 1) * ((8 * *((_DWORD *)v56 + 2) + 167) & 0xFFFFFFF8)];
    else
      v74 = (struct VIDMM_ALLOC **)((char *)a4 + 424);
    v115 = v74;
    v29 = VIDMM_EXPORT::VidMmReferenceAllocationForTokenSubmission(
            *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
            *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 592LL),
            *((struct _VIDMM_MULTI_ALLOC **)v55 + 3),
            v74);
    v106 = v29;
    if ( v29 < 0 )
    {
      v77 = WdLogNewEntry5_WdError(v76, v75);
      *(_QWORD *)(v77 + 24) = v55;
      *(_QWORD *)(v77 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v77);
      v5 = v118;
      v51 = v103;
      break;
    }
    v110[v54] = *v115;
    ++v109;
    v78 = *((_QWORD *)v55 + 5);
    if ( v78 )
      v79 = (*(_DWORD *)(v78 + 4) >> 3) & 1;
    else
      v79 = 0;
    if ( *((_BYTE *)a4 + 348) )
      v56[48 * (unsigned int)(v54 * *((_DWORD *)v56 + 1))
        + 56
        + *((_DWORD *)v56 + 1) * ((8 * *((_DWORD *)v56 + 2) + 167) & 0xFFFFFFF8)] = v79 != 0;
    else
      *((_DWORD *)a4 + 119) = (v79 << 23) | *((_DWORD *)a4 + 119) & 0xFF7FFFFF;
    *(_DWORD *)a4 |= 0x1000000u;
    v80 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v80[3] = v6;
    v80[4] = v6->Token.Flip.FenceValue;
    v80[5] = v6->Token.Flip.PresentCount;
    v80[6] = *((_QWORD *)&v6->Token.SurfaceComplete + 7);
    v80[7] = v6->CompositionBindingId;
    WdLogEvent5_WdPresentTokenEvent(v80);
    v54 = (unsigned int)(v54 + 1);
    v5 = v118;
    v51 = v103;
    v53 = v116;
  }
  *((_DWORD *)a4 + 35) = v51;
  if ( v29 < 0 )
    goto LABEL_136;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1668LL) & 0x20) != 0 )
  {
    memset(&v147, 0, sizeof(v147));
    v147.Flags.Value |= 0x2000u;
    v81 = (UINT *)*((_QWORD *)a4 + 3);
    if ( v81 )
    {
      v147.PrivateDriverDataSize = *v81;
      v147.pPrivateDriverData = v81 + 2;
    }
    pAllocationList = 0LL;
    v151 = 0LL;
    v153 = 0;
    if ( v51 <= 4 )
    {
      pAllocationList = (DXGK_ALLOCATIONLIST *)v152;
      v151 = (DXGK_ALLOCATIONLIST *)v152;
      goto LABEL_123;
    }
    if ( 0xFFFFFFFFFFFFFFFFuLL / v51 >= 0x20 )
    {
      pAllocationList = (DXGK_ALLOCATIONLIST *)ExAllocatePoolWithTag(PagedPool, 32LL * v51, 0x4B677844u);
      v151 = pAllocationList;
LABEL_123:
      v153 = v51;
      if ( pAllocationList )
      {
        memset(pAllocationList, 0, 32LL * v51);
        pAllocationList = v151;
      }
    }
    v147.pAllocationList = pAllocationList;
    if ( pAllocationList )
    {
      v83 = 0;
      v103 = 0;
      if ( v51 )
      {
        v84 = 0LL;
        v85 = 0LL;
        v86 = v116;
        while ( 1 )
        {
          *(_WORD *)((char *)&pAllocationList[1].hDeviceSpecificAllocation + v84 + 2) = *(_WORD *)(*(_QWORD *)(v85 + *((_QWORD *)v5 + 187))
                                                                                                 + 344LL);
          v87 = v104;
          if ( v83 )
            v87 = *(struct DXGALLOCATION **)(v86 + v85);
          *(HANDLE *)((char *)&v147.pAllocationList->hDeviceSpecificAllocation + v84) = (HANDLE)*((_QWORD *)v87 + 4);
          v88 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                  + 432LL)
                                                                                      + 8LL)
                                                                          + 248LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 440LL),
                  *((_QWORD *)v87 + 3),
                  *(unsigned __int8 *)(*(_QWORD *)(v85 + *((_QWORD *)v5 + 187)) + 367LL),
                  *(unsigned __int16 *)((char *)&v147.pAllocationList[1].hDeviceSpecificAllocation + v84 + 2));
          *(_QWORD *)((char *)&v147.pAllocationList->8 + v84) = v88;
          v83 = v103 + 1;
          v103 = v83;
          v85 += 8LL;
          v84 += 32LL;
          if ( v83 >= v51 )
            break;
          pAllocationList = v147.pAllocationList;
        }
        v6 = v119;
      }
      v147.FlipInterval = *((_DWORD *)a4 + 31);
      v147.Flags.Value ^= (*(_WORD *)&v147.Flags.0 ^ (unsigned __int16)(*(_DWORD *)a4 >> 11)) & 0x1700;
      v147.NumSrcAllocations = v51;
      v29 = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), *((void **)this + 23), &v147);
    }
    PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v151);
  }
  if ( v29 < 0 )
  {
LABEL_136:
    if ( v109 )
    {
      v89 = v121;
      v90 = (char *)v110 - v121;
      v91 = v109;
      do
      {
        VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 432LL),
          *(struct VIDMM_DEVICE **)(*((_QWORD *)this + 2) + 592LL),
          1 << *(_DWORD *)(*(_QWORD *)v89 + 344LL),
          *(struct VIDMM_ALLOC **)&v90[v89]);
        v89 += 8LL;
        --v91;
      }
      while ( v91 );
      v6 = v119;
    }
    v92 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v92[3] = v6;
    v92[4] = v6->Token.Flip.FenceValue;
    v92[5] = v6->Token.Flip.PresentCount;
    v92[6] = *((_QWORD *)&v6->Token.SurfaceComplete + 7);
    v92[7] = v6->CompositionBindingId;
    WdLogEvent5_WdPresentTokenEvent(v92);
    v6->Token.Flip.Flags.Value |= 0x1000000u;
    *(_DWORD *)a4 &= ~0x1000000u;
    v29 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v150);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v135);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v104);
  return (unsigned int)v29;
}
