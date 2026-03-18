/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003628 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0003834 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0003A8C (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C0004090 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C000D5E8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000D614 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0014504 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00145BC (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0014764 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C0014C68 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001E250 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C001E2AC (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C007982C (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0079A14 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C008A3F0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00C1D40 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DF6CC (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C00F4230 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C01707C4 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C01717AC (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C017181C (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C01722F4 (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C0182AE8 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z @ 0x1C018FC00 (-DxgkpSendTestVmBusCommand@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_VMBUS_COMMAND@@@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C01964B8 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C019D570 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C01E4B28 (DxgkHandleThermalCoolingDrtEscape.c)
 *     ?DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01EBAEC (-DmmDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     MonitorDRTTest @ 0x1C01FDF58 (MonitorDRTTest.c)
 */

__int64 __fastcall DxgkDrtTestEscape(struct DXGADAPTER *this, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  UINT v19; // ebx
  struct DXGPROCESS *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int32 v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 result; // rax
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // eax
  struct DXGPROCESS *Current; // rax
  __int64 v46; // rcx
  struct DXGPROCESS *v47; // r15
  __int64 v48; // rax
  __int64 v49; // rcx
  struct DXGDEVICE *v50; // rbx
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r8
  char *v61; // r14
  __int64 v62; // r9
  __int64 v63; // rdx
  char *v64; // rax
  _OWORD *v65; // rcx
  __int64 v66; // r8
  unsigned int v67; // r8d
  int v68; // edx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  struct _KTHREAD **v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r12
  __int64 v75; // rcx
  struct DXGDEVICE *v76; // r15
  __int64 v77; // rax
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS *v78; // rcx
  __int64 v79; // r9
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v81; // rcx
  struct _EX_RUNDOWN_REF *v82; // rbx
  _QWORD *v83; // rax
  __int64 v84; // r9
  __int64 v85; // rcx
  bool v86; // bl
  struct _KTHREAD **v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rcx
  struct DXGDEVICE *v90; // rax
  __int64 v91; // rax
  struct DXGPROCESS *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rcx
  struct DXGCONTEXT *v95; // r13
  __int64 v96; // rax
  struct DXGDEVICE *v97; // rbx
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  struct _D3DDDI_ALLOCATIONLIST *v103; // r15
  unsigned int v104; // edx
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v106; // rbx
  struct DXGALLOCATION **Elements; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  struct _KTHREAD **v112; // rax
  __int64 v113; // rcx
  struct _KTHREAD **v114; // r15
  __int64 v115; // rcx
  struct DXGDEVICE *v116; // r13
  __int64 v117; // rax
  int v118; // ebx
  __int64 v119; // r12
  UINT v120; // edi
  UINT v121; // ebx
  UINT HostProcess; // eax
  __int64 v123; // rcx
  __int64 v124; // r9
  int v125; // eax
  unsigned int v126; // r8d
  struct DXGALLOCATION **v127; // rax
  struct DXGALLOCATION **v128; // rcx
  struct DXGALLOCATION **v129; // rax
  struct DXGALLOCATION *v130; // rax
  struct DXGRESOURCE **ResourceSafe; // rax
  struct _KTHREAD **v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rax
  NTSTATUS v136; // eax
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  IRP *v142; // rax
  NTSTATUS Status; // eax
  struct DXGPROCESS *v144; // rax
  __int64 v145; // rcx
  CCD_TOPOLOGY *v146; // rax
  PKEVENT v147; // [rsp+38h] [rbp-8A0h]
  unsigned int v148; // [rsp+54h] [rbp-884h] BYREF
  int v149; // [rsp+58h] [rbp-880h] BYREF
  struct _EX_RUNDOWN_REF *v150; // [rsp+60h] [rbp-878h] BYREF
  _BYTE v151[8]; // [rsp+68h] [rbp-870h] BYREF
  int v152; // [rsp+70h] [rbp-868h]
  struct DXGCONTEXT *v153; // [rsp+78h] [rbp-860h] BYREF
  struct DXGALLOCATION **v154; // [rsp+80h] [rbp-858h] BYREF
  struct DXGDEVICE *v155; // [rsp+88h] [rbp-850h] BYREF
  struct _D3DDDI_ESCAPEFLAGS v156[2]; // [rsp+90h] [rbp-848h] BYREF
  _BYTE v157[8]; // [rsp+98h] [rbp-840h] BYREF
  _BYTE v158[8]; // [rsp+A0h] [rbp-838h] BYREF
  struct DXGALLOCATION *v159; // [rsp+A8h] [rbp-830h] BYREF
  struct _EX_RUNDOWN_REF *v160; // [rsp+B0h] [rbp-828h] BYREF
  struct DXGALLOCATION *v161; // [rsp+B8h] [rbp-820h] BYREF
  struct DXGDEVICE *v162; // [rsp+C0h] [rbp-818h] BYREF
  _BYTE v163[8]; // [rsp+C8h] [rbp-810h] BYREF
  unsigned __int8 Src[4]; // [rsp+D0h] [rbp-808h] BYREF
  __int64 v165; // [rsp+D4h] [rbp-804h]
  int v166; // [rsp+DCh] [rbp-7FCh]
  _BYTE v167[16]; // [rsp+E0h] [rbp-7F8h] BYREF
  struct DXGDEVICE *v168; // [rsp+F0h] [rbp-7E8h] BYREF
  _BYTE v169[8]; // [rsp+F8h] [rbp-7E0h] BYREF
  struct DXGDEVICE *v170; // [rsp+100h] [rbp-7D8h] BYREF
  struct DXGDEVICE *v171; // [rsp+108h] [rbp-7D0h] BYREF
  _BYTE v172[8]; // [rsp+110h] [rbp-7C8h] BYREF
  __int64 v173; // [rsp+118h] [rbp-7C0h]
  char v174; // [rsp+120h] [rbp-7B8h]
  _BYTE v175[16]; // [rsp+128h] [rbp-7B0h] BYREF
  _BYTE v176[8]; // [rsp+138h] [rbp-7A0h] BYREF
  struct DXGADAPTER *v177; // [rsp+140h] [rbp-798h]
  char v178; // [rsp+148h] [rbp-790h]
  unsigned int v179; // [rsp+150h] [rbp-788h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+158h] [rbp-780h] BYREF
  PVOID v181; // [rsp+160h] [rbp-778h] BYREF
  struct _EX_RUNDOWN_REF *v182; // [rsp+168h] [rbp-770h] BYREF
  struct _EX_RUNDOWN_REF *v183; // [rsp+170h] [rbp-768h] BYREF
  PVOID Object; // [rsp+178h] [rbp-760h] BYREF
  _BYTE v185[16]; // [rsp+180h] [rbp-758h] BYREF
  struct _EX_RUNDOWN_REF *v186; // [rsp+190h] [rbp-748h] BYREF
  _BYTE v187[8]; // [rsp+198h] [rbp-740h] BYREF
  __int64 v188; // [rsp+1A0h] [rbp-738h]
  char v189; // [rsp+1A8h] [rbp-730h]
  _BYTE v190[16]; // [rsp+1B0h] [rbp-728h] BYREF
  union _LARGE_INTEGER v191; // [rsp+1C0h] [rbp-718h] BYREF
  _BYTE v192[16]; // [rsp+1C8h] [rbp-710h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+1D8h] [rbp-700h] BYREF
  struct _KEVENT Event; // [rsp+1E8h] [rbp-6F0h] BYREF
  unsigned __int8 v195[32]; // [rsp+200h] [rbp-6D8h] BYREF
  unsigned __int8 v196[16]; // [rsp+220h] [rbp-6B8h] BYREF
  __int128 v197; // [rsp+230h] [rbp-6A8h]
  __int128 v198; // [rsp+240h] [rbp-698h]
  __int128 v199; // [rsp+250h] [rbp-688h]
  __int128 v200; // [rsp+260h] [rbp-678h]
  struct DXGDEVICE *v201; // [rsp+270h] [rbp-668h]
  __int64 v202; // [rsp+280h] [rbp-658h] BYREF
  int v203; // [rsp+288h] [rbp-650h]
  const wchar_t *v204; // [rsp+290h] [rbp-648h]
  int *v205; // [rsp+298h] [rbp-640h]
  int v206; // [rsp+2A0h] [rbp-638h]
  int *v207; // [rsp+2A8h] [rbp-630h]
  int v208; // [rsp+2B0h] [rbp-628h]
  __int64 v209; // [rsp+2B8h] [rbp-620h]
  int v210; // [rsp+2C0h] [rbp-618h]
  _BYTE v211[40]; // [rsp+2C8h] [rbp-610h] BYREF
  _BYTE v212[96]; // [rsp+2F0h] [rbp-5E8h] BYREF
  _BYTE v213[96]; // [rsp+350h] [rbp-588h] BYREF
  PERESOURCE *v214[12]; // [rsp+3B0h] [rbp-528h] BYREF
  struct _D3DKMT_RENDER v215; // [rsp+410h] [rbp-4C8h] BYREF
  PVOID v216[33]; // [rsp+580h] [rbp-358h] BYREF
  int v217; // [rsp+688h] [rbp-250h]
  _QWORD v218[54]; // [rsp+690h] [rbp-248h] BYREF
  _QWORD v219[10]; // [rsp+840h] [rbp-98h] BYREF

  memset(v219, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v219[1]);
  v219[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v219[3]) = 45;
  LOBYTE(v219[6]) = -1;
  v10 = 0LL;
  LODWORD(v11) = 0;
  v152 = 0;
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( !g_DRTEnable && !g_OSTestSigningEnabled )
    {
      v31 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v31 + 24) = 999LL;
LABEL_232:
      WdLogEvent5_WdWarning(v31);
      goto LABEL_233;
    }
    if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v7, v6) + 307) & 8) != 0 && *((_DWORD *)a2 + 2) != 16 )
    {
      v36 = WdLogNewEntry5_WdEvent(v33, v32, v34, v35);
      *(_QWORD *)(v36 + 24) = 161LL;
      WdLogEvent5_WdEvent(v36);
      return 3221225485LL;
    }
    v38 = *((unsigned int *)a2 + 2);
    if ( (int)v38 <= 15 )
    {
      if ( (_DWORD)v38 != 15 )
      {
        if ( (int)v38 > 6 )
        {
          v56 = (unsigned int)(v38 - 10);
          if ( !(_DWORD)v56 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              *((_DWORD *)a2 + 3) = *((_DWORD *)this + 622);
              return (unsigned int)v11;
            }
            v31 = WdLogNewEntry5_WdWarning(v56, v32, v34);
            *(_QWORD *)(v31 + 24) = 269LL;
            goto LABEL_232;
          }
          v57 = (unsigned int)(v56 - 1);
          if ( !(_DWORD)v57 )
          {
            v60 = *((unsigned int *)this + 622);
            if ( (_DWORD)v60 )
            {
              v57 = (unsigned int)(v60 - 1);
              v32 = 344 * v57 + 360;
              if ( *((unsigned int *)a2 + 1) >= v32 )
              {
                v61 = (char *)a2 + 352;
                v62 = (unsigned int)v60;
                do
                {
                  v63 = *((_QWORD *)this + 293);
                  v64 = v61 - 336;
                  v65 = (_OWORD *)(v10 + v63 + 8);
                  v66 = 2LL;
                  do
                  {
                    *(_OWORD *)v64 = *v65;
                    *((_OWORD *)v64 + 1) = v65[1];
                    *((_OWORD *)v64 + 2) = v65[2];
                    *((_OWORD *)v64 + 3) = v65[3];
                    *((_OWORD *)v64 + 4) = v65[4];
                    *((_OWORD *)v64 + 5) = v65[5];
                    *((_OWORD *)v64 + 6) = v65[6];
                    v64 += 128;
                    *((_OWORD *)v64 - 1) = v65[7];
                    v65 += 8;
                    --v66;
                  }
                  while ( v66 );
                  *(_OWORD *)v64 = *v65;
                  *((_OWORD *)v64 + 1) = v65[1];
                  *((_OWORD *)v64 + 2) = v65[2];
                  *((_OWORD *)v64 + 3) = v65[3];
                  *((_OWORD *)v64 + 4) = v65[4];
                  *(_DWORD *)v61 = *(_DWORD *)(v10 + v63 + 344);
                  v61[4] = *(_BYTE *)(v10 + v63 + 356);
                  v10 += 520LL;
                  v61 += 344;
                  --v62;
                }
                while ( v62 );
                return (unsigned int)v11;
              }
            }
            v31 = WdLogNewEntry5_WdWarning(v57, v32, v60);
            *(_QWORD *)(v31 + 24) = 288LL;
            goto LABEL_232;
          }
          v42 = (unsigned int)(v57 - 1);
          if ( !(_DWORD)v42 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              v59 = *((_QWORD *)this + 289);
              if ( v59 )
                *(_BYTE *)(v59 + 760) = *((_BYTE *)a2 + 12);
              return (unsigned int)v11;
            }
            v31 = WdLogNewEntry5_WdWarning(v42, v32, v34);
            *(_QWORD *)(v31 + 24) = 307LL;
            goto LABEL_232;
          }
          if ( (_DWORD)v42 != 2 )
            goto LABEL_218;
          if ( *((_DWORD *)a2 + 1) < 0x14u )
          {
            v31 = WdLogNewEntry5_WdWarning(v42, v32, v34);
            *(_QWORD *)(v31 + 24) = 813LL;
            goto LABEL_232;
          }
          v58 = *((_QWORD *)this + 24);
          if ( !v58 )
          {
LABEL_72:
            LODWORD(v11) = -1073741823;
            return (unsigned int)v11;
          }
          v44 = DxgkHandleThermalCoolingDrtEscape(v58, a2);
          goto LABEL_46;
        }
        if ( (_DWORD)v38 != 6 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( !v41 )
              {
                if ( DXGADAPTER::IsCoreResourceSharedOwner(a3[3]) )
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
                LODWORD(v11) = COREADAPTERACCESS::AcquireExclusive(a3, 1u);
                if ( (int)v11 >= 0 )
                  COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
                return (unsigned int)v11;
              }
              v42 = (unsigned int)(v41 - 1);
              if ( !(_DWORD)v42 )
              {
                if ( *((_DWORD *)a2 + 1) >= 0x10u )
                {
                  v43 = *((unsigned int *)a2 + 3);
                  if ( (unsigned int)(v43 - 1) <= 0x3FF )
                  {
                    g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
                    return (unsigned int)v11;
                  }
                  v31 = WdLogNewEntry5_WdWarning(v43, v32, v34);
                  *(_QWORD *)(v31 + 24) = 238LL;
                }
                else
                {
                  v31 = WdLogNewEntry5_WdWarning(v42, v32, v34);
                  *(_QWORD *)(v31 + 24) = 229LL;
                }
                goto LABEL_232;
              }
              if ( (_DWORD)v42 == 1 )
              {
                if ( *((_DWORD *)a2 + 1) >= 0x14u )
                {
                  g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
                  return (unsigned int)v11;
                }
                v31 = WdLogNewEntry5_WdWarning(v42, v32, v34);
                *(_QWORD *)(v31 + 24) = 252LL;
                goto LABEL_232;
              }
              goto LABEL_218;
            }
            v44 = DmmDRTTest(this, a2);
          }
          else
          {
            v44 = MonitorDRTTest(this, a2, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v219);
          }
LABEL_46:
          LODWORD(v11) = v44;
          return (unsigned int)v11;
        }
        if ( *((_DWORD *)a2 + 1) < 0x114u )
        {
          v31 = WdLogNewEntry5_WdWarning(v38, v32, v34);
          *(_QWORD *)(v31 + 24) = 326LL;
          goto LABEL_232;
        }
        Current = DXGPROCESS::GetCurrent(v38, v32);
        v47 = Current;
        if ( !Current )
        {
          v48 = WdLogNewEntry5_WdError(v46);
          *(_QWORD *)(v48 + 24) = 334LL;
          goto LABEL_51;
        }
        DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v158, Current);
        v50 = 0LL;
        v168 = 0LL;
        v51 = *((_DWORD *)a2 + 3);
        if ( v51 )
        {
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v169, v51, (struct _KTHREAD **)v47, &v168);
          v50 = v168;
          if ( !v168 )
          {
            v53 = WdLogNewEntry5_WdError(v52);
            *(_QWORD *)(v53 + 24) = *((unsigned int *)a2 + 3);
            WdLogEvent5_WdError(v53);
            LODWORD(v11) = -1073741811;
            ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v169);
LABEL_55:
            DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v158);
            return (unsigned int)v11;
          }
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v169);
        }
        if ( v50 || ((v54 = *((_QWORD *)v47 + 32)) == 0 ? (v50 = 0LL) : (v50 = (struct DXGDEVICE *)(v54 - 24)), v50) )
        {
          DXGDEVICE::GetContexts(v50, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
          *((_DWORD *)a2 + 3) = *((_DWORD *)v50 + 83);
        }
        else
        {
          v55 = WdLogNewEntry5_WdError(v49);
          *(_QWORD *)(v55 + 24) = 361LL;
          WdLogEvent5_WdError(v55);
          LODWORD(v11) = -1073741811;
        }
        goto LABEL_55;
      }
      if ( *((_DWORD *)a2 + 1) >= 0xA8u )
      {
        v67 = *((_DWORD *)a2 + 4);
        if ( v67 < *((_DWORD *)this + 622) )
        {
          v68 = *((_DWORD *)a2 + 3);
          if ( !v68 )
          {
            DXGADAPTER::ForcePStateAcrossNodes(this, *((_DWORD *)a2 + 6));
            return (unsigned int)v11;
          }
          if ( v68 > 0 )
          {
            if ( v68 <= 3 )
            {
              DXGADAPTER::ForcePState((__int64)this, v68, v67, *((_DWORD *)a2 + 6));
              return (unsigned int)v11;
            }
            if ( v68 == 4 )
            {
              *((_DWORD *)a2 + 7) = *((_DWORD *)this + 914);
              return (unsigned int)v11;
            }
            if ( v68 == 5 )
            {
              DXGADAPTER::QueryPStateEngineData(
                this,
                *((_DWORD *)a2 + 5),
                (struct _DXGK_POWER_P_COMPONENT *)((char *)a2 + 32),
                (unsigned int *)a2 + 4);
              return (unsigned int)v11;
            }
          }
        }
      }
      return 3221225485LL;
    }
    if ( (int)v38 > 21 )
    {
      v139 = (unsigned int)(v38 - 22);
      if ( !(_DWORD)v139 )
      {
        v144 = DXGPROCESS::GetCurrent(v139, v32);
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v195, v144);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v195, 0);
        v146 = CCD_BTL::Global(v145);
        CCD_TOPOLOGY::Clear(v146);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v195);
        return (unsigned int)v11;
      }
      v140 = (unsigned int)(v139 - 1);
      if ( !(_DWORD)v140 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x30u )
        {
          v31 = WdLogNewEntry5_WdWarning(v140, v32, v34);
          *(_QWORD *)(v31 + 24) = 218LL;
          goto LABEL_232;
        }
        v44 = DxgkpSendTestVmBusCommand(this, a2, v34, v35);
        goto LABEL_46;
      }
      v42 = (unsigned int)(v140 - 1);
      if ( !(_DWORD)v42 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x10u )
        {
          g_bDMgrIsSetupRunning = *((_DWORD *)a2 + 3) != 0;
          return (unsigned int)v11;
        }
        return 3221225485LL;
      }
      if ( (_DWORD)v42 == 1 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x1Cu )
        {
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          result = DxgkGetMonitorDeviceObject(
                     (const struct _LUID *)((char *)a2 + 12),
                     *((unsigned int *)a2 + 5),
                     (struct _FILE_OBJECT **)&v181,
                     &DeviceObject);
          if ( (int)result < 0 )
            return result;
          AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
          v142 = IoBuildDeviceIoControlRequest(
                   0x232433u,
                   AttachedDeviceReference,
                   (char *)a2 + 24,
                   4u,
                   0LL,
                   0,
                   1u,
                   &Event,
                   &IoStatusBlock);
          if ( v142 )
          {
            Status = IofCallDriver(AttachedDeviceReference, v142);
            if ( Status == 259 )
            {
              while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                ;
              Status = IoStatusBlock.Status;
            }
            LODWORD(v11) = Status;
          }
          else
          {
            LODWORD(v11) = -1073741823;
          }
          ObfDereferenceObject(AttachedDeviceReference);
          ObfDereferenceObject(v181);
          return (unsigned int)v11;
        }
        return 3221225485LL;
      }
      goto LABEL_218;
    }
    if ( (_DWORD)v38 == 21 )
    {
      if ( *((_DWORD *)a2 + 1) < 0x18u )
      {
        v31 = WdLogNewEntry5_WdWarning(v38, v32, v34);
        *(_QWORD *)(v31 + 24) = 621LL;
        goto LABEL_232;
      }
      v132 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v38, v32);
      if ( !v132 )
      {
        v48 = WdLogNewEntry5_WdError(v133);
        *(_QWORD *)(v48 + 24) = 629LL;
        goto LABEL_51;
      }
      v162 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v163, *((_DWORD *)a2 + 3), v132, &v162);
      if ( v162 )
      {
        v136 = ObReferenceObjectByHandle(
                 *((HANDLE *)a2 + 2),
                 0x1F0003u,
                 (POBJECT_TYPE)ExEventObjectType,
                 1,
                 &Object,
                 0LL);
        v11 = v136;
        if ( v136 >= 0 )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v192, v162);
          KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v192);
        }
        else
        {
          v138 = WdLogNewEntry5_WdError(v137);
          *(_QWORD *)(v138 + 24) = v11;
          WdLogEvent5_WdError(v138);
        }
      }
      else
      {
        v135 = WdLogNewEntry5_WdError(v134);
        *(_QWORD *)(v135 + 24) = *((unsigned int *)a2 + 3);
        WdLogEvent5_WdError(v135);
        LODWORD(v11) = -1073741811;
      }
      v78 = (ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v163;
      goto LABEL_172;
    }
    v69 = (unsigned int)(v38 - 16);
    if ( (_DWORD)v69 )
    {
      v70 = (unsigned int)(v69 - 1);
      if ( !(_DWORD)v70 )
      {
        if ( *((_DWORD *)a2 + 1) < 0xA8u )
        {
          v31 = WdLogNewEntry5_WdWarning(v70, v32, v34);
          *(_QWORD *)(v31 + 24) = 668LL;
          goto LABEL_232;
        }
        v92 = DXGPROCESS::GetCurrent(v70, v32);
        if ( v92 )
        {
          v153 = 0LL;
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v175, *((_DWORD *)a2 + 3), v92, &v153, 0);
          v95 = v153;
          if ( v153 )
          {
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
            v97 = (struct DXGDEVICE *)*((_QWORD *)v95 + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v185, v97);
            *(_QWORD *)&v156[0].0 = (char *)v95 + 408;
            DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v95 + 408));
            v177 = this;
            v178 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v176);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v213, (__int64)v97, 0, v98, 0);
            LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v213);
            if ( (int)v11 >= 0 )
            {
              if ( *((_DWORD *)a2 + 8) > 0x10u )
              {
                v101 = WdLogNewEntry5_WdError(v99);
                *(_QWORD *)(v101 + 24) = 707LL;
                WdLogEvent5_WdError(v101);
                LODWORD(v11) = -1073741811;
              }
              if ( !*((_DWORD *)a2 + 4) )
              {
                v102 = WdLogNewEntry5_WdError(v99);
                *(_QWORD *)(v102 + 24) = 712LL;
                WdLogEvent5_WdError(v102);
                LODWORD(v11) = -1073741811;
              }
              memset(&v215, 0, sizeof(v215));
              v215.hDevice = *((_DWORD *)a2 + 3);
              v215.AllocationCount = *((_DWORD *)a2 + 8);
              v215.CommandLength = *((_DWORD *)a2 + 4);
              v215.pNewCommandBuffer = (void *)*((_QWORD *)a2 + 3);
              v103 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
              v215.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
              *(_DWORD *)&v215.Flags |= 0x20u;
              IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v95 + 2) + 16LL) + 16LL));
              v148 = v104;
              v216[0] = 0LL;
              v217 = 0;
              v106 = 0LL;
              v154 = 0LL;
              if ( IsDxgmms2 )
              {
                Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                                      v216,
                                                      v104);
                v106 = Elements;
                v154 = Elements;
                if ( !Elements )
                {
                  v111 = WdLogNewEntry5_WdWarning(v109, v108, v110);
                  *(_QWORD *)(v111 + 24) = 741LL;
                  WdLogEvent5_WdWarning(v111);
                  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v216);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v213);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v176);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v185);
                  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v175);
                  return 3221225495LL;
                }
                LODWORD(v11) = DxgkReferenceAllocationList(&v148, v103, Elements, *((struct DXGDEVICE **)v95 + 2));
              }
              if ( (int)v11 >= 0 )
              {
                LODWORD(v11) = DXGCONTEXT::Render(
                                 v95,
                                 &v215,
                                 (struct COREDEVICEACCESS *)v213,
                                 (struct DXGADAPTERSTOPRESETLOCKSHARED *)v176,
                                 &v153,
                                 v106);
                v152 = v11;
                v95 = v153;
              }
              if ( IsDxgmms2 )
                DxgkUnreferenceAllocationList(v148, (struct _EX_RUNDOWN_REF **)v106);
              *((_QWORD *)v95 + 52) = 0LL;
              ExReleasePushLockExclusiveEx((char *)v95 + 408, 0LL);
              KeLeaveCriticalRegion();
              PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v216);
            }
            else
            {
              v100 = *(_QWORD *)&v156[0].0;
              *(_QWORD *)(*(_QWORD *)&v156[0].0 + 8LL) = 0LL;
              ExReleasePushLockExclusiveEx(v100, 0LL);
              KeLeaveCriticalRegion();
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v213);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v176);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v185);
          }
          else
          {
            v96 = WdLogNewEntry5_WdError(v94);
            *(_QWORD *)(v96 + 24) = 686LL;
            WdLogEvent5_WdError(v96);
            LODWORD(v11) = -1073741811;
          }
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v175);
          return (unsigned int)v11;
        }
        v48 = WdLogNewEntry5_WdError(v93);
        *(_QWORD *)(v48 + 24) = 676LL;
