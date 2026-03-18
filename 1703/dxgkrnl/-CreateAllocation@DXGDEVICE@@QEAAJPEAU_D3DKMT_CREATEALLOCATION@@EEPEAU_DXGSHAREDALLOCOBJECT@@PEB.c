/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0
 * Callers:
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C1F00 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00C2264 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C00DD060 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0005208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000529C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C000711C (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000DF98 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??0DXGAUTOMUTEX@@QEAA@XZ @ 0x1C00143F0 (--0DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00144F0 (-CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001462C (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002596C (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VmBusSendCreateAllocation@DXGADAPTER@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEBU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C002F080 (-VmBusSendCreateAllocation@DXGADAPTER@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEBU_D3DDDI_ALLOCAT.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXGADAPTER@@QEAAJIPEAVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0030B80 (-VmBusSendMapGpuVirtualAddress@DXGADAPTER@@QEAAJIPEAVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRES.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0087220 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C008725C (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00C18A0 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C00C1A04 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00C1AA8 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C2AB0 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C00C6700 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@H@Z @ 0x1C00C6A70 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C00C7200 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C74C0 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C755C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00CAD84 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C01887E0 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateAllocation(
        DXGDEVICE *this,
        struct _D3DKMT_CREATEALLOCATION *a2,
        __int64 a3,
        __int64 a4,
        struct _DXGSHAREDALLOCOBJECT *a5,
        const struct _D3DKM_CREATESTANDARDALLOCATION *a6,
        struct COREDEVICEACCESS *a7,
        unsigned int a8,
        struct _EPROCESS *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12)
{
  char v12; // r15
  unsigned __int8 v13; // di
  DXGDEVICE *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rax
  __int64 Flags; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  UINT v26; // r15d
  unsigned __int64 NumAllocations; // rdx
  void *v28; // r13
  int v29; // ebx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rax
  _BYTE *v36; // r12
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  _BYTE *v40; // rdx
  PVOID v41; // rcx
  _QWORD *v42; // rax
  UINT v43; // ecx
  __int64 v44; // r13
  __int64 v45; // r8
  __int64 v46; // r9
  size_t v47; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  char *v49; // r12
  char *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // ebx
  __int64 v55; // rcx
  char *v56; // r12
  __int64 v57; // rdi
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // eax
  _QWORD *v62; // rax
  ULONG64 v63; // rdx
  __int64 v64; // r8
  struct DXGALLOCATION *j; // r9
  struct DXGRESOURCE *v66; // r12
  struct DXGALLOCATION *v67; // rdi
  _QWORD *v68; // rax
  UINT v69; // r12d
  char *v70; // rdi
  unsigned int v71; // eax
  __int64 v72; // rax
  bool v73; // zf
  unsigned int v74; // eax
  SIZE_T v75; // rdx
  char *PoolWithTag; // rax
  _QWORD *v77; // rax
  __int64 PrivateDriverDataSize; // rcx
  char *v79; // r9
  size_t v80; // r8
  char *v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  void *v85; // r9
  size_t v86; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  __int64 v88; // rcx
  _QWORD *v89; // rax
  int v90; // r13d
  unsigned __int64 v91; // rdi
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  struct DXGRESOURCE *v98; // rbx
  __int64 i; // rcx
  unsigned __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  void *v105; // r12
  _QWORD *v106; // rax
  void *v107; // rcx
  __int64 v108; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v109; // eax
  struct _D3DKM_CREATESTANDARDALLOCATION *v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rax
  char v113; // cl
  PVOID v114; // rdi
  _DWORD *v115; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v116; // eax
  __int64 v117; // rax
  UINT v118; // r12d
  __int64 v119; // rbx
  __int64 v120; // r15
  struct DXGALLOCATION *v121; // r14
  unsigned __int64 *v122; // r13
  D3DKMT_CREATEALLOCATIONFLAGS v123; // eax
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rdi
  struct DXGALLOCATION *v134; // r12
  int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v143; // r9
  int v144; // eax
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rax
  D3DKMT_HANDLE v151; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v152; // eax
  char *v153; // rcx
  UINT v154; // edi
  struct DXGALLOCATION *v155; // r13
  struct DXGALLOCATION *v156; // rbx
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rcx
  _QWORD *v162; // rax
  __int64 PrivateRuntimeDataSize; // rcx
  unsigned __int8 v164; // bl
  size_t v165; // r8
  char *pPrivateRuntimeData; // rdx
  void *v167; // r9
  __int64 v168; // rcx
  __int64 v169; // rdx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rcx
  const void *v173; // rdx
  UINT v174; // edi
  char *v175; // rbx
  __int64 v176; // rdx
  __int64 v177; // r8
  __int64 v178; // r9
  void *v179; // rcx
  const void *v180; // rdx
  _QWORD *v181; // rax
  __int64 v182; // rdi
  int HostProcess; // ebx
  char v184; // r11
  void *v185; // r10
  void *v186; // rdx
  void **v187; // rax
  int v188; // r9d
  char *v189; // rcx
  struct DXGALLOCATION *v190; // rbx
  _QWORD *v191; // rdi
  UINT v192; // eax
  char *v193; // r8
  char *v194; // r9
  _OWORD *v195; // rcx
  size_t v196; // r12
  __int64 v197; // r13
  char *v198; // rcx
  const void *v199; // rdx
  size_t v200; // r8
  const void *v201; // rdx
  __int64 v202; // rax
  __int64 v203; // rdi
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  UINT v205; // r12d
  struct DXGALLOCATION *v206; // rbx
  int v207; // edx
  struct DXGPROCESS *Current; // rax
  int v209; // eax
  __int64 v210; // rcx
  __int64 v211; // rax
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  UINT v216; // edi
  struct DXGALLOCATION *v217; // rbx
  __int64 v218; // rax
  int v219; // eax
  __int64 v220; // rax
  __int64 v221; // r8
  __int64 v222; // r9
  UINT Value; // eax
  struct DXGALLOCATION *v224; // rbx
  _QWORD *v225; // rax
  __int64 v226; // rcx
  __int64 v227; // rax
  __int64 v228; // rdx
  _QWORD *v229; // rcx
  __int64 v230; // rcx
  __int64 v231; // rcx
  char v232; // bl
  int v233; // eax
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // r9
  _QWORD *v237; // rbx
  void *v238; // rcx
  int v239; // [rsp+20h] [rbp-708h]
  unsigned __int8 v240[8]; // [rsp+70h] [rbp-6B8h] BYREF
  struct DXGALLOCATION *v241; // [rsp+78h] [rbp-6B0h]
  struct DXGRESOURCE *v242; // [rsp+80h] [rbp-6A8h]
  char v243; // [rsp+88h] [rbp-6A0h]
  char v244; // [rsp+89h] [rbp-69Fh]
  UINT v245; // [rsp+8Ch] [rbp-69Ch]
  PVOID v246; // [rsp+90h] [rbp-698h]
  char v247; // [rsp+98h] [rbp-690h]
  int v248; // [rsp+9Ch] [rbp-68Ch]
  PVOID v249; // [rsp+A0h] [rbp-688h]
  int v250; // [rsp+A8h] [rbp-680h]
  PVOID v251; // [rsp+B0h] [rbp-678h]
  struct DXGALLOCATION *v252; // [rsp+B8h] [rbp-670h] BYREF
  PVOID P; // [rsp+C0h] [rbp-668h]
  __int64 v254; // [rsp+C8h] [rbp-660h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v255; // [rsp+D0h] [rbp-658h]
  struct DXGRESOURCE *v256[4]; // [rsp+E0h] [rbp-648h] BYREF
  PVOID Src; // [rsp+100h] [rbp-628h]
  PVOID v258; // [rsp+108h] [rbp-620h]
  unsigned __int64 *v259; // [rsp+110h] [rbp-618h]
  unsigned __int64 *v260; // [rsp+118h] [rbp-610h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v261[2]; // [rsp+120h] [rbp-608h] BYREF
  unsigned int *v262; // [rsp+128h] [rbp-600h]
  PVOID v263; // [rsp+130h] [rbp-5F8h] BYREF
  _QWORD *v264; // [rsp+138h] [rbp-5F0h]
  struct DXGALLOCATION *v265; // [rsp+140h] [rbp-5E8h]
  __int64 v266; // [rsp+148h] [rbp-5E0h]
  DXGDEVICE *v267; // [rsp+150h] [rbp-5D8h]
  _BYTE v268[16]; // [rsp+158h] [rbp-5D0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v269; // [rsp+168h] [rbp-5C0h] BYREF
  struct DXGALLOCATION *v270; // [rsp+198h] [rbp-590h] BYREF
  _BYTE v271[16]; // [rsp+1A0h] [rbp-588h] BYREF
  _BYTE v272[24]; // [rsp+1B0h] [rbp-578h] BYREF
  _BYTE v273[24]; // [rsp+1C8h] [rbp-560h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v274; // [rsp+1E0h] [rbp-548h] BYREF
  _BYTE v275[40]; // [rsp+250h] [rbp-4D8h] BYREF
  _BYTE v276[40]; // [rsp+278h] [rbp-4B0h] BYREF
  char v277; // [rsp+2A0h] [rbp-488h] BYREF
  char v278; // [rsp+340h] [rbp-3E8h] BYREF
  char v279; // [rsp+500h] [rbp-228h] BYREF
  unsigned __int8 v280; // [rsp+740h] [rbp+18h]
  char v281; // [rsp+748h] [rbp+20h]

  v281 = a4;
  v280 = a3;
  v12 = a4;
  v13 = a3;
  v15 = this;
  v267 = this;
  v256[1] = this;
  v256[2] = (struct DXGRESOURCE *)a2;
  v255 = a6;
  v266 = (__int64)a7;
  v262 = a10;
  v259 = a11;
  v260 = a12;
  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v16 + 144)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v16, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 3989LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !*((_DWORD *)v15 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v15 + 13));
  if ( a7 )
  {
    v16 = *((_QWORD *)a7 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v16 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v16 + 144));
  }
  if ( v13 && v12 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 3994LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = *((_QWORD *)v15 + 2);
  v243 = *(_BYTE *)(*(_QWORD *)(v19 + 16) + 186LL);
  v247 = v243;
  if ( v243 && ((*(_WORD *)&a2->Flags | (unsigned __int16)(*(_DWORD *)&a2->Flags >> 1)) & 0x800) != 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdWarning(
                      (unsigned int)(*(_DWORD *)&a2->Flags | (*(_DWORD *)&a2->Flags >> 1)),
                      a2,
                      v19,
                      a4);
    v20[3] = v15;
    v20[4] = -1073741811LL;
    v20[5] = 0LL;
    WdLogEvent5_WdWarning(v20);
    return 3221225485LL;
  }
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    v23 = *(unsigned int *)(*(_QWORD *)(v19 + 16) + 1676LL);
    if ( (v23 & 0x10) == 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v23, Flags, v19, a4);
      *(_QWORD *)(v24 + 24) = v15;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
      return 3221225485LL;
    }
    if ( (Flags & 2) == 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, Flags, v19, a4);
      v25[3] = v15;
      v25[4] = -1073741811LL;
      v25[5] = 1LL;
      WdLogEvent5_WdWarning(v25);
      return 3221225485LL;
    }
  }
  v26 = 0;
  v249 = 0LL;
  Src = 0LL;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations <= 5 )
  {
    v246 = &v279;
    P = &v278;
    v258 = &v277;
    v36 = v275;
    v251 = v275;
    v40 = v276;
    v249 = v276;
  }
  else
  {
    v28 = 0LL;
    v246 = 0LL;
    if ( 96 * NumAllocations > 0xFFFFFFFF )
    {
      v248 = -1;
      v29 = -1073741675;
    }
    else
    {
      v248 = 96 * NumAllocations;
      v29 = 0;
    }
    if ( v29 >= 0 )
    {
      v30 = 96 * NumAllocations;
      if ( !is_mul_ok(NumAllocations, 0x60uLL) )
        v30 = -1LL;
      v28 = operator new(v30, 0x4B677844u, PagedPool);
      v246 = v28;
    }
    P = 0LL;
    if ( v29 >= 0 )
    {
      v31 = a2->NumAllocations;
      if ( 88 * v31 > 0xFFFFFFFF )
      {
        v248 = -1;
        v29 = -1073741675;
      }
      else
      {
        v248 = 88 * v31;
        v29 = 0;
      }
      if ( v29 >= 0 )
      {
        v32 = 88 * v31;
        if ( !is_mul_ok(v31, 0x58uLL) )
          v32 = -1LL;
        P = operator new(v32, 0x4B677844u, PagedPool);
      }
    }
    v258 = 0LL;
    v33 = 0xFFFFFFFFLL;
    if ( v29 >= 0 )
    {
      v34 = a2->NumAllocations;
      if ( 32 * v34 > 0xFFFFFFFF )
      {
        v248 = -1;
        v29 = -1073741675;
      }
      else
      {
        v248 = 32 * v34;
        v29 = 0;
      }
      if ( v29 >= 0 )
      {
        v35 = 32 * v34;
        if ( !is_mul_ok(v34, 0x20uLL) )
          v35 = -1LL;
        v258 = operator new(v35, 0x4B677844u, PagedPool);
        v33 = 0xFFFFFFFFLL;
      }
    }
    v36 = 0LL;
    v251 = 0LL;
    if ( v29 < 0
      || ((v37 = a2->NumAllocations, 8 * v37 > 0xFFFFFFFF) ? (v248 = -1, v29 = -1073741675) : (v248 = 8 * v37, v29 = 0),
          v29 < 0) )
    {
      v40 = 0LL;
    }
    else
    {
      v38 = 8 * v37;
      if ( !is_mul_ok(v37, 8uLL) )
        v38 = -1LL;
      v36 = operator new(v38, 0x4B677844u, PagedPool);
      v251 = v36;
      if ( v13 )
      {
        v39 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v39 = -1LL;
        v40 = operator new(v39, 0x4B677844u, PagedPool);
        v249 = v40;
      }
      else
      {
        v40 = 0LL;
      }
    }
    if ( v29 < 0 )
      goto LABEL_64;
    if ( !v28 )
    {
LABEL_66:
      if ( P )
        ExFreePoolWithTag(P, 0);
      v41 = v258;
      if ( v258 )
        ExFreePoolWithTag(v258, 0);
      if ( v36 )
        ExFreePoolWithTag(v36, 0);
      if ( v249 )
        ExFreePoolWithTag(v249, 0);
      v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40, v33, a4);
      v42[3] = v15;
      v42[4] = a2->NumAllocations;
      if ( v29 >= 0 )
      {
        v29 = -1073741801;
        v42[5] = -1073741801LL;
      }
      else
      {
        v42[5] = v29;
      }
      WdLogEvent5_WdWarning(v42);
      return (unsigned int)v29;
    }
    if ( !P || !v258 || !v36 || !v40 && v13 )
    {
LABEL_64:
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
      goto LABEL_66;
    }
  }
  v43 = 0;
  v245 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      *(_QWORD *)&v36[8 * v43] = 0LL;
      if ( v13 )
        *(_QWORD *)&v40[8 * v43] = 0LL;
      ++v43;
    }
    while ( v43 < a2->NumAllocations );
    v245 = v43;
  }
  v241 = 0LL;
  v252 = 0LL;
  LODWORD(v44) = 0;
  v240[0] = 0;
  v242 = 0LL;
  v244 = 0;
  v256[0] = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v268);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v272, 0LL, v45, v46);
  if ( v13 )
  {
    v47 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v47) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v47 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v49 = (char *)v246;
    memmove(v246, pAllocationInfo, v47);
  }
  else
  {
    v49 = (char *)v246;
    memmove(v246, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v250 = -1;
  v54 = 0;
  if ( a2->NumAllocations )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)&a2->Flags & 0x800) != 0 )
      {
        v55 = 96LL * v54;
        v50 = (char *)*(unsigned int *)&v49[v55 + 32];
        if ( ((unsigned __int8)v50 & 1) != 0 )
        {
          v52 = *(unsigned int *)&v49[v55 + 28];
          v250 = *(_DWORD *)&v49[v55 + 28];
          if ( !*((_QWORD *)v15 + 225) )
          {
            v50 = (char *)((unsigned int)v50 & 0xFFFFFFFE);
            *(_DWORD *)&v49[v55 + 32] = (_DWORD)v50;
          }
        }
        if ( (*(_DWORD *)&v49[v55 + 32] & 2) != 0 )
        {
          v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v50, v52, v53);
          v62[3] = v15;
          v62[4] = -1073741811LL;
          goto LABEL_112;
        }
      }
      v51 = 96LL * v54;
      v56 = &v49[v51];
      if ( (*((_DWORD *)v56 + 8) & 1) != 0 )
      {
        v57 = *((_QWORD *)v15 + 225);
        if ( !v57 )
          goto LABEL_116;
        v58 = *(_QWORD *)(v57 + 2280);
        if ( !v58 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v58 + 16)) )
        {
          v59 = WdLogNewEntry5_WdAssertion(v58, v50, v52, v53);
          *(_QWORD *)(v59 + 24) = 4232LL;
          WdLogEvent5_WdAssertion(v59);
        }
        v51 = *(unsigned int *)(*(_QWORD *)(v57 + 2280) + 80LL);
        if ( (_DWORD)v51 != *((_DWORD *)v15 + 452) )
        {
          v60 = WdLogNewEntry5_WdAssertion(v51, v50, v52, v53);
          *(_QWORD *)(v60 + 24) = 4238LL;
          WdLogEvent5_WdAssertion(v60);
        }
        v52 = *((unsigned int *)v56 + 7);
        if ( (unsigned int)v52 >= *((_DWORD *)v15 + 452) )
        {
LABEL_116:
          v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
          v62[3] = v15;
          v62[4] = *((unsigned int *)v246 + 24 * v54 + 7);
          v62[5] = -1073741811LL;
          goto LABEL_112;
        }
        if ( !*((_DWORD *)v15 + 82)
          && !v281
          && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v57 + 2280), v15, v52) )
        {
          v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
          LODWORD(v44) = -1071775744;
          v68[3] = -1071775744LL;
          v68[4] = v15;
          v68[5] = *((unsigned int *)v246 + 24 * v54 + 7);
          v68[6] = v54;
          WdLogEvent5_WdWarning(v68);
          goto LABEL_113;
        }
      }
      v61 = *((_DWORD *)v56 + 8);
      if ( (v61 & 2) != 0 && (v61 & 1) == 0 )
      {
        v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
        v62[3] = -1073741811LL;
        v62[4] = v15;
LABEL_112:
        WdLogEvent5_WdWarning(v62);
        LODWORD(v44) = -1073741811;
LABEL_113:
        v66 = v242;
        goto LABEL_114;
      }
      if ( ++v54 >= a2->NumAllocations )
        break;
      v49 = (char *)v246;
    }
    v13 = v280;
  }
  v69 = 0;
  v245 = 0;
  while ( v69 < a2->NumAllocations )
  {
    v70 = (char *)v246 + 96 * v69;
    v71 = *((_DWORD *)v70 + 6);
    if ( v71 > 0x7FFFFFFF )
    {
      v72 = WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
      *(_QWORD *)(v72 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v72);
      goto LABEL_113;
    }
    if ( !*((_QWORD *)v70 + 2) || !v71 )
    {
      *((_QWORD *)v251 + v69) = 0LL;
      v13 = v280;
      if ( v280 )
        *((_QWORD *)v249 + v69) = 0LL;
      goto LABEL_144;
    }
    v53 = v280;
    if ( v280 )
    {
      v73 = 2 * v71 == 0;
      v74 = 2 * v71;
      v75 = v74;
      if ( v73 )
      {
        v75 = 1LL;
        goto LABEL_131;
      }
      if ( v74 <= 0x7FFFFFFFuLL )
      {
LABEL_131:
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v75, 0x4B677844u);
        v53 = v280;
      }
      else
      {
        PoolWithTag = 0LL;
      }
      v50 = PoolWithTag;
      v52 = 8LL * v69;
      v51 = (__int64)v251 + v52;
      *(_QWORD *)((char *)v251 + v52) = PoolWithTag;
      goto LABEL_133;
    }
    v50 = (char *)ExAllocatePoolWithTag(PagedPool, *((unsigned int *)v70 + 6), 0x4B677844u);
    v53 = 0LL;
    v52 = 8LL * v69;
    v51 = (__int64)v251 + v52;
    *(_QWORD *)((char *)v251 + v52) = v50;
