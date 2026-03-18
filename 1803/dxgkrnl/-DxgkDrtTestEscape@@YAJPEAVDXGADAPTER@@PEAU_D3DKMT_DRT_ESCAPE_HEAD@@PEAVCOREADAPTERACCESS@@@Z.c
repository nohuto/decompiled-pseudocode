/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0001938 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0009A64 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000AC00 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00154E0 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00188A4 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C001A4C8 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A57C (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A718 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001A72C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025104 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C0025160 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C3D4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0096138 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C009631C (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAA@XZ @ 0x1C0099C98 (--1-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAA@XZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00B09A4 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B358C (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00DAF10 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00E6170 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1F88 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAVDXGHWQUEUE@@_K@Z @ 0x1C00FEAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C0147588 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C01490C4 (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C0149134 (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C014DF80 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C016AD48 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C017AE78 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0182CFC (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C018ACD4 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01FC280 (DxgkPowerOnOffMonitor.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C0202E2C (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0212318 (-DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C0213FCC (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorDRTTest @ 0x1C022D8D0 (MonitorDRTTest.c)
 */

__int64 __fastcall DxgkDrtTestEscape(struct DXGADAPTER *this, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  UINT v16; // ebx
  struct DXGPROCESS *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int32 v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 result; // rax
  __int64 v34; // rcx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  struct DXGPROCESS *v40; // rax
  __int64 v41; // rcx
  struct DXGPROCESS *v42; // r15
  __int64 v43; // rax
  __int64 v44; // rcx
  struct DXGDEVICE *v45; // rbx
  unsigned int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  struct _KTHREAD **v56; // rax
  __int64 v57; // rcx
  struct _KTHREAD **v58; // r15
  __int64 v59; // rcx
  struct DXGDEVICE *v60; // r13
  __int64 v61; // rax
  struct _D3DDDI_ESCAPEFLAGS *v62; // rcx
  int v63; // ebx
  __int64 v64; // r12
  UINT v65; // edi
  UINT v66; // ebx
  UINT HostProcess; // eax
  __int64 v68; // rcx
  __int64 v69; // r9
  int v70; // eax
  unsigned int v71; // r8d
  struct DXGALLOCATION **AllocationSafe; // rax
  struct DXGALLOCATION **v73; // rcx
  struct DXGALLOCATION **v74; // rax
  struct DXGALLOCATION *v75; // rax
  struct DXGRESOURCE **ResourceSafe; // rax
  unsigned int v77; // r8d
  int v78; // edx
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // r8
  char *v82; // r14
  __int64 v83; // r9
  __int64 v84; // rdx
  char *v85; // rax
  _OWORD *v86; // rcx
  __int64 v87; // r8
  struct _KTHREAD **Current; // rax
  __int64 v89; // rcx
  __int64 v90; // rcx
  struct DXGCONTEXT *v91; // r13
  __int64 v92; // rax
  struct DXGDEVICE *v93; // rbx
  __int64 v94; // r9
  __int64 v95; // rcx
  struct _EX_RUNDOWN_REF *v96; // rcx
  __int64 v97; // rax
  UINT v98; // ebx
  __int64 v99; // rax
  struct _D3DDDI_ALLOCATIONLIST *v100; // r15
  unsigned int v101; // edx
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v103; // rbx
  struct DXGDEVICE *Elements; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rcx
  struct DXGPROCESS *v112; // rax
  __int64 v113; // rcx
  CCD_TOPOLOGY *v114; // rax
  struct _KTHREAD **v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rax
  NTSTATUS v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rax
  struct _KTHREAD **v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r12
  __int64 v125; // rcx
  struct DXGDEVICE *v126; // r15
  __int64 v127; // rax
  __int64 v128; // r9
  struct DXGALLOCATION **v129; // rax
  __int64 v130; // rcx
  struct _EX_RUNDOWN_REF *v131; // rbx
  _QWORD *v132; // rax
  __int64 v133; // r9
  __int64 v134; // rcx
  bool v135; // bl
  struct _KTHREAD **v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rcx
  struct DXGDEVICE *v139; // rax
  __int64 v140; // rax
  int v141; // ecx
  int v142; // ecx
  int v143; // ecx
  struct DXGPROCESS *v144; // rax
  struct _FILE_OBJECT *v145; // rbx
  unsigned int v146; // edx
  int IsTargetInClientVidPnTopology; // ebx
  int v148; // r9d
  struct _FILE_OBJECT *v149; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  IRP *v151; // rax
  NTSTATUS Status; // eax
  PKEVENT v153; // [rsp+38h] [rbp-900h]
  unsigned __int8 v154[4]; // [rsp+50h] [rbp-8E8h] BYREF
  int v155; // [rsp+54h] [rbp-8E4h] BYREF
  struct DXGDEVICE *v156; // [rsp+58h] [rbp-8E0h] BYREF
  struct _EX_RUNDOWN_REF *v157; // [rsp+60h] [rbp-8D8h] BYREF
  _BYTE v158[8]; // [rsp+68h] [rbp-8D0h] BYREF
  int v159; // [rsp+70h] [rbp-8C8h]
  unsigned int v160; // [rsp+74h] [rbp-8C4h] BYREF
  struct DXGCONTEXT *v161; // [rsp+78h] [rbp-8C0h] BYREF
  _BYTE v162[8]; // [rsp+80h] [rbp-8B8h] BYREF
  struct _D3DDDI_ESCAPEFLAGS v163[2]; // [rsp+88h] [rbp-8B0h] BYREF
  int v164; // [rsp+90h] [rbp-8A8h] BYREF
  _BYTE v165[8]; // [rsp+98h] [rbp-8A0h] BYREF
  struct DXGALLOCATION *v166; // [rsp+A0h] [rbp-898h] BYREF
  struct _EX_RUNDOWN_REF *v167; // [rsp+A8h] [rbp-890h] BYREF
  struct DXGALLOCATION *v168; // [rsp+B0h] [rbp-888h] BYREF
  struct DXGDEVICE *v169; // [rsp+B8h] [rbp-880h] BYREF
  _BYTE v170[8]; // [rsp+C0h] [rbp-878h] BYREF
  struct _EX_RUNDOWN_REF *v171; // [rsp+C8h] [rbp-870h] BYREF
  unsigned __int8 Src[4]; // [rsp+D0h] [rbp-868h] BYREF
  __int64 v173; // [rsp+D4h] [rbp-864h]
  int v174; // [rsp+DCh] [rbp-85Ch]
  _BYTE v175[16]; // [rsp+E0h] [rbp-858h] BYREF
  struct DXGDEVICE *v176; // [rsp+F0h] [rbp-848h] BYREF
  _BYTE v177[8]; // [rsp+F8h] [rbp-840h] BYREF
  struct DXGDEVICE *v178; // [rsp+100h] [rbp-838h] BYREF
  struct DXGDEVICE *v179; // [rsp+108h] [rbp-830h] BYREF
  _BYTE v180[8]; // [rsp+110h] [rbp-828h] BYREF
  __int64 v181; // [rsp+118h] [rbp-820h]
  char v182; // [rsp+120h] [rbp-818h]
  _BYTE v183[16]; // [rsp+128h] [rbp-810h] BYREF
  _BYTE v184[8]; // [rsp+138h] [rbp-800h] BYREF
  struct DXGADAPTER *v185; // [rsp+140h] [rbp-7F8h]
  char v186; // [rsp+148h] [rbp-7F0h]
  unsigned int v187; // [rsp+150h] [rbp-7E8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+158h] [rbp-7E0h] BYREF
  struct _FILE_OBJECT *v189; // [rsp+160h] [rbp-7D8h] BYREF
  PVOID Object; // [rsp+168h] [rbp-7D0h] BYREF
  struct _EX_RUNDOWN_REF *v191; // [rsp+170h] [rbp-7C8h] BYREF
  struct _EX_RUNDOWN_REF *v192; // [rsp+178h] [rbp-7C0h] BYREF
  _BYTE v193[16]; // [rsp+180h] [rbp-7B8h] BYREF
  struct _EX_RUNDOWN_REF *v194; // [rsp+190h] [rbp-7A8h] BYREF
  _BYTE v195[8]; // [rsp+198h] [rbp-7A0h] BYREF
  __int64 v196; // [rsp+1A0h] [rbp-798h]
  char v197; // [rsp+1A8h] [rbp-790h]
  _BYTE v198[8]; // [rsp+1B0h] [rbp-788h] BYREF
  struct DXGADAPTER *v199; // [rsp+1B8h] [rbp-780h]
  char v200; // [rsp+1C0h] [rbp-778h]
  _BYTE v201[16]; // [rsp+1C8h] [rbp-770h] BYREF
  union _LARGE_INTEGER v202; // [rsp+1D8h] [rbp-760h] BYREF
  _BYTE v203[16]; // [rsp+1E0h] [rbp-758h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1F0h] [rbp-748h] BYREF
  _BYTE v205[24]; // [rsp+200h] [rbp-738h] BYREF
  struct _KEVENT Event; // [rsp+218h] [rbp-720h] BYREF
  unsigned __int8 v207[16]; // [rsp+230h] [rbp-708h] BYREF
  __int128 v208; // [rsp+240h] [rbp-6F8h]
  __int128 v209; // [rsp+250h] [rbp-6E8h]
  __int128 v210; // [rsp+260h] [rbp-6D8h]
  __int128 v211; // [rsp+270h] [rbp-6C8h]
  struct DXGDEVICE *v212; // [rsp+280h] [rbp-6B8h]
  __int64 v213; // [rsp+290h] [rbp-6A8h] BYREF
  int v214; // [rsp+298h] [rbp-6A0h]
  const wchar_t *v215; // [rsp+2A0h] [rbp-698h]
  int *v216; // [rsp+2A8h] [rbp-690h]
  int v217; // [rsp+2B0h] [rbp-688h]
  int *v218; // [rsp+2B8h] [rbp-680h]
  int v219; // [rsp+2C0h] [rbp-678h]
  __int64 v220; // [rsp+2C8h] [rbp-670h]
  int v221; // [rsp+2D0h] [rbp-668h]
  _BYTE v222[40]; // [rsp+2D8h] [rbp-660h] BYREF
  _BYTE v223[96]; // [rsp+300h] [rbp-638h] BYREF
  _BYTE v224[96]; // [rsp+360h] [rbp-5D8h] BYREF
  PERESOURCE *v225[12]; // [rsp+3C0h] [rbp-578h] BYREF
  struct _D3DKMT_RENDER v226; // [rsp+420h] [rbp-518h] BYREF
  PVOID v227[33]; // [rsp+590h] [rbp-3A8h] BYREF
  int v228; // [rsp+698h] [rbp-2A0h]
  _QWORD v229[54]; // [rsp+6A0h] [rbp-298h] BYREF
  __int64 v230[10]; // [rsp+850h] [rbp-E8h] BYREF
  _QWORD v231[10]; // [rsp+8A0h] [rbp-98h] BYREF

  memset(v230, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v230[1]);
  v230[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v230[3]) = 45;
  LOBYTE(v230[6]) = -1;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v159 = 0;
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( !g_DRTEnable && !g_OSTestSigningEnabled )
    {
      v28 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v28 + 24) = 1109LL;
LABEL_218:
      WdLogEvent5_WdWarning(v28);
      goto LABEL_219;
    }
    if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v7, v6) + 323) & 8) != 0 && *((_DWORD *)a2 + 2) != 16 )
    {
      v32 = WdLogNewEntry5_WdEvent(v30, v29);
      *(_QWORD *)(v32 + 24) = 161LL;
      WdLogEvent5_WdEvent(v32);
      return 3221225485LL;
    }
    v34 = *((unsigned int *)a2 + 2);
    if ( (int)v34 <= 17 )
    {
      if ( (_DWORD)v34 == 17 )
      {
        if ( *((_DWORD *)a2 + 1) < 0xA8u )
        {
          v28 = WdLogNewEntry5_WdWarning(v34, v29, v31);
          *(_QWORD *)(v28 + 24) = 669LL;
          goto LABEL_218;
        }
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v34, v29);
        if ( Current )
        {
          v161 = 0LL;
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v183, *((_DWORD *)a2 + 3), Current, &v161, 0);
          v91 = v161;
          if ( v161 )
          {
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
            v93 = (struct DXGDEVICE *)*((_QWORD *)v91 + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v193, v93);
            v171 = (struct _EX_RUNDOWN_REF *)((char *)v91 + 408);
            DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v91 + 408));
            v185 = this;
            v186 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v184);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v224, (__int64)v93, 0, v94, 0);
            LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v224);
            if ( (int)v10 >= 0 )
            {
              if ( *((_DWORD *)a2 + 8) > 0x10u )
              {
                v97 = WdLogNewEntry5_WdError(v95);
                *(_QWORD *)(v97 + 24) = 708LL;
                WdLogEvent5_WdError(v97);
                LODWORD(v10) = -1073741811;
              }
              v98 = *((_DWORD *)a2 + 4);
              if ( !v98 )
              {
                v99 = WdLogNewEntry5_WdError(v95);
                *(_QWORD *)(v99 + 24) = 713LL;
                WdLogEvent5_WdError(v99);
                LODWORD(v10) = -1073741811;
                v98 = *((_DWORD *)a2 + 4);
              }
              memset(&v226, 0, sizeof(v226));
              v226.hDevice = *((_DWORD *)a2 + 3);
              v226.AllocationCount = *((_DWORD *)a2 + 8);
              v226.CommandLength = v98;
              v226.pNewCommandBuffer = (void *)*((_QWORD *)a2 + 3);
              v100 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
              v226.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
              *(_DWORD *)&v226.Flags |= 0x20u;
              IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v91 + 2) + 16LL) + 16LL));
              v154[0] = IsDxgmms2;
              v160 = v101;
              v227[0] = 0LL;
              v228 = 0;
              v103 = 0LL;
              v156 = 0LL;
              if ( IsDxgmms2 )
              {
                Elements = (struct DXGDEVICE *)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(v227, v101);
                v103 = (struct DXGALLOCATION **)Elements;
                v156 = Elements;
                if ( !Elements )
                {
                  v108 = WdLogNewEntry5_WdWarning(v106, v105, v107);
                  *(_QWORD *)(v108 + 24) = 742LL;
                  WdLogEvent5_WdWarning(v108);
                  PagedPoolZeroedArray<DXGALLOCATION *,32>::~PagedPoolZeroedArray<DXGALLOCATION *,32>(v227);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v224);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v184);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v193);
                  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v183);
                  return 3221225495LL;
                }
                LODWORD(v10) = DxgkReferenceAllocationList(
                                 &v160,
                                 v100,
                                 (struct DXGALLOCATION **)Elements,
                                 *((struct DXGDEVICE **)v91 + 2));
              }
              if ( (int)v10 >= 0 )
              {
                LODWORD(v10) = DXGCONTEXT::Render(
                                 v91,
                                 &v226,
                                 (struct COREDEVICEACCESS *)v224,
                                 (struct DXGADAPTERSTOPRESETLOCKSHARED *)v184,
                                 &v161,
                                 v103,
                                 0LL,
                                 0LL);
                v159 = v10;
                v91 = v161;
              }
              if ( IsDxgmms2 )
                DxgkUnreferenceAllocationList(v160, (struct _EX_RUNDOWN_REF **)v103);
              *((_QWORD *)v91 + 52) = 0LL;
              ExReleasePushLockExclusiveEx((char *)v91 + 408, 0LL);
              KeLeaveCriticalRegion();
              PagedPoolZeroedArray<DXGALLOCATION *,32>::~PagedPoolZeroedArray<DXGALLOCATION *,32>(v227);
            }
            else
            {
              v96 = v171;
              v171[1].Count = 0LL;
              ExReleasePushLockExclusiveEx(v96, 0LL);
              KeLeaveCriticalRegion();
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v224);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v184);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v193);
          }
          else
          {
            v92 = WdLogNewEntry5_WdError(v90);
            *(_QWORD *)(v92 + 24) = 687LL;
            WdLogEvent5_WdError(v92);
            LODWORD(v10) = -1073741811;
          }
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v183);
          return (unsigned int)v10;
        }
        v43 = WdLogNewEntry5_WdError(v89);
        *(_QWORD *)(v43 + 24) = 677LL;
