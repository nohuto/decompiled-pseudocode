/*
 * XREFs of ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C018FD24
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00053F0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000D728 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000D7C4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000DD94 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000DF04 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0013770 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0013830 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002144C (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C00214A8 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?VmBusSendEscape@DXGADAPTER@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C003001C (-VmBusSendEscape@DXGADAPTER@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z.c)
 *     ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0087038 (-DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDE.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0087220 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00BCAF0 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00CADD0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z @ 0x1C016CE94 (-AllocateElements@-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$0CA@@@QEAAPEAPEAVDXGALLOCATION@@I@Z.c)
 *     ?ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z @ 0x1C016DFE4 (-ForcePState@DXGADAPTER@@QEAAXW4_D3DKMT_DRT_FORCE_PSTATE_BEHAVIOR@@II@Z.c)
 *     ?ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z @ 0x1C016E058 (-ForcePStateAcrossNodes@DXGADAPTER@@QEAAXI@Z.c)
 *     ?QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z @ 0x1C016EB1C (-QueryPStateEngineData@DXGADAPTER@@QEAAXIPEAU_DXGK_POWER_P_COMPONENT@@PEAI@Z.c)
 *     ?DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z @ 0x1C017F1A4 (-DxgkUnreferenceAllocationList@@YAXIPEAPEAVDXGALLOCATION@@@Z.c)
 *     ?GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z @ 0x1C0187C28 (-GetContexts@DXGDEVICE@@QEAAXPEAIQEAI@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C01CA778 (DxgkHandleThermalCoolingDrtEscape.c)
 *     DmmDRTTest @ 0x1C01D4B8C (DmmDRTTest.c)
 *     MonitorDRTTest @ 0x1C01E3608 (MonitorDRTTest.c)
 */