LABEL_133:
    if ( !*(_QWORD *)v51 )
    {
      LODWORD(v44) = -1073741801;
      v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
      v77[3] = v15;
      PrivateDriverDataSize = a2->NumAllocations;
LABEL_135:
      v77[4] = PrivateDriverDataSize;
      v77[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v77);
      goto LABEL_113;
    }
    if ( (_BYTE)v53 )
    {
      v79 = &v50[*((unsigned int *)v70 + 6)];
      *(_QWORD *)((char *)v249 + v52) = v79;
      v80 = *((unsigned int *)v70 + 6);
      v81 = (char *)*((_QWORD *)v70 + 2);
      if ( &v81[v80] < v81 || (unsigned __int64)&v81[v80] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v79, v81, v80);
      v13 = v280;
    }
    else
    {
      v13 = v280;
    }
LABEL_144:
    v245 = ++v69;
  }
  if ( v13 && a2->pStandardAllocation )
  {
    v85 = operator new(a2->PrivateDriverDataSize, 0x4B677844u, PagedPool);
    Src = v85;
    if ( !v85 )
    {
      LODWORD(v44) = -1073741801;
      v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, v82, v84, 0LL);
      v77[3] = v15;
      PrivateDriverDataSize = a2->PrivateDriverDataSize;
      goto LABEL_135;
    }
    v86 = a2->PrivateDriverDataSize;
    pStandardAllocation = a2->pStandardAllocation;
    if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v86) < pStandardAllocation
      || (unsigned __int64)pStandardAllocation + v86 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v85, pStandardAllocation, v86);
  }
  LODWORD(v44) = DXGDEVICE::OpenResourceObject(
                   v15,
                   a2,
                   (struct _D3DDDI_ALLOCATIONINFO2 *)v246,
                   v281,
                   a9,
                   a5,
                   v256,
                   v240,
                   (struct DXGAUTOMUTEX *)v268,
                   (struct DXGAUTOPUSHLOCK *)v272);
  if ( (int)v44 < 0 )
    goto LABEL_113;
  v66 = v256[0];
  v242 = v256[0];
  if ( !v256[0] || (*((_DWORD *)v256[0] + 1) & 1) != 0 || (*(_DWORD *)&a2->Flags & 2) == 0 )
  {
    v90 = v240[0];
    v91 = a2->NumAllocations;
    v92 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v92 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v92 + 144)) )
    {
      v97 = WdLogNewEntry5_WdAssertion(v94, v93, v95, v96);
      *(_QWORD *)(v97 + 24) = 3913LL;
      WdLogEvent5_WdAssertion(v97);
    }
    v98 = v256[0];
    if ( v256[0] )
    {
      if ( !v90 )
      {
        for ( i = *((_QWORD *)v256[0] + 3); i; v91 = (unsigned int)(v91 + 1) )
          i = *(_QWORD *)(i + 64);
      }
      if ( (unsigned int)v91 > 0x10 )
      {
        v100 = 8 * v91;
        if ( !is_mul_ok(v91, 8uLL) )
          v100 = -1LL;
        v105 = operator new(v100, 0x4B677844u, PagedPool);
        if ( !v105 )
        {
          v106 = (_QWORD *)WdLogNewEntry5_WdWarning(v102, v101, v103, v104);
          v106[3] = v15;
          v106[4] = v91;
          v106[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v106);
          LODWORD(v44) = -1073741801;
          v67 = v252;
          v241 = v252;
          v66 = v242;
          goto LABEL_369;
        }
        if ( !v90 )
        {
          v107 = (void *)*((_QWORD *)v98 + 8);
          if ( v107 )
            ExFreePoolWithTag(v107, 0);
        }
        *((_QWORD *)v98 + 8) = v105;
        v66 = v242;
      }
    }
    LODWORD(v44) = DXGDEVICE::CreateAllocationObjects(v15, a2->NumAllocations, &v252, v98, &v270);
    v254 = (unsigned int)v44;
    if ( (int)v44 < 0 )
    {
      v67 = v252;
      v241 = v252;
      goto LABEL_369;
    }
    j = v270;
    v241 = v252;
    if ( v270 )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice((struct _KTHREAD **)v15, v98, v252, v270);
      v244 = 1;
    }
    v109 = a2->Flags;
    if ( (*(_WORD *)&v109 & 0x800) != 0 )
    {
      if ( v250 != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v98 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v98 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v98 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v98 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
      goto LABEL_189;
    }
    if ( (*(_WORD *)&v109 & 0x1000) != 0 )
    {
      v110 = v255;
      if ( (*(_DWORD *)v255 & 0x80u) != 0 )
      {
        v111 = WdLogNewEntry5_WdAssertion(v108, v63, v64, j);
        *(_QWORD *)(v111 + 24) = 4488LL;
        WdLogEvent5_WdAssertion(v111);
      }
      if ( (*(_DWORD *)v110 & 0x100) == 0 )
      {
LABEL_189:
        if ( !v243 )
        {
          memset(P, 0, 88LL * a2->NumAllocations);
          v113 = v281;
          if ( !v281 )
          {
            LODWORD(v44) = DXGDEVICE::CreateDriverAllocations(
                             v15,
                             a2,
                             (struct _D3DDDI_ALLOCATIONINFO2 *)v246,
                             (struct _DXGK_ALLOCATIONINFO *)P,
                             v241,
                             v98,
                             (void **)v251,
                             (void **)v249,
                             Src,
                             v255,
                             v280);
            v113 = 0;
          }
          if ( (int)v44 < 0 )
            goto LABEL_368;
          v114 = v246;
          LODWORD(v44) = DXGDEVICE::OpenAllocations(
                           v15,
                           a2,
                           (struct _D3DDDI_ALLOCATIONINFO2 *)v246,
                           v241,
                           (struct _DXGK_OPENALLOCATIONINFO *)v258,
                           (void **)v251,
                           (void **)v249,
                           Src,
                           v280,
                           v113,
                           a8,
                           v262,
                           v259);
          if ( (int)v44 < 0 )
            goto LABEL_368;
          v115 = P;
          if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
            *((_DWORD *)P + 16) |= 0x4000008u;
          v116 = a2->Flags;
          if ( (*(_WORD *)&v116 & 0x100) != 0 )
          {
            v115[16] = v115[16] & 0xFEFFFFFB | 0x1000000;
          }
          else if ( (*(_WORD *)&v116 & 0x200) != 0 )
          {
            v115[16] |= 0x800004u;
          }
          if ( (*(_DWORD *)&a2->Flags & 0x8000) != 0 )
            v115[16] |= 0x800u;
          else
            v115[16] &= ~0x800u;
          LODWORD(v44) = DXGDEVICE::CreateVidMmAllocations<_DXGK_ALLOCATIONINFO>(
                           v15,
                           (__int64)a2,
                           (__int64)v114,
                           (__int64)v115,
                           (__int64)v241,
                           (unsigned int *)v255,
                           v281,
                           v266);
          v254 = (unsigned int)v44;
          if ( (int)v44 < 0 )
            goto LABEL_368;
          if ( v260 )
          {
            v117 = *((_QWORD *)v15 + 2);
            v266 = *(_QWORD *)(v117 + 440);
            v118 = 0;
            if ( a2->NumAllocations )
            {
              v119 = v266;
              v120 = *(_QWORD *)(v117 + 432);
              v121 = v241;
              v122 = v260;
              do
              {
                v122[v118] = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v120 + 8) + 624LL))(
                               v119,
                               *((_QWORD *)v121 + 12 * v118 + 3));
                ++v118;
              }
              while ( v118 < a2->NumAllocations );
              v98 = v256[0];
              v15 = v267;
              v26 = 0;
              LODWORD(v44) = v254;
            }
          }
        }
        v123 = a2->Flags;
        if ( (*(_WORD *)&v123 & 0x800) != 0 )
        {
          memset(&v269, 0, sizeof(v269));
          v67 = v241;
          v269.hAllocation = *(HANDLE *)(*((_QWORD *)v241 + 6) + 16LL);
          v124 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)v15 + 2), &v269);
          v44 = v124;
          v254 = v124;
          if ( v124 < 0 )
          {
            v129 = (_QWORD *)WdLogNewEntry5_WdWarning(v126, v125, v127, v128);
            v129[3] = v44;
            v129[4] = v15;
            v129[5] = *((unsigned int *)v67 + 4);
            v129[6] = v67;
            WdLogEvent5_WdWarning(v129);
LABEL_212:
            v66 = v242;
            goto LABEL_369;
          }
          if ( v269.Format == D3DDDIFMT_UNKNOWN && v269.Height != 1 )
          {
            v130 = (_QWORD *)WdLogNewEntry5_WdWarning(v126, v125, v127, v128);
            v130[3] = -1073741811LL;
            v130[4] = v15;
            v130[5] = v269.Height;
            WdLogEvent5_WdWarning(v130);
            LODWORD(v44) = -1073741811;
            v66 = v242;
            goto LABEL_369;
          }
          v131 = *(_QWORD *)(*((_QWORD *)v67 + 5) + 56LL);
          if ( (*(_DWORD *)(v131 + 12) & 0x20) == 0 )
          {
            v132 = WdLogNewEntry5_WdAssertion(v131, v125, v127, v128);
            *(_QWORD *)(v132 + 24) = 4632LL;
            WdLogEvent5_WdAssertion(v132);
          }
          v133 = *(_QWORD *)(*((_QWORD *)v67 + 5) + 56LL);
          *(_DWORD *)(v133 + 176) = v269.Width;
          *(_DWORD *)(v133 + 180) = v269.Height;
          *(_DWORD *)(v133 + 184) = v269.Format;
          v134 = v241;
          *(_QWORD *)(v133 + 192) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                      *(VIDMM_EXPORT **)(*((_QWORD *)v15 + 2) + 432LL),
                                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)v15 + 2) + 440LL),
                                      *((struct _VIDMM_MULTI_ALLOC **)v241 + 3));
          *(_QWORD *)(v133 + 200) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 432LL)
                                                                                          + 8LL)
                                                                              + 752LL))(
                                      *(_QWORD *)(*((_QWORD *)v15 + 2) + 440LL),
                                      *((_QWORD *)v134 + 3));
          v135 = v250;
          *(_DWORD *)(v133 + 208) = v250;
          if ( v135 != -1 )
          {
            *(_DWORD *)(v133 + 12) |= 0x40u;
            *(_DWORD *)(v133 + 12) ^= (*(_DWORD *)(v133 + 12) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
          }
        }
        else if ( (*(_WORD *)&v123 & 0x1000) != 0 )
        {
          v67 = v241;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 432LL) + 8LL)
                                                         + 760LL))(
            *(_QWORD *)(*((_QWORD *)v15 + 2) + 440LL),
            *((_QWORD *)v241 + 3),
            *((_QWORD *)v255 + 42));
          goto LABEL_223;
        }
        v67 = v241;