LABEL_38:
        WdLogEvent5_WdError(v43);
LABEL_219:
        LODWORD(v10) = -1073741811;
        return (unsigned int)v10;
      }
      if ( (int)v34 <= 10 )
      {
        if ( (_DWORD)v34 == 10 )
        {
          if ( *((_DWORD *)a2 + 1) >= 0x10u )
          {
            *((_DWORD *)a2 + 3) = *((_DWORD *)this + 660);
            return (unsigned int)v10;
          }
          v28 = WdLogNewEntry5_WdWarning(v34, v29, v31);
          *(_QWORD *)(v28 + 24) = 269LL;
          goto LABEL_218;
        }
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( !v37 )
            {
              if ( DXGADAPTER::IsCoreResourceSharedOwner(a3[3]) )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
              LODWORD(v10) = COREADAPTERACCESS::AcquireExclusive(a3);
              if ( (int)v10 >= 0 )
                COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
              return (unsigned int)v10;
            }
            v38 = (unsigned int)(v37 - 1);
            if ( !(_DWORD)v38 )
            {
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                v51 = *((unsigned int *)a2 + 3);
                if ( (unsigned int)(v51 - 1) <= 0x3FF )
                {
                  g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
                  return (unsigned int)v10;
                }
                v28 = WdLogNewEntry5_WdWarning(v51, v29, v31);
                *(_QWORD *)(v28 + 24) = 238LL;
              }
              else
              {
                v28 = WdLogNewEntry5_WdWarning(v38, v29, v31);
                *(_QWORD *)(v28 + 24) = 229LL;
              }
              goto LABEL_218;
            }
            v39 = (unsigned int)(v38 - 1);
            if ( !(_DWORD)v39 )
            {
              if ( *((_DWORD *)a2 + 1) >= 0x14u )
              {
                g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
                return (unsigned int)v10;
              }
              v28 = WdLogNewEntry5_WdWarning(v39, v29, v31);
              *(_QWORD *)(v28 + 24) = 252LL;
              goto LABEL_218;
            }
            if ( (_DWORD)v39 == 1 )
            {
              if ( *((_DWORD *)a2 + 1) < 0x114u )
              {
                v28 = WdLogNewEntry5_WdWarning(v39, v29, v31);
                *(_QWORD *)(v28 + 24) = 326LL;
                goto LABEL_218;
              }
              v40 = DXGPROCESS::GetCurrent(v39, v29);
              v42 = v40;
              if ( !v40 )
              {
                v43 = WdLogNewEntry5_WdError(v41);
                *(_QWORD *)(v43 + 24) = 334LL;
                goto LABEL_38;
              }
              DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v165, v40);
              v45 = 0LL;
              v176 = 0LL;
              v46 = *((_DWORD *)a2 + 3);
              if ( v46 )
              {
                DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v177, v46, (struct _KTHREAD **)v42, &v176);
                v45 = v176;
                if ( !v176 )
                {
                  v48 = WdLogNewEntry5_WdError(v47);
                  *(_QWORD *)(v48 + 24) = *((unsigned int *)a2 + 3);
                  WdLogEvent5_WdError(v48);
                  LODWORD(v10) = -1073741811;
                  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v177);