__int64 __fastcall DxgkDrtTestEscape(struct DXGADAPTER *this, struct _D3DKMT_DRT_ESCAPE_HEAD *a2, DXGADAPTER **a3)
{
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int32 v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  char *v29; // r14
  __int64 v30; // r9
  __int64 v31; // rdx
  char *v32; // rax
  _OWORD *v33; // rcx
  __int64 v34; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct DXGPROCESS *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rcx
  struct DXGDEVICE *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rcx
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  struct _KTHREAD **v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  DXGDEVICEBYHANDLE *v63; // rcx
  NTSTATUS v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  struct _KTHREAD **v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r12
  __int64 v72; // rdx
  __int64 v73; // rcx
  struct DXGDEVICE *v74; // r15
  __int64 v75; // rax
  __int64 v76; // r9
  struct DXGALLOCATION **AllocationSafe; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  struct _EX_RUNDOWN_REF *v83; // rbx
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r9
  __int64 v89; // rcx
  bool v90; // bl
  struct _KTHREAD **v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  struct DXGDEVICE *v96; // rax
  __int64 v97; // rax
  struct DXGPROCESS *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  struct DXGCONTEXT *v103; // r13
  __int64 v104; // rax
  struct DXGDEVICE *v105; // rbx
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rax
  struct _D3DDDI_ALLOCATIONLIST *v111; // r15
  unsigned int v112; // edx
  unsigned __int8 IsDxgmms2; // r14
  struct DXGALLOCATION **v114; // rbx
  struct DXGALLOCATION **Elements; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  struct _KTHREAD **v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  struct _KTHREAD **v125; // r15
  __int64 v126; // rdx
  __int64 v127; // rcx
  struct DXGDEVICE *v128; // r13
  __int64 v129; // rax
  int v130; // ebx
  __int64 v131; // r12
  UINT v132; // edi
  UINT v133; // ebx
  UINT HostProcess; // eax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r9
  int v138; // eax
  unsigned int v139; // r8d
  struct DXGALLOCATION **v140; // rax
  __int64 v141; // rdx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // r9
  struct DXGALLOCATION **v147; // rcx
  struct DXGALLOCATION **v148; // rax
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  struct DXGALLOCATION *v152; // rax
  struct DXGRESOURCE **ResourceSafe; // rax
  unsigned int v154; // r8d
  int v155; // edx
  __int64 v156; // rcx
  size_t Size; // [rsp+38h] [rbp-820h]
  unsigned int v158; // [rsp+54h] [rbp-804h] BYREF
  int v159; // [rsp+58h] [rbp-800h] BYREF
  struct _EX_RUNDOWN_REF *v160; // [rsp+60h] [rbp-7F8h] BYREF
  _BYTE v161[8]; // [rsp+68h] [rbp-7F0h] BYREF
  int v162; // [rsp+70h] [rbp-7E8h]
  struct DXGCONTEXT *v163; // [rsp+78h] [rbp-7E0h] BYREF
  struct DXGDEVICE *v164; // [rsp+80h] [rbp-7D8h] BYREF
  struct DXGALLOCATION **v165; // [rsp+88h] [rbp-7D0h] BYREF
  _BYTE v166[8]; // [rsp+90h] [rbp-7C8h] BYREF
  struct _D3DDDI_ESCAPEFLAGS v167[2]; // [rsp+98h] [rbp-7C0h] BYREF
  _BYTE v168[8]; // [rsp+A0h] [rbp-7B8h] BYREF
  struct DXGDEVICE *v169; // [rsp+A8h] [rbp-7B0h] BYREF
  _BYTE v170[8]; // [rsp+B0h] [rbp-7A8h] BYREF
  struct DXGALLOCATION *v171; // [rsp+B8h] [rbp-7A0h] BYREF
  struct _EX_RUNDOWN_REF *v172; // [rsp+C0h] [rbp-798h] BYREF
  struct DXGALLOCATION *v173; // [rsp+C8h] [rbp-790h] BYREF
  _BYTE v174[16]; // [rsp+D0h] [rbp-788h] BYREF
  struct DXGDEVICE *v175; // [rsp+E0h] [rbp-778h] BYREF
  _BYTE v176[8]; // [rsp+E8h] [rbp-770h] BYREF
  struct DXGDEVICE *v177; // [rsp+F0h] [rbp-768h] BYREF
  struct DXGDEVICE *v178; // [rsp+F8h] [rbp-760h] BYREF
  _BYTE v179[8]; // [rsp+100h] [rbp-758h] BYREF
  __int64 v180; // [rsp+108h] [rbp-750h]
  char v181; // [rsp+110h] [rbp-748h]
  _BYTE v182[16]; // [rsp+118h] [rbp-740h] BYREF
  _BYTE v183[8]; // [rsp+128h] [rbp-730h] BYREF
  struct DXGADAPTER *v184; // [rsp+130h] [rbp-728h]
  char v185; // [rsp+138h] [rbp-720h]
  unsigned int v186; // [rsp+140h] [rbp-718h] BYREF
  PVOID Object; // [rsp+148h] [rbp-710h] BYREF
  struct _EX_RUNDOWN_REF *v188; // [rsp+150h] [rbp-708h] BYREF
  struct _EX_RUNDOWN_REF *v189; // [rsp+158h] [rbp-700h] BYREF
  struct _EX_RUNDOWN_REF *v190; // [rsp+160h] [rbp-6F8h] BYREF
  _BYTE v191[16]; // [rsp+168h] [rbp-6F0h] BYREF
  _BYTE v192[8]; // [rsp+178h] [rbp-6E0h] BYREF
  __int64 v193; // [rsp+180h] [rbp-6D8h]
  char v194; // [rsp+188h] [rbp-6D0h]
  _BYTE v195[16]; // [rsp+190h] [rbp-6C8h] BYREF
  union _LARGE_INTEGER v196; // [rsp+1A0h] [rbp-6B8h] BYREF
  unsigned __int8 v197[24]; // [rsp+1A8h] [rbp-6B0h] BYREF
  unsigned __int8 Src[16]; // [rsp+1C0h] [rbp-698h] BYREF
  __int128 v199; // [rsp+1D0h] [rbp-688h]
  __int128 v200; // [rsp+1E0h] [rbp-678h]
  __int128 v201; // [rsp+1F0h] [rbp-668h]
  __int128 v202; // [rsp+200h] [rbp-658h]
  struct DXGDEVICE *v203; // [rsp+210h] [rbp-648h]
  __int64 v204; // [rsp+220h] [rbp-638h] BYREF
  int v205; // [rsp+228h] [rbp-630h]
  const wchar_t *v206; // [rsp+230h] [rbp-628h]
  int *v207; // [rsp+238h] [rbp-620h]
  int v208; // [rsp+240h] [rbp-618h]
  int *v209; // [rsp+248h] [rbp-610h]
  int v210; // [rsp+250h] [rbp-608h]
  __int64 v211; // [rsp+258h] [rbp-600h]
  int v212; // [rsp+260h] [rbp-5F8h]
  _BYTE v213[40]; // [rsp+268h] [rbp-5F0h] BYREF
  _BYTE v214[96]; // [rsp+290h] [rbp-5C8h] BYREF
  _BYTE v215[96]; // [rsp+2F0h] [rbp-568h] BYREF
  PERESOURCE *v216[12]; // [rsp+350h] [rbp-508h] BYREF
  struct _D3DKMT_RENDER v217; // [rsp+3B0h] [rbp-4A8h] BYREF
  PVOID v218[33]; // [rsp+520h] [rbp-338h] BYREF
  int v219; // [rsp+628h] [rbp-230h]
  _QWORD v220[52]; // [rsp+630h] [rbp-228h] BYREF
  _QWORD v221[8]; // [rsp+7D0h] [rbp-88h] BYREF

  memset(v221, 0, sizeof(v221));
  EtwActivityIdControl(3u, (LPGUID)&v221[1]);
  v221[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v221[3]) = 45;
  v10 = 0LL;
  LODWORD(v11) = 0;
  v162 = 0;
  if ( *((_DWORD *)a2 + 2) )
  {
    if ( !g_DRTEnable && (*((_BYTE *)DXGPROCESS::GetCurrent(v7) + 275) & 4) == 0 )
    {
      v19 = WdLogNewEntry5_WdWarning(v18, v6, v8, v9);
      *(_QWORD *)(v19 + 24) = 874LL;
LABEL_82:
      WdLogEvent5_WdWarning(v19);
      goto LABEL_83;
    }
    v20 = *((unsigned int *)a2 + 2);
    if ( (int)v20 <= 12 )
    {
      if ( (_DWORD)v20 == 12 )
      {
        if ( *((_DWORD *)a2 + 1) >= 0x10u )
        {
          v50 = *((_QWORD *)this + 286);
          if ( v50 )
            *(_BYTE *)(v50 + 664) = *((_BYTE *)a2 + 12);
          return (unsigned int)v11;
        }
        v19 = WdLogNewEntry5_WdWarning(v20, v6, v8, v9);
        *(_QWORD *)(v19 + 24) = 268LL;
        goto LABEL_82;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( !v23 )
          {
            if ( DXGADAPTER::IsCoreResourceSharedOwner(a3[3]) )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
            LODWORD(v11) = COREADAPTERACCESS::AcquireExclusive(a3, 1u);
            if ( (int)v11 >= 0 )
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
            return (unsigned int)v11;
          }
          v24 = (unsigned int)(v23 - 1);
          if ( !(_DWORD)v24 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x10u )
            {
              v48 = *((unsigned int *)a2 + 3);
              if ( (unsigned int)(v48 - 1) <= 0x3FF )
              {
                g_HmgrTableSizeIncrement = *((_DWORD *)a2 + 3);
                return (unsigned int)v11;
              }
              v19 = WdLogNewEntry5_WdWarning(v48, v6, v8, v9);
              *(_QWORD *)(v19 + 24) = 199LL;
            }
            else
            {
              v19 = WdLogNewEntry5_WdWarning(v24, v6, v8, v9);
              *(_QWORD *)(v19 + 24) = 190LL;
            }
            goto LABEL_82;
          }
          v25 = (unsigned int)(v24 - 1);
          if ( !(_DWORD)v25 )
          {
            if ( *((_DWORD *)a2 + 1) >= 0x14u )
            {
              g_DxgkDestroyAllocationFailMemoryAlloc = *((_DWORD *)a2 + 4);
              return (unsigned int)v11;
            }
            v19 = WdLogNewEntry5_WdWarning(v25, v6, v8, v9);
            *(_QWORD *)(v19 + 24) = 213LL;
            goto LABEL_82;
          }
          v26 = (unsigned int)(v25 - 1);
          if ( (_DWORD)v26 )
          {
            v27 = (unsigned int)(v26 - 4);
            if ( !(_DWORD)v27 )
            {
              if ( *((_DWORD *)a2 + 1) >= 0x10u )
              {
                *((_DWORD *)a2 + 3) = *((_DWORD *)this + 616);
                return (unsigned int)v11;
              }
              v19 = WdLogNewEntry5_WdWarning(v27, v6, v8, v9);
              *(_QWORD *)(v19 + 24) = 230LL;
              goto LABEL_82;
            }
            if ( (_DWORD)v27 == 1 )
            {
              v28 = *((unsigned int *)this + 616);
              if ( (_DWORD)v28 )
              {
                v27 = (unsigned int)(v28 - 1);
                v6 = 344 * v27 + 360;
                if ( *((unsigned int *)a2 + 1) >= v6 )
                {
                  v29 = (char *)a2 + 352;
                  v30 = (unsigned int)v28;
                  do
                  {
                    v31 = *((_QWORD *)this + 290);
                    v32 = v29 - 336;
                    v33 = (_OWORD *)(v10 + v31 + 8);
                    v34 = 2LL;
                    do
                    {
                      *(_OWORD *)v32 = *v33;
                      *((_OWORD *)v32 + 1) = v33[1];
                      *((_OWORD *)v32 + 2) = v33[2];
                      *((_OWORD *)v32 + 3) = v33[3];
                      *((_OWORD *)v32 + 4) = v33[4];
                      *((_OWORD *)v32 + 5) = v33[5];
                      *((_OWORD *)v32 + 6) = v33[6];
                      v32 += 128;
                      *((_OWORD *)v32 - 1) = v33[7];
                      v33 += 8;
                      --v34;
                    }
                    while ( v34 );
                    *(_OWORD *)v32 = *v33;
                    *((_OWORD *)v32 + 1) = v33[1];
                    *((_OWORD *)v32 + 2) = v33[2];
                    *((_OWORD *)v32 + 3) = v33[3];
                    *((_OWORD *)v32 + 4) = v33[4];
                    *(_DWORD *)v29 = *(_DWORD *)(v10 + v31 + 344);
                    v29[4] = *(_BYTE *)(v10 + v31 + 356);
                    v10 += 520LL;
                    v29 += 344;
                    --v30;
                  }
                  while ( v30 );
                  return (unsigned int)v11;
                }
              }
              v19 = WdLogNewEntry5_WdWarning(v27, v6, v28, v9);
              *(_QWORD *)(v19 + 24) = 249LL;
              goto LABEL_82;
            }
            goto LABEL_81;
          }
          if ( *((_DWORD *)a2 + 1) < 0x114u )
          {
            v19 = WdLogNewEntry5_WdWarning(v26, v6, v8, v9);
            *(_QWORD *)(v19 + 24) = 287LL;
            goto LABEL_82;
          }
          Current = DXGPROCESS::GetCurrent(v26);
          v38 = Current;
          if ( !Current )
          {
            v39 = WdLogNewEntry5_WdError(v37, v36);
            *(_QWORD *)(v39 + 24) = 295LL;
            goto LABEL_42;
          }
          DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v168, Current);
          v41 = 0LL;
          v175 = 0LL;
          v42 = *((unsigned int *)a2 + 3);
          if ( (_DWORD)v42 )
          {
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v176, v42, (struct _KTHREAD **)v38, &v175);
            v41 = v175;
            if ( !v175 )
            {
              v45 = WdLogNewEntry5_WdError(v44, v43);
              *(_QWORD *)(v45 + 24) = *((unsigned int *)a2 + 3);
              WdLogEvent5_WdError(v45);
              LODWORD(v11) = -1073741811;
              DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v176);
LABEL_46:
              DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v168);
              return (unsigned int)v11;
            }
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v176);
          }
          if ( v41 || ((v46 = *((_QWORD *)v38 + 28)) == 0 ? (v41 = 0LL) : (v41 = (struct DXGDEVICE *)(v46 - 24)), v41) )
          {
            DXGDEVICE::GetContexts(v41, (unsigned int *)a2 + 4, (unsigned int *const)a2 + 5);
            *((_DWORD *)a2 + 3) = *((_DWORD *)v41 + 83);
          }
          else
          {
            v47 = WdLogNewEntry5_WdError(v40, v42);
            *(_QWORD *)(v47 + 24) = 322LL;
            WdLogEvent5_WdError(v47);
            LODWORD(v11) = -1073741811;
          }
          goto LABEL_46;
        }
        v49 = DmmDRTTest(this);
      }
      else
      {
        v49 = MonitorDRTTest(this, a2, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v221);
      }