LABEL_51:
        WdLogEvent5_WdError(v48);
LABEL_233:
        LODWORD(v11) = -1073741811;
        return (unsigned int)v11;
      }
      v71 = (unsigned int)(v70 - 1);
      if ( (_DWORD)v71 )
      {
        v42 = (unsigned int)(v71 - 1);
        if ( !(_DWORD)v42 )
        {
          if ( *((_DWORD *)a2 + 1) >= 0x10u )
          {
            if ( g_OSTestSigningEnabled )
            {
              v86 = *((_DWORD *)a2 + 3) != 0;
              *((_BYTE *)DXGGLOBAL::GetGlobal(v42) + 1048) = v86;
            }
            else
            {
              LODWORD(v11) = -1073741637;
            }
            return (unsigned int)v11;
          }
          return 3221225485LL;
        }
        if ( (_DWORD)v42 == 1 )
        {
          if ( *((_DWORD *)a2 + 1) < 0x18u )
          {
            v31 = WdLogNewEntry5_WdWarning(v42, v32, v34);
            *(_QWORD *)(v31 + 24) = 533LL;
            goto LABEL_232;
          }
          v72 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v42, v32);
          v74 = (__int64)v72;
          if ( !v72 )
          {
            v48 = WdLogNewEntry5_WdError(v73);
            *(_QWORD *)(v48 + 24) = 541LL;
            goto LABEL_51;
          }
          v170 = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v151, *((_DWORD *)a2 + 3), v72, &v170);
          v76 = v170;
          if ( !v170 )
          {
            v77 = WdLogNewEntry5_WdError(v75);
            *(_QWORD *)(v77 + 24) = *((unsigned int *)a2 + 3);
            WdLogEvent5_WdError(v77);
            LODWORD(v11) = -1073741811;
LABEL_112:
            v78 = (ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v151;
            goto LABEL_172;
          }
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v167, v76);
          v173 = *(_QWORD *)(*((_QWORD *)v76 + 2) + 16LL);
          v174 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v172);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v212, (__int64)v76, 0, v79, 0);
          LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v212);
          if ( (int)v11 < 0 )
          {
LABEL_114:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v212);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v172);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v167);
            goto LABEL_112;
          }
          v150 = 0LL;
          AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                      v74,
                                                      (DXGALLOCATIONREFERENCE *)v156,
                                                      *((_DWORD *)a2 + 4));
          DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v150, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v156);
          v82 = v150;
          if ( v150 )
          {
            v84 = *((_QWORD *)v76 + 2);
            v85 = *(_QWORD *)(v150[1].Count + 16);
            if ( *(_QWORD *)(v85 + 16) == *(_QWORD *)(v84 + 16) )
            {
              if ( *((_BYTE *)a2 + 20) )
              {
                if ( (v150[9].Count & 0x800) == 0 )
                {
                  LODWORD(v11) = VIDMM_EXPORT::VidMmPinAllocation(
                                   *(VIDMM_EXPORT **)(v84 + 528),
                                   *(struct VIDMM_GLOBAL **)(v84 + 536),
                                   (struct _VIDMM_MULTI_ALLOC *)v150[3].Count,
                                   &v179,
                                   &v191);
                  if ( (int)v11 >= 0 )
                    LODWORD(v82[9].Count) |= 0x800u;
                  goto LABEL_118;
                }
                v83 = (_QWORD *)WdLogNewEntry5_WdError(v85);
                v83[3] = 589LL;
              }
              else
              {
                if ( (v150[9].Count & 0x800) != 0 )
                {
                  VIDMM_EXPORT::VidMmUnpinAllocation(
                    *(VIDMM_EXPORT **)(v84 + 528),
                    *(struct VIDMM_GLOBAL **)(v84 + 536),
                    (struct _VIDMM_MULTI_ALLOC *)v150[3].Count);
                  goto LABEL_118;
                }
                v83 = (_QWORD *)WdLogNewEntry5_WdError(v85);
                v83[3] = 608LL;
              }
            }
            else
            {
              v83 = (_QWORD *)WdLogNewEntry5_WdError(v85);
              v83[3] = v76;
              v83[4] = v82;
              v83[5] = -1073741811LL;
            }
          }
          else
          {
            v83 = (_QWORD *)WdLogNewEntry5_WdError(v81);
            v83[3] = *((unsigned int *)a2 + 4);
          }
          WdLogEvent5_WdError(v83);
          LODWORD(v11) = -1073741811;
