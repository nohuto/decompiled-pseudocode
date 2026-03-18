/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00E5230 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9838 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00E9BB8 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1F88 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0015164 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00169F4 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??0DXGAUTOMUTEX@@QEAA@XZ @ 0x1C001B44C (--0DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C001B54C (-CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001B68C (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0023A84 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0028188 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ExFreeToNPagedLookasideList @ 0x1C00290DC (ExFreeToNPagedLookasideList.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C244 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C009631C (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C0096358 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00E6124 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C00E94F4 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA460 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C00EDF10 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C00EE2B0 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00EEF60 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EF240 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EF2DC (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F4C90 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C01459CC (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C0181AFC (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C01839B0 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0187C24 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C018BA5C (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        __int64 a3,
        char a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        unsigned int a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int8 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13,
        void *a14,
        UINT a15)
{
  char v16; // r12
  DXGDEVICE *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 Flags; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rax
  UINT v29; // r13d
  __int64 NumAllocations; // rax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r14
  int v33; // ebx
  SIZE_T v34; // rax
  SIZE_T v35; // rax
  SIZE_T v36; // rax
  void **p_Next; // r14
  SIZE_T v38; // rax
  SIZE_T v39; // rax
  void **v40; // rdx
  struct _D3DDDI_ALLOCATIONINFO2 *v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rax
  __int64 v46; // rbx
  PSLIST_ENTRY v47; // rcx
  __int64 v48; // rax
  UINT v49; // ecx
  size_t v50; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  __int64 v52; // rcx
  struct _D3DDDI_ALLOCATIONINFO2 *v53; // r8
  UINT v54; // r12d
  __int64 Value; // rdx
  struct _D3DDDI_ALLOCATIONINFO2 *v56; // r15
  __int64 v57; // r14
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  UINT v66; // eax
  unsigned __int64 hSection; // rbx
  SIZE_T Size; // r14
  UINT v69; // r14d
  __int64 v70; // r8
  void **v71; // r9
  __int64 v72; // rdx
  SIZE_T PrivateDriverDataSize; // rcx
  __int64 v74; // rax
  __int64 v75; // r12
  struct DXGRESOURCE *v76; // r15
  struct DXGALLOCATION *v77; // r14
  _QWORD *v78; // rax
  __int64 v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  char *v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  void **v86; // rax
  _QWORD *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rcx
  char *v90; // r9
  size_t v91; // r8
  char *pPrivateDriverData; // rdx
  UINT v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  PVOID v97; // r9
  size_t v98; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  __int64 v100; // rcx
  _QWORD *v101; // rax
  int v102; // r12d
  unsigned __int64 v103; // r14
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rax
  struct DXGRESOURCE *v107; // rbx
  __int64 i; // rax
  SIZE_T v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  PVOID v113; // r15
  _QWORD *v114; // rax
  void *v115; // rcx
  ULONG64 v116; // rdx
  __int64 v117; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v118; // eax
  struct _D3DKM_CREATESTANDARDALLOCATION *v119; // r8
  int v120; // eax
  __int64 v121; // rax
  __int64 v122; // rax
  char v123; // cl
  struct _D3DDDI_ALLOCATIONINFO2 *v124; // rbx
  D3DKMT_CREATEALLOCATIONFLAGS v125; // eax
  struct _DXGK_ALLOCATIONINFO *v126; // rdx
  UINT v127; // ecx
  unsigned int v128; // ecx
  __int64 v129; // rax
  __int64 v130; // r15
  __int64 v131; // r12
  UINT v132; // r14d
  struct DXGALLOCATION *v133; // rsi
  __int64 v134; // r8
  __int64 v135; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v136; // eax
  int v137; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  _QWORD *v141; // rax
  _QWORD *v142; // rax
  __int64 v143; // rbx
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rbx
  int v147; // eax
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rax
  struct DXGGLOBAL *Global; // rax
  int v152; // eax
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rax
  D3DKMT_HANDLE v158; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v159; // eax
  ULONG64 v160; // rcx
  __int64 v161; // r8
  struct DXGALLOCATION *j; // r9
  UINT v163; // eax
  struct DXGALLOCATION *v164; // r9
  UINT v165; // r14d
  struct DXGALLOCATION *v166; // r12
  struct DXGALLOCATION *v167; // rbx
  __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // rcx
  _QWORD *v172; // rax
  __int64 PrivateRuntimeDataSize; // rcx
  __int64 v174; // rcx
  unsigned __int8 v175; // bl
  size_t v176; // r8
  char *pPrivateRuntimeData; // rdx
  void *v178; // r9
  UINT v179; // eax
  __int64 v180; // rcx
  __int64 v181; // rdx
  __int64 v182; // r8
  __int64 v183; // rcx
  const void *v184; // rdx
  UINT v185; // r15d
  struct DXGALLOCATION *v186; // r14
  ULONG64 v187; // rbx
  __int64 v188; // rdx
  __int64 v189; // r8
  void *v190; // rcx
  const void *v191; // rdx
  __int64 v192; // r15
  unsigned int HostProcess; // r14d
  char v194; // bl
  _QWORD *v195; // rax
  D3DKMT_CREATEALLOCATIONFLAGS v196; // edx
  const void *v197; // r11
  const void *v198; // r10
  void **v199; // rax
  unsigned int v200; // r9d
  _DWORD *v201; // r14
  unsigned __int8 *v202; // rcx
  struct DXGRESOURCE *v203; // rdx
  __int64 v204; // rcx
  int v205; // eax
  __int64 v206; // rax
  struct DXGALLOCATION *v207; // rbx
  _QWORD *v208; // r15
  unsigned __int8 *v209; // r8
  struct _D3DDDI_ALLOCATIONINFO2 *v210; // r9
  _OWORD *v211; // rcx
  size_t v212; // r14
  __int64 v213; // r12
  const void *v214; // rdx
  char *v215; // rcx
  size_t v216; // r8
  void **v217; // rax
  __int64 v218; // rax
  _QWORD *v219; // r13
  __int64 v220; // rdx
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  UINT v222; // r15d
  struct DXGALLOCATION *v223; // r14
  int v224; // ebx
  struct DXGPROCESS *Current; // rax
  int v226; // eax
  __int64 v227; // rdx
  __int64 v228; // r8
  unsigned __int8 v229; // al
  __int64 v230; // rax
  UINT v231; // r14d
  struct DXGALLOCATION *v232; // rbx
  __int64 v233; // r8
  int v234; // eax
  __int64 v235; // rax
  UINT v236; // eax
  struct DXGALLOCATION *v237; // rbx
  _QWORD *v238; // rax
  __int64 v239; // rcx
  __int64 v240; // rax
  __int64 v241; // rdx
  _QWORD *v242; // rcx
  __int64 v243; // rcx
  __int64 v244; // rcx
  char v245; // bl
  int v246; // eax
  __int64 v247; // rcx
  void **v248; // rbx
  struct _SLIST_ENTRY *v249; // rdi
  __int64 v250; // rbx
  int v251; // [rsp+20h] [rbp-2A8h]
  struct DXGRESOURCE *v252; // [rsp+28h] [rbp-2A0h]
  unsigned __int8 v253[8]; // [rsp+70h] [rbp-258h] BYREF
  struct DXGALLOCATION *v254; // [rsp+78h] [rbp-250h]
  char v255; // [rsp+80h] [rbp-248h]
  struct DXGRESOURCE *v256; // [rsp+88h] [rbp-240h]
  struct _D3DDDI_ALLOCATIONINFO2 *v257; // [rsp+90h] [rbp-238h]
  char v258; // [rsp+98h] [rbp-230h]
  void **v259; // [rsp+A0h] [rbp-228h]
  void **v260; // [rsp+A8h] [rbp-220h]
  UINT v261; // [rsp+B0h] [rbp-218h]
  __int64 v262; // [rsp+B8h] [rbp-210h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v263; // [rsp+C0h] [rbp-208h]
  char v264; // [rsp+D0h] [rbp-1F8h]
  struct _DXGK_ALLOCATIONINFO *v265; // [rsp+D8h] [rbp-1F0h]
  int VidPnSourceId; // [rsp+E0h] [rbp-1E8h]
  void *Src; // [rsp+E8h] [rbp-1E0h]
  struct DXGALLOCATION *v268; // [rsp+F0h] [rbp-1D8h] BYREF
  PVOID Entry; // [rsp+F8h] [rbp-1D0h]
  struct DXGRESOURCE *v270; // [rsp+100h] [rbp-1C8h] BYREF
  PSLIST_ENTRY v271; // [rsp+108h] [rbp-1C0h]
  DXGDEVICE *v272; // [rsp+110h] [rbp-1B8h]
  struct _D3DKMT_CREATEALLOCATION *v273; // [rsp+120h] [rbp-1A8h]
  struct _DXGK_OPENALLOCATIONINFO *v274; // [rsp+130h] [rbp-198h]
  unsigned __int8 *v275; // [rsp+138h] [rbp-190h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v276[2]; // [rsp+140h] [rbp-188h] BYREF
  unsigned int *v277; // [rsp+148h] [rbp-180h]
  unsigned __int64 *v278; // [rsp+150h] [rbp-178h]
  unsigned __int8 *v279; // [rsp+158h] [rbp-170h] BYREF
  _QWORD *v280; // [rsp+160h] [rbp-168h]
  struct DXGALLOCATION *v281; // [rsp+168h] [rbp-160h]
  __int64 v282; // [rsp+170h] [rbp-158h]
  _BYTE v283[16]; // [rsp+178h] [rbp-150h] BYREF
  _DXGKARG_DESCRIBEALLOCATION v284; // [rsp+188h] [rbp-140h] BYREF
  struct DXGALLOCATION *v285; // [rsp+1B8h] [rbp-110h] BYREF
  struct COREDEVICEACCESS *v286; // [rsp+1C0h] [rbp-108h]
  DXGDEVICE *v287; // [rsp+1C8h] [rbp-100h]
  _BYTE v288[16]; // [rsp+1D0h] [rbp-F8h] BYREF
  _BYTE v289[24]; // [rsp+1E0h] [rbp-E8h] BYREF
  _BYTE v290[24]; // [rsp+1F8h] [rbp-D0h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v291; // [rsp+210h] [rbp-B8h] BYREF
  unsigned __int8 v292; // [rsp+2E0h] [rbp+18h]

  v292 = a3;
  v16 = a3;
  v18 = this;
  v287 = this;
  v272 = this;
  v273 = a2;
  v263 = a6;
  v286 = a7;
  v277 = a10;
  v278 = a11;
  v275 = a12;
  v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 144)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v20 + 24) = 4528LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !*((_DWORD *)v18 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v18 + 13));
  if ( a7 )
  {
    v19 = *((_QWORD *)a7 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v19 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v19 + 144));
  }
  if ( v16 && a4 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v21 + 24) = 4533LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = *((_QWORD *)v18 + 2);
  v23 = *(_QWORD *)(v22 + 16);
  v255 = *(_BYTE *)(v23 + 185);
  v264 = v255;
  if ( v255 && (*(_DWORD *)&a2->Flags & 0x1800) != 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, a2, a3);
    v24[3] = v18;
    v24[4] = -1073741811LL;
    v24[5] = 0LL;
    WdLogEvent5_WdWarning(v24);
    return 3221225485LL;
  }
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(v23 + 1836) & 0x10) == 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v23, Flags, a3);
      *(_QWORD *)(v27 + 24) = v18;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      return 3221225485LL;
    }
    if ( (Flags & 2) == 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, Flags, a3);
      v28[3] = v18;
      v28[4] = -1073741811LL;
      v28[5] = 1LL;
      WdLogEvent5_WdWarning(v28);
      return 3221225485LL;
    }
  }
  v29 = 0;
  v260 = 0LL;
  Src = 0LL;
  Entry = 0LL;
  v271 = 0LL;
  v282 = v22;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations > 5 )
  {
    v257 = 0LL;
    v31 = (unsigned int)NumAllocations;
    v32 = 96 * NumAllocations;
    v33 = 0;
    if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
    {
      v34 = 96LL * (unsigned int)NumAllocations;
      if ( !is_mul_ok(v31, 0x60uLL) )
        v34 = -1LL;
      v257 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new[](v34, 0x4B677844u, PagedPool);
    }
    else
    {
      v33 = -1073741675;
    }
    v265 = 0LL;
    if ( v32 <= 0xFFFFFFFF )
    {
      v33 = 0;
      if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v35 = 88LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
          v35 = -1LL;
        v265 = (struct _DXGK_ALLOCATIONINFO *)operator new[](v35, 0x4B677844u, PagedPool);
      }
      else
      {
        v33 = -1073741675;
      }
    }
    v274 = 0LL;
    if ( v33 >= 0 )
    {
      v33 = 0;
      if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v36 = 32LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
          v36 = -1LL;
        v274 = (struct _DXGK_OPENALLOCATIONINFO *)operator new[](v36, 0x4B677844u, PagedPool);
      }
      else
      {
        v33 = -1073741675;
      }
    }
    p_Next = 0LL;
    v259 = 0LL;
    if ( v33 >= 0 )
    {
      v33 = 0;
      if ( 8 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v38 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v38 = -1LL;
        p_Next = (void **)operator new[](v38, 0x4B677844u, PagedPool);
        v259 = p_Next;
        if ( v16 )
        {
          v39 = 8LL * a2->NumAllocations;
          if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
            v39 = -1LL;
          v40 = (void **)operator new[](v39, 0x4B677844u, PagedPool);
          v260 = v40;
LABEL_48:
          v41 = v257;
          if ( v33 < 0 || !v257 || !v265 || !v274 || !p_Next || !v40 && v16 )
          {
            operator delete[](v257);
            operator delete[](v265);
            operator delete[](v274);
            operator delete[](p_Next);
            operator delete[](v260);
            v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
            v45[3] = v18;
            v45[4] = a2->NumAllocations;
            if ( v33 >= 0 )
            {
              v45[5] = -1073741801LL;
              WdLogEvent5_WdWarning(v45);
              return 3221225495LL;
            }
            else
            {
              v45[5] = v33;
              WdLogEvent5_WdWarning(v45);
              return (unsigned int)v33;
            }
          }
          goto LABEL_63;
        }
      }
      else
      {
        v33 = -1073741675;
      }
    }
    v40 = 0LL;
    goto LABEL_48;
  }
  v46 = v22 + 1344;
  ++*(_DWORD *)(v46 + 20);
  v47 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v46);
  Entry = v47;
  if ( !v47 )
  {
    ++*(_DWORD *)(v46 + 24);
    v47 = (PSLIST_ENTRY)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v46 + 48))(
                          *(unsigned int *)(v46 + 36),
                          *(unsigned int *)(v46 + 44),
                          *(unsigned int *)(v46 + 40));
    Entry = v47;
  }
  v271 = v47;
  if ( !v47 )
  {
    v48 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v48 + 24) = v18;
    WdLogEvent5_WdLowResource(v48);
    return -1073741801LL;
  }
  v265 = (struct _DXGK_ALLOCATIONINFO *)&v47[45];
  v274 = (struct _DXGK_OPENALLOCATIONINFO *)&v47[30];
  p_Next = (void **)&v47[40].Next;
  v259 = (void **)&v47[40].Next;
  v40 = (void **)(&v47[42].Next + 1);
  v260 = (void **)(&v47[42].Next + 1);
  v41 = (struct _D3DDDI_ALLOCATIONINFO2 *)v47;
  v257 = (struct _D3DDDI_ALLOCATIONINFO2 *)v47;