LABEL_42:
                  DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v165);
                  return (unsigned int)v10;
                }
                ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v177);
              }
              if ( v45
                || ((v49 = *((_QWORD *)v42 + 34)) == 0 ? (v45 = 0LL) : (v45 = (struct DXGDEVICE *)(v49 - 24)), v45) )
              {
                DXGDEVICE::GetContexts(v45, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
                *((_DWORD *)a2 + 3) = *((_DWORD *)v45 + 83);
              }
              else
              {
                v50 = WdLogNewEntry5_WdError(v44);
                *(_QWORD *)(v50 + 24) = 361LL;
                WdLogEvent5_WdError(v50);
                LODWORD(v10) = -1073741811;
              }
              goto LABEL_42;
            }
LABEL_226:
            v28 = WdLogNewEntry5_WdWarning(v39, v29, v31);
            *(_QWORD *)(v28 + 24) = *((int *)a2 + 2);
            goto LABEL_218;
          }
          v52 = DmmDRTTest(this, a2);
        }
        else
        {
          v52 = MonitorDRTTest(this, a2, (__int64)v230);
        }
LABEL_65:
        LODWORD(v10) = v52;
        return (unsigned int)v10;
      }
      v53 = (unsigned int)(v34 - 11);
      if ( !(_DWORD)v53 )
      {
        v81 = *((unsigned int *)this + 660);
        if ( (_DWORD)v81 )
        {
          v53 = (unsigned int)(v81 - 1);
          v29 = 344 * v53 + 360;
          if ( *((unsigned int *)a2 + 1) >= v29 )
          {
            v82 = (char *)a2 + 352;
            v83 = (unsigned int)v81;
            do
            {
              v84 = *((_QWORD *)this + 312);
              v85 = v82 - 336;
              v86 = (_OWORD *)(v9 + v84 + 8);
              v87 = 2LL;
              do
              {
                *(_OWORD *)v85 = *v86;
                *((_OWORD *)v85 + 1) = v86[1];
                *((_OWORD *)v85 + 2) = v86[2];
                *((_OWORD *)v85 + 3) = v86[3];
                *((_OWORD *)v85 + 4) = v86[4];
                *((_OWORD *)v85 + 5) = v86[5];
                *((_OWORD *)v85 + 6) = v86[6];
                v85 += 128;
                *((_OWORD *)v85 - 1) = v86[7];
                v86 += 8;
                --v87;
              }
              while ( v87 );
              *(_OWORD *)v85 = *v86;
              *((_OWORD *)v85 + 1) = v86[1];
              *((_OWORD *)v85 + 2) = v86[2];
              *((_OWORD *)v85 + 3) = v86[3];
              *((_OWORD *)v85 + 4) = v86[4];
              *(_DWORD *)v82 = *(_DWORD *)(v9 + v84 + 344);
              v82[4] = *(_BYTE *)(v9 + v84 + 356);
              v9 += 520LL;
              v82 += 344;
              --v83;
            }
            while ( v83 );
            return (unsigned int)v10;
          }
        }
        v28 = WdLogNewEntry5_WdWarning(v53, v29, v81);
        *(_QWORD *)(v28 + 24) = 288LL;
        goto LABEL_218;
      }
      v54 = (unsigned int)(v53 - 1);
      if ( !(_DWORD)v54 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x10u )
        {
          v80 = *((_QWORD *)this + 308);
          if ( v80 )
            *(_BYTE *)(v80 + 776) = *((_BYTE *)a2 + 12);
          return (unsigned int)v10;
        }
        v28 = WdLogNewEntry5_WdWarning(v54, v29, v31);
        *(_QWORD *)(v28 + 24) = 307LL;
        goto LABEL_218;
      }
      v55 = (unsigned int)(v54 - 2);
      if ( !(_DWORD)v55 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x14u )
        {
          v28 = WdLogNewEntry5_WdWarning(v55, v29, v31);
          *(_QWORD *)(v28 + 24) = 814LL;
          goto LABEL_218;
        }
        v79 = *((_QWORD *)this + 24);
        if ( !v79 )
          goto LABEL_10;
        v52 = DxgkHandleThermalCoolingDrtEscape(v79, a2);
        goto LABEL_65;
      }
      v39 = (unsigned int)(v55 - 1);
      if ( (_DWORD)v39 )
      {
        if ( (_DWORD)v39 != 1 )
          goto LABEL_226;
        if ( *((_DWORD *)a2 + 1) < 0x58u )
        {
          v28 = WdLogNewEntry5_WdWarning(v39, v29, v31);
          *(_QWORD *)(v28 + 24) = 376LL;
          goto LABEL_218;
        }
        v56 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v39, v29);
        v58 = v56;
        if ( !v56 )
        {
          v43 = WdLogNewEntry5_WdError(v57);
          *(_QWORD *)(v43 + 24) = 384LL;
          goto LABEL_38;
        }
        v156 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v162, *((_DWORD *)a2 + 3), v56, &v156);
        v60 = v156;
        if ( !v156 )
        {
          v61 = WdLogNewEntry5_WdError(v59);
          *(_QWORD *)(v61 + 24) = *((unsigned int *)a2 + 3);
LABEL_80:
          WdLogEvent5_WdError(v61);
          LODWORD(v10) = -1073741811;
LABEL_81:
          v62 = (struct _D3DDDI_ESCAPEFLAGS *)v162;
          goto LABEL_82;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
        v155 = 0;
        v63 = 0;
        v156 = 0LL;
        v64 = *(_QWORD *)(*((_QWORD *)v60 + 2) + 16LL);
        if ( *(_BYTE *)(v64 + 185) )
        {
          *(_OWORD *)v207 = *(_OWORD *)a2;
          v208 = *((_OWORD *)a2 + 1);
          v209 = *((_OWORD *)a2 + 2);
          v210 = *((_OWORD *)a2 + 3);
          v211 = *((_OWORD *)a2 + 4);
          v212 = (struct DXGDEVICE *)*((_QWORD *)a2 + 10);
          *(_QWORD *)&v163[0].0 = 0LL;
          *(_DWORD *)&v207[12] = *((_DWORD *)v60 + 84);
          v65 = *(_DWORD *)&v207[12];
          v66 = *(_DWORD *)(v64 + 4136);
          HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v58);
          LODWORD(v153) = 88;
          if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                      (struct VMBCHANNEL__ **)(v64 + 4080),
                      HostProcess,
                      v66,
                      v65,
                      0,
                      D3DKMT_ESCAPE_DRT_TEST,
                      v163[0],
                      (size_t)v153,
                      v207) < 0 )
          {
            v61 = WdLogNewEntry5_WdError(v68);
            *(_QWORD *)(v61 + 24) = 426LL;
            goto LABEL_80;
          }
          v155 = HIDWORD(v209);
          v63 = v210;
          v156 = v212;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v201, v60);
        v196 = *(_QWORD *)(*((_QWORD *)v60 + 2) + 16LL);
        v197 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v195);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v225, (__int64)v60, 0, v69, 0);
        LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v225);
        if ( (int)v10 >= 0 )
        {
          memset(v229, 0, 0x134uLL);
          memset(&v229[39], 0, 120);
          HIDWORD(v229[0]) = *((_DWORD *)a2 + 3);
          LODWORD(v229[2]) = 4;
          v229[3] = (char *)a2 + 16;
          v70 = LODWORD(v229[0]) | 0x200;
          LODWORD(v229[0]) |= 0x200u;
          if ( *((_BYTE *)a2 + 60) )
          {
            v70 |= 1u;
            LODWORD(v229[0]) = v70;
          }
          if ( *((_BYTE *)a2 + 65) )
          {
            v70 |= 0x20u;
            LODWORD(v229[0]) = v70;
          }
          if ( *((_BYTE *)a2 + 61) )
          {
            v70 |= 0x400u;
            LODWORD(v229[0]) = v70;
          }
          if ( *((_BYTE *)a2 + 62) )
          {
            v70 |= 0x1000u;
            LODWORD(v229[0]) = v70;
          }
          if ( *((_BYTE *)a2 + 63) )
            LODWORD(v229[0]) = v70 | 0x2000;
          LOBYTE(v229[50]) = *((_BYTE *)a2 + 64);
          LODWORD(v229[47]) = *((_DWORD *)a2 + 14);
          HIDWORD(v229[47]) = *((_DWORD *)a2 + 17);
          HIDWORD(v229[46]) = *((_DWORD *)a2 + 10);
          LODWORD(v229[48]) = *((_DWORD *)a2 + 18);
          v229[49] = *((_QWORD *)a2 + 10);
          LODWORD(v10) = DXGDEVICE::CreateStandardAllocation(v60, (struct _D3DKM_CREATESTANDARDALLOCATION *)v229, v225);
          if ( (int)v10 >= 0 )
          {
            v71 = HIDWORD(v229[6]);
            *((_DWORD *)a2 + 11) = HIDWORD(v229[6]);
            *((_QWORD *)a2 + 6) = v229[1];
            if ( (*((_BYTE *)v58 + 323) & 8) != 0 )
            {
              v166 = 0LL;
              AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                          (__int64)v58,
                                                          (DXGALLOCATIONREFERENCE *)&v194,
                                                          v71);
              DXGALLOCATIONREFERENCE::MoveAssign(&v166, AllocationSafe);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v194);
              if ( v166
                && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v166 + 1) + 16LL) + 16LL) == *(_QWORD *)(*((_QWORD *)v60 + 2)
                                                                                              + 16LL) )
              {
                v9 = _guard_dispatch_icall_fptr();
              }
              *((_QWORD *)a2 + 10) = v9;
              v73 = &v166;
            }
            else
            {
              if ( !*(_BYTE *)(v64 + 185) )
                goto LABEL_88;
              v168 = 0LL;
              v74 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                               (__int64)v58,
                                               (DXGALLOCATIONREFERENCE *)&v191,
                                               v71);
              DXGALLOCATIONREFERENCE::MoveAssign(&v168, v74);
              DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v191);
              v75 = v168;
              if ( v168 )
              {
                *((_DWORD *)v168 + 24) = v155;
                *((_QWORD *)v75 + 15) = v156;
              }
              v167 = 0LL;
              ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                                      (__int64)v58,
                                                      (DXGRESOURCEREFERENCE *)&v171,
                                                      *((_DWORD *)a2 + 12));
              DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v167, ResourceSafe);
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v171);
              if ( v167 )
                HIDWORD(v167[2].Ptr) = v63;
              DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v167);
              v73 = &v168;
            }
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v73);
            goto LABEL_88;
          }
          LODWORD(v10) = -1073741811;
        }