LABEL_223:
        if ( v240[0] )
        {
          if ( v98 )
          {
            if ( (*((_DWORD *)v98 + 1) & 1) != 0 )
            {
              v136 = *((_QWORD *)v98 + 7);
              if ( !*(_DWORD *)(v136 + 24) && (*(_DWORD *)(v136 + 12) & 8) == 0 )
              {
                DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v271);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v271);
                if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
                {
                  v141 = WdLogNewEntry5_WdAssertion(v138, v137, v139, v140);
                  *(_QWORD *)(v141 + 24) = 4677LL;
                  WdLogEvent5_WdAssertion(v141);
                }
                Global = DXGGLOBAL::GetGlobal();
                v144 = DXGGLOBAL::AllocHandle((__int64)Global, *((_QWORD *)v98 + 7), 2LL, v143);
                v148 = *((_QWORD *)v98 + 7);
                *(_DWORD *)(v148 + 24) = v144;
                if ( !*(_DWORD *)(*((_QWORD *)v98 + 7) + 24LL) )
                {
                  v149 = WdLogNewEntry5_WdWarning(v148, v145, v146, v147);
                  *(_QWORD *)(v149 + 24) = v15;
                  *(_QWORD *)(v149 + 32) = -1073741801LL;
                  WdLogEvent5_WdWarning(v149);
                  LODWORD(v44) = -1073741801;
                  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v271);
                  v66 = v242;
                  goto LABEL_369;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v271);
              }
            }
          }
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v273,
            (struct _KTHREAD **)v15 + 23,
            v64,
            (__int64)j);
          v150 = *((_QWORD *)v15 + 7);
          if ( v150 )
            *(_QWORD *)(v150 + 32) = v98;
          *((_QWORD *)v98 + 5) = *((_QWORD *)v15 + 7);
          *((_QWORD *)v15 + 7) = v98;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v273);
        }
        v151 = 0;
        if ( v98 )
          v151 = *((_DWORD *)v98 + 4);
        a2->hResource = v151;
        v152 = a2->Flags;
        if ( ((*(_BYTE *)&v152 & 2) != 0 || v281) && (*(_BYTE *)&v152 & 0x40) == 0 )
          v153 = (char *)*(unsigned int *)(*((_QWORD *)v98 + 7) + 24LL);
        else
          v153 = 0LL;
        a2->hGlobalShare = (unsigned int)v153;
        if ( v280 )
        {
          v64 = 0LL;
          v245 = 0;
          j = v67;
          while ( (unsigned int)v64 < a2->NumAllocations )
          {
            v63 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v64;
            if ( v63 >= MmUserProbeAddress )
              v63 = MmUserProbeAddress;
            *(_DWORD *)v63 = *((_DWORD *)j + 4);
            v64 = (unsigned int)(v64 + 1);
            v245 = v64;
            j = (struct DXGALLOCATION *)*((_QWORD *)j + 8);
          }
          if ( (int)v44 < 0 )
            goto LABEL_212;
        }
        else
        {
          v64 = 0LL;
          for ( j = v67; (unsigned int)v64 < a2->NumAllocations; j = (struct DXGALLOCATION *)*((_QWORD *)j + 8) )
          {
            v63 = 96LL * (unsigned int)v64;
            v153 = (char *)a2->pAllocationInfo;
            *(_DWORD *)&v153[v63] = *((_DWORD *)j + 4);
            v64 = (unsigned int)(v64 + 1);
          }
        }
        v154 = 0;
        v245 = 0;
        v155 = v241;
        v156 = v241;
        v265 = v241;
        if ( a2->NumAllocations )
        {
          do
          {
            v63 = *(unsigned int *)(*((_QWORD *)v156 + 6) + 4LL);
            if ( (v63 & 1) != 0 )
            {
              LODWORD(v44) = DXGDEVICE::AddPrimaryAllocation((DXGADAPTER **)v15, v156, v64, (__int64)j);
              v254 = (unsigned int)v44;
              if ( (int)v44 < 0 )
                goto LABEL_298;
            }
            else if ( (v63 & 2) != 0 )
            {
              DXGDEVICE::SetDisplayedPrimary(v15, ((unsigned int)v63 >> 6) & 0xF, v156, 0, 1u);
            }
            v245 = ++v154;
            v156 = (struct DXGALLOCATION *)*((_QWORD *)v156 + 8);
            v265 = v156;
          }
          while ( v154 < a2->NumAllocations );
          v155 = v241;
        }
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          v66 = v242;
          if ( a2->pPrivateRuntimeData )
          {
            v157 = *((_QWORD *)v242 + 7);
            if ( *(_QWORD *)(v157 + 96) )
            {
              if ( *(_DWORD *)(v157 + 104) != a2->PrivateRuntimeDataSize )
              {
                LODWORD(v44) = -1073741811;
                v162 = (_QWORD *)WdLogNewEntry5_WdWarning(v157, v63, v64, j);
                v162[3] = v15;
                v162[4] = a2->PrivateRuntimeDataSize;
                v162[5] = *(unsigned int *)(*((_QWORD *)v66 + 7) + 104LL);
                goto LABEL_367;
              }
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)v66 + 7) + 96LL) = operator new(
                                                           a2->PrivateRuntimeDataSize,
                                                           0x4B677844u,
                                                           PagedPool);
              v161 = *((_QWORD *)v66 + 7);
              if ( !*(_QWORD *)(v161 + 96) )
              {
                LODWORD(v44) = -1073741801;
                v162 = (_QWORD *)WdLogNewEntry5_WdWarning(v161, v158, v159, v160);
                v162[3] = v15;
                PrivateRuntimeDataSize = a2->PrivateRuntimeDataSize;
LABEL_266:
                v162[4] = PrivateRuntimeDataSize;
                v162[5] = -1073741801LL;
LABEL_367:
                WdLogEvent5_WdWarning(v162);
                goto LABEL_368;
              }
              *(_DWORD *)(v161 + 104) = a2->PrivateRuntimeDataSize;
            }
            v164 = v280;
            if ( v280 )
            {
              v165 = a2->PrivateRuntimeDataSize;
              pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
              v167 = *(void **)(*((_QWORD *)v66 + 7) + 96LL);
              if ( &pPrivateRuntimeData[v165] < pPrivateRuntimeData
                || (unsigned __int64)&pPrivateRuntimeData[v165] > MmUserProbeAddress )
              {
                *(_BYTE *)MmUserProbeAddress = 0;
              }
              memmove(v167, pPrivateRuntimeData, v165);
            }
            else
            {
              memmove(*(void **)(*((_QWORD *)v66 + 7) + 96LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
            }
          }
          else
          {
            v164 = v280;
          }
          if ( a2->pStandardAllocation )
          {
            v168 = *((_QWORD *)v66 + 7);
            if ( *(_QWORD *)(v168 + 112) )
            {
              if ( *(_DWORD *)(v168 + 120) != a2->PrivateDriverDataSize )
              {
                LODWORD(v44) = -1073741811;
                v162 = (_QWORD *)WdLogNewEntry5_WdWarning(v168, v63, v64, j);
                v162[3] = v15;
                v162[4] = a2->PrivateDriverDataSize;
                v162[5] = *(unsigned int *)(*((_QWORD *)v66 + 7) + 120LL);
                v162[6] = 4908LL;
                goto LABEL_367;
              }
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)v66 + 7) + 112LL) = operator new(
                                                            a2->PrivateDriverDataSize,
                                                            0x4B677844u,
                                                            PagedPool);
              v172 = *((_QWORD *)v66 + 7);
              if ( !*(_QWORD *)(v172 + 112) )
              {
                LODWORD(v44) = -1073741801;
                v162 = (_QWORD *)WdLogNewEntry5_WdWarning(v172, v169, v170, v171);
                v162[3] = v15;
                PrivateRuntimeDataSize = a2->PrivateDriverDataSize;
                goto LABEL_266;
              }
              *(_DWORD *)(v172 + 120) = a2->PrivateDriverDataSize;
            }
            v173 = Src;
            if ( !v164 )
              v173 = a2->pStandardAllocation;
            memmove(*(void **)(*((_QWORD *)v66 + 7) + 112LL), v173, a2->PrivateDriverDataSize);
          }
          v174 = 0;
          v245 = 0;
          v265 = v155;
          if ( a2->NumAllocations )
          {
            v153 = (char *)v246;
            do
            {
              v175 = &v153[96 * v174];
              if ( *((_QWORD *)v175 + 2) )
              {
                *(_QWORD *)(*((_QWORD *)v155 + 6) + 32LL) = operator new(
                                                              *((unsigned int *)v175 + 6),
                                                              0x4B677844u,
                                                              PagedPool);
                v179 = *(void **)(*((_QWORD *)v155 + 6) + 32LL);
                if ( !v179 )
                {
                  LODWORD(v44) = -1073741801;
                  v181 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v176, v177, v178);
                  v181[3] = v15;
                  v181[4] = v174 + 1;
                  v181[5] = *((unsigned int *)v246 + 24 * v174 + 6);
                  v181[6] = -1073741801LL;
                  WdLogEvent5_WdWarning(v181);
                  goto LABEL_298;
                }
                if ( v280 )
                  v180 = (const void *)*((_QWORD *)v249 + v174);
                else
                  v180 = (const void *)*((_QWORD *)v175 + 2);
                memmove(v179, v180, *((unsigned int *)v175 + 6));
                *(_DWORD *)(*((_QWORD *)v155 + 6) + 40LL) = *((_DWORD *)v175 + 6);
                v153 = (char *)v246;
              }
              v245 = ++v174;
              v155 = (struct DXGALLOCATION *)*((_QWORD *)v155 + 8);
              v265 = v155;
            }
            while ( v174 < a2->NumAllocations );
          }
        }
        v182 = *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL);
        if ( *(_BYTE *)(v182 + 186) )
        {
          if ( (*(_DWORD *)&a2->Flags & 0x1800) != 0
            || (HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v15 + 5))) == 0 )
          {
            v202 = WdLogNewEntry5_WdError(v153, v63);
            *(_QWORD *)(v202 + 24) = -1073741823LL;
            WdLogEvent5_WdError(v202);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v272);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v268);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v256);
            return 3221225473LL;
          }
          v263 = 0LL;
          v184 = DXGDEVICE::UmdManagesResidency(v15) && v255 && (unsigned int)(*((_DWORD *)v255 + 4) - 1) <= 2;
          v66 = v242;
          if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
            v185 = *(void **)(*((_QWORD *)v242 + 7) + 96LL);
          else
            v185 = 0LL;
          v186 = Src;
          if ( !v280 )
            v186 = a2->pStandardAllocation;
          v187 = (void **)v251;
          if ( v280 )
            v187 = (void **)v249;
          if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
            v188 = *((_DWORD *)v242 + 5);
          else
            v188 = 0;
          LODWORD(v44) = DXGADAPTER::VmBusSendCreateAllocation(
                           (struct VMBCHANNEL__ **)v182,
                           HostProcess,
                           *((_DWORD *)v15 + 84),
                           v188,
                           a2,
                           (const struct _D3DDDI_ALLOCATIONINFO2 *)v246,
                           v187,
                           v186,
                           v185,
                           v280,
                           v184,
                           (unsigned __int8 **)&v263);
          v254 = (unsigned int)v44;
          if ( (int)v44 < 0 )
          {
LABEL_368:
            v67 = v241;
            goto LABEL_369;
          }
          v64 = (__int64)v263;
          v260 = (unsigned __int64 *)v263;
          v189 = (char *)v263;
          v259 = (unsigned __int64 *)v263;
          if ( v66 )
          {
            *((_DWORD *)v66 + 5) = *((_DWORD *)v263 + 1);
            if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
            {
              *(_DWORD *)(*((_QWORD *)v66 + 7) + 28LL) = *(_DWORD *)(v64 + 8);
              v189 = (char *)v64;
            }
          }
          v190 = v241;
          v262 = (unsigned int *)v241;
          v191 = 0LL;
          v264 = 0LL;
          if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v66 )
          {
            v191 = *(_QWORD **)(*((_QWORD *)v66 + 7) + 128LL);
            v264 = v191;
          }
          v192 = 0;
          while ( 1 )
          {
            v250 = v192;
            if ( v192 >= a2->NumAllocations )
              break;
            v193 = &v189[72 * v192];
            *((_DWORD *)v190 + 24) = *((_DWORD *)v193 + 4);
            *(_DWORD *)(*((_QWORD *)v190 + 6) + 4LL) = *((_DWORD *)v193 + 6);
            v194 = (char *)v246 + 96 * v192;
            if ( (*((_DWORD *)v194 + 8) & 1) != 0 && *((_QWORD *)v15 + 225) != *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) )
              *(_DWORD *)(*((_QWORD *)v190 + 6) + 4LL) |= 4u;
            *(_DWORD *)(*((_QWORD *)v190 + 6) + 4LL) |= 0x20000u;
            *(_QWORD *)(*((_QWORD *)v190 + 6) + 16LL) = *((_QWORD *)v190 + 6);
            v195 = (_OWORD *)*((_QWORD *)v190 + 6);
            *((_QWORD *)v190 + 15) = *((_QWORD *)v193 + 4);
            v195[4] = *(_OWORD *)(v193 + 40);
            v195[5] = *(_OWORD *)(v193 + 56);
            v195[6] = *(_OWORD *)(v193 + 72);
            if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
              *(_DWORD *)(*((_QWORD *)v190 + 6) + 4LL) |= 0x40000u;
            v196 = *((unsigned int *)v194 + 6);
            v197 = 8LL * v192;
            v198 = (char *)*((_QWORD *)v194 + 2);
            if ( v280 )
            {
              v199 = (const void *)*((_QWORD *)v249 + v192);
              if ( (unsigned __int64)&v198[v196] > MmUserProbeAddress || &v198[v196] <= v198 )
                *(_BYTE *)MmUserProbeAddress = 0;
              v200 = v196;
            }
            else
            {
              v200 = *((unsigned int *)v194 + 6);
              v199 = (const void *)*((_QWORD *)v251 + v192);
            }
            memmove(v198, v199, v200);
            if ( v191 && !v281 )
            {
              if ( v280 )
                v201 = *(const void **)((char *)v249 + v197);
              else
                v201 = *(const void **)((char *)v251 + v197);
              memmove((void *)*(v191 - 2), v201, v196);
              v191 = (_QWORD *)*v191;
              v264 = v191;
            }
            LODWORD(v44) = v254;
            v64 = (__int64)v260;
            v192 = v250 + 1;
            v190 = (struct DXGALLOCATION *)*((_QWORD *)v190 + 8);
            v262 = (unsigned int *)v190;
            v189 = (char *)v259;
          }
          if ( v64 )
            ExFreePoolWithTag((PVOID)v64, 0);
        }
        else
        {
          LODWORD(v44) = v254;
        }
        v267 = (DXGDEVICE *)*((_QWORD *)v15 + 2);
        v203 = (__int64)v267 + 16;
        if ( (*(_DWORD *)(*((_QWORD *)v267 + 2) + 1676LL) & 0x40) != 0
          && v255
          && (*(_DWORD *)v255 & 0x200) == 0
          && (memset(&v274, 0, sizeof(v274)), v274.Protection.Value |= 1uLL, v205 = 0, v206 = v241, a2->NumAllocations) )
        {
          while ( 1 )
          {
            v207 = (*((_DWORD *)v206 + 18) >> 12) & 0x3F;
            if ( *((_DWORD *)v255 + 4) == 4 )
            {
              BaseAddress = *(unsigned int *)(*((_QWORD *)v255 + 3) + 12LL);
              if ( (((_DWORD)BaseAddress - 1) & 0xFFFFFFFC) != 0 || (_DWORD)BaseAddress == 2 )
              {
                if ( *(_BYTE *)(*(_QWORD *)v203 + 2210LL) )
                  v207 = -1;
              }
            }
            if ( v243 )
            {
              Current = DXGPROCESS::GetCurrent(BaseAddress);
              v209 = DXGADAPTER::VmBusSendMapGpuVirtualAddress(
                       *(DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL),
                       *((_DWORD *)Current + 96),
                       v15,
                       0,
                       *((_DWORD *)v206 + 24),
                       &v274);
            }
            else
            {
              LOBYTE(v239) = 0;
              v209 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(*((_QWORD *)v267 + 54) + 8LL) + 792LL))(
                       *((_QWORD *)v267 + 55),
                       0LL,
                       *((_QWORD *)v206 + 3),
                       &v274,
                       v239,
                       v207);
            }
            LODWORD(v44) = v209;
            if ( v209 < 0 )
              break;
            v203 = *((_QWORD *)v15 + 2) + 16LL;
            BaseAddress = v274.BaseAddress;
            if ( *(_BYTE *)(*(_QWORD *)v203 + 2210LL) )
              BaseAddress = v274.VirtualAddress;
            v274.BaseAddress = BaseAddress;
            v274.VirtualAddress = 0LL;
            ++v205;
            v206 = (struct DXGALLOCATION *)*((_QWORD *)v206 + 8);
            if ( v205 >= a2->NumAllocations )
            {
              v66 = v242;
              goto LABEL_368;
            }
          }
          v211 = WdLogNewEntry5_WdWarning(v210, v63, v64, j);
          *(_QWORD *)(v211 + 24) = (int)v44;
          WdLogEvent5_WdWarning(v211);
          v66 = v242;
        }
        else
        {
LABEL_298:
          v66 = v242;
        }
        goto LABEL_368;
      }
    }
    else
    {
      if ( !v98 )
        goto LABEL_189;
      v112 = *((_QWORD *)v98 + 7);
      if ( !v112 || (*(_BYTE *)(v112 + 12) & 0x60) != 0x60 )
        goto LABEL_189;
    }
    *((_DWORD *)v98 + 1) |= 8u;
    goto LABEL_189;
  }
  v89 = (_QWORD *)WdLogNewEntry5_WdError(v88, v63);
  v89[3] = v15;
  v89[4] = v66;
  v89[5] = -1073741811LL;
  WdLogEvent5_WdError(v89);
  LODWORD(v44) = -1073741811;
