/*
 * XREFs of ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C008F820 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C009554C (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00958D4 (--$OpenResource@U_D3DKMT_OPENRESOURCE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHARE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002D40 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0003164 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003730 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00038C8 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003E74 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0003F38 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ??0DXGAUTOMUTEX@@QEAA@XZ @ 0x1C00155C8 (--0DXGAUTOMUTEX@@QEAA@XZ.c)
 *     ?CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00155DC (-CommitResourceHandleSafe@DXGPROCESS@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0015718 (-ReleaseIfAcquired@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0079A14 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@EPEAU_EPROCESS@@PEAU_DXGSHAREDALLOCOBJECT@@PEAVDXGRESOURCEREFERENCE@@PEAEPEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVDXGAUTOMUTEX@@PEAVDXGAUTOPUSHLOCK@@@Z @ 0x1C0079A50 (-OpenResourceObject@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@E.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C008A3AC (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0094FE8 (-RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C0095130 (-AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z.c)
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00951D4 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0096150 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 *     ?OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAVDXGALLOCATION@@PEAU_DXGK_OPENALLOCATIONINFO@@PEAPEAX4PEAXEEIPEAIPEA_K@Z @ 0x1C0099B90 (-OpenAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAV.c)
 *     ?CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAPEAX5PEAXPEBU_D3DKM_CREATESTANDARDALLOCATION@@HPEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0099F30 (-CreateDriverAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINF.c)
 *     ?CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z @ 0x1C009AB40 (-CreateAllocationObjects@DXGDEVICE@@QEAAJIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@0@Z.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009AE14 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009AEB0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAPEAXPEBX3EEPEAPEAE@Z @ 0x1C019544C (-VmBusSendCreateAllocation@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIPEBU_D3DKMT_CREATEALLOCATION@@PEA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C019706C (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C019DB90 (-RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
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
        unsigned __int64 *a12,
        struct _D3DKMT_CREATESTANDARDALLOCATION *a13)
{
  unsigned __int8 v14; // r12
  DXGDEVICE *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 Flags; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rax
  UINT v26; // r15d
  __int64 NumAllocations; // rax
  struct _D3DDDI_ALLOCATIONINFO2 *v28; // r13
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  int v31; // ebx
  __int64 v32; // r8
  SIZE_T v33; // rax
  SIZE_T v34; // rax
  SIZE_T v35; // rax
  _BYTE *v36; // rdi
  SIZE_T v37; // rax
  SIZE_T v38; // rax
  _BYTE *v39; // rdx
  PVOID v40; // r12
  PVOID v41; // rcx
  _QWORD *v42; // rax
  UINT v43; // ecx
  size_t v44; // r8
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  char *VidPnSourceId; // r8
  UINT i; // r12d
  struct _D3DDDI_ALLOCATIONINFO2 *v50; // rbx
  __int64 v51; // r13
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  UINT Value; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v56; // eax
  unsigned __int64 hSection; // rbx
  SIZE_T Size; // rdi
  _QWORD *v59; // rax
  struct DXGRESOURCE *v60; // r12
  struct DXGALLOCATION *v61; // rdi
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  UINT v65; // r12d
  __int64 v66; // rdx
  __int64 v67; // rdi
  __int64 PrivateDriverDataSize; // rcx
  __int64 v69; // rax
  unsigned __int8 v70; // r9
  SIZE_T v71; // rdx
  char *v72; // rdx
  __int64 v73; // rcx
  char *v74; // rax
  char *PoolWithTag; // rax
  _QWORD *v76; // rax
  __int64 v77; // rcx
  char *v78; // r9
  size_t v79; // r8
  char *pPrivateDriverData; // rdx
  unsigned __int8 v81; // r12
  UINT v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  void *v86; // r9
  size_t v87; // r8
  D3DKMT_CREATESTANDARDALLOCATION *pStandardAllocation; // rdx
  __int64 v89; // rcx
  struct DXGRESOURCE *v90; // rbx
  _QWORD *v91; // rax
  int v92; // r13d
  unsigned __int64 v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rax
  struct DXGRESOURCE *v97; // rbx
  __int64 j; // rcx
  SIZE_T v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  void *v103; // r12
  _QWORD *v104; // rax
  void *v105; // rcx
  ULONG64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  D3DKMT_CREATEALLOCATIONFLAGS v109; // eax
  __int64 v110; // rax
  __int64 v111; // rax
  char v112; // cl
  void **v113; // r12
  struct _D3DDDI_ALLOCATIONINFO2 *v114; // rdi
  struct DXGALLOCATION *v115; // r12
  _DWORD *v116; // rcx
  D3DKMT_CREATEALLOCATIONFLAGS v117; // eax
  __int64 v118; // rax
  __int64 v119; // r13
  UINT v120; // r12d
  __int64 v121; // rbx
  struct DXGALLOCATION *v122; // r15
  unsigned __int64 *v123; // r14
  D3DKMT_CREATEALLOCATIONFLAGS v124; // eax
  int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // r8
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rdi
  struct DXGALLOCATION *v134; // r12
  int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rax
  struct DXGGLOBAL *Global; // rax
  int v140; // eax
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rax
  D3DKMT_HANDLE v146; // eax
  D3DKMT_CREATEALLOCATIONFLAGS v147; // eax
  ULONG64 v148; // rcx
  __int64 v149; // r8
  struct DXGALLOCATION *v150; // r9
  struct DXGALLOCATION *k; // r9
  UINT v152; // edi
  struct DXGALLOCATION *v153; // rbx
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // r8
  __int64 v157; // rcx
  _QWORD *v158; // rax
  __int64 PrivateRuntimeDataSize; // rcx
  unsigned __int8 v160; // bl
  size_t v161; // r8
  char *pPrivateRuntimeData; // rdx
  void *v163; // r9
  UINT v164; // eax
  __int64 v165; // rcx
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // rcx
  const void *v169; // rdx
  UINT v170; // r13d
  struct DXGALLOCATION *v171; // rdi
  ULONG64 v172; // rbx
  __int64 v173; // rdx
  __int64 v174; // r8
  void *v175; // rcx
  const void *v176; // rdx
  _QWORD *v177; // rax
  unsigned int HostProcess; // edi
  char v179; // bl
  D3DKMT_CREATEALLOCATIONFLAGS v180; // edx
  const void *v181; // r11
  const void *v182; // r10
  void **v183; // rax
  unsigned int v184; // r9d
  _DWORD *v185; // r8
  _DWORD *v186; // rcx
  struct DXGALLOCATION *v187; // rbx
  _QWORD *v188; // rdi
  UINT v189; // eax
  char *v190; // r8
  char *v191; // r9
  _OWORD *v192; // rcx
  size_t v193; // r12
  __int64 v194; // r13
  const void *v195; // rdx
  char *v196; // rcx
  size_t v197; // r8
  char *v198; // rax
  __int64 v199; // rax
  _QWORD *v200; // r13
  __int64 v201; // rdi
  UINT v202; // r12d
  struct DXGALLOCATION *v203; // rbx
  int v204; // edx
  int v205; // ecx
  struct DXGPROCESS *Current; // rax
  __int64 v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int64 v210; // r8
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rcx
  __int64 v212; // rax
  __int64 v213; // rcx
  UINT v214; // edi
  struct DXGALLOCATION *v215; // rbx
  __int64 v216; // rax
  int v217; // eax
  __int64 v218; // rax
  UINT v219; // eax
  struct DXGALLOCATION *v220; // rbx
  _QWORD *v221; // rax
  __int64 v222; // rcx
  __int64 v223; // rax
  __int64 v224; // rdx
  _QWORD *v225; // rcx
  __int64 v226; // rcx
  __int64 v227; // rcx
  char v228; // bl
  int v229; // eax
  __int64 v230; // rcx
  _QWORD *v231; // rbx
  void *v232; // rcx
  int v233; // [rsp+20h] [rbp-718h]
  struct DXGALLOCATION *v234; // [rsp+20h] [rbp-718h]
  void **v235; // [rsp+28h] [rbp-710h]
  int v236; // [rsp+50h] [rbp-6E8h]
  unsigned __int8 v237[8]; // [rsp+70h] [rbp-6C8h] BYREF
  struct DXGALLOCATION *v238; // [rsp+78h] [rbp-6C0h]
  struct DXGRESOURCE *v239; // [rsp+80h] [rbp-6B8h]
  char v240; // [rsp+88h] [rbp-6B0h]
  char v241; // [rsp+89h] [rbp-6AFh]
  __int64 v242; // [rsp+90h] [rbp-6A8h]
  UINT v243; // [rsp+98h] [rbp-6A0h]
  PVOID v244; // [rsp+A0h] [rbp-698h]
  char v245; // [rsp+A8h] [rbp-690h]
  PVOID v246; // [rsp+B0h] [rbp-688h]
  int v247; // [rsp+B8h] [rbp-680h]
  PVOID v248; // [rsp+C0h] [rbp-678h]
  struct DXGALLOCATION *v249; // [rsp+C8h] [rbp-670h] BYREF
  PVOID P; // [rsp+D0h] [rbp-668h]
  struct _D3DKM_CREATESTANDARDALLOCATION *v251; // [rsp+E0h] [rbp-658h]
  struct DXGRESOURCE *v252[4]; // [rsp+F0h] [rbp-648h] BYREF
  PVOID Src; // [rsp+110h] [rbp-628h]
  PVOID v254; // [rsp+118h] [rbp-620h]
  unsigned __int64 *v255; // [rsp+120h] [rbp-618h]
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v256[2]; // [rsp+128h] [rbp-610h] BYREF
  unsigned int *v257; // [rsp+130h] [rbp-608h]
  unsigned __int64 *v258; // [rsp+138h] [rbp-600h]
  PVOID v259; // [rsp+140h] [rbp-5F8h] BYREF
  _QWORD *v260; // [rsp+148h] [rbp-5F0h]
  struct DXGALLOCATION *m; // [rsp+150h] [rbp-5E8h]
  struct COREDEVICEACCESS *v262; // [rsp+158h] [rbp-5E0h]
  _BYTE v263[16]; // [rsp+160h] [rbp-5D8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v264; // [rsp+170h] [rbp-5C8h] BYREF
  struct DXGALLOCATION *v265; // [rsp+1A0h] [rbp-598h] BYREF
  DXGDEVICE *v266; // [rsp+1A8h] [rbp-590h]
  _BYTE v267[16]; // [rsp+1B0h] [rbp-588h] BYREF
  _BYTE v268[24]; // [rsp+1C0h] [rbp-578h] BYREF
  _BYTE v269[24]; // [rsp+1D8h] [rbp-560h] BYREF
  D3DDDI_MAPGPUVIRTUALADDRESS v270; // [rsp+1F0h] [rbp-548h] BYREF
  _BYTE v271[40]; // [rsp+260h] [rbp-4D8h] BYREF
  _BYTE v272[40]; // [rsp+288h] [rbp-4B0h] BYREF
  char v273; // [rsp+2B0h] [rbp-488h] BYREF
  char v274; // [rsp+350h] [rbp-3E8h] BYREF
  _BYTE v275[480]; // [rsp+510h] [rbp-228h] BYREF
  unsigned __int8 v276; // [rsp+750h] [rbp+18h]

  v276 = a3;
  v14 = a3;
  v16 = this;
  v266 = this;
  v252[1] = this;
  v252[2] = (struct DXGRESOURCE *)a2;
  v251 = a6;
  v262 = a7;
  v257 = a10;
  v258 = a11;
  v255 = a12;
  v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v17 + 144)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v18 + 24) = 4443LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*((_DWORD *)v16 + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)v16 + 13));
  if ( a7 )
  {
    v17 = *((_QWORD *)a7 + 3);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v17 + 144));
  }
  if ( v14 && a4 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v17);
    *(_QWORD *)(v19 + 24) = 4448LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v20 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
  v240 = *(_BYTE *)(v20 + 185);
  v245 = v240;
  if ( v240 && (*(_DWORD *)&a2->Flags & 0x1800) != 0 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, a2, a3);
    v21[3] = v16;
    v21[4] = -1073741811LL;
    v21[5] = 0LL;
    WdLogEvent5_WdWarning(v21);
    return 3221225485LL;
  }
  Flags = (unsigned int)a2->Flags;
  if ( (Flags & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(v20 + 1700) & 0x10) == 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v20, Flags, a3);
      *(_QWORD *)(v24 + 24) = v16;
      *(_QWORD *)(v24 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
      return 3221225485LL;
    }
    if ( (Flags & 2) == 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, Flags, a3);
      v25[3] = v16;
      v25[4] = -1073741811LL;
      v25[5] = 1LL;
      WdLogEvent5_WdWarning(v25);
      return 3221225485LL;
    }
  }
  v26 = 0;
  v246 = 0LL;
  Src = 0LL;
  NumAllocations = a2->NumAllocations;
  if ( (unsigned int)NumAllocations > 5 )
  {
    v28 = 0LL;
    v244 = 0LL;
    v29 = (unsigned int)NumAllocations;
    v30 = 96 * NumAllocations;
    v31 = 0;
    v32 = 0xFFFFFFFFLL;
    if ( (unsigned __int64)(96 * NumAllocations) <= 0xFFFFFFFF )
    {
      v33 = 96LL * (unsigned int)NumAllocations;
      if ( !is_mul_ok(v29, 0x60uLL) )
        v33 = -1LL;
      v28 = (struct _D3DDDI_ALLOCATIONINFO2 *)operator new(v33, 0x4B677844u, PagedPool);
      v244 = v28;
      v32 = 0xFFFFFFFFLL;
    }
    else
    {
      v31 = -1073741675;
    }
    P = 0LL;
    if ( v30 <= 0xFFFFFFFF )
    {
      v31 = 0;
      if ( 88 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v34 = 88LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x58uLL) )
          v34 = -1LL;
        P = operator new(v34, 0x4B677844u, PagedPool);
        v32 = 0xFFFFFFFFLL;
      }
      else
      {
        v31 = -1073741675;
      }
    }
    v254 = 0LL;
    if ( v31 >= 0 )
    {
      v31 = 0;
      if ( 32 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v35 = 32LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 0x20uLL) )
          v35 = -1LL;
        v254 = operator new(v35, 0x4B677844u, PagedPool);
      }
      else
      {
        v31 = -1073741675;
      }
    }
    v36 = 0LL;
    v248 = 0LL;
    if ( v31 >= 0 )
    {
      v31 = 0;
      if ( 8 * (unsigned __int64)a2->NumAllocations <= 0xFFFFFFFF )
      {
        v37 = 8LL * a2->NumAllocations;
        if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
          v37 = -1LL;
        v36 = operator new(v37, 0x4B677844u, PagedPool);
        v248 = v36;
        if ( v276 )
        {
          v38 = 8LL * a2->NumAllocations;
          if ( !is_mul_ok(a2->NumAllocations, 8uLL) )
            v38 = -1LL;
          v39 = operator new(v38, 0x4B677844u, PagedPool);
          v246 = v39;
LABEL_48:
          v40 = P;
          if ( v31 < 0 )
            goto LABEL_56;
          if ( !v28 )
          {
LABEL_58:
            if ( v40 )
              ExFreePoolWithTag(v40, 0);
            v41 = v254;
            if ( v254 )
              ExFreePoolWithTag(v254, 0);
            if ( v36 )
              ExFreePoolWithTag(v36, 0);
            if ( v246 )
              ExFreePoolWithTag(v246, 0);
            v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v39, v32);
            v42[3] = v16;
            v42[4] = a2->NumAllocations;
            if ( v31 >= 0 )
            {
              v31 = -1073741801;
              v42[5] = -1073741801LL;
            }
            else
            {
              v42[5] = v31;
            }
            WdLogEvent5_WdWarning(v42);
            return (unsigned int)v31;
          }
          if ( !P || !v254 || !v36 )
          {
LABEL_56:
            if ( v28 )
              ExFreePoolWithTag(v28, 0);
            goto LABEL_58;
          }
          v14 = v276;
          if ( !v39 && v276 )
          {
            v40 = P;
            goto LABEL_56;
          }
          goto LABEL_71;
        }
      }
      else
      {
        v31 = -1073741675;
      }
    }
    v39 = 0LL;
    goto LABEL_48;
  }
  v28 = (struct _D3DDDI_ALLOCATIONINFO2 *)v275;
  v244 = v275;
  P = &v274;
  v254 = &v273;
  v36 = v271;
  v248 = v271;
  v39 = v272;
  v246 = v272;
LABEL_71:
  v43 = 0;
  v243 = 0;
  if ( a2->NumAllocations )
  {
    do
    {
      *(_QWORD *)&v36[8 * v43] = 0LL;
      if ( v14 )
        *(_QWORD *)&v39[8 * v43] = 0LL;
      ++v43;
    }
    while ( v43 < a2->NumAllocations );
    v243 = v43;
  }
  v238 = 0LL;
  v249 = 0LL;
  v242 = 0LL;
  v237[0] = 0;
  v239 = 0LL;
  v241 = 0;
  v252[0] = 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v263);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v268, 0LL);
  if ( v14 )
  {
    v44 = 96LL * a2->NumAllocations;
    pAllocationInfo = a2->pAllocationInfo;
    if ( (D3DDDI_ALLOCATIONINFO *)((char *)pAllocationInfo + v44) < pAllocationInfo
      || (unsigned __int64)pAllocationInfo + v44 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v28, pAllocationInfo, v44);
  }
  else
  {
    memmove(v28, a2->pAllocationInfo, 96LL * a2->NumAllocations);
  }
  v247 = -1;
  for ( i = 0; i < a2->NumAllocations; ++i )
  {
    if ( (*(_DWORD *)&a2->Flags & 0x800) != 0 )
    {
      v47 = 96LL * i;
      v46 = *(unsigned int *)((char *)&v28->Flags.Value + v47);
      if ( (v46 & 1) != 0 )
      {
        VidPnSourceId = (char *)*(unsigned int *)((char *)&v28->VidPnSourceId + v47);
        v247 = *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v28->VidPnSourceId + v47);
        if ( !*((_QWORD *)v16 + 209) )
        {
          v46 = (unsigned int)v46 & 0xFFFFFFFE;
          *(UINT *)((char *)&v28->Flags.Value + v47) = v46;
        }
      }
      if ( (*(UINT *)((_BYTE *)&v28->Flags.Value + v47) & 2) != 0 )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, VidPnSourceId);
        v59[3] = v16;
        v59[4] = -1073741811LL;
        goto LABEL_113;
      }
    }
    v50 = &v28[i];
    if ( (v50->Flags.Value & 1) != 0 )
    {
      v51 = *((_QWORD *)v16 + 209);
      if ( !v51 )
        goto LABEL_118;
      v52 = *(_QWORD *)(v51 + 2304);
      if ( !v52 || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v52 + 16)) )
      {
        v53 = WdLogNewEntry5_WdAssertion(v52);
        *(_QWORD *)(v53 + 24) = 4686LL;
        WdLogEvent5_WdAssertion(v53);
      }
      v47 = *(unsigned int *)(*(_QWORD *)(v51 + 2304) + 80LL);
      if ( (_DWORD)v47 != *((_DWORD *)v16 + 420) )
      {
        v54 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v54 + 24) = 4692LL;
        WdLogEvent5_WdAssertion(v54);
      }
      VidPnSourceId = (char *)v50->VidPnSourceId;
      if ( (unsigned int)VidPnSourceId >= *((_DWORD *)v16 + 420) )
      {
LABEL_118:
        v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, VidPnSourceId);
        v59[3] = v16;
        v59[4] = *((unsigned int *)v244 + 24 * i + 7);
        v59[5] = -1073741811LL;
        goto LABEL_113;
      }
      if ( !*((_DWORD *)v16 + 82)
        && !a4
        && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v51 + 2304), v16, (unsigned int)VidPnSourceId) )
      {
        v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, VidPnSourceId);
        LODWORD(v28) = -1071775744;
        v62[3] = -1071775744LL;
        v62[4] = v16;
        v62[5] = *((unsigned int *)v244 + 24 * i + 7);
        v62[6] = i;
        WdLogEvent5_WdWarning(v62);
        goto LABEL_115;
      }
      v28 = (struct _D3DDDI_ALLOCATIONINFO2 *)v244;
    }
    Value = v50->Flags.Value;
    if ( (Value & 2) != 0 && (Value & 1) == 0 )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v47, v46, VidPnSourceId);
      v59[3] = -1073741811LL;
      v59[4] = v16;
LABEL_113:
      WdLogEvent5_WdWarning(v59);
      goto LABEL_114;
    }
    v56 = a2->Flags;
    if ( (*(_DWORD *)&v56 & 0x10000) != 0 )
    {
      v47 = *(_BYTE *)&v56 & 0x20;
      if ( (*(_BYTE *)&v56 & 0x20) != 0 && !v50->hSection || (*(_DWORD *)&v56 & 0x20000) != 0 && !v50->hSection )
      {
        v63 = WdLogNewEntry5_WdError(v47);
        *(_QWORD *)(v63 + 24) = v16;
        *(_QWORD *)(v63 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v63);
LABEL_114:
        LODWORD(v28) = -1073741811;
LABEL_115:
        v60 = v239;
        goto LABEL_116;
      }
      hSection = (unsigned __int64)v50->hSection;
      Size = a2->pStandardAllocation->ExistingHeapData.Size;
      if ( (*(_BYTE *)&v56 & 0x20) != 0 && hSection != (hSection & 0xFFFFFFFFFFFFF000uLL)
        || Size != (Size & 0xFFFFFFFFFFFFF000uLL) )
      {
        v64 = WdLogNewEntry5_WdError(v47);
        *(_QWORD *)(v64 + 24) = hSection;
        *(_QWORD *)(v64 + 32) = Size;
        WdLogEvent5_WdError(v64);
        goto LABEL_114;
      }
    }
  }
  v65 = 0;
  v243 = 0;
  v66 = v276;
  while ( v65 < a2->NumAllocations )
  {
    v67 = v65;
    PrivateDriverDataSize = v28[v67].PrivateDriverDataSize;
    if ( (unsigned int)PrivateDriverDataSize > 0x7FFFFFFF )
    {
      v69 = WdLogNewEntry5_WdWarning(PrivateDriverDataSize, v66, VidPnSourceId);
      *(_QWORD *)(v69 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v69);
      LODWORD(v28) = v242;
      goto LABEL_115;
    }
    if ( !v28[v67].pPrivateDriverData || !(_DWORD)PrivateDriverDataSize )
    {
      *((_QWORD *)v248 + v65) = 0LL;
      if ( (_BYTE)v66 )
        *((_QWORD *)v246 + v65) = 0LL;
      goto LABEL_149;
    }
    v70 = v276;
    if ( !v276 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v28[v67].PrivateDriverDataSize, 0x4B677844u);
      v70 = v276;
      v72 = PoolWithTag;
      v73 = 8LL * v65;
      VidPnSourceId = (char *)v248;
      *(_QWORD *)((char *)v248 + v73) = PoolWithTag;
      v74 = VidPnSourceId;
      goto LABEL_137;
    }
    v71 = (unsigned int)(2 * PrivateDriverDataSize);
    if ( !(2 * (_DWORD)PrivateDriverDataSize) )
    {
      v71 = 1LL;
LABEL_134:
      v72 = (char *)ExAllocatePoolWithTag(PagedPool, v71, 0x4B677844u);
      v70 = v276;
      goto LABEL_135;
    }
    if ( (unsigned int)(2 * PrivateDriverDataSize) <= 0x7FFFFFFFuLL )
      goto LABEL_134;
    v72 = 0LL;
LABEL_135:
    v73 = 8LL * v65;
    v74 = (char *)v248;
    *(_QWORD *)((char *)v248 + v73) = v72;
LABEL_137:
    if ( !*(_QWORD *)&v74[v73] )
    {
      LODWORD(v28) = -1073741801;
      v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, v72, VidPnSourceId);
      v76[3] = v16;
      v77 = a2->NumAllocations;
LABEL_139:
      v76[4] = v77;
      v76[5] = -1073741801LL;
      WdLogEvent5_WdWarning(v76);
      goto LABEL_115;
    }
    if ( !v70 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
    {
      v66 = v276;
    }
    else
    {
      v78 = &v72[v28[v67].PrivateDriverDataSize];
      *(_QWORD *)((char *)v246 + v73) = v78;
      v79 = v28[v67].PrivateDriverDataSize;
      pPrivateDriverData = (char *)v28[v67].pPrivateDriverData;
      if ( &pPrivateDriverData[v79] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v79] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v78, pPrivateDriverData, v79);
      v66 = v276;
    }
LABEL_149:
    v243 = ++v65;
  }
  v81 = v276;
  if ( v276 )
  {
    if ( a2->pStandardAllocation )
    {
      v82 = a2->PrivateDriverDataSize;
      if ( v82 )
      {
        v86 = operator new(v82, 0x4B677844u, PagedPool);
        Src = v86;
        if ( !v86 )
        {
          LODWORD(v28) = -1073741801;
          v76 = (_QWORD *)WdLogNewEntry5_WdWarning(v84, v83, v85);
          v76[3] = v16;
          v77 = a2->PrivateDriverDataSize;
          goto LABEL_139;
        }
        v87 = a2->PrivateDriverDataSize;
        pStandardAllocation = a2->pStandardAllocation;
        if ( (D3DKMT_CREATESTANDARDALLOCATION *)((char *)pStandardAllocation + v87) < pStandardAllocation
          || (unsigned __int64)pStandardAllocation + v87 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v86, pStandardAllocation, v87);
      }
    }
  }
  LODWORD(v28) = DXGDEVICE::OpenResourceObject(
                   v16,
                   a2,
                   v28,
                   a4,
                   a9,
                   a5,
                   v252,
                   v237,
                   v251,
                   (struct DXGAUTOMUTEX *)v263,
                   (struct DXGAUTOPUSHLOCK *)v268);
  if ( (int)v28 < 0 )
    goto LABEL_115;
  v90 = v252[0];
  v239 = v252[0];
  if ( !v252[0] || (*((_DWORD *)v252[0] + 1) & 1) != 0 || (*(_DWORD *)&a2->Flags & 2) == 0 )
  {
    v92 = v237[0];
    v93 = a2->NumAllocations;
    v94 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v94 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v94 + 144)) )
    {
      v96 = WdLogNewEntry5_WdAssertion(v95);
      *(_QWORD *)(v96 + 24) = 4366LL;
      WdLogEvent5_WdAssertion(v96);
    }
    v97 = v252[0];
    if ( v252[0] )
    {
      if ( !v92 )
      {
        for ( j = *((_QWORD *)v252[0] + 3); j; v93 = (unsigned int)(v93 + 1) )
          j = *(_QWORD *)(j + 64);
      }
      if ( (unsigned int)v93 > 0x10 )
      {
        v99 = 8 * v93;
        if ( !is_mul_ok(v93, 8uLL) )
          v99 = -1LL;
        v103 = operator new(v99, 0x4B677844u, PagedPool);
        if ( !v103 )
        {
          v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v101, v100, v102);
          v104[3] = v16;
          v104[4] = v93;
          v104[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v104);
          LODWORD(v28) = -1073741801;
          v61 = v249;
          v238 = v249;
          v60 = v239;
          goto LABEL_382;
        }
        if ( !v92 )
        {
          v105 = (void *)*((_QWORD *)v97 + 8);
          if ( v105 )
            ExFreePoolWithTag(v105, 0);
        }
        *((_QWORD *)v97 + 8) = v103;
        v81 = v276;
      }
    }
    LODWORD(v28) = DXGDEVICE::CreateAllocationObjects(v16, a2->NumAllocations, &v249, v97, &v265);
    v242 = (unsigned int)v28;
    v61 = v249;
    v238 = v249;
    if ( (int)v28 < 0 )
      goto LABEL_220;
    if ( v265 )
    {
      DXGDEVICE::AppendAllocationListToResourceOrDevice((struct _KTHREAD **)v16, v97, v249, v265);
      v241 = 1;
    }
    v109 = a2->Flags;
    if ( (*(_WORD *)&v109 & 0x800) != 0 )
    {
      if ( v247 != -1 )
      {
        *(_DWORD *)(*((_QWORD *)v97 + 7) + 12LL) |= 0x40u;
        *((_DWORD *)v97 + 1) |= 8u;
        *(_DWORD *)(*((_QWORD *)v97 + 7) + 12LL) ^= (*(_DWORD *)(*((_QWORD *)v97 + 7) + 12LL) ^ (*(_DWORD *)&a2->Flags >> 3)) & 0x80;
      }
      goto LABEL_195;
    }
    if ( (*(_WORD *)&v109 & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)v251 & 0x80u) != 0 )
      {
        v110 = WdLogNewEntry5_WdAssertion(v107);
        *(_QWORD *)(v110 + 24) = 4977LL;
        WdLogEvent5_WdAssertion(v110);
      }
      if ( (*(_DWORD *)v251 & 0x100) == 0 )
      {
LABEL_195:
        if ( !v240 )
        {
          memset(P, 0, 88LL * a2->NumAllocations);
          v112 = a4;
          if ( a4 )
          {
            v114 = (struct _D3DDDI_ALLOCATIONINFO2 *)v244;
            v113 = (void **)v248;
          }
          else
          {
            v236 = v81;
            v113 = (void **)v248;
            v234 = v61;
            v114 = (struct _D3DDDI_ALLOCATIONINFO2 *)v244;
            LODWORD(v28) = DXGDEVICE::CreateDriverAllocations(
                             v16,
                             a2,
                             (struct _D3DDDI_ALLOCATIONINFO2 *)v244,
                             (struct _DXGK_ALLOCATIONINFO *)P,
                             v234,
                             v97,
                             (void **)v248,
                             (void **)v246,
                             Src,
                             v251,
                             v236,
                             a13);
            v112 = 0;
          }
          if ( (int)v28 < 0 )
            goto LABEL_308;
          v235 = v113;
          v115 = v238;
          LODWORD(v28) = DXGDEVICE::OpenAllocations(
                           v16,
                           a2,
                           v114,
                           v238,
                           (struct _DXGK_OPENALLOCATIONINFO *)v254,
                           v235,
                           (void **)v246,
                           Src,
                           v276,
                           v112,
                           a8,
                           v257,
                           v258);
          if ( (int)v28 < 0 )
            goto LABEL_308;
          v116 = P;
          if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
            *((_DWORD *)P + 16) |= 0x4000008u;
          v117 = a2->Flags;
          if ( (*(_WORD *)&v117 & 0x100) != 0 )
          {
            v116[16] = v116[16] & 0xFEFFFFFB | 0x1000000;
          }
          else if ( (*(_WORD *)&v117 & 0x200) != 0 )
          {
            v116[16] |= 0x800004u;
          }
          if ( (*(_DWORD *)&a2->Flags & 0x8000) != 0 )
            v116[16] |= 0x800u;
          else
            v116[16] &= ~0x800u;
          LODWORD(v28) = DXGDEVICE::CreateVidMmAllocations<_DXGK_ALLOCATIONINFO>(
                           (__int64)v16,
                           (__int64)a2,
                           (__int64)v114,
                           (__int64)v116,
                           (__int64)v115,
                           (unsigned int *)v251,
                           a4,
                           (__int64)v262);
          v242 = (unsigned int)v28;
          if ( (int)v28 < 0 )
          {
LABEL_308:
            v60 = v239;
LABEL_381:
            v61 = v238;
            goto LABEL_382;
          }
          if ( v255 )
          {
            v118 = *((_QWORD *)v16 + 2);
            v119 = *(_QWORD *)(v118 + 536);
            v120 = 0;
            if ( a2->NumAllocations )
            {
              v121 = *(_QWORD *)(v118 + 528);
              v122 = v238;
              v123 = v255;
              do
              {
                v123[v120] = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v121 + 8) + 624LL))(
                               v119,
                               *((_QWORD *)v122 + 12 * v120 + 3));
                ++v120;
              }
              while ( v120 < a2->NumAllocations );
              v97 = v252[0];
              v16 = v266;
              v26 = 0;
            }
            LODWORD(v28) = v242;
          }
        }
        v124 = a2->Flags;
        if ( (*(_WORD *)&v124 & 0x800) != 0 )
        {
          memset(&v264, 0, sizeof(v264));
          v61 = v238;
          v264.hAllocation = *(HANDLE *)(*((_QWORD *)v238 + 6) + 16LL);
          v125 = ADAPTER_RENDER::DdiDescribeAllocation(*((ADAPTER_RENDER **)v16 + 2), &v264, v108);
          v28 = (struct _D3DDDI_ALLOCATIONINFO2 *)v125;
          v242 = v125;
          if ( v125 < 0 )
          {
            v129 = (_QWORD *)WdLogNewEntry5_WdWarning(v127, v126, v128);
            v129[3] = v28;
            v129[4] = v16;
            v129[5] = *((unsigned int *)v61 + 4);
            v129[6] = v61;
            WdLogEvent5_WdWarning(v129);
LABEL_220:
            v60 = v239;
            goto LABEL_382;
          }
          if ( v264.Format == D3DDDIFMT_UNKNOWN && v264.Height != 1 )
          {
            v130 = (_QWORD *)WdLogNewEntry5_WdWarning(v127, v126, v128);
            v130[3] = -1073741811LL;
            v130[4] = v16;
            v130[5] = v264.Height;
            WdLogEvent5_WdWarning(v130);
            LODWORD(v28) = -1073741811;
            v60 = v239;
            goto LABEL_382;
          }
          v131 = *(_QWORD *)(*((_QWORD *)v61 + 5) + 56LL);
          if ( (*(_DWORD *)(v131 + 12) & 0x20) == 0 )
          {
            v132 = WdLogNewEntry5_WdAssertion(v131);
            *(_QWORD *)(v132 + 24) = 5122LL;
            WdLogEvent5_WdAssertion(v132);
          }
          v133 = *(_QWORD *)(*((_QWORD *)v61 + 5) + 56LL);
          *(_DWORD *)(v133 + 192) = v264.Width;
          *(_DWORD *)(v133 + 196) = v264.Height;
          *(_DWORD *)(v133 + 200) = v264.Format;
          v134 = v238;
          *(_QWORD *)(v133 + 208) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                      *(VIDMM_EXPORT **)(*((_QWORD *)v16 + 2) + 528LL),
                                      *(struct VIDMM_GLOBAL **)(*((_QWORD *)v16 + 2) + 536LL),
                                      *((struct _VIDMM_MULTI_ALLOC **)v238 + 3));
          *(_QWORD *)(v133 + 216) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 528LL)
                                                                                          + 8LL)
                                                                              + 752LL))(
                                      *(_QWORD *)(*((_QWORD *)v16 + 2) + 536LL),
                                      *((_QWORD *)v134 + 3));
          v135 = v247;
          *(_DWORD *)(v133 + 224) = v247;
          if ( v135 != -1 )
          {
            *(_DWORD *)(v133 + 12) |= 0x40u;
            *(_DWORD *)(v133 + 12) ^= ((unsigned __int8)*(_DWORD *)(v133 + 12) ^ (unsigned __int8)(*(_DWORD *)&a2->Flags >> 3)) & 0x80;
          }
        }
        else if ( (*(_WORD *)&v124 & 0x1000) != 0 )
        {
          v61 = v238;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 528LL) + 8LL)
                                                         + 760LL))(
            *(_QWORD *)(*((_QWORD *)v16 + 2) + 536LL),
            *((_QWORD *)v238 + 3),
            *((_QWORD *)v251 + 42));
          goto LABEL_231;
        }
        v61 = v238;
LABEL_231:
        if ( v237[0] )
        {
          if ( v97 )
          {
            if ( (*((_DWORD *)v97 + 1) & 1) != 0 )
            {
              v136 = *((_QWORD *)v97 + 7);
              if ( !*(_DWORD *)(v136 + 24) && (*(_DWORD *)(v136 + 12) & 8) == 0 )
              {
                DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v267);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v267);
                if ( (*(_DWORD *)&a2->Flags & 2) == 0 )
                {
                  v138 = WdLogNewEntry5_WdAssertion(v137);
                  *(_QWORD *)(v138 + 24) = 5175LL;
                  WdLogEvent5_WdAssertion(v138);
                }
                Global = DXGGLOBAL::GetGlobal(v137);
                v140 = DXGGLOBAL::AllocHandle((__int64)Global, *((_QWORD *)v97 + 7), 2u);
                v143 = *((_QWORD *)v97 + 7);
                *(_DWORD *)(v143 + 24) = v140;
                if ( !*(_DWORD *)(*((_QWORD *)v97 + 7) + 24LL) )
                {
                  v144 = WdLogNewEntry5_WdWarning(v143, v141, v142);
                  *(_QWORD *)(v144 + 24) = v16;
                  *(_QWORD *)(v144 + 32) = -1073741801LL;
                  WdLogEvent5_WdWarning(v144);
                  LODWORD(v28) = -1073741801;
                  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v267);
                  v60 = v239;
                  goto LABEL_382;
                }
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v267);
              }
            }
          }
          DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
            (DXGAUTOPUSHLOCKEXCLUSIVE *)v269,
            (struct _KTHREAD **)v16 + 23);
          v145 = *((_QWORD *)v16 + 7);
          if ( v145 )
            *(_QWORD *)(v145 + 32) = v97;
          *((_QWORD *)v97 + 5) = *((_QWORD *)v16 + 7);
          *((_QWORD *)v16 + 7) = v97;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v269);
        }
        v146 = 0;
        if ( v97 )
          v146 = *((_DWORD *)v97 + 4);
        a2->hResource = v146;
        v147 = a2->Flags;
        if ( ((*(_BYTE *)&v147 & 2) != 0 || a4) && (*(_BYTE *)&v147 & 0x40) == 0 )
          v148 = *(unsigned int *)(*((_QWORD *)v97 + 7) + 24LL);
        else
          v148 = 0LL;
        a2->hGlobalShare = v148;
        if ( v276 )
        {
          v149 = 0LL;
          v243 = 0;
          v150 = v61;
          while ( (unsigned int)v149 < a2->NumAllocations )
          {
            v106 = (ULONG64)a2->pAllocationInfo + 96 * (unsigned int)v149;
            v148 = MmUserProbeAddress;
            if ( v106 >= MmUserProbeAddress )
              v106 = MmUserProbeAddress;
            *(_DWORD *)v106 = *((_DWORD *)v150 + 4);
            v149 = (unsigned int)(v149 + 1);
            v243 = v149;
            v150 = (struct DXGALLOCATION *)*((_QWORD *)v150 + 8);
          }
          if ( (int)v28 < 0 )
            goto LABEL_220;
        }
        else
        {
          v149 = 0LL;
          for ( k = v61; (unsigned int)v149 < a2->NumAllocations; k = (struct DXGALLOCATION *)*((_QWORD *)k + 8) )
          {
            v106 = 96LL * (unsigned int)v149;
            v148 = (ULONG64)a2->pAllocationInfo;
            *(_DWORD *)(v106 + v148) = *((_DWORD *)k + 4);
            v149 = (unsigned int)(v149 + 1);
          }
        }
        v152 = 0;
        v243 = 0;
        v153 = v238;
        for ( m = v238; v152 < a2->NumAllocations; m = v153 )
        {
          v106 = *(unsigned int *)(*((_QWORD *)v153 + 6) + 4LL);
          if ( (v106 & 1) != 0 )
          {
            LODWORD(v28) = DXGDEVICE::AddPrimaryAllocation((DXGADAPTER **)v16, v153);
            v242 = (unsigned int)v28;
            if ( (int)v28 < 0 )
              goto LABEL_308;
          }
          else if ( (v106 & 2) != 0 )
          {
            DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v16, ((unsigned int)v106 >> 6) & 0xF, v153, 0, 1u);
          }
          v243 = ++v152;
          v153 = (struct DXGALLOCATION *)*((_QWORD *)v153 + 8);
        }
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          v60 = v239;
          if ( a2->pPrivateRuntimeData )
          {
            v154 = *((_QWORD *)v239 + 7);
            if ( *(_QWORD *)(v154 + 96) )
            {
              if ( *(_DWORD *)(v154 + 104) != a2->PrivateRuntimeDataSize )
              {
                LODWORD(v28) = -1073741811;
                v158 = (_QWORD *)WdLogNewEntry5_WdWarning(v154, v106, v149);
                v158[3] = v16;
                v158[4] = a2->PrivateRuntimeDataSize;
                v158[5] = *(unsigned int *)(*((_QWORD *)v60 + 7) + 104LL);
                goto LABEL_380;
              }
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)v60 + 7) + 96LL) = operator new(
                                                           a2->PrivateRuntimeDataSize,
                                                           0x4B677844u,
                                                           PagedPool);
              v157 = *((_QWORD *)v60 + 7);
              if ( !*(_QWORD *)(v157 + 96) )
              {
                LODWORD(v28) = -1073741801;
                v158 = (_QWORD *)WdLogNewEntry5_WdWarning(v157, v155, v156);
                v158[3] = v16;
                PrivateRuntimeDataSize = a2->PrivateRuntimeDataSize;
LABEL_273:
                v158[4] = PrivateRuntimeDataSize;
                v158[5] = -1073741801LL;
LABEL_380:
                WdLogEvent5_WdWarning(v158);
                goto LABEL_381;
              }
              *(_DWORD *)(v157 + 104) = a2->PrivateRuntimeDataSize;
            }
            v160 = v276;
            if ( v276 )
            {
              v161 = a2->PrivateRuntimeDataSize;
              pPrivateRuntimeData = (char *)a2->pPrivateRuntimeData;
              v163 = *(void **)(*((_QWORD *)v60 + 7) + 96LL);
              if ( &pPrivateRuntimeData[v161] < pPrivateRuntimeData
                || (unsigned __int64)&pPrivateRuntimeData[v161] > MmUserProbeAddress )
              {
                *(_BYTE *)MmUserProbeAddress = 0;
              }
              memmove(v163, pPrivateRuntimeData, v161);
            }
            else
            {
              memmove(*(void **)(*((_QWORD *)v60 + 7) + 96LL), a2->pPrivateRuntimeData, a2->PrivateRuntimeDataSize);
            }
          }
          else
          {
            v160 = v276;
          }
          if ( a2->pStandardAllocation )
          {
            v164 = a2->PrivateDriverDataSize;
            if ( v164 )
            {
              v165 = *((_QWORD *)v60 + 7);
              if ( *(_QWORD *)(v165 + 112) )
              {
                if ( *(_DWORD *)(v165 + 120) != v164 )
                {
                  LODWORD(v28) = -1073741811;
                  v158 = (_QWORD *)WdLogNewEntry5_WdWarning(v165, v106, v149);
                  v158[3] = v16;
                  v158[4] = a2->PrivateDriverDataSize;
                  v158[5] = *(unsigned int *)(*((_QWORD *)v60 + 7) + 120LL);
                  v158[6] = 5406LL;
                  goto LABEL_380;
                }
              }
              else
              {
                *(_QWORD *)(*((_QWORD *)v60 + 7) + 112LL) = operator new(v164, 0x4B677844u, PagedPool);
                v168 = *((_QWORD *)v60 + 7);
                if ( !*(_QWORD *)(v168 + 112) )
                {
                  LODWORD(v28) = -1073741801;
                  v158 = (_QWORD *)WdLogNewEntry5_WdWarning(v168, v166, v167);
                  v158[3] = v16;
                  PrivateRuntimeDataSize = a2->PrivateDriverDataSize;
                  goto LABEL_273;
                }
                *(_DWORD *)(v168 + 120) = a2->PrivateDriverDataSize;
              }
              v169 = Src;
              if ( !v160 )
                v169 = a2->pStandardAllocation;
              memmove(*(void **)(*((_QWORD *)v60 + 7) + 112LL), v169, a2->PrivateDriverDataSize);
            }
          }
          v170 = 0;
          v243 = 0;
          v171 = v238;
          m = v238;
          if ( a2->NumAllocations )
          {
            v148 = (ULONG64)v244;
            do
            {
              v172 = v148 + 96LL * v170;
              if ( *(_QWORD *)(v172 + 16) )
              {
                *(_QWORD *)(*((_QWORD *)v171 + 6) + 32LL) = operator new(
                                                              *(unsigned int *)(v172 + 24),
                                                              0x4B677844u,
                                                              PagedPool);
                v175 = *(void **)(*((_QWORD *)v171 + 6) + 32LL);
                if ( !v175 )
                {
                  v242 = 3221225495LL;
                  v177 = (_QWORD *)WdLogNewEntry5_WdWarning(0LL, v173, v174);
                  v177[3] = v16;
                  v177[4] = v170 + 1;
                  v177[5] = *((unsigned int *)v244 + 24 * v170 + 6);
                  v177[6] = -1073741801LL;
                  WdLogEvent5_WdWarning(v177);
                  goto LABEL_307;
                }
                if ( !v276 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
                  v176 = *(const void **)(v172 + 16);
                else
                  v176 = (const void *)*((_QWORD *)v246 + v170);
                memmove(v175, v176, *(unsigned int *)(v172 + 24));
                *(_DWORD *)(*((_QWORD *)v171 + 6) + 40LL) = *(_DWORD *)(v172 + 24);
                v148 = (ULONG64)v244;
              }
              v243 = ++v170;
              v171 = (struct DXGALLOCATION *)*((_QWORD *)v171 + 8);
              m = v171;
            }
            while ( v170 < a2->NumAllocations );
          }
        }
        v28 = *(struct _D3DDDI_ALLOCATIONINFO2 **)(*((_QWORD *)v16 + 2) + 16LL);
        if ( !BYTE1(v28[1].Reserved[4]) || a4 )
        {
LABEL_362:
          v200 = (_QWORD *)*((_QWORD *)v16 + 2);
          v201 = (__int64)(v200 + 2);
          if ( (*(_DWORD *)(v200[2] + 1700LL) & 0x40) != 0 )
          {
            if ( v251 )
            {
              if ( (*(_DWORD *)v251 & 0x200) == 0 )
              {
                memset(&v270, 0, sizeof(v270));
                v270.Protection.Value |= 1uLL;
                v202 = 0;
                v203 = v238;
                if ( a2->NumAllocations )
                {
                  while ( 1 )
                  {
                    v204 = (*((_DWORD *)v203 + 18) >> 12) & 0x3F;
                    if ( *((_DWORD *)v251 + 4) == 4 )
                    {
                      v205 = *(_DWORD *)(*((_QWORD *)v251 + 3) + 12LL);
                      if ( ((v205 - 1) & 0xFFFFFFFC) != 0 || v205 == 2 )
                      {
                        if ( *(_BYTE *)(*(_QWORD *)v201 + 2234LL) )
                          v204 = -1;
                      }
                    }
                    if ( v240 )
                    {
                      Current = DXGPROCESS::GetCurrent();
                      v207 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) + 3888LL),
                               *((_DWORD *)Current + 106),
                               v16,
                               0,
                               *((_DWORD *)v203 + 24),
                               &v270);
                    }
                    else
                    {
                      LOBYTE(v233) = 0;
                      v207 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DDDI_MAPGPUVIRTUALADDRESS *, int, int))(*(_QWORD *)(v200[66] + 8LL) + 792LL))(
                               v200[67],
                               0LL,
                               *((_QWORD *)v203 + 3),
                               &v270,
                               v233,
                               v204);
                    }
                    v242 = v207;
                    if ( (int)v207 < 0 )
                      break;
                    v201 = *((_QWORD *)v16 + 2) + 16LL;
                    BaseAddress = v270.BaseAddress;
                    if ( *(_BYTE *)(*(_QWORD *)v201 + 2234LL) )
                      BaseAddress = v270.VirtualAddress;
                    v270.BaseAddress = BaseAddress;
                    v270.VirtualAddress = 0LL;
                    ++v202;
                    v203 = (struct DXGALLOCATION *)*((_QWORD *)v203 + 8);
                    if ( v202 >= a2->NumAllocations )
                    {
                      LODWORD(v28) = v242;
                      v60 = v239;
                      goto LABEL_381;
                    }
                  }
                  v212 = WdLogNewEntry5_WdWarning(v209, v208, v210);
                  LODWORD(v28) = v242;
                  *(_QWORD *)(v212 + 24) = (int)v242;
                  WdLogEvent5_WdWarning(v212);
                  v60 = v239;
                  goto LABEL_381;
                }
              }
            }
          }
LABEL_307:
          LODWORD(v28) = v242;
          goto LABEL_308;
        }
        if ( (*(_DWORD *)&a2->Flags & 0x1800) != 0
          || (HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)v16 + 5))) == 0 )
        {
          v199 = WdLogNewEntry5_WdError(v148);
          *(_QWORD *)(v199 + 24) = -1073741823LL;
          WdLogEvent5_WdError(v199);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v268);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v263);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v252);
          return 3221225473LL;
        }
        v259 = 0LL;
        v179 = DXGDEVICE::UmdManagesResidency(v16) && v251 && (unsigned int)(*((_DWORD *)v251 + 4) - 1) <= 2;
        v180 = a2->Flags;
        v60 = v239;
        if ( (*(_BYTE *)&v180 & 2) != 0 )
          v181 = *(const void **)(*((_QWORD *)v239 + 7) + 96LL);
        else
          v181 = 0LL;
        v182 = Src;
        if ( v276 )
        {
          v183 = (void **)v246;
          if ( (*(_DWORD *)&v180 & 0x10000) == 0 )
            goto LABEL_325;
        }
        else
        {
          v182 = a2->pStandardAllocation;
        }
        v183 = (void **)v248;
LABEL_325:
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
          v184 = *((_DWORD *)v239 + 5);
        else
          v184 = 0;
        LODWORD(v28) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateAllocation(
                         (DXG_GUEST_VIRTUALGPU_VMBUS *)&v28[40].48,
                         HostProcess,
                         *((_DWORD *)v16 + 84),
                         v184,
                         a2,
                         (struct _D3DDDI_ALLOCATIONINFO2 *)v244,
                         v183,
                         v182,
                         v181,
                         v276,
                         v179,
                         (unsigned __int8 **)&v259);
        v242 = (unsigned int)v28;
        v185 = v259;
        v255 = (unsigned __int64 *)v259;
        if ( !v259 )
          goto LABEL_381;
        v186 = v259;
        v258 = (unsigned __int64 *)v259;
        if ( v60 )
        {
          *((_DWORD *)v60 + 5) = *((_DWORD *)v259 + 1);
          if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
          {
            *(_DWORD *)(*((_QWORD *)v60 + 7) + 28LL) = v185[2];
            v186 = v185;
          }
        }
        v187 = v238;
        v257 = (unsigned int *)v238;
        v188 = 0LL;
        v260 = 0LL;
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 && v60 )
        {
          v188 = *(_QWORD **)(*((_QWORD *)v60 + 7) + 128LL);
          v260 = v188;
        }
        v189 = 0;
        while ( 1 )
        {
          v247 = v189;
          if ( v189 >= a2->NumAllocations )
            break;
          v190 = (char *)&v186[18 * v189];
          *((_DWORD *)v187 + 24) = *((_DWORD *)v190 + 4);
          *((_DWORD *)v187 + 32) = *((_DWORD *)v190 + 7);
          *((_DWORD *)v187 + 33) = v186[3];
          if ( v186[3] & 1 | ((v186[3] & 2) != 0) )
            *((_QWORD *)v187 + 13) = *((_QWORD *)v244 + 12 * v189 + 1);
          *(_DWORD *)(*((_QWORD *)v187 + 6) + 4LL) = *((_DWORD *)v190 + 6);
          v191 = (char *)v244 + 96 * v189;
          if ( (*((_DWORD *)v191 + 8) & 1) != 0 && *((_QWORD *)v16 + 209) != *(_QWORD *)(*((_QWORD *)v16 + 2) + 16LL) )
            *(_DWORD *)(*((_QWORD *)v187 + 6) + 4LL) |= 4u;
          *(_DWORD *)(*((_QWORD *)v187 + 6) + 4LL) |= 0x20000u;
          *(_QWORD *)(*((_QWORD *)v187 + 6) + 16LL) = *((_QWORD *)v187 + 6);
          v192 = (_OWORD *)*((_QWORD *)v187 + 6);
          *((_QWORD *)v187 + 15) = *((_QWORD *)v190 + 4);
          v192[4] = *(_OWORD *)(v190 + 40);
          v192[5] = *(_OWORD *)(v190 + 56);
          v192[6] = *(_OWORD *)(v190 + 72);
          if ( (*(_DWORD *)&a2->Flags & 8) != 0 )
            *(_DWORD *)(*((_QWORD *)v187 + 6) + 4LL) |= 0x40000u;
          if ( !v276 || (*(_DWORD *)&a2->Flags & 0x10000) != 0 )
          {
            v193 = *((unsigned int *)v191 + 6);
            v194 = 8LL * v189;
            v197 = v193;
            v195 = *(const void **)((char *)v248 + v194);
            v196 = (char *)*((_QWORD *)v191 + 2);
          }
          else
          {
            v193 = *((unsigned int *)v191 + 6);
            v194 = 8LL * v189;
            v195 = *(const void **)((char *)v246 + v194);
            v196 = (char *)*((_QWORD *)v191 + 2);
            if ( (unsigned __int64)&v196[v193] > MmUserProbeAddress || &v196[v193] <= v196 )
              *(_BYTE *)MmUserProbeAddress = 0;
            v197 = v193;
          }
          memmove(v196, v195, v197);
          if ( v188 )
          {
            if ( !v276 || (v198 = (char *)v246, (*(_DWORD *)&a2->Flags & 0x10000) != 0) )
              v198 = (char *)v248;
            memmove((void *)*(v188 - 2), *(const void **)&v198[v194], v193);
            v188 = (_QWORD *)*v188;
            v260 = v188;
          }
          v185 = v255;
          LODWORD(v28) = v242;
          v189 = v247 + 1;
          v187 = (struct DXGALLOCATION *)*((_QWORD *)v187 + 8);
          v257 = (unsigned int *)v187;
          v186 = v258;
        }
        if ( v185 )
          ExFreePoolWithTag(v185, 0);
        if ( (int)v28 < 0 )
        {
          v60 = v239;
          goto LABEL_381;
        }
        goto LABEL_362;
      }
    }
    else
    {
      if ( !v97 )
        goto LABEL_195;
      v111 = *((_QWORD *)v97 + 7);
      if ( !v111 || (*(_BYTE *)(v111 + 12) & 0x60) != 0x60 )
        goto LABEL_195;
    }
    *((_DWORD *)v97 + 1) |= 8u;
    goto LABEL_195;
  }
  v91 = (_QWORD *)WdLogNewEntry5_WdError(v89);
  v91[3] = v16;
  v91[4] = v90;
  v91[5] = -1073741811LL;
  WdLogEvent5_WdError(v91);
  LODWORD(v28) = -1073741811;
  v60 = v90;
LABEL_116:
  v61 = 0LL;
LABEL_382:
  DXGAUTOMUTEX::ReleaseIfAcquired((DXGAUTOMUTEX *)v263);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v268);
  if ( (int)v28 < 0 )
  {
    if ( v61 )
    {
      v214 = 0;
      v215 = v238;
      if ( a2->NumAllocations )
      {
        do
        {
          v216 = *((_QWORD *)v215 + 6);
          if ( *(_QWORD *)(v216 + 8) && !a4 )
          {
            if ( (v217 = *(_DWORD *)(v216 + 4), (v217 & 1) != 0) && !*((_DWORD *)v16 + 82) || (v217 & 2) != 0 )
            {
              if ( (v217 & 0x10) != 0 )
              {
                v218 = WdLogNewEntry5_WdAssertion(v213);
                *(_QWORD *)(v218 + 24) = 5726LL;
                WdLogEvent5_WdAssertion(v218);
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)v16 + 2) + 528LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)v16 + 2) + 536LL),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v215 + 6) + 8LL));
              *(_DWORD *)(*((_QWORD *)v215 + 6) + 4LL) |= 0x10u;
            }
          }
          ++v214;
          v215 = (struct DXGALLOCATION *)*((_QWORD *)v215 + 8);
        }
        while ( v214 < a2->NumAllocations );
        v60 = v239;
      }
      v61 = v238;
    }
    if ( v237[0] )
    {
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)v256, 0LL);
      DXGRESOURCEREFERENCE::MoveAssign(v252, (struct DXGRESOURCE **)v256);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v256);
      DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)v16, v60);
      DXGDEVICE::DestroyResource(v16, v60, 0LL, 0);
    }
    else if ( v61 )
    {
      if ( v241 )
        DXGDEVICE::RemoveAllocationsWithoutDestroy(v16, v60, v61, a2->NumAllocations);
      v219 = 0;
      *(_QWORD *)&v256[0].0 = 0LL;
      if ( !v60 || *((_QWORD *)v60 + 7) )
      {
        do
        {
          v220 = v61;
          v221 = (_QWORD *)((char *)v61 + 64);
          v61 = (struct DXGALLOCATION *)*((_QWORD *)v61 + 8);
          *((_QWORD *)v220 + 7) = 0LL;
          *v221 = 0LL;
          if ( v60 )
          {
            v222 = *((_QWORD *)v60 + 7);
            if ( v222 )
            {
              if ( *(_QWORD *)(*((_QWORD *)v220 + 6) + 48LL) )
              {
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v222 + 32));
                --*(_DWORD *)(*((_QWORD *)v60 + 7) + 124LL);
                v223 = *((_QWORD *)v220 + 6) + 48LL;
                v224 = *(_QWORD *)v223;
                v225 = *(_QWORD **)(*((_QWORD *)v220 + 6) + 56LL);
                if ( *(_QWORD *)(*(_QWORD *)v223 + 8LL) != v223 || *v225 != v223 )
                  __fastfail(3u);
                *v225 = v224;
                *(_QWORD *)(v224 + 8) = v225;
                *(_QWORD *)(*((_QWORD *)v220 + 6) + 48LL) = 0LL;
                v226 = *((_QWORD *)v60 + 7) + 32LL;
                *(_QWORD *)(v226 + 8) = 0LL;
                ExReleasePushLockExclusiveEx(v226, 0LL);
                KeLeaveCriticalRegion();
              }
            }
          }
          DXGDEVICE::DestroyAllocations(v16, 0LL, 0, v220, 0LL, v256[0]);
        }
        while ( v61 );
        v61 = v238;
        v219 = v256[0].Value;
      }
      if ( v60 )
      {
        v227 = *((_QWORD *)v60 + 7);
        if ( v227 )
        {
          v228 = 0;
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v227 + 32));
          v229 = *((_DWORD *)v60 + 1);
          if ( (v229 & 0x10) == 0 )
          {
            *((_DWORD *)v60 + 1) = v229 | 0x10;
            v228 = 1;
          }
          v230 = *((_QWORD *)v60 + 7) + 32LL;
          *(_QWORD *)(v230 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v230, 0LL);
          KeLeaveCriticalRegion();
          if ( v228 )
          {
            DXGDEVICE::RemoveResourceFromDeviceList((struct _KTHREAD **)v16, v60);
            DXGDEVICE::DestroyResource(v16, v60, 0LL, 0);
          }
        }
        else
        {
          DXGDEVICE::DestroyAllocations(v16, v60, 0, v61, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v219);
        }
      }
    }
  }
  else if ( v237[0] )
  {
    DXGPROCESS::CommitResourceHandleSafe(*((DXGPROCESS **)v16 + 5), v60);
  }
  v231 = v248;
  if ( a2->NumAllocations )
  {
    do
    {
      v232 = (void *)v231[v26];
      if ( v232 )
        ExFreePoolWithTag(v232, 0);
      ++v26;
    }
    while ( v26 < a2->NumAllocations );
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( a2->NumAllocations > 5 )
  {
    if ( v244 )
      ExFreePoolWithTag(v244, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v254 )
      ExFreePoolWithTag(v254, 0);
    if ( v231 )
      ExFreePoolWithTag(v231, 0);
    if ( v246 )
      ExFreePoolWithTag(v246, 0);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v268);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v263);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)v252);
  return (unsigned int)v28;
}