LABEL_88:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v225);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v195);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v201);
        goto LABEL_81;
      }
      if ( *((_DWORD *)a2 + 1) >= 0xA8u )
      {
        v77 = *((_DWORD *)a2 + 4);
        if ( v77 < *((_DWORD *)this + 660) )
        {
          v78 = *((_DWORD *)a2 + 3);
          if ( !v78 )
          {
            DXGADAPTER::ForcePStateAcrossNodes(this, *((_DWORD *)a2 + 6));
            return (unsigned int)v10;
          }
          if ( v78 > 0 )
          {
            if ( v78 <= 3 )
            {
              DXGADAPTER::ForcePState((__int64)this, v78, v77, *((_DWORD *)a2 + 6));
              return (unsigned int)v10;
            }
            if ( v78 == 4 )
            {
              *((_DWORD *)a2 + 7) = *((_DWORD *)this + 954);
              return (unsigned int)v10;
            }
            if ( v78 == 5 )
            {
              DXGADAPTER::QueryPStateEngineData(
                this,
                *((_DWORD *)a2 + 5),
                (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
                (unsigned int *)a2 + 4);
              return (unsigned int)v10;
            }
          }
        }
      }
      return 3221225485LL;
    }
    if ( (int)v34 <= 23 )
    {
      if ( (_DWORD)v34 == 23 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x30u )
        {
          v28 = WdLogNewEntry5_WdWarning(v34, v29, v31);
          *(_QWORD *)(v28 + 24) = 218LL;
          goto LABEL_218;
        }
        v52 = DxgkpSendTestVmBusCommand(this, a2);
        goto LABEL_65;
      }
      v109 = (unsigned int)(v34 - 18);
      if ( !(_DWORD)v109 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x10u )
        {
          v28 = WdLogNewEntry5_WdWarning(v109, v29, v31);
          *(_QWORD *)(v28 + 24) = 783LL;
          goto LABEL_218;
        }
        v136 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v109, v29);
        if ( !v136 )
        {
          v43 = WdLogNewEntry5_WdError(v137);
          *(_QWORD *)(v43 + 24) = 791LL;
          goto LABEL_38;
        }
        v179 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v163, *((_DWORD *)a2 + 3), v136, &v179);
        v139 = v179;
        if ( v179 )
        {
          *((_BYTE *)v179 + 1711) = 1;
          *(_BYTE *)(*((_QWORD *)v139 + 5) + 289LL) = 1;
        }
        else
        {
          v140 = WdLogNewEntry5_WdError(v138);
          *(_QWORD *)(v140 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v140);
          LODWORD(v10) = -1073741811;
        }
        v62 = v163;
        goto LABEL_82;
      }
      v110 = (unsigned int)(v109 - 1);
      if ( !(_DWORD)v110 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x10u )
        {
          if ( g_OSTestSigningEnabled )
          {
            v135 = *((_DWORD *)a2 + 3) != 0;
            *((_BYTE *)DXGGLOBAL::GetGlobal(v110) + 1128) = v135;
          }
          else
          {
            LODWORD(v10) = -1073741637;
          }
          return (unsigned int)v10;
        }
        return 3221225485LL;
      }
      v111 = (unsigned int)(v110 - 1);
      if ( (_DWORD)v111 )
      {
        v39 = (unsigned int)(v111 - 1);
        if ( (_DWORD)v39 )
        {
          if ( (_DWORD)v39 == 1 )
          {
            v112 = DXGPROCESS::GetCurrent(v39, v29);
            DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v205, v112);
            DXGUSERCRIT::Acquire((DXGUSERCRIT *)v205, 0);
            v114 = CCD_BTL::Global(v113);
            CCD_TOPOLOGY::Clear(v114);
            DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v205);
            return (unsigned int)v10;
          }
          goto LABEL_226;
        }
        if ( *((_DWORD *)a2 + 1) < 0x18u )
        {
          v28 = WdLogNewEntry5_WdWarning(v39, v29, v31);
          *(_QWORD *)(v28 + 24) = 622LL;
          goto LABEL_218;
        }
        v115 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v39, v29);
        if ( !v115 )
        {
          v43 = WdLogNewEntry5_WdError(v116);
          *(_QWORD *)(v43 + 24) = 630LL;
          goto LABEL_38;
        }
        v169 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v170, *((_DWORD *)a2 + 3), v115, &v169);
        if ( v169 )
        {
          v119 = ObReferenceObjectByHandle(
                   *((HANDLE *)a2 + 2),
                   0x1F0003u,
                   (POBJECT_TYPE)ExEventObjectType,
                   1,
                   &Object,
                   0LL);
          v10 = v119;
          if ( v119 >= 0 )
          {
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v203, v169);
            KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v203);
          }
          else
          {
            v121 = WdLogNewEntry5_WdError(v120);
            *(_QWORD *)(v121 + 24) = v10;
            WdLogEvent5_WdError(v121);
          }
        }
        else
        {
          v118 = WdLogNewEntry5_WdError(v117);
          *(_QWORD *)(v118 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v118);
          LODWORD(v10) = -1073741811;
        }
        v62 = (struct _D3DDDI_ESCAPEFLAGS *)v170;