LABEL_63:
  v49 = 0;
  v261 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      p_Next[v49] = 0LL;
      if ( v16 )
        v40[v49] = 0LL;
      ++v49;
    }
    while ( v49 < a2->NumAllocations );
    v261 = v49;
  }
  v254 = 0LL;
  v268 = 0LL;
  v262 = 0LL;
  v253[0] = 0;
  v256 = 0LL;
  v258 = 0;
  v270 = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v283);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v289, 0LL, 0);
  if ( v16 )
  {
    v50 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v50) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v50 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v41, pAllocationInfo, v50);
  }
  else
  {
    memmove(v41, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  VidPnSourceId = -1;
  if ( (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
  {
    v41->pPrivateDriverData = a14;
    v41->PrivateDriverDataSize = a15;
  }
  v54 = 0;
  if ( a2->NumAllocations )
  {
    Value = (unsigned int)a2->Flags;
    while ( 1 )
    {
      if ( (Value & 0x800) != 0 )
      {
        v53 = &v41[v54];
        Value = v53->Flags.Value;
        v52 = (unsigned int)Value;
        if ( (Value & 1) != 0 )
        {
          VidPnSourceId = v53->VidPnSourceId;
          if ( !*((_QWORD *)v18 + 211) )
          {
            v52 = (unsigned int)Value & 0xFFFFFFFE;
            v53->Flags.Value = v52;
          }
        }
        if ( (v52 & 2) != 0 )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, Value, v53);
          v78[3] = v18;
          v78[4] = -1073741811LL;
          goto LABEL_114;
        }
      }
      v56 = &v41[v54];
      if ( (v56->Flags.Value & 1) != 0 )
      {
        v57 = *((_QWORD *)v18 + 211);
        if ( !v57 )
          goto LABEL_118;
        v58 = *(_QWORD *)(v57 + 2456);
        if ( !v58 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v58 + 16)) )
        {
          v59 = WdLogNewEntry5_WdAssertion(v58);
          *(_QWORD *)(v59 + 24) = 4790LL;
          WdLogEvent5_WdAssertion(v59);
        }
        v60 = *(unsigned int *)(*(_QWORD *)(v57 + 2456) + 80LL);
        if ( (_DWORD)v60 != *((_DWORD *)v18 + 424) )
        {
          v61 = WdLogNewEntry5_WdAssertion(v60);
          *(_QWORD *)(v61 + 24) = 4796LL;
          WdLogEvent5_WdAssertion(v61);
        }
        v52 = v56->VidPnSourceId;
        if ( (_DWORD)v52 == -3 )
        {
          if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v52, Value) + 323) & 0x40) == 0
            && !*(_DWORD *)(*(_QWORD *)(v57 + 2456) + 508LL) )
          {
            LODWORD(v75) = -1073741811;
            v79 = WdLogNewEntry5_WdWarning(v63, v62, v64);
            *(_QWORD *)(v79 + 24) = v18;
            *(_QWORD *)(v79 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v79);
            v76 = 0LL;
            v77 = 0LL;
            goto LABEL_269;
          }
          v65 = WdLogNewEntry5_WdEvent(v63, v62);
          *(_QWORD *)(v65 + 24) = v18;
          WdLogEvent5_WdEvent(v65);
        }
        else if ( (unsigned int)v52 >= *((_DWORD *)v18 + 424) )
        {
LABEL_118:
          v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, Value, v53);
          v78[3] = v18;
          v78[4] = v257[v54].VidPnSourceId;
          v78[5] = -1073741811LL;
          goto LABEL_114;
        }
        if ( !*((_DWORD *)v18 + 82)
          && !a4
          && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v57 + 2456), v18, v56->VidPnSourceId) )
        {
          v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, Value, v53);
          v80[3] = -1071775744LL;
          v80[4] = v18;
          v80[5] = v257[v54].VidPnSourceId;
          v80[6] = v54;
          WdLogEvent5_WdWarning(v80);
          LODWORD(v75) = -1071775744;
          v76 = 0LL;
          v77 = 0LL;
          goto LABEL_269;
        }
      }
      v66 = v56->Flags.Value;
      if ( (v66 & 2) != 0 && (v66 & 1) == 0 )
        break;
      Value = (unsigned int)a2->Flags;
      if ( (Value & 0x10000) != 0 )
      {
        v52 = ((unsigned int)Value >> 5) & 1;
        if ( (((unsigned int)Value >> 5) & 1) != 0 && !v56->hSection || (Value & 0x20000) != 0 && !v56->hSection )
        {
          v81 = WdLogNewEntry5_WdError(v52);
          *(_QWORD *)(v81 + 24) = v18;
          *(_QWORD *)(v81 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v81);
          LODWORD(v75) = -1073741811;
          v76 = 0LL;
          v77 = 0LL;
          goto LABEL_269;
        }
        if ( (hSection = (unsigned __int64)v56->hSection,
              Size = a2->pStandardAllocation->ExistingHeapData.Size,
              (_DWORD)v52)
          && hSection != (hSection & 0xFFFFFFFFFFFFF000uLL)
          || Size != (Size & 0xFFFFFFFFFFFFF000uLL) )
        {
          v82 = WdLogNewEntry5_WdError(v52);
          *(_QWORD *)(v82 + 24) = hSection;
          *(_QWORD *)(v82 + 32) = Size;
          WdLogEvent5_WdError(v82);
          LODWORD(v75) = -1073741811;
          v76 = 0LL;
          v77 = 0LL;
          goto LABEL_269;
        }
      }
      ++v54;
      v41 = v257;
      if ( v54 >= a2->NumAllocations )
        goto LABEL_109;
    }
    v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v52, Value, v53);
    v78[3] = -1073741811LL;
    v78[4] = v18;