LABEL_118:
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v150);
          goto LABEL_114;
        }
LABEL_218:
        v31 = WdLogNewEntry5_WdWarning(v42, v32, v34);
        *(_QWORD *)(v31 + 24) = *((int *)a2 + 2);
        goto LABEL_232;
      }
      if ( *((_DWORD *)a2 + 1) < 0x10u )
      {
        v31 = WdLogNewEntry5_WdWarning(v71, v32, v34);
        *(_QWORD *)(v31 + 24) = 782LL;
        goto LABEL_232;
      }
      v87 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v71, v32);
      if ( !v87 )
      {
        v48 = WdLogNewEntry5_WdError(v88);
        *(_QWORD *)(v48 + 24) = 790LL;
        goto LABEL_51;
      }
      v171 = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v154, *((_DWORD *)a2 + 3), v87, &v171);
      v90 = v171;
      if ( v171 )
      {
        *((_BYTE *)v171 + 1695) = 1;
        *(_BYTE *)(*((_QWORD *)v90 + 5) + 272LL) = 1;
      }
      else
      {
        v91 = WdLogNewEntry5_WdError(v89);
        *(_QWORD *)(v91 + 24) = *((unsigned int *)a2 + 3);
        WdLogEvent5_WdError(v91);
        LODWORD(v11) = -1073741811;
      }
      v78 = (ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v154;
LABEL_172:
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS(v78);
      return (unsigned int)v11;
    }
    if ( *((_DWORD *)a2 + 1) < 0x58u )
    {
      v31 = WdLogNewEntry5_WdWarning(v69, v32, v34);
      *(_QWORD *)(v31 + 24) = 376LL;
      goto LABEL_232;
    }
    v112 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v69, v32);
    v114 = v112;
    if ( !v112 )
    {
      v48 = WdLogNewEntry5_WdError(v113);
      *(_QWORD *)(v48 + 24) = 384LL;
      goto LABEL_51;
    }
    v155 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v157, *((_DWORD *)a2 + 3), v112, &v155);
    v116 = v155;
    if ( !v155 )
    {
      v117 = WdLogNewEntry5_WdError(v115);
      *(_QWORD *)(v117 + 24) = *((unsigned int *)a2 + 3);
LABEL_170:
      WdLogEvent5_WdError(v117);
      LODWORD(v11) = -1073741811;
LABEL_171:
      v78 = (ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v157;
      goto LABEL_172;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
    v148 = 0;
    v118 = 0;
    v155 = 0LL;
    v119 = *(_QWORD *)(*((_QWORD *)v116 + 2) + 16LL);
    if ( *(_BYTE *)(v119 + 185) )
    {
      *(_OWORD *)v196 = *(_OWORD *)a2;
      v197 = *((_OWORD *)a2 + 1);
      v198 = *((_OWORD *)a2 + 2);
      v199 = *((_OWORD *)a2 + 3);
      v200 = *((_OWORD *)a2 + 4);
      v201 = (struct DXGDEVICE *)*((_QWORD *)a2 + 10);
      *(_QWORD *)&v156[0].0 = 0LL;
      *(_DWORD *)&v196[12] = *((_DWORD *)v116 + 84);
      v120 = *(_DWORD *)&v196[12];
      v121 = *(_DWORD *)(v119 + 3912);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v114);
      LODWORD(v147) = 88;
      if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                  (struct VMBCHANNEL__ **)(v119 + 3888),
                  HostProcess,
                  v121,
                  v120,
                  0,
                  D3DKMT_ESCAPE_DRT_TEST,
                  v156[0],
                  (size_t)v147,
                  v196) < 0 )
      {
        v117 = WdLogNewEntry5_WdError(v123);
        *(_QWORD *)(v117 + 24) = 426LL;
        goto LABEL_170;
      }
      v148 = HIDWORD(v198);
      v118 = v199;
      v155 = v201;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v190, v116);
    v188 = *(_QWORD *)(*((_QWORD *)v116 + 2) + 16LL);
    v189 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v187);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v214, (__int64)v116, 0, v124, 0);
    LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v214);
    if ( (int)v11 >= 0 )
    {
      memset(v218, 0, 0x134uLL);
      memset(&v218[39], 0, 120);
      HIDWORD(v218[0]) = *((_DWORD *)a2 + 3);
      LODWORD(v218[2]) = 4;
      v218[3] = (char *)a2 + 16;
      v125 = LODWORD(v218[0]) | 0x200;
      LODWORD(v218[0]) |= 0x200u;
      if ( *((_BYTE *)a2 + 60) )
      {
        v125 |= 1u;
        LODWORD(v218[0]) = v125;
      }
      if ( *((_BYTE *)a2 + 65) )
      {
        v125 |= 0x20u;
        LODWORD(v218[0]) = v125;
      }
      if ( *((_BYTE *)a2 + 61) )
      {
        v125 |= 0x400u;
        LODWORD(v218[0]) = v125;
      }
      if ( *((_BYTE *)a2 + 62) )
      {
        v125 |= 0x1000u;
        LODWORD(v218[0]) = v125;
      }
      if ( *((_BYTE *)a2 + 63) )
        LODWORD(v218[0]) = v125 | 0x2000;
      LOBYTE(v218[50]) = *((_BYTE *)a2 + 64);
      LODWORD(v218[47]) = *((_DWORD *)a2 + 14);
      HIDWORD(v218[47]) = *((_DWORD *)a2 + 17);
      HIDWORD(v218[46]) = *((_DWORD *)a2 + 10);
      LODWORD(v218[48]) = *((_DWORD *)a2 + 18);
      v218[49] = *((_QWORD *)a2 + 10);
      LODWORD(v11) = DXGDEVICE::CreateStandardAllocation(v116, (struct _D3DKM_CREATESTANDARDALLOCATION *)v218, v214);
      if ( (int)v11 >= 0 )
      {
        v126 = HIDWORD(v218[6]);
        *((_DWORD *)a2 + 11) = HIDWORD(v218[6]);
        *((_QWORD *)a2 + 6) = v218[1];
        if ( (*((_BYTE *)v114 + 307) & 8) != 0 )
        {
          v159 = 0LL;
          v127 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                            (__int64)v114,
                                            (DXGALLOCATIONREFERENCE *)&v186,
                                            v126);
          DXGALLOCATIONREFERENCE::MoveAssign(&v159, v127);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v186);
          if ( v159
            && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v159 + 1) + 16LL) + 16LL) == *(_QWORD *)(*((_QWORD *)v116 + 2) + 16LL) )
          {
            *((_QWORD *)a2 + 10) = _guard_dispatch_icall_fptr();
          }
          else
          {
            *((_QWORD *)a2 + 10) = 0LL;
          }
          v128 = &v159;
        }
        else
        {
          if ( !*(_BYTE *)(v119 + 185) )
            goto LABEL_178;
          v161 = 0LL;
          v129 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                            (__int64)v114,
                                            (DXGALLOCATIONREFERENCE *)&v183,
                                            v126);
          DXGALLOCATIONREFERENCE::MoveAssign(&v161, v129);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v183);
          v130 = v161;
          if ( v161 )
          {
            *((_DWORD *)v161 + 24) = v148;
            *((_QWORD *)v130 + 15) = v155;
          }
          v160 = 0LL;
          ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                                  (__int64)v114,
                                                  (DXGRESOURCEREFERENCE *)&v182,
                                                  *((_DWORD *)a2 + 12));
          DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v160, ResourceSafe);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v182);
          if ( v160 )
            HIDWORD(v160[2].Ptr) = v118;
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v160);
          v128 = &v161;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v128);
        goto LABEL_178;
      }
      LODWORD(v11) = -1073741811;
    }