LABEL_82:
        ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v62);
        return (unsigned int)v10;
      }
      if ( *((_DWORD *)a2 + 1) < 0x18u )
      {
        v28 = WdLogNewEntry5_WdWarning(v111, v29, v31);
        *(_QWORD *)(v28 + 24) = 534LL;
        goto LABEL_218;
      }
      v122 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v111, v29);
      v124 = (__int64)v122;
      if ( !v122 )
      {
        v43 = WdLogNewEntry5_WdError(v123);
        *(_QWORD *)(v43 + 24) = 542LL;
        goto LABEL_38;
      }
      v178 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v158, *((_DWORD *)a2 + 3), v122, &v178);
      v126 = v178;
      if ( !v178 )
      {
        v127 = WdLogNewEntry5_WdError(v125);
        *(_QWORD *)(v127 + 24) = *((unsigned int *)a2 + 3);
        WdLogEvent5_WdError(v127);
        LODWORD(v10) = -1073741811;
LABEL_187:
        v62 = (struct _D3DDDI_ESCAPEFLAGS *)v158;
        goto LABEL_82;
      }
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v175, v126);
      v181 = *(_QWORD *)(*((_QWORD *)v126 + 2) + 16LL);
      v182 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v180);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v223, (__int64)v126, 0, v128, 0);
      LODWORD(v10) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v223);
      if ( (int)v10 < 0 )
      {
LABEL_189:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v223);
        DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v180);
        DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v175);
        goto LABEL_187;
      }
      v157 = 0LL;
      v129 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                        v124,
                                        (DXGALLOCATIONREFERENCE *)&v192,
                                        *((_DWORD *)a2 + 4));
      DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v157, v129);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v192);
      v131 = v157;
      if ( v157 )
      {
        v133 = *((_QWORD *)v126 + 2);
        v134 = *(_QWORD *)(v157[1].Count + 16);
        if ( *(_QWORD *)(v134 + 16) == *(_QWORD *)(v133 + 16) )
        {
          if ( *((_BYTE *)a2 + 20) )
          {
            if ( (v157[9].Count & 0x800) == 0 )
            {
              LODWORD(v10) = VIDMM_EXPORT::VidMmPinAllocation(
                               *(VIDMM_EXPORT **)(v133 + 544),
                               *(struct VIDMM_GLOBAL **)(v133 + 552),
                               (struct _VIDMM_MULTI_ALLOC *)v157[3].Count,
                               &v187,
                               &v202);
              if ( (int)v10 >= 0 )
                LODWORD(v131[9].Count) |= 0x800u;
              goto LABEL_193;
            }
            v132 = (_QWORD *)WdLogNewEntry5_WdError(v134);
            v132[3] = 590LL;
          }
          else
          {
            if ( (v157[9].Count & 0x800) != 0 )
            {
              VIDMM_EXPORT::VidMmUnpinAllocation(
                *(VIDMM_EXPORT **)(v133 + 544),
                *(struct VIDMM_GLOBAL **)(v133 + 552),
                (struct _VIDMM_MULTI_ALLOC *)v157[3].Count);
              goto LABEL_193;
            }
            v132 = (_QWORD *)WdLogNewEntry5_WdError(v134);
            v132[3] = 609LL;
          }
        }
        else
        {
          v132 = (_QWORD *)WdLogNewEntry5_WdError(v134);
          v132[3] = v126;
          v132[4] = v131;
          v132[5] = -1073741811LL;
        }
      }
      else
      {
        v132 = (_QWORD *)WdLogNewEntry5_WdError(v130);
        v132[3] = *((unsigned int *)a2 + 4);
      }
      WdLogEvent5_WdError(v132);
      LODWORD(v10) = -1073741811;