LABEL_114:
    WdLogEvent5_WdWarning(v78);
    LODWORD(v75) = -1073741811;
LABEL_115:
    v76 = 0LL;
    v77 = 0LL;
    goto LABEL_269;
  }
LABEL_109:
  v69 = 0;
  v261 = 0;
  v70 = v292;
  v71 = v259;
  while ( v69 < a2->NumAllocations )
  {
    v72 = v69;
    PrivateDriverDataSize = v41[v72].PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize > 0x7FFFFFFF )
    {
      v74 = WdLogNewEntry5_WdWarning(PrivateDriverDataSize, v72 * 96, v70);
      *(_QWORD *)(v74 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v74);
      LODWORD(v75) = v262;
      v76 = 0LL;
      v77 = 0LL;
      goto LABEL_269;
    }
    if ( v41[v72].pPrivateDriverData && (_DWORD)PrivateDriverDataSize )
    {
      if ( v292 && (*(_DWORD *)&a2->Flags & 0x10000) == 0 )
        PrivateDriverDataSize = (unsigned int)(2 * PrivateDriverDataSize);
      v83 = (char *)operator new[](PrivateDriverDataSize, 0x4B677844u, PagedPool);
      v86 = v259;
      v259[v69] = v83;
      if ( !v83 )
      {
        LODWORD(v75) = -1073741801;
        v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, 0LL, v85);
        v87[3] = v18;
        v88 = a2->NumAllocations;
LABEL_129:
        v87[4] = v88;
        v87[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v87);
        v76 = 0LL;
        v77 = 0LL;
        goto LABEL_269;
      }
      if ( !v292 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
      {
        v71 = v86;
        v70 = v292;
      }
      else
      {
        v89 = v69;
        v90 = &v83[v41[v89].PrivateDriverDataSize];
        v260[v69] = v90;
        v91 = v41[v89].PrivateDriverDataSize;
        pPrivateDriverData = (char *)v41[v89].pPrivateDriverData;
        if ( &pPrivateDriverData[v91] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[v91] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v90, pPrivateDriverData, v91);
        v70 = v292;
        v71 = v259;
      }
LABEL_139:
      v261 = ++v69;
    }
    else
    {
      v71[v69] = 0LL;
      if ( !(_BYTE)v70 )
        goto LABEL_139;
      v260[v69++] = 0LL;
      v261 = v69;
    }
  }
  if ( (_BYTE)v70 )
  {
    if ( a2->pStandardAllocation )
    {
      v93 = a2->PrivateDriverDataSize;
      if ( v93 )
      {
        v97 = operator new[](v93, 0x4B677844u, PagedPool);
        Src = v97;
        if ( !v97 )
        {
          LODWORD(v75) = -1073741801;
          v87 = (_QWORD *)WdLogNewEntry5_WdWarning(v95, v94, v96);
          v87[3] = v18;
          v88 = a2->PrivateDriverDataSize;
          goto LABEL_129;
        }
        v98 = a2->PrivateDriverDataSize;
        pStandardAllocation = a2->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v98) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v98 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v97, pStandardAllocation, v98);
      }
    }
  }
  LODWORD(v75) = DXGDEVICE::OpenResourceObject(
                   v18,
                   a2,
                   v41,
                   a4,
                   a9,
                   a5,
                   &v270,
                   v253,
                   v263,
                   (struct DXGAUTOMUTEX *)v283,
                   (struct DXGAUTOPUSHLOCK *)v289);
  if ( (int)v75 < 0 )
    goto LABEL_115;
  v76 = v270;
  v256 = v270;
  if ( v270 && (*((_DWORD *)v270 + 1) & 1) == 0 && (*(_DWORD *)&a2->Flags & 2) != 0 )
  {
    v101 = (_QWORD *)WdLogNewEntry5_WdError(v100);
    v101[3] = v18;
    v101[4] = v76;
    v101[5] = -1073741811LL;
    WdLogEvent5_WdError(v101);
    LODWORD(v75) = -1073741811;
    v77 = 0LL;
    goto LABEL_269;
  }
  v102 = v253[0];
  v103 = a2->NumAllocations;
  v104 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v104 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v104 + 144)) )
  {
    v106 = WdLogNewEntry5_WdAssertion(v105);
    *(_QWORD *)(v106 + 24) = 4448LL;
    WdLogEvent5_WdAssertion(v106);
  }
  v107 = v270;
  if ( v76 )
  {
    if ( !v102 )
    {
      for ( i = *((_QWORD *)v270 + 3); i; v103 = (unsigned int)(v103 + 1) )
        i = *(_QWORD *)(i + 64);
    }
    if ( (unsigned int)v103 > 0x10 )
    {
      v109 = 8 * v103;
      if ( !is_mul_ok(v103, 8uLL) )
        v109 = -1LL;
      v113 = operator new[](v109, 0x4B677844u, PagedPool);
      if ( !v113 )
      {
        v114 = (_QWORD *)WdLogNewEntry5_WdWarning(v111, v110, v112);
        v114[3] = v18;
        v114[4] = v103;
        v114[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v114);
        LODWORD(v75) = -1073741801;
        v77 = v268;
        v254 = v268;
        v76 = v256;
        goto LABEL_269;
      }
      if ( !v102 )
      {
        v115 = (void *)*((_QWORD *)v107 + 8);
        if ( v115 )
          operator delete[](v115);
      }
      *((_QWORD *)v107 + 8) = v113;
      v76 = v256;
    }
  }
  LODWORD(v75) = DXGDEVICE::CreateAllocationObjects(v18, a2->NumAllocations, &v268, v107, &v285);
  v262 = (unsigned int)v75;
  v77 = v268;
  v254 = v268;
  if ( (int)v75 < 0 )
    goto LABEL_269;
  if ( v285 )
  {
    DXGDEVICE::AppendAllocationListToResourceOrDevice((struct _KTHREAD **)v18, v107, v268, v285);
    v258 = 1;
  }
  v118 = a2->Flags;
  if ( (*(_WORD *)&v118 & 0x800) != 0 )
  {
    v119 = v263;
    if ( VidPnSourceId != -1 )
    {
      *(_DWORD *)(*((_QWORD *)v107 + 7) + 12LL) |= 0x40u;
      *((_DWORD *)v107 + 1) |= 8u;
      *(_DWORD *)(*((_QWORD *)v107 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v107 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
    }
  }
  else if ( (*(_WORD *)&v118 & 0x1000) != 0 )
  {
    v120 = *(_DWORD *)v263;
    if ( (*(_DWORD *)v263 & 0x80u) == 0 )
    {
      v119 = v263;
    }
    else
    {
      v121 = WdLogNewEntry5_WdAssertion(v117);
      *(_QWORD *)(v121 + 24) = 5105LL;
      WdLogEvent5_WdAssertion(v121);
      v119 = v263;
      v120 = *(_DWORD *)v263;
    }
    if ( (v120 & 0x100) != 0 )
      *((_DWORD *)v107 + 1) |= 8u;
  }
  else
  {
    if ( v107 )
    {
      v122 = *((_QWORD *)v107 + 7);
      if ( v122 )
      {
        if ( (*(_BYTE *)(v122 + 12) & 0x60) == 0x60 )
          *((_DWORD *)v107 + 1) |= 8u;
      }
    }
    v119 = v263;
  }
  if ( v255 )
  {
LABEL_211:
    v136 = a2->Flags;
    v77 = v254;
    if ( (*(_WORD *)&v136 & 0x800) != 0 )
    {
      memset(&v284, 0, sizeof(v284));
      v284.hAllocation = *(HANDLE *)(*((_QWORD *)v254 + 6) + 16LL);
      v137 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)v18 + 2), &v284);
      v75 = v137;
      v262 = v137;
      if ( v137 < 0 )
      {
        v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v139, v138, v140);
        v141[3] = v75;
        v141[4] = v18;
        v141[5] = *((unsigned int *)v77 + 4);
        v141[6] = v77;
        WdLogEvent5_WdWarning(v141);
        v76 = v256;
        goto LABEL_269;
      }
      if ( v284.Format == D3DDDIFMT_UNKNOWN && v284.Height != 1 )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdWarning(v139, v138, v140);
        v142[3] = -1073741811LL;
        v142[4] = v18;
        v142[5] = v284.Height;
        WdLogEvent5_WdWarning(v142);
        LODWORD(v75) = -1073741811;
        v76 = v256;
        goto LABEL_269;
      }
      v143 = *((_QWORD *)v77 + 5);
      v144 = *(unsigned int *)(*(_QWORD *)(v143 + 56) + 12LL);
      if ( (v144 & 0x20) == 0 )
      {
        v145 = WdLogNewEntry5_WdAssertion(v144);
        *(_QWORD *)(v145 + 24) = 5251LL;
        WdLogEvent5_WdAssertion(v145);
        v143 = *((_QWORD *)v77 + 5);
      }
      v146 = *(_QWORD *)(v143 + 56);
      *(_DWORD *)(v146 + 192) = v284.Width;
      *(_DWORD *)(v146 + 196) = v284.Height;
      *(_DWORD *)(v146 + 200) = v284.Format;
      *(_QWORD *)(v146 + 208) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                  *(VIDMM_EXPORT **)(*((_QWORD *)v18 + 2) + 544LL),
                                  *(struct VIDMM_GLOBAL **)(*((_QWORD *)v18 + 2) + 552LL),
                                  *((struct _VIDMM_MULTI_ALLOC **)v77 + 3));
      *(_QWORD *)(v146 + 216) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2)
                                                                                                  + 544LL)
                                                                                      + 8LL)
                                                                          + 752LL))(
                                  *(_QWORD *)(*((_QWORD *)v18 + 2) + 552LL),
                                  *((_QWORD *)v77 + 3));
      v147 = VidPnSourceId;
      *(_DWORD *)(v146 + 224) = VidPnSourceId;
      if ( v147 != -1 )
      {
        *(_DWORD *)(v146 + 12) |= 0x40u;
        *(_DWORD *)(v146 + 12) ^= ((unsigned __int8)*(_DWORD *)(v146 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
    }
    else if ( (*(_WORD *)&v136 & 0x1000) != 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 544LL) + 8LL)
                                                     + 760LL))(
        *(_QWORD *)(*((_QWORD *)v18 + 2) + 552LL),
        *((_QWORD *)v254 + 3),
        *((_QWORD *)v119 + 42));
    }
    v76 = v256;
    if ( v253[0] )
    {
      if ( v256 )
      {
        if ( (*((_DWORD *)v256 + 1) & 1) != 0 )
        {
          v148 = *((_QWORD *)v256 + 7);
          if ( !*(_DWORD *)(v148 + 24) && (*(_DWORD *)(v148 + 12) & 8) == 0 )
          {
            DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v288);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v288);
            if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
            {
              v150 = WdLogNewEntry5_WdAssertion(v149);
              *(_QWORD *)(v150 + 24) = 5304LL;
              WdLogEvent5_WdAssertion(v150);
            }
            Global = DXGGLOBAL::GetGlobal(v149);
            v152 = DXGGLOBAL::AllocHandle((__int64)Global, *((_QWORD *)v76 + 7), 2u);
            v155 = *((_QWORD *)v76 + 7);
            *(_DWORD *)(v155 + 24) = v152;
            if ( !*(_DWORD *)(*((_QWORD *)v76 + 7) + 24LL) )
            {
              v156 = WdLogNewEntry5_WdWarning(v155, v153, v154);
              *(_QWORD *)(v156 + 24) = v18;
              *(_QWORD *)(v156 + 32) = -1073741801LL;
              WdLogEvent5_WdWarning(v156);
              LODWORD(v75) = -1073741801;
              DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v288);
              goto LABEL_269;
            }
            DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v288);
          }
        }
      }
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v290, (struct _KTHREAD **)v18 + 23);
      v157 = *((_QWORD *)v18 + 7);
      if ( v157 )
      {
        *(_QWORD *)(v157 + 32) = v76;
        v157 = *((_QWORD *)v18 + 7);
      }
      *((_QWORD *)v76 + 5) = v157;
      *((_QWORD *)v18 + 7) = v76;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v290);
    }
    v158 = 0;
    if ( v76 )
      v158 = *((_DWORD *)v76 + 4);
    a2->hResource = v158;
    v159 = a2->Flags;
    if ( ((*(_BYTE *)&v159 & 2) != 0 || a4) && (*(_BYTE *)&v159 & 0x40) == 0 )
      v160 = *(unsigned int *)(*((_QWORD *)v76 + 7) + 24LL);
    else
      v160 = 0LL;
    a2->hGlobalShare = v160;
    if ( v292 )
    {
      v161 = 0LL;
      v261 = 0;
      for ( j = v77; ; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
      {
        v163 = a2->NumAllocations;
        if ( (unsigned int)v161 >= v163 )
          break;
        v116 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v161;
        v160 = MmUserProbeAddress;
        if ( v116 >= MmUserProbeAddress )
          v116 = MmUserProbeAddress;
        *(_DWORD *)v116 = *((_DWORD *)j + 4);
        v161 = (unsigned int)(v161 + 1);
        v261 = v161;
      }
      if ( (int)v75 < 0 )
        goto LABEL_269;
    }
    else
    {
      v161 = 0LL;
      v164 = v77;
      v163 = a2->NumAllocations;
      if ( v163 )
      {
        do
        {
          v116 = 96LL * (unsigned int)v161;
          v160 = (ULONG64)a2->pAllocationInfo;
          *(_DWORD *)(v116 + v160) = *((_DWORD *)v164 + 4);
          v161 = (unsigned int)(v161 + 1);
          v164 = (struct DXGALLOCATION *)*((_QWORD *)v164 + 8);
          v163 = a2->NumAllocations;
        }
        while ( (unsigned int)v161 < v163 );
      }
    }
    v165 = 0;
    v261 = 0;
    v166 = v254;
    v167 = v254;
    v281 = v254;
    if ( v163 )
    {
      do
      {
        v116 = *(unsigned int *)(*((_QWORD *)v167 + 6) + 4LL);
        if ( (v116 & 1) != 0 )
        {
          LODWORD(v75) = DXGDEVICE::AddPrimaryAllocation(v18, v167);
          v262 = (unsigned int)v75;
          if ( (int)v75 < 0 )
            goto LABEL_268;
        }
        else if ( (v116 & 2) != 0 )
        {
          DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v18, ((unsigned int)v116 >> 6) & 0xF, v167, 0, 1u);
        }
        v261 = ++v165;
        v167 = (struct DXGALLOCATION *)*((_QWORD *)v167 + 8);
        v281 = v167;
      }
      while ( v165 < a2->NumAllocations );
      v166 = v254;
    }
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      if ( a2->pPrivateRuntimeData )
      {
        v168 = *((_QWORD *)v76 + 7);
        if ( *(_QWORD *)(v168 + 96) )
        {
          if ( *(_DWORD *)(v168 + 104) != a2->PrivateRuntimeDataSize )
          {
            LODWORD(v75) = -1073741811;
            v172 = (_QWORD *)WdLogNewEntry5_WdWarning(v168, v116, v161);
            v172[3] = v18;
            v172[4] = a2->PrivateRuntimeDataSize;
            v172[5] = *(unsigned int *)(*((_QWORD *)v76 + 7) + 104LL);
            goto LABEL_267;
          }
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)v76 + 7) + 96LL) = operator new[](a2->PrivateRuntimeDataSize, 0x4B677844u, PagedPool);
          v171 = *((_QWORD *)v76 + 7);
          if ( !*(_QWORD *)(v171 + 96) )
          {
            LODWORD(v75) = -1073741801;
            v172 = (_QWORD *)WdLogNewEntry5_WdWarning(v171, v169, v170);
            v172[3] = v18;
            PrivateRuntimeDataSize = a2->PrivateRuntimeDataSize;
LABEL_266:
            v172[4] = PrivateRuntimeDataSize;
            v172[5] = -1073741801LL;
LABEL_267:
            WdLogEvent5_WdWarning(v172);
LABEL_268:
            v77 = v254;
            goto LABEL_269;
          }
          *(_DWORD *)(v171 + 104) = a2->PrivateRuntimeDataSize;
        }
        v175 = v292;
        if ( v292 )
        {
          v176 = a2->PrivateRuntimeDataSize;
          pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
          v178 = *(void **)(*((_QWORD *)v76 + 7) + 96LL);
          if ( &pPrivateRuntimeData[v176] < pPrivateRuntimeData
            || (unsigned __int64)&pPrivateRuntimeData[v176] > MmUserProbeAddress )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(v178, pPrivateRuntimeData, v176);
        }
        else
        {
          memmove(*(void **)(*((_QWORD *)v76 + 7) + 96LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
        }
      }
      else
      {
        v175 = v292;
      }
      if ( a2->pStandardAllocation )
      {
        v179 = a2->PrivateDriverDataSize;
        if ( v179 )
        {
          v180 = *((_QWORD *)v76 + 7);
          if ( *(_QWORD *)(v180 + 112) )
          {
            if ( *(_DWORD *)(v180 + 120) != v179 )
            {
              LODWORD(v75) = -1073741811;
              v172 = (_QWORD *)WdLogNewEntry5_WdWarning(v180, v116, v161);
              v172[3] = v18;
              v172[4] = a2->PrivateDriverDataSize;
              v172[5] = *(unsigned int *)(*((_QWORD *)v76 + 7) + 120LL);
              v172[6] = 5535LL;
              goto LABEL_267;
            }
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)v76 + 7) + 112LL) = operator new[](v179, 0x4B677844u, PagedPool);
            v183 = *((_QWORD *)v76 + 7);
            if ( !*(_QWORD *)(v183 + 112) )
            {
              LODWORD(v75) = -1073741801;
              v172 = (_QWORD *)WdLogNewEntry5_WdWarning(v183, v181, v182);
              v172[3] = v18;
              PrivateRuntimeDataSize = a2->PrivateDriverDataSize;
              goto LABEL_266;
            }
            *(_DWORD *)(v183 + 120) = a2->PrivateDriverDataSize;
            v179 = a2->PrivateDriverDataSize;
          }
          v184 = Src;
          if ( !v175 )
            v184 = a2->pStandardAllocation;
          memmove(*(void **)(*((_QWORD *)v76 + 7) + 112LL), v184, v179);
        }
      }
      v185 = 0;
      v261 = 0;
      v186 = v166;
      v281 = v166;
      if ( a2->NumAllocations )
      {
        v160 = (ULONG64)v257;
        do
        {
          v187 = v160 + 96LL * v185;
          if ( *(_QWORD *)(v187 + 16) )
          {
            *(_QWORD *)(*((_QWORD *)v186 + 6) + 32LL) = operator new[](
                                                          *(unsigned int *)(v187 + 24),
                                                          0x4B677844u,
                                                          PagedPool);
            v190 = *(void **)(*((_QWORD *)v186 + 6) + 32LL);
            if ( !v190 )
            {
              v262 = 3221225495LL;
              v195 = (_QWORD *)WdLogNewEntry5_WdWarning(3221225495LL, v188, v189);
              v195[3] = v18;
              v195[4] = v185 + 1;
              v195[5] = v257[v185].PrivateDriverDataSize;
              v195[6] = -1073741801LL;
              WdLogEvent5_WdWarning(v195);
              LODWORD(v75) = v262;
              goto LABEL_312;
            }
            if ( !v292 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
              v191 = *(const void **)(v187 + 16);
            else
              v191 = v260[v185];
            memmove(v190, v191, *(unsigned int *)(v187 + 24));
            *(_DWORD *)(*((_QWORD *)v186 + 6) + 40LL) = *(_DWORD *)(v187 + 24);
            v160 = (ULONG64)v257;
          }
          v261 = ++v185;
          v186 = (struct DXGALLOCATION *)*((_QWORD *)v186 + 8);
          v281 = v186;
        }
        while ( v185 < a2->NumAllocations );
      }
    }
    v192 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
    if ( !*(_BYTE *)(v192 + 185) || a4 )
    {
      LODWORD(v75) = v262;
      goto LABEL_365;
    }
    if ( (*(_DWORD *)&a2->Flags & 0x1800) != 0
      || (HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v18 + 5))) == 0 )
    {
      v218 = WdLogNewEntry5_WdError(v160);
      *(_QWORD *)(v218 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v218);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v289);
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v283);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v270);
      if ( Entry )
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)(v282 + 1344), Entry);
      return 3221225473LL;
    }
    v279 = 0LL;
    v194 = DXGDEVICE::UmdManagesResidency(v18) && v263 && (unsigned int)(*((_DWORD *)v263 + 4) - 1) <= 2;
    v196 = a2->Flags;
    if ( ((*(unsigned int *)&v196 >> 1) & 1) != 0 )
      v197 = *(const void **)(*((_QWORD *)v256 + 7) + 96LL);
    else
      v197 = 0LL;
    v198 = Src;
    if ( v292 )
    {
      v199 = v260;
      if ( (*(_DWORD *)&v196 & 0x10000) == 0 )
        goto LABEL_321;
    }
    else
    {
      v198 = a2->pStandardAllocation;
    }
    v199 = v259;