LABEL_208:
      LODWORD(v11) = v49;
      return (unsigned int)v11;
    }
    v51 = (unsigned int)(v20 - 14);
    if ( !(_DWORD)v51 )
    {
      if ( *((_DWORD *)a2 + 1) < 0x14u )
      {
        v19 = WdLogNewEntry5_WdWarning(v51, v6, v8, v9);
        *(_QWORD *)(v19 + 24) = 778LL;
        goto LABEL_82;
      }
      v156 = *((_QWORD *)this + 24);
      if ( !v156 )
        goto LABEL_209;
      v49 = DxgkHandleThermalCoolingDrtEscape(v156, a2);
      goto LABEL_208;
    }
    v52 = v51 - 1;
    if ( !v52 )
    {
      if ( *((_DWORD *)a2 + 1) >= 0xA8u )
      {
        v154 = *((_DWORD *)a2 + 4);
        if ( v154 < *((_DWORD *)this + 616) )
        {
          v155 = *((_DWORD *)a2 + 3);
          if ( !v155 )
          {
            DXGADAPTER::ForcePStateAcrossNodes(this, *((_DWORD *)a2 + 6));
            return (unsigned int)v11;
          }
          if ( v155 > 0 )
          {
            if ( v155 <= 3 )
            {
              DXGADAPTER::ForcePState((__int64)this, v155, v154, *((_DWORD *)a2 + 6));
              return (unsigned int)v11;
            }
            if ( v155 == 4 )
            {
              *((_DWORD *)a2 + 7) = *((_DWORD *)this + 910);
              return (unsigned int)v11;
            }
            if ( v155 == 5 )
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
    v53 = (unsigned int)(v52 - 1);
    if ( (_DWORD)v53 )
    {
      v54 = (unsigned int)(v53 - 1);
      if ( !(_DWORD)v54 )
      {
        if ( *((_DWORD *)a2 + 1) < 0xA8u )
        {
          v19 = WdLogNewEntry5_WdWarning(v54, v6, v8, v9);
          *(_QWORD *)(v19 + 24) = 633LL;
          goto LABEL_82;
        }
        v98 = DXGPROCESS::GetCurrent(v54);
        if ( v98 )
        {
          v163 = 0LL;
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v182, *((_DWORD *)a2 + 3), v98, &v163, 0);
          v103 = v163;
          if ( v163 )
          {
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
            v105 = (struct DXGDEVICE *)*((_QWORD *)v103 + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v191, v105);
            DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v103 + 376));
            v184 = this;
            v185 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v183);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v215, (__int64)v105, 0LL, v106, 0);
            LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v215);
            if ( (int)v11 >= 0 )
            {
              if ( *((_DWORD *)a2 + 8) > 0x10u )
              {
                v109 = WdLogNewEntry5_WdError(v108, v107);
                *(_QWORD *)(v109 + 24) = 672LL;
                WdLogEvent5_WdError(v109);
                LODWORD(v11) = -1073741811;
              }
              if ( !*((_DWORD *)a2 + 4) )
              {
                v110 = WdLogNewEntry5_WdError(v108, v107);
                *(_QWORD *)(v110 + 24) = 677LL;
                WdLogEvent5_WdError(v110);
                LODWORD(v11) = -1073741811;
              }
              memset(&v217, 0, sizeof(v217));
              v217.hDevice = *((_DWORD *)a2 + 3);
              v217.AllocationCount = *((_DWORD *)a2 + 8);
              v217.CommandLength = *((_DWORD *)a2 + 4);
              v217.pNewCommandBuffer = (void *)*((_QWORD *)a2 + 3);
              v111 = (struct _D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
              v217.pNewAllocationList = (D3DDDI_ALLOCATIONLIST *)((char *)a2 + 36);
              *(_DWORD *)&v217.Flags |= 0x20u;
              IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v103 + 2) + 16LL) + 16LL));
              v158 = v112;
              v218[0] = 0LL;
              v219 = 0;
              v114 = 0LL;
              v165 = 0LL;
              if ( IsDxgmms2 )
              {
                Elements = (struct DXGALLOCATION **)PagedPoolZeroedArray<DXGALLOCATION *,32>::AllocateElements(
                                                      v218,
                                                      v112);
                v114 = Elements;
                v165 = Elements;
                if ( !Elements )
                {
                  v120 = WdLogNewEntry5_WdWarning(v117, v116, v118, v119);
                  *(_QWORD *)(v120 + 24) = 706LL;
                  WdLogEvent5_WdWarning(v120);
                  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v218);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v215);
                  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v183);
                  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v191);
                  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v182);
                  return 3221225495LL;
                }
                LODWORD(v11) = DxgkReferenceAllocationList(&v158, v111, Elements, *((struct DXGDEVICE **)v103 + 2));
              }
              if ( (int)v11 >= 0 )
              {
                LODWORD(v11) = DXGCONTEXT::Render(
                                 v103,
                                 &v217,
                                 (struct COREDEVICEACCESS *)v215,
                                 (struct DXGADAPTERSTOPRESETLOCKSHARED *)v183,
                                 &v163,
                                 v114);
                v162 = v11;
                v103 = v163;
              }
              if ( IsDxgmms2 )
                DxgkUnreferenceAllocationList(v158, (struct _EX_RUNDOWN_REF **)v114);
              *((_QWORD *)v103 + 48) = 0LL;
              ExReleasePushLockExclusiveEx((char *)v103 + 376, 0LL);
              KeLeaveCriticalRegion();
              PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v218);
            }
            else
            {
              *((_QWORD *)v103 + 48) = 0LL;
              ExReleasePushLockExclusiveEx((char *)v103 + 376, 0LL);
              KeLeaveCriticalRegion();
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v215);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v183);
            DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v191);
          }
          else
          {
            v104 = WdLogNewEntry5_WdError(v102, v101);
            *(_QWORD *)(v104 + 24) = 651LL;
            WdLogEvent5_WdError(v104);
            LODWORD(v11) = -1073741811;
          }
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v182);
          return (unsigned int)v11;
        }
        v39 = WdLogNewEntry5_WdError(v100, v99);
        *(_QWORD *)(v39 + 24) = 641LL;