LABEL_178:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v214);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v187);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v190);
    goto LABEL_171;
  }
  if ( *((_DWORD *)a2 + 1) >= 0x10u )
  {
    if ( !*((_DWORD *)a2 + 3) )
    {
      _m_prefetchw(&g_DRTEnable);
      v26 = g_DRTEnable;
      do
      {
        if ( !v26 )
        {
          v29 = WdLogNewEntry5_WdError(v7);
          *(_QWORD *)(v29 + 24) = 125LL;
          WdLogEvent5_WdError(v29);
          return (unsigned int)v11;
        }
        v27 = v26;
        v7 = v26 - 1;
        v26 = _InterlockedCompareExchange(&g_DRTEnable, v7, v26);
      }
      while ( v26 != (_DWORD)v27 );
      v28 = WdLogNewEntry5_WdEvent(v7, v27, v8, v9);
      *(_QWORD *)(v28 + 24) = 135LL;
      WdLogEvent5_WdEvent(v28);
      return (unsigned int)v11;
    }
    v149 = 0;
    v202 = 0LL;
    v203 = 288;
    v204 = L"DRTTestEnable";
    v205 = &v149;
    v206 = 67108868;
    v207 = &v149;
    v208 = 4;
    v209 = 0LL;
    v210 = 0;
    memset(v211, 0, sizeof(v211));
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v202, 0LL, 0LL);
    if ( v149 == 1484026436 )
    {
      _InterlockedIncrement(&g_DRTEnable);
      v16 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
      *(_QWORD *)(v16 + 24) = 84LL;
      WdLogEvent5_WdEvent(v16);
      if ( this && *((_BYTE *)this + 185) )
      {
        *(_DWORD *)Src = 1484026436;
        v165 = 16LL;
        v166 = 1;
        v19 = *((_DWORD *)this + 978);
        v20 = DXGPROCESS::GetCurrent(v18, v17);
        LODWORD(v147) = 16;
        LODWORD(v11) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                         (struct VMBCHANNEL__ **)this + 486,
                         *((_DWORD *)v20 + 106),
                         v19,
                         0,
                         0,
                         D3DKMT_ESCAPE_DRT_TEST,
                         0,
                         (size_t)v147,
                         Src);
        if ( (int)v11 < 0 )
        {
          v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
          *(_QWORD *)(v24 + 24) = 99LL;
          WdLogEvent5_WdWarning(v24);
        }
      }
      return (unsigned int)v11;
    }
    v25 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
    *(_QWORD *)(v25 + 24) = 109LL;
    WdLogEvent5_WdEvent(v25);
    goto LABEL_72;
  }
  v30 = WdLogNewEntry5_WdWarning(v7, v6, v8);
  *(_QWORD *)(v30 + 24) = *((unsigned int *)a2 + 1);
  WdLogEvent5_WdWarning(v30);
  LODWORD(v11) = -1073741789;
  return (unsigned int)v11;
}