LABEL_321:
    if ( ((*(_DWORD *)&a2->Flags >> 1) & 1) != 0 )
      v200 = *((_DWORD *)v256 + 5);
    else
      v200 = 0;
    v75 = (unsigned int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v192 + 4080),
                          HostProcess,
                          *((_DWORD *)v18 + 84),
                          v200,
                          a2,
                          v257,
                          v199,
                          v198,
                          v197,
                          v292,
                          v194,
                          &v279);
    v262 = v75;
    v201 = v279;
    v277 = (unsigned int *)v279;
    if ( !v279 )
    {
LABEL_312:
      v76 = v256;
      goto LABEL_268;
    }
    v202 = v279;
    v275 = v279;
    v203 = v256;
    if ( !v256 )
    {
LABEL_335:
      v207 = v254;
      v278 = (unsigned __int64 *)v254;
      v208 = 0LL;
      v280 = 0LL;
      if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v203 )
      {
        v208 = *(_QWORD **)(*((_QWORD *)v203 + 7) + 128LL);
        v280 = v208;
      }
      while ( 1 )
      {
        VidPnSourceId = v29;
        if ( v29 >= a2->NumAllocations )
          break;
        v209 = &v202[72 * v29];
        *((_DWORD *)v207 + 24) = *((_DWORD *)v209 + 4);
        *((_DWORD *)v207 + 32) = *((_DWORD *)v209 + 7);
        *((_DWORD *)v207 + 33) = *((_DWORD *)v202 + 3);
        if ( v202[12] & 1 | ((v202[12] & 2) != 0) )
          *((_QWORD *)v207 + 13) = v257[v29].hSection;
        *(_DWORD *)(*((_QWORD *)v207 + 6) + 4LL) = *((_DWORD *)v209 + 6);
        v210 = &v257[v29];
        if ( (v210->Flags.Value & 1) != 0 && *((_QWORD *)v18 + 211) != *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) )
          *(_DWORD *)(*((_QWORD *)v207 + 6) + 4LL) |= 4u;
        *(_DWORD *)(*((_QWORD *)v207 + 6) + 4LL) |= 0x20000u;
        *(_QWORD *)(*((_QWORD *)v207 + 6) + 16LL) = *((_QWORD *)v207 + 6);
        v211 = (_OWORD *)*((_QWORD *)v207 + 6);
        *((_QWORD *)v207 + 15) = *((_QWORD *)v209 + 4);
        v211[4] = *(_OWORD *)(v209 + 40);
        v211[5] = *(_OWORD *)(v209 + 56);
        v211[6] = *(_OWORD *)(v209 + 72);
        if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
          *(_DWORD *)(*((_QWORD *)v207 + 6) + 4LL) |= 0x40000u;
        if ( !v292 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
        {
          v212 = v210->PrivateDriverDataSize;
          v213 = v29;
          v216 = v212;
          v214 = v259[v213];
          v215 = (char *)v210->pPrivateDriverData;
        }
        else
        {
          v212 = v210->PrivateDriverDataSize;
          v213 = v29;
          v214 = v260[v213];
          v215 = (char *)v210->pPrivateDriverData;
          if ( (unsigned __int64)&v215[v212] > MmUserProbeAddress || &v215[v212] <= v215 )
            *(_BYTE *)MmUserProbeAddress = 0;
          v216 = v212;
        }
        memmove(v215, v214, v216);
        if ( v208 )
        {
          if ( !v292 || (v217 = v260, (*(_DWORD *)&a2->Flags & 0x10000) != 0) )
            v217 = v259;
          memmove((void *)*(v208 - 2), v217[v213], v212);
          v208 = (_QWORD *)*v208;
          v280 = v208;
        }
        v201 = v277;
        LODWORD(v75) = v262;
        ++v29;
        v207 = (struct DXGALLOCATION *)*((_QWORD *)v207 + 8);
        v278 = (unsigned __int64 *)v207;
        v202 = v275;
      }
      operator delete[](v201);
      if ( (int)v75 < 0 )
      {
LABEL_360:
        v29 = 0;
        v76 = v256;
        goto LABEL_268;
      }