LABEL_42:
        WdLogEvent5_WdError(v39);
LABEL_83:
        LODWORD(v11) = -1073741811;
        return (unsigned int)v11;
      }
      v55 = (unsigned int)(v54 - 1);
      if ( !(_DWORD)v55 )
      {
        if ( *((_DWORD *)a2 + 1) < 0x10u )
        {
          v19 = WdLogNewEntry5_WdWarning(v55, v6, v8, v9);
          *(_QWORD *)(v19 + 24) = 747LL;
          goto LABEL_82;
        }
        v91 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v55);
        if ( !v91 )
        {
          v39 = WdLogNewEntry5_WdError(v93, v92);
          *(_QWORD *)(v39 + 24) = 755LL;
          goto LABEL_42;
        }
        v177 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v165, *((unsigned int *)a2 + 3), v91, &v177);
        v96 = v177;
        if ( v177 )
        {
          *((_BYTE *)v177 + 1823) = 1;
          *(_BYTE *)(*((_QWORD *)v96 + 5) + 240LL) = 1;
        }
        else
        {
          v97 = WdLogNewEntry5_WdError(v95, v94);
          *(_QWORD *)(v97 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v97);
          LODWORD(v11) = -1073741811;
        }
        v63 = (DXGDEVICEBYHANDLE *)&v165;
        goto LABEL_160;
      }
      v56 = (unsigned int)(v55 - 1);
      if ( (_DWORD)v56 )
      {
        v27 = (unsigned int)(v56 - 1);
        if ( (_DWORD)v27 )
        {
          if ( (_DWORD)v27 != 1 )
          {
LABEL_81:
            v19 = WdLogNewEntry5_WdWarning(v27, v6, v8, v9);
            *(_QWORD *)(v19 + 24) = *((int *)a2 + 2);
            goto LABEL_82;
          }
          if ( *((_DWORD *)a2 + 1) < 0x18u )
          {
            v19 = WdLogNewEntry5_WdWarning(v27, v6, v8, v9);
            *(_QWORD *)(v19 + 24) = 586LL;
            goto LABEL_82;
          }
          v57 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v27);
          if ( !v57 )
          {
            v39 = WdLogNewEntry5_WdError(v59, v58);
            *(_QWORD *)(v39 + 24) = 594LL;
            goto LABEL_42;
          }
          v169 = 0LL;
          DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v170, *((unsigned int *)a2 + 3), v57, &v169);
          if ( v169 )
          {
            v64 = ObReferenceObjectByHandle(
                    *((HANDLE *)a2 + 2),
                    0x1F0003u,
                    (POBJECT_TYPE)ExEventObjectType,
                    1,
                    &Object,
                    0LL);
            v11 = v64;
            if ( v64 >= 0 )
            {
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v197, v169);
              KeWaitForSingleObject(Object, Executive, 0, 1u, 0LL);
              DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v197);
            }
            else
            {
              v67 = WdLogNewEntry5_WdError(v66, v65);
              *(_QWORD *)(v67 + 24) = v11;
              WdLogEvent5_WdError(v67);
            }
          }
          else
          {
            v62 = WdLogNewEntry5_WdError(v61, v60);
            *(_QWORD *)(v62 + 24) = *((unsigned int *)a2 + 3);
            WdLogEvent5_WdError(v62);
            LODWORD(v11) = -1073741811;
          }
          v63 = (DXGDEVICEBYHANDLE *)v170;