LABEL_193:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v157);
      goto LABEL_189;
    }
    v141 = v34 - 24;
    if ( !v141 )
    {
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
        return (unsigned int)v10;
      }
      return 3221225485LL;
    }
    v142 = v141 - 1;
    if ( v142 )
    {
      v143 = v142 - 1;
      if ( v143 )
      {
        v39 = (unsigned int)(v143 - 1);
        if ( !(_DWORD)v39 )
        {
          v52 = VailDRTTest((struct DXGADAPTER *const)v39, a2);
          goto LABEL_65;
        }
        if ( (_DWORD)v39 != 1 )
          goto LABEL_226;
        if ( !g_OSTestSigningEnabled || *((_DWORD *)a2 + 1) < 0x10u )
          return 3221225485LL;
        v144 = DXGPROCESS::GetCurrent(v39, v29);
        if ( v144 )
        {
          *((_BYTE *)v144 + 323) ^= (*((_BYTE *)v144 + 323) ^ (*((_BYTE *)a2 + 12) << 6)) & 0x40;
          return (unsigned int)v10;
        }
        return 3221225506LL;
      }
      if ( !g_OSTestSigningEnabled )
        return 3221225506LL;
      if ( *((_DWORD *)a2 + 1) < 0x14u )
        return 3221225485LL;
      v145 = 0LL;
      v199 = this;
      v200 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v198);
      if ( *((_DWORD *)this + 44) == 1 )
      {
        v146 = *((_DWORD *)a2 + 3);
        if ( v146 != -1 )
        {
          IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(this, v146, v154);
          if ( IsTargetInClientVidPnTopology < 0 )
          {
LABEL_240:
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v198);
            return (unsigned int)IsTargetInClientVidPnTopology;
          }
          if ( !v154[0] )
          {
            IsTargetInClientVidPnTopology = -1073741811;
            goto LABEL_240;
          }
        }
        v145 = (struct _FILE_OBJECT *)*((_QWORD *)this + 24);
        ObfReferenceObject(v145);
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v198);
      if ( !v145 )
        goto LABEL_10;
      memset(v231, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v231[1]);
      v231[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v231[3]) = 45;
      LOBYTE(v231[6]) = -1;
      v164 = *((_BYTE *)a2 + 16) != 0 ? 1 : 4;
      LOBYTE(v148) = 1;
      LODWORD(v10) = DxgkPowerOnOffMonitor(
                       (_DWORD)v145,
                       *((_DWORD *)a2 + 3),
                       (unsigned int)&v164,
                       v148,
                       (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v231);
      v149 = v145;
    }
    else
    {
      if ( *((_DWORD *)a2 + 1) < 0x1Cu )
        return 3221225485LL;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      result = DxgkGetMonitorDeviceObject(
                 (const struct _LUID *)((char *)a2 + 12),
                 *((_DWORD *)a2 + 5),
                 &v189,
                 &DeviceObject);
      if ( (int)result < 0 )
        return result;
      AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
      v151 = IoBuildDeviceIoControlRequest(
               0x232433u,
               AttachedDeviceReference,
               (char *)a2 + 24,
               4u,
               0LL,
               0,
               1u,
               &Event,
               &IoStatusBlock);
      if ( v151 )
      {
        Status = IofCallDriver(AttachedDeviceReference, v151);
        if ( Status == 259 )
        {
          while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
            ;
          Status = IoStatusBlock.Status;
        }
        LODWORD(v10) = Status;
      }
      else
      {
        LODWORD(v10) = -1073741823;
      }
      ObfDereferenceObject(AttachedDeviceReference);
      v149 = v189;
    }
    ObfDereferenceObject(v149);
    return (unsigned int)v10;
  }
  if ( *((_DWORD *)a2 + 1) < 0x10u )
  {
    v27 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v27 + 24) = *((unsigned int *)a2 + 1);
    WdLogEvent5_WdWarning(v27);
    LODWORD(v10) = -1073741789;
    return (unsigned int)v10;
  }
  if ( !*((_DWORD *)a2 + 3) )
  {
    _m_prefetchw(&g_DRTEnable);
    v23 = g_DRTEnable;
    do
    {
      if ( !v23 )
      {
        v25 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v25 + 24) = 125LL;
        WdLogEvent5_WdError(v25);
        return (unsigned int)v10;
      }
      v24 = v23;
      v7 = v23 - 1;
      v23 = _InterlockedCompareExchange(&g_DRTEnable, v7, v23);
    }
    while ( v23 != (_DWORD)v24 );
    v26 = WdLogNewEntry5_WdEvent(v7, v24);
    *(_QWORD *)(v26 + 24) = 135LL;
    WdLogEvent5_WdEvent(v26);
    return (unsigned int)v10;
  }
  v155 = 0;
  v213 = 0LL;
  v214 = 288;
  v215 = L"DRTTestEnable";
  v216 = &v155;
  v217 = 67108868;
  v218 = &v155;
  v219 = 4;
  v220 = 0LL;
  v221 = 0;
  memset(v222, 0, sizeof(v222));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v213, 0LL, 0LL);
  if ( v155 == 1484026436 )
  {
    _InterlockedIncrement(&g_DRTEnable);
    v13 = WdLogNewEntry5_WdEvent(v12, v11);
    *(_QWORD *)(v13 + 24) = 84LL;
    WdLogEvent5_WdEvent(v13);
    if ( this && *((_BYTE *)this + 185) )
    {
      *(_DWORD *)Src = 1484026436;
      v173 = 16LL;
      v174 = 1;
      v16 = *((_DWORD *)this + 1034);
      v17 = DXGPROCESS::GetCurrent(v15, v14);
      LODWORD(v153) = 16;
      LODWORD(v10) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                       (struct VMBCHANNEL__ **)this + 510,
                       *((_DWORD *)v17 + 98),
                       v16,
                       0,
                       0,
                       D3DKMT_ESCAPE_DRT_TEST,
                       0,
                       (size_t)v153,
                       Src);
      if ( (int)v10 < 0 )
      {
        v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
        *(_QWORD *)(v21 + 24) = 99LL;
        WdLogEvent5_WdWarning(v21);
      }
    }
    return (unsigned int)v10;
  }
  v22 = WdLogNewEntry5_WdEvent(v12, v11);
  *(_QWORD *)(v22 + 24) = 109LL;
  WdLogEvent5_WdEvent(v22);
LABEL_10:
  LODWORD(v10) = -1073741823;
  return (unsigned int)v10;
}