LABEL_365:
      v219 = (_QWORD *)*((_QWORD *)v18 + 2);
      if ( (*(_DWORD *)(v219[2] + 1836LL) & 0x40) != 0 && v263 && (*(_DWORD *)v263 & 0x200) == 0 )
      {
        memset(&v291, 0, sizeof(v291));
        v291.Protection.Value = 1LL;
        v222 = 0;
        v223 = v254;
        if ( a2->NumAllocations )
        {
          while ( 1 )
          {
            v224 = (*((_DWORD *)v223 + 18) >> 12) & 0x3F;
            if ( *((_DWORD *)v263 + 4) == 4 )
            {
              BaseAddress = *(unsigned int *)(*((_QWORD *)v263 + 3) + 12LL);
              if ( (((_DWORD)BaseAddress - 1) & 0xFFFFFFFC) != 0 || (_DWORD)BaseAddress == 2 )
              {
                if ( DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL)) )
                  v224 = -1;
              }
            }
            if ( v255 )
            {
              Current = DXGPROCESS::GetCurrent(BaseAddress, v220);
              v226 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 4080LL),
                       *((_DWORD *)Current + 98),
                       v18,
                       0,
                       *((_DWORD *)v223 + 24),
                       &v291);
            }
            else
            {
              LOBYTE(v251) = 0;
              v226 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v219[68] + 8LL) + 792LL))(
                       v219[69],
                       0LL,
                       *((_QWORD *)v223 + 3),
                       &v291,
                       v251,
                       v224);
            }
            v262 = (unsigned int)v226;
            if ( v226 < 0 )
              break;
            v229 = DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(*((_QWORD *)v18 + 2) + 16LL));
            BaseAddress = v291.BaseAddress;
            if ( v229 )
              BaseAddress = v291.VirtualAddress;
            v291.BaseAddress = BaseAddress;
            v291.VirtualAddress = 0LL;
            ++v222;
            v223 = (struct DXGALLOCATION *)*((_QWORD *)v223 + 8);
            if ( v222 >= a2->NumAllocations )
              goto LABEL_381;
          }
          v230 = WdLogNewEntry5_WdWarning((unsigned int)v226, v227, v228);
          LODWORD(v75) = v262;
          *(_QWORD *)(v230 + 24) = (int)v262;
          WdLogEvent5_WdWarning(v230);
          v29 = 0;
          v76 = v256;
        }
        else
        {
LABEL_381:
          v29 = 0;
          LODWORD(v75) = v262;
          v76 = v256;
        }
        goto LABEL_268;
      }
      goto LABEL_360;
    }
    *((_DWORD *)v256 + 5) = *((_DWORD *)v279 + 1);
    v204 = (unsigned int)a2->Flags;
    if ( (v204 & 2) == 0 )
    {
LABEL_334:
      v202 = (unsigned __int8 *)v201;
      goto LABEL_335;
    }
    v205 = v201[2];
    if ( (v204 & 0x40) != 0 )
    {
      if ( v205 )
      {
        v206 = WdLogNewEntry5_WdAssertion(v204);
        *(_QWORD *)(v206 + 24) = 5656LL;
LABEL_332:
        WdLogEvent5_WdAssertion(v206);
        v203 = v256;
      }
    }
    else if ( !v205 )
    {
      v206 = WdLogNewEntry5_WdAssertion(v204);
      *(_QWORD *)(v206 + 24) = 5660LL;
      goto LABEL_332;
    }
    *(_DWORD *)(*((_QWORD *)v203 + 7) + 28LL) = v201[2];
    goto LABEL_334;
  }
  memset(v265, 0, 88LL * a2->NumAllocations);
  v123 = a4;
  if ( a4 )
  {
    v124 = v257;
  }
  else
  {
    v252 = v107;
    v124 = v257;
    LODWORD(v75) = DXGDEVICE::CreateDriverAllocations(v18, a2, v257, v265, v77, v252, v259, v260, Src, v263, v292, a13);
    v123 = 0;
  }
  if ( (int)v75 >= 0 )
  {
    LODWORD(v75) = DXGDEVICE::OpenAllocations(v18, a2, v124, v77, v274, v259, v260, Src, v292, v123, a8, v277, v278);
    if ( (int)v75 >= 0 )
    {
      v125 = a2->Flags;
      v126 = v265;
      v127 = v265->Flags.Value;
      if ( (*(_BYTE *)&v125 & 8) != 0 )
      {
        v127 |= 0x4000008u;
        v265->Flags.Value = v127;
        v125 = a2->Flags;
      }
      if ( (*(_WORD *)&v125 & 0x100) != 0 )
      {
        v127 = v127 & 0xFEFFFFFB | 0x1000000;
        goto LABEL_199;
      }
      if ( (*(_WORD *)&v125 & 0x200) != 0 )
      {
        v127 |= 0x800004u;
LABEL_199:
        v126->Flags.Value = v127;
      }
      v128 = (*(_DWORD *)&a2->Flags & 0x8000) != 0 ? v127 | 0x800 : v127 & 0xFFFFF7FF;
      v126->Flags.Value = v128;
      LODWORD(v75) = DXGDEVICE::CreateVidMmAllocations<_DXGK_ALLOCATIONINFO>(
                       (__int64)v18,
                       (__int64)a2,
                       (__int64)v124,
                       (__int64)v126,
                       (__int64)v77,
                       (unsigned int *)v263,
                       a4,
                       (__int64)v286);
      v262 = (unsigned int)v75;
      if ( (int)v75 >= 0 )
      {
        if ( v275 )
        {
          v129 = *((_QWORD *)v18 + 2);
          v130 = *(_QWORD *)(v129 + 552);
          v131 = *(_QWORD *)(v129 + 544);
          v132 = 0;
          if ( a2->NumAllocations )
          {
            v133 = v254;
            do
            {
              v134 = *(_DWORD *)&a2->Flags >> 5;
              LOBYTE(v134) = (*(_DWORD *)&a2->Flags & 0x20) != 0;
              v135 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(v131 + 8) + 624LL))(
                       v130,
                       *((_QWORD *)v133 + 12 * v132 + 3),
                       v134);
              *(_QWORD *)&v275[8 * v132++] = v135;
            }
            while ( v132 < a2->NumAllocations );
            v18 = v287;
          }
          LODWORD(v75) = v262;
        }
        v119 = v263;
        goto LABEL_211;
      }
    }
  }