LABEL_160:
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE(v63);
          return (unsigned int)v11;
        }
        if ( *((_DWORD *)a2 + 1) < 0x18u )
        {
          v19 = WdLogNewEntry5_WdWarning(v27, v6, v8, v9);
          *(_QWORD *)(v19 + 24) = 498LL;
          goto LABEL_82;
        }
        v68 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v27);
        v71 = (__int64)v68;
        if ( !v68 )
        {
          v39 = WdLogNewEntry5_WdError(v70, v69);
          *(_QWORD *)(v39 + 24) = 506LL;
          goto LABEL_42;
        }
        v178 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v161, *((unsigned int *)a2 + 3), v68, &v178);
        v74 = v178;
        if ( !v178 )
        {
          v75 = WdLogNewEntry5_WdError(v73, v72);
          *(_QWORD *)(v75 + 24) = *((unsigned int *)a2 + 3);
          WdLogEvent5_WdError(v75);
          LODWORD(v11) = -1073741811;
LABEL_100:
          v63 = (DXGDEVICEBYHANDLE *)v161;
          goto LABEL_160;
        }
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v174, v74);
        v180 = *(_QWORD *)(*((_QWORD *)v74 + 2) + 16LL);
        v181 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v179);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v214, (__int64)v74, 0LL, v76, 0);
        LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v214);
        if ( (int)v11 < 0 )
        {
LABEL_102:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v214);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v179);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v174);
          goto LABEL_100;
        }
        v160 = 0LL;
        AllocationSafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                                    v71,
                                                    (DXGALLOCATIONREFERENCE *)v167,
                                                    *((_DWORD *)a2 + 4));
        DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v160, AllocationSafe);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v167, v78, v79, v80);
        v83 = v160;
        if ( v160 )
        {
          v88 = *((_QWORD *)v74 + 2);
          v89 = *(_QWORD *)(v160[1].Count + 16);
          if ( *(_QWORD *)(v89 + 16) == *(_QWORD *)(v88 + 16) )
          {
            if ( *((_BYTE *)a2 + 20) )
            {
              if ( (v160[9].Count & 0x800) == 0 )
              {
                LODWORD(v11) = VIDMM_EXPORT::VidMmPinAllocation(
                                 *(VIDMM_EXPORT **)(v88 + 432),
                                 *(struct VIDMM_GLOBAL **)(v88 + 440),
                                 (struct _VIDMM_MULTI_ALLOC *)v160[3].Count,
                                 &v186,
                                 &v196);
                if ( (int)v11 >= 0 )
                  LODWORD(v83[9].Count) |= 0x800u;
                goto LABEL_106;
              }
              v84 = (_QWORD *)WdLogNewEntry5_WdError(v89, v81);
              v84[3] = 554LL;
            }
            else
            {
              if ( (v160[9].Count & 0x800) != 0 )
              {
                VIDMM_EXPORT::VidMmUnpinAllocation(
                  *(VIDMM_EXPORT **)(v88 + 432),
                  *(struct VIDMM_GLOBAL **)(v88 + 440),
                  (struct _VIDMM_MULTI_ALLOC *)v160[3].Count);
                goto LABEL_106;
              }
              v84 = (_QWORD *)WdLogNewEntry5_WdError(v89, v81);
              v84[3] = 573LL;
            }
          }
          else
          {
            v84 = (_QWORD *)WdLogNewEntry5_WdError(v89, v81);
            v84[3] = v74;
            v84[4] = v83;
            v84[5] = -1073741811LL;
          }
        }
        else
        {
          v84 = (_QWORD *)WdLogNewEntry5_WdError(v82, v81);
          v84[3] = *((unsigned int *)a2 + 4);
        }
        WdLogEvent5_WdError(v84);
        LODWORD(v11) = -1073741811;