LABEL_114:
  v67 = 0LL;
LABEL_369:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v268, v63, v64, (__int64)j);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v272);
  if ( (int)v44 < 0 )
  {
    if ( v67 )
    {
      v216 = 0;
      v217 = v241;
      if ( a2->NumAllocations )
      {
        do
        {
          v218 = *((_QWORD *)v217 + 6);
          if ( *(_QWORD *)(v218 + 8) && !v281 )
          {
            if ( (v219 = *(_DWORD *)(v218 + 4), (v219 & 1) != 0) && !*((_DWORD *)v15 + 82) || (v219 & 2) != 0 )
            {
              if ( (v219 & 0x10) != 0 )
              {
                v220 = WdLogNewEntry5_WdAssertion(v213, v212, v214, v215);
                *(_QWORD *)(v220 + 24) = 5208LL;
                WdLogEvent5_WdAssertion(v220);
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)v15 + 2) + 432LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v15 + 2) + 440LL),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v217 + 6) + 8LL));
              *(_DWORD *)(*((_QWORD *)v217 + 6) + 4LL) |= 0x10u;
            }
          }
          ++v216;
          v217 = (struct DXGALLOCATION *)*((_QWORD *)v217 + 8);
        }
        while ( v216 < a2->NumAllocations );
        v66 = v242;
      }
      v67 = v241;
    }
    if ( v240[0] )
    {
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v261, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(v256, (struct DXGRESOURCE **)v261);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v261);
      DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)v15, v66, v221, v222);
      DXGDEVICE::DestroyResource(v15, v66, 0LL, 0);
    }
    else if ( v67 )
    {
      if ( v244 )
        DXGDEVICE::RemoveAllocationsWithoutDestroy(v15, v66, v67, a2->NumAllocations);
      Value = 0;
      *(_QWORD *)&v261[0].0 = 0LL;
      if ( !v66 || *((_QWORD *)v66 + 7) )
      {
        do
        {
          v224 = v67;
          v225 = (_QWORD *)((char *)v67 + 64);
          v67 = (struct DXGALLOCATION *)*((_QWORD *)v67 + 8);
          *((_QWORD *)v224 + 7) = 0LL;
          *v225 = 0LL;
          if ( v66 )
          {
            v226 = *((_QWORD *)v66 + 7);
            if ( v226 )
            {
              if ( *(_QWORD *)(*((_QWORD *)v224 + 6) + 48LL) )
              {
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v226 + 32));
                --*(_DWORD *)(*((_QWORD *)v66 + 7) + 124LL);
                v227 = *((_QWORD *)v224 + 6) + 48LL;
                v228 = *(_QWORD *)v227;
                v229 = *(_QWORD **)(*((_QWORD *)v224 + 6) + 56LL);
                if ( *(_QWORD *)(*(_QWORD *)v227 + 8LL) != v227 || *v229 != v227 )
                  __fastfail(3u);
                *v229 = v228;
                *(_QWORD *)(v228 + 8) = v229;
                *(_QWORD *)(*((_QWORD *)v224 + 6) + 48LL) = 0LL;
                v230 = *((_QWORD *)v66 + 7) + 32LL;
                *(_QWORD *)(v230 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v230, 0LL);
                KeLeaveCriticalRegion();
              }
            }
          }
          DXGDEVICE::DestroyAllocations(v15, 0LL, 0, v224, 0LL, v261[0]);
        }
        while ( v67 );
        v67 = v241;
        Value = v261[0].Value;
      }
      if ( v66 )
      {
        v231 = *((_QWORD *)v66 + 7);
        if ( v231 )
        {
          v232 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v231 + 32));
          v233 = *((_DWORD *)v66 + 1);
          if ( (v233 & 0x10) == 0 )
          {
            *((_DWORD *)v66 + 1) = v233 | 0x10;
            v232 = 1;
          }
          v234 = *((_QWORD *)v66 + 7) + 32LL;
          *(_QWORD *)(v234 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v234, 0LL);
          KeLeaveCriticalRegion();
          if ( v232 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)v15, v66, v235, v236);
            DXGDEVICE::DestroyResource(v15, v66, 0LL, 0);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations(v15, v66, 0, v67, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)Value);
        }
      }
    }
  }
  else if ( v240[0] )
  {
    DXGPROCESS::CommitResourceHandleSafe(*((DXGPROCESS **)v15 + 5), v66);
  }
  v237 = v251;
  if ( a2->NumAllocations )
  {
    do
    {
      v238 = (void *)v237[v26];
      if ( v238 )
        ExFreePoolWithTag(v238, 0);
      ++v26;
    }
    while ( v26 < a2->NumAllocations );
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( a2->NumAllocations > 5 )
  {
    if ( v246 )
      ExFreePoolWithTag(v246, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v258 )
      ExFreePoolWithTag(v258, 0);
    if ( v237 )
      ExFreePoolWithTag(v237, 0);
    if ( v249 )
      ExFreePoolWithTag(v249, 0);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v272);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v268);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v256);
  return (unsigned int)v44;
}