LABEL_269:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v283);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v289);
  if ( (int)v75 < 0 )
  {
    if ( v77 )
    {
      v231 = 0;
      v232 = v254;
      if ( a2->NumAllocations )
      {
        do
        {
          v233 = *((_QWORD *)v232 + 6);
          if ( *(_QWORD *)(v233 + 8) && !a4 )
          {
            if ( (v234 = *(_DWORD *)(v233 + 4), (v234 & 1) != 0) && !*((_DWORD *)v18 + 82) || (v234 & 2) != 0 )
            {
              if ( (v234 & 0x10) != 0 )
              {
                v235 = WdLogNewEntry5_WdAssertion(v174);
                *(_QWORD *)(v235 + 24) = 5865LL;
                WdLogEvent5_WdAssertion(v235);
                v233 = *((_QWORD *)v232 + 6);
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)v18 + 2) + 544LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v18 + 2) + 552LL),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v233 + 8));
              *(_DWORD *)(*((_QWORD *)v232 + 6) + 4LL) |= 0x10u;
            }
          }
          ++v231;
          v232 = (struct DXGALLOCATION *)*((_QWORD *)v232 + 8);
        }
        while ( v231 < a2->NumAllocations );
        v76 = v256;
      }
      v77 = v254;
    }
    if ( v253[0] )
    {
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v276, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(&v270, (struct DXGRESOURCE **)v276);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v276);
      DXGDEVICE::RemoveResourceFromDeviceList(v18, v76);
      DXGDEVICE::DestroyResource(v18, v76, 0LL, 0);
    }
    else if ( v77 )
    {
      if ( v258 )
        DXGDEVICE::RemoveAllocationsWithoutDestroy(v18, v76, v77, a2->NumAllocations);
      v236 = 0;
      *(_QWORD *)&v276[0].0 = 0LL;
      if ( !v76 || *((_QWORD *)v76 + 7) )
      {
        do
        {
          v237 = v77;
          v238 = (_QWORD *)((char *)v77 + 64);
          v77 = (struct DXGALLOCATION *)*((_QWORD *)v77 + 8);
          *((_QWORD *)v237 + 7) = 0LL;
          *v238 = 0LL;
          if ( v76 )
          {
            v239 = *((_QWORD *)v76 + 7);
            if ( v239 )
            {
              if ( *(_QWORD *)(*((_QWORD *)v237 + 6) + 48LL) )
              {
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v239 + 32));
                --*(_DWORD *)(*((_QWORD *)v76 + 7) + 124LL);
                v240 = *((_QWORD *)v237 + 6) + 48LL;
                v241 = *(_QWORD *)v240;
                v242 = *(_QWORD **)(*((_QWORD *)v237 + 6) + 56LL);
                if ( *(_QWORD *)(*(_QWORD *)v240 + 8LL) != v240 || *v242 != v240 )
                  __fastfail(3u);
                *v242 = v241;
                *(_QWORD *)(v241 + 8) = v242;
                *(_QWORD *)(*((_QWORD *)v237 + 6) + 48LL) = 0LL;
                v243 = *((_QWORD *)v76 + 7) + 32LL;
                *(_QWORD *)(v243 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v243, 0LL);
                KeLeaveCriticalRegion();
              }
            }
          }
          DXGDEVICE::DestroyAllocations(v18, 0LL, 0, v237, 0LL, v276[0]);
        }
        while ( v77 );
        v77 = v254;
        v236 = v276[0].Value;
      }
      if ( v76 )
      {
        v244 = *((_QWORD *)v76 + 7);
        if ( v244 )
        {
          v245 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v244 + 32));
          v246 = *((_DWORD *)v76 + 1);
          if ( (v246 & 0x10) == 0 )
          {
            *((_DWORD *)v76 + 1) = v246 | 0x10;
            v245 = 1;
          }
          v247 = *((_QWORD *)v76 + 7) + 32LL;
          *(_QWORD *)(v247 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v247, 0LL);
          KeLeaveCriticalRegion();
          if ( v245 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList(v18, v76);
            DXGDEVICE::DestroyResource(v18, v76, 0LL, 0);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations(v18, v76, 0, v77, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v236);
        }
      }
    }
  }
  else if ( v253[0] )
  {
    DXGPROCESS::CommitResourceHandleSafe(*((DXGPROCESS **)v18 + 5), v76);
  }
  v248 = v259;
  if ( a2->NumAllocations )
  {
    do
      operator delete[](v248[v29++]);
    while ( v29 < a2->NumAllocations );
  }
  operator delete[](Src);
  if ( a2->NumAllocations > 5 )
  {
    operator delete[](v257);
    operator delete[](v265);
    operator delete[](v274);
    operator delete[](v248);
    operator delete[](v260);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v289);
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v283);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v270);
  v249 = (struct _SLIST_ENTRY *)Entry;
  if ( Entry )
  {
    v250 = v282 + 1344;
    ++*(_DWORD *)(v282 + 1372);
    if ( ExQueryDepthSList((PSLIST_HEADER)v250) < *(_WORD *)(v250 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v250, v249);
    }
    else
    {
      ++*(_DWORD *)(v250 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v250 + 56))(v249);
    }
  }
  return (unsigned int)v75;
}