LABEL_106:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v160, v85, v86, v87);
        goto LABEL_102;
      }
      if ( *((_DWORD *)a2 + 1) >= 0x10u )
      {
        if ( g_OSTestSigningEnabled )
        {
          v90 = *((_DWORD *)a2 + 3) != 0;
          *((_BYTE *)DXGGLOBAL::GetGlobal(v56, v6, v8, v9) + 1048) = v90;
        }
        else
        {
          LODWORD(v11) = -1073741637;
        }
        return (unsigned int)v11;
      }
      return 3221225485LL;
    }
    if ( *((_DWORD *)a2 + 1) < 0x58u )
    {
      v19 = WdLogNewEntry5_WdWarning(v53, v6, v8, v9);
      *(_QWORD *)(v19 + 24) = 337LL;
      goto LABEL_82;
    }
    v122 = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v53);
    v125 = v122;
    if ( !v122 )
    {
      v39 = WdLogNewEntry5_WdError(v124, v123);
      *(_QWORD *)(v39 + 24) = 345LL;
      goto LABEL_42;
    }
    v164 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v166, *((unsigned int *)a2 + 3), v122, &v164);
    v128 = v164;
    if ( !v164 )
    {
      v129 = WdLogNewEntry5_WdError(v127, v126);
      *(_QWORD *)(v129 + 24) = *((unsigned int *)a2 + 3);
LABEL_158:
      WdLogEvent5_WdError(v129);
      LODWORD(v11) = -1073741811;
LABEL_159:
      v63 = (DXGDEVICEBYHANDLE *)v166;
      goto LABEL_160;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)a3);
    v158 = 0;
    v130 = 0;
    v164 = 0LL;
    v131 = *(_QWORD *)(*((_QWORD *)v128 + 2) + 16LL);
    if ( *(_BYTE *)(v131 + 186) )
    {
      *(_OWORD *)Src = *(_OWORD *)a2;
      v199 = *((_OWORD *)a2 + 1);
      v200 = *((_OWORD *)a2 + 2);
      v201 = *((_OWORD *)a2 + 3);
      v202 = *((_OWORD *)a2 + 4);
      v203 = (struct DXGDEVICE *)*((_QWORD *)a2 + 10);
      *(_QWORD *)&v167[0].0 = 0LL;
      *(_DWORD *)&Src[12] = *((_DWORD *)v128 + 84);
      v132 = *(_DWORD *)&Src[12];
      v133 = *(_DWORD *)(v131 + 3888);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v125);
      LODWORD(Size) = 88;
      if ( (int)DXGADAPTER::VmBusSendEscape(
                  (DXGADAPTER *)v131,
                  HostProcess,
                  v133,
                  v132,
                  0,
                  D3DKMT_ESCAPE_DRT_TEST,
                  v167[0],
                  Size,
                  Src) < 0 )
      {
        v129 = WdLogNewEntry5_WdError(v136, v135);
        *(_QWORD *)(v129 + 24) = 388LL;
        goto LABEL_158;
      }
      v158 = HIDWORD(v200);
      v130 = v201;
      v164 = v203;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v195, v128);
    v193 = *(_QWORD *)(*((_QWORD *)v128 + 2) + 16LL);
    v194 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v192);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v216, (__int64)v128, 0LL, v137, 0);
    LODWORD(v11) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v216);
    if ( (int)v11 >= 0 )
    {
      memset(v220, 0, 0x198uLL);
      HIDWORD(v220[0]) = *((_DWORD *)a2 + 3);
      LODWORD(v220[2]) = 4;
      v220[3] = (char *)a2 + 16;
      v138 = LODWORD(v220[0]) | 0x200;
      LODWORD(v220[0]) |= 0x200u;
      if ( *((_BYTE *)a2 + 60) )
      {
        v138 |= 1u;
        LODWORD(v220[0]) = v138;
      }
      if ( *((_BYTE *)a2 + 65) )
      {
        v138 |= 0x20u;
        LODWORD(v220[0]) = v138;
      }
      if ( *((_BYTE *)a2 + 61) )
      {
        v138 |= 0x400u;
        LODWORD(v220[0]) = v138;
      }
      if ( *((_BYTE *)a2 + 62) )
      {
        v138 |= 0x1000u;
        LODWORD(v220[0]) = v138;
      }
      if ( *((_BYTE *)a2 + 63) )
        LODWORD(v220[0]) = v138 | 0x2000;
      LOBYTE(v220[50]) = *((_BYTE *)a2 + 64);
      LODWORD(v220[47]) = *((_DWORD *)a2 + 14);
      HIDWORD(v220[47]) = *((_DWORD *)a2 + 17);
      HIDWORD(v220[46]) = *((_DWORD *)a2 + 10);
      LODWORD(v220[48]) = *((_DWORD *)a2 + 18);
      v220[49] = *((_QWORD *)a2 + 10);
      LODWORD(v11) = DXGDEVICE::CreateStandardAllocation(v128, (struct _D3DKM_CREATESTANDARDALLOCATION *)v220, v216);
      if ( (int)v11 >= 0 )
      {
        v139 = HIDWORD(v220[6]);
        *((_DWORD *)a2 + 11) = HIDWORD(v220[6]);
        *((_QWORD *)a2 + 6) = v220[1];
        if ( (*((_BYTE *)v125 + 275) & 4) != 0 )
        {
          v171 = 0LL;
          v140 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                            (__int64)v125,
                                            (DXGALLOCATIONREFERENCE *)&v188,
                                            v139);
          DXGALLOCATIONREFERENCE::MoveAssign(&v171, v140);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v188, v141, v142, v143);
          if ( v171
            && (v146 = *((_QWORD *)v128 + 2),
                v144 = *(_QWORD *)(*((_QWORD *)v171 + 1) + 16LL),
                *(_QWORD *)(v144 + 16) == *(_QWORD *)(v146 + 16)) )
          {
            *((_QWORD *)a2 + 10) = _guard_dispatch_icall_fptr();
          }
          else
          {
            *((_QWORD *)a2 + 10) = 0LL;
          }
          v147 = &v171;
        }
        else
        {
          if ( !*(_BYTE *)(v131 + 186) )
            goto LABEL_166;
          v173 = 0LL;
          v148 = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationSafe(
                                            (__int64)v125,
                                            (DXGALLOCATIONREFERENCE *)&v189,
                                            v139);
          DXGALLOCATIONREFERENCE::MoveAssign(&v173, v148);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v189, v149, v150, v151);
          v152 = v173;
          if ( v173 )
          {
            *((_DWORD *)v173 + 24) = v158;
            *((_QWORD *)v152 + 15) = v164;
          }
          v172 = 0LL;
          ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe(
                                                  (__int64)v125,
                                                  (DXGRESOURCEREFERENCE *)&v190,
                                                  *((_DWORD *)a2 + 12));
          DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v172, ResourceSafe);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v190);
          if ( v172 )
            HIDWORD(v172[2].Ptr) = v130;
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v172);
          v147 = &v173;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v147, v144, v145, v146);
        goto LABEL_166;
      }
      LODWORD(v11) = -1073741811;
    }
LABEL_166:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v216);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v192);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v195);
    goto LABEL_159;
  }
  if ( *((_DWORD *)a2 + 1) < 0x10u )
  {
    v17 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
    *(_QWORD *)(v17 + 24) = *((unsigned int *)a2 + 1);
    WdLogEvent5_WdWarning(v17);
    LODWORD(v11) = -1073741789;
    return (unsigned int)v11;
  }
  if ( !*((_DWORD *)a2 + 3) )
  {
    _m_prefetchw(&g_DRTEnable);
    v15 = g_DRTEnable;
    do
    {
      if ( !v15 )
      {
        v16 = WdLogNewEntry5_WdError(v7, v6);
        *(_QWORD *)(v16 + 24) = 106LL;
        WdLogEvent5_WdError(v16);
        return (unsigned int)v11;
      }
      v6 = v15;
      v7 = v15 - 1;
      v15 = _InterlockedCompareExchange(&g_DRTEnable, v7, v15);
    }
    while ( v15 != (_DWORD)v6 );
    v13 = WdLogNewEntry5_WdEvent(v7);
    *(_QWORD *)(v13 + 24) = 116LL;
    goto LABEL_6;
  }
  v159 = 0;
  v204 = 0LL;
  v205 = 288;
  v206 = L"DRTTestEnable";
  v207 = &v159;
  v208 = 67108868;
  v209 = &v159;
  v210 = 4;
  v211 = 0LL;
  v212 = 0;
  memset(v213, 0, sizeof(v213));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v204, 0LL, 0LL);
  if ( v159 != 1484026436 )
  {
    v14 = WdLogNewEntry5_WdEvent(v12);
    *(_QWORD *)(v14 + 24) = 90LL;
    WdLogEvent5_WdEvent(v14);
LABEL_209:
    LODWORD(v11) = -1073741823;
    return (unsigned int)v11;
  }
  _InterlockedIncrement(&g_DRTEnable);
  v13 = WdLogNewEntry5_WdEvent(v12);
  *(_QWORD *)(v13 + 24) = 84LL;
LABEL_6:
  WdLogEvent5_WdEvent(v13);
  return (unsigned int)v11;
}
