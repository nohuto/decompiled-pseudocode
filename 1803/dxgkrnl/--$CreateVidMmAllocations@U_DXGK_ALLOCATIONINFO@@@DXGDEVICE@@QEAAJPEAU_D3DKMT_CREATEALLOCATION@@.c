/*
 * XREFs of ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA460
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0006AE8 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0015164 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00188A4 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0028188 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C3D4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     McTemplateK0pqqqqq @ 0x1C002C450 (McTemplateK0pqqqqq.c)
 *     McTemplateK0pqqqqqqq @ 0x1C002C510 (McTemplateK0pqqqqqqq.c)
 *     McTemplateK0pqqqq @ 0x1C0042734 (McTemplateK0pqqqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$ProcessSectionAttributes@U_DXGK_ALLOCATIONINFO@@@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C016A428 (--$ProcessSectionAttributes@U_DXGK_ALLOCATIONINFO@@@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ??$ProcessSysMemAttributes@U_DXGK_ALLOCATIONINFO@@@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C016A504 (--$ProcessSysMemAttributes@U_DXGK_ALLOCATIONINFO@@@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateVidMmAllocations<_DXGK_ALLOCATIONINFO>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        char a7,
        __int64 a8)
{
  int v8; // eax
  __int64 v9; // r15
  bool v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int16 v14; // cx
  int v15; // edx
  BOOL v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rcx
  unsigned int *v24; // rdx
  PVOID v25; // r12
  _DWORD *v26; // rsi
  unsigned int v27; // ebx
  int v28; // r8d
  __int64 v29; // rcx
  char v30; // bl
  __int64 v31; // rcx
  __int64 v32; // rcx
  DXGDEVICE *v33; // rdi
  struct DXGPROCESS *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rcx
  __int64 v42; // rax
  struct DXGPROCESS *Current; // rbx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  int v50; // edx
  int v51; // ecx
  __int64 v52; // rsi
  __int64 v54; // r15
  __int64 v55; // rcx
  unsigned int v56; // ecx
  int v57; // r9d
  int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  bool v63; // zf
  void *v64; // rcx
  NTSTATUS v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 (__fastcall *v71)(_QWORD, _QWORD); // rax
  unsigned int *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  unsigned int v76; // ebx
  __int64 v77; // r14
  __int64 v78; // rcx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v79; // r8
  __int64 v80; // rdx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v81; // r9
  unsigned int v82; // eax
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // r11
  unsigned int *v87; // r8
  __int64 v88; // r9
  int v89; // eax
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned int v92; // ecx
  unsigned int v93; // ecx
  _DWORD *v94; // rcx
  _DWORD *v95; // rcx
  _DWORD *v96; // rcx
  __int64 v97; // r9
  const EVENT_DESCRIPTOR *v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned int v101; // edx
  __int64 v102; // rax
  int v103; // eax
  __int64 v104; // rcx
  __int64 v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  PVOID *Object; // [rsp+20h] [rbp-B9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-B1h]
  __int64 v112; // [rsp+30h] [rbp-A9h]
  __int64 v113; // [rsp+38h] [rbp-A1h]
  __int64 v114; // [rsp+40h] [rbp-99h]
  __int64 v115; // [rsp+48h] [rbp-91h]
  __int64 v116; // [rsp+50h] [rbp-89h]
  char v117; // [rsp+60h] [rbp-79h]
  char v118; // [rsp+61h] [rbp-78h]
  char v119[6]; // [rsp+62h] [rbp-77h] BYREF
  __int64 v120; // [rsp+68h] [rbp-71h]
  int v121; // [rsp+70h] [rbp-69h]
  int v122; // [rsp+74h] [rbp-65h] BYREF
  __int64 v123; // [rsp+78h] [rbp-61h]
  int v124; // [rsp+80h] [rbp-59h]
  __int64 v125; // [rsp+88h] [rbp-51h]
  __int64 v126; // [rsp+90h] [rbp-49h]
  __int64 v127; // [rsp+98h] [rbp-41h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v129; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v130; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v131; // [rsp+B8h] [rbp-21h] BYREF
  PVOID v132; // [rsp+C0h] [rbp-19h] BYREF
  char v133[16]; // [rsp+C8h] [rbp-11h] BYREF

  v8 = *(_DWORD *)(a2 + 56);
  LODWORD(v9) = 0;
  v121 = 0;
  v10 = 1;
  v118 = 1;
  v11 = a4;
  v12 = a2;
  if ( (v8 & 0x10000) != 0 && a6 )
  {
    v59 = WdLogNewEntry5_WdError(a1);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v59 + 24) = a1;
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v59);
    return (unsigned int)v9;
  }
  v14 = v8;
  v15 = 1;
  v16 = (v8 & 0x4000) != 0;
  if ( (v14 & 0x400) == 0 )
    v15 = v16;
  v17 = *(_QWORD *)(a1 + 16);
  v124 = v15;
  v18 = *(_QWORD *)(v17 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 144)) )
  {
    v60 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v60 + 24) = 3841LL;
    WdLogEvent5_WdAssertion(v60);
  }
  if ( !*(_DWORD *)(a1 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(a1 + 104));
  if ( a8 )
  {
    v20 = *(_QWORD *)(a8 + 24);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v20 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v20 + 144));
  }
  v21 = a5;
  v22 = 0LL;
  if ( !*(_DWORD *)(v12 + 44) )
  {
LABEL_65:
    *(_DWORD *)(v12 + 56) = *(_DWORD *)(v12 + 56) & 0xFFFFBFFF | (v10 << 14);
    return (unsigned int)v9;
  }
  while ( 1 )
  {
    v23 = *(_QWORD *)(v21 + 48);
    v24 = 0LL;
    v25 = 0LL;
    v119[0] = v124;
    v26 = (_DWORD *)(v11 + 88LL * (unsigned int)v22);
    v120 = 0LL;
    v27 = (v26[4] + 4095) & 0xFFFFF000;
    if ( (*(_DWORD *)(v23 + 4) & 0x200F) != 0 )
      v119[0] = 1;
    if ( !*(_QWORD *)(v23 + 16) )
    {
      v61 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v61 + 24) = 3869LL;
      WdLogEvent5_WdAssertion(v61);
      v24 = 0LL;
    }
    v28 = v26[16];
    if ( (v28 & 0x4000) != 0 )
    {
      v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2464LL) + 16LL);
      v9 = *(_QWORD *)(352LL * ((*(_DWORD *)(v21 + 72) >> 12) & 0x3F) + *(_QWORD *)(v62 + 2360) + 32);
      if ( !*(_BYTE *)(a1 + 1704) || !v9 )
      {
        v105 = WdLogNewEntry5_WdError(v62);
        v52 = a1;
        *(_QWORD *)(v105 + 24) = a1;
        *(_QWORD *)(v105 + 32) = v9;
        WdLogEvent5_WdError(v105);
        LODWORD(v9) = -1073741823;
        goto LABEL_125;
      }
      v24 = 0LL;
    }
    if ( !a7 )
      break;
    v54 = *(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL);
    if ( v54 )
      v9 = *(_QWORD *)(v54 + 184);
    else
      v9 = 0LL;
    v33 = (DXGDEVICE *)a1;
    if ( (*(_DWORD *)(a2 + 56) & 0x80u) != 0 )
      v121 = 1;
LABEL_44:
    v39 = *((_QWORD *)v33 + 2);
    v40 = *((_QWORD *)v33 + 76);
    v122 = 0;
    v41 = *(_QWORD *)(v39 + 552);
    v126 = *(_QWORD *)(v39 + 544);
    LODWORD(v120) = v26[13];
    v42 = *(_QWORD *)(v21 + 48);
    v123 = v41;
    v125 = *(_QWORD *)(v42 + 8);
    Current = DXGPROCESS::GetCurrent(v41, (__int64)v24);
    if ( Current )
    {
      if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
      {
        Current = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 144, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v58 = *((_DWORD *)Current + 40);
            if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v44, &EventBlockThread, v45, v58);
          }
          ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
        }
        *((_QWORD *)Current + 19) = KeGetCurrentThread();
      }
      v33 = (DXGDEVICE *)a1;
    }
    LODWORD(HandleInformation) = v121;
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, POBJECT_HANDLE_INFORMATION, __int64, __int64 *, int *, char *))(*(_QWORD *)(v126 + 8) + 136LL))(
                    v123,
                    v40,
                    v125,
                    (unsigned int)v120,
                    v9,
                    HandleInformation,
                    v21,
                    &v128,
                    &v122,
                    v119);
    if ( Current )
    {
      *((_QWORD *)Current + 19) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 144, 0LL);
      KeLeaveCriticalRegion();
    }
    v10 = v119[0] && v118;
    v118 = v10;
    *(_DWORD *)(v21 + 72) ^= (*(_DWORD *)(v21 + 72) ^ (v122 << 12)) & 0x3F000;
    if ( (int)v9 < 0 )
      goto LABEL_124;
    v47 = v128;
    if ( !v128 )
    {
      v99 = WdLogNewEntry5_WdAssertion(v46);
      *(_QWORD *)(v99 + 24) = 4280LL;
      WdLogEvent5_WdAssertion(v99);
      v47 = v128;
    }
    v48 = *(_QWORD *)(v21 + 48);
    *(_QWORD *)(v21 + 24) = v47;
    v49 = v26[16];
    if ( (v49 & 0x100) != 0 )
    {
      *(_DWORD *)(v48 + 4) |= 8u;
      v51 = v26[16];
    }
    else
    {
      v50 = *(_DWORD *)(v48 + 4);
      v51 = v26[16];
      if ( (v50 & 0x20) == 0 && (v49 & 0x20200) == 0 && (v50 & 0x4000) == 0 )
        goto LABEL_60;
    }
    if ( (v51 & 0x200) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(v21 + 48) + 4LL) |= 0x20u;
      v51 = v26[16];
    }
    if ( (v51 & 0x20000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v21 + 48) + 4LL) |= 0x4000u;
    LODWORD(v9) = VIDMM_EXPORT::VidMmPinAllocation(
                    *(VIDMM_EXPORT **)(*((_QWORD *)v33 + 2) + 544LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)v33 + 2) + 552LL),
                    *(struct _VIDMM_MULTI_ALLOC **)(v21 + 24),
                    0LL,
                    0LL);
    if ( (int)v9 < 0 )
      goto LABEL_124;
    *(_DWORD *)(v21 + 72) |= 0x800u;
LABEL_60:
    if ( DXGDEVICE::UmdManagesResidency(v33) && a6 && a6[4] == 2 )
    {
      v100 = *((_QWORD *)v33 + 2);
      v101 = *(_DWORD *)(v21 + 72);
      v129 = 0LL;
      v131 = 0LL;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v100 + 544) + 8LL) + 976LL))(
        *((_QWORD *)v33 + 76),
        (v101 >> 12) & 0x3F,
        &v129,
        &v131);
      v102 = *((_QWORD *)v33 + 2);
      v130 = 0LL;
      v103 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v102 + 544) + 8LL)
                                                                                                  + 768LL))(
               *(_QWORD *)(v102 + 552),
               v129,
               v21 + 24,
               1LL,
               3,
               &v130,
               v133);
      v9 = v103;
      if ( v103 < 0 )
      {
        v109 = WdLogNewEntry5_WdError(v104);
        *(_QWORD *)(v109 + 24) = v9;
        WdLogEvent5_WdError(v109);
        v12 = a2;
        goto LABEL_63;
      }
      if ( v103 == 259 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 2)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 984LL))(
          *(_QWORD *)(*((_QWORD *)v33 + 2) + 552LL),
          &v131,
          &v130,
          1LL);
        LODWORD(v9) = 0;
      }
    }
    v12 = a2;
    v22 = (unsigned int)(v22 + 1);
    v21 = *(_QWORD *)(v21 + 64);
    if ( (unsigned int)v22 >= *(_DWORD *)(a2 + 44) )
      goto LABEL_63;
    v11 = a4;
  }
  v117 = 0;
  v29 = *(_DWORD *)(a2 + 56) & 0x20;
  if ( (*(_DWORD *)(a2 + 56) & 0x10000) != 0 )
  {
    v63 = (_DWORD)v29 == 0;
    v64 = *(void **)(96 * v22 + a3 + 8);
    if ( !v63 )
    {
      v120 = *(_QWORD *)(96 * v22 + a3 + 8);
      v26[16] = v28 | 0x10;
      LODWORD(v9) = ProcessSysMemAttributes<_DXGK_ALLOCATIONINFO>(v64);
      if ( (int)v9 < 0 )
        goto LABEL_124;
      v24 = (unsigned int *)v120;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 12LL) |= 0x200u;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 184LL) = v24;
      goto LABEL_23;
    }
    v65 = ObReferenceObjectByHandle(v64, 0x20000u, 0LL, 1, &v132, 0LL);
    v25 = v132;
    v9 = v65;
    if ( v65 < 0 )
    {
      v107 = WdLogNewEntry5_WdError(v66);
      *(_QWORD *)(v107 + 24) = *(_QWORD *)(96 * v22 + a3 + 8);
      *(_QWORD *)(v107 + 32) = v9;
      WdLogEvent5_WdError(v107);
      v12 = a2;
      goto LABEL_156;
    }
    v26[16] |= 0x400000u;
    v117 = 1;
    v67 = ProcessSectionAttributes<_DXGK_ALLOCATIONINFO>(v25);
    v9 = v67;
    if ( v67 < 0 )
    {
      v106 = (_QWORD *)WdLogNewEntry5_WdError(v68);
      goto LABEL_188;
    }
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 12LL) |= 0x400u;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 184LL) = v25;
LABEL_119:
    v24 = (unsigned int *)v120;
    goto LABEL_23;
  }
  if ( (_DWORD)v29 )
  {
    if ( (*((_BYTE *)DXGPROCESS::GetCurrent(v29, 0LL) + 323) & 8) != 0 )
    {
      v24 = *(unsigned int **)(96 * v22 + a3 + 8);
      v26[16] |= 0x10u;
      v120 = (__int64)v24;
    }
    else
    {
      if ( *((_QWORD *)v26 + 2) > (unsigned __int64)v27 )
      {
        LODWORD(v9) = -1073741811;
        v108 = WdLogNewEntry5_WdError(v69);
        *(_QWORD *)(v108 + 24) = *((_QWORD *)v26 + 2);
        *(_QWORD *)(v108 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v108);
        goto LABEL_124;
      }
      *((_QWORD *)v26 + 2) = v27;
      v120 = (*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v27);
      v24 = (unsigned int *)v120;
      if ( !v120 )
      {
        v75 = WdLogNewEntry5_WdError(v70);
        *(_QWORD *)(v75 + 24) = 3998LL;
        goto LABEL_123;
      }
      *(_QWORD *)(96 * v22 + a3 + 8) = v120;
    }
    goto LABEL_23;
  }
  if ( (v28 & 0x10) != 0 )
  {
    v24 = *(unsigned int **)(96 * v22 + a3 + 8);
    v120 = (__int64)v24;
    goto LABEL_23;
  }
  if ( (v28 & 0x400000) != 0 )
  {
    if ( *(_DWORD *)(a2 + 44) == 1
      && (v28 & 0x2000000) != 0
      && a6
      && (v71 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)a6 + 4)) != 0LL )
    {
      v72 = a6;
    }
    else
    {
      v73 = WdLogNewEntry5_WdAssertion(v29);
      *(_QWORD *)(v73 + 24) = 4017LL;
      WdLogEvent5_WdAssertion(v73);
      v72 = a6;
      v71 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)a6 + 4);
    }
    v25 = (PVOID)v71(*((_QWORD *)v72 + 5), v27);
    if ( !v25 )
    {
      v75 = WdLogNewEntry5_WdError(v74);
      *(_QWORD *)(v75 + 24) = 4023LL;
      goto LABEL_123;
    }
    v117 = 1;
    goto LABEL_119;
  }
LABEL_23:
  if ( !a6 )
    goto LABEL_24;
  v55 = *a6;
  if ( (v55 & 0x40) == 0 )
    goto LABEL_24;
  if ( !*((_QWORD *)a6 + 41) && !*((_QWORD *)a6 + 53) )
  {
    v75 = WdLogNewEntry5_WdError(v55);
    *(_QWORD *)(v75 + 24) = 4045LL;
LABEL_123:
    WdLogEvent5_WdError(v75);
    LODWORD(v9) = -1073741823;
LABEL_124:
    v52 = a1;
    goto LABEL_125;
  }
  v82 = a6[104];
  if ( (v82 & 1) != 0 )
  {
    v9 = *((_QWORD *)a6 + 53);
    v26[16] |= 0x10u;
    v120 = v9;
    LODWORD(v9) = ProcessSysMemAttributes<_DXGK_ALLOCATIONINFO>((PVOID)v9);
    if ( (int)v9 < 0 )
      goto LABEL_124;
    v24 = (unsigned int *)v120;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 12LL) |= 0x200u;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 184LL) = v24;
    goto LABEL_24;
  }
  if ( (v82 & 2) == 0 )
  {
    v26[16] |= 0x400000u;
    v25 = (PVOID)*((_QWORD *)a6 + 41);
LABEL_24:
    v30 = v117;
    goto LABEL_25;
  }
  v25 = (PVOID)*((_QWORD *)a6 + 53);
  ObfReferenceObject(v25);
  v30 = 1;
  v117 = 1;
  v83 = ProcessSectionAttributes<_DXGK_ALLOCATIONINFO>(v25);
  v9 = v83;
  if ( v83 < 0 )
  {
    v106 = (_QWORD *)WdLogNewEntry5_WdError(v84);
    v106[5] = 4083LL;
LABEL_188:
    v52 = a1;
    v106[4] = v9;
    v106[3] = a1;
    WdLogEvent5_WdError(v106);
    ObfDereferenceObject(v25);
    v12 = a2;
    v10 = v118;
    goto LABEL_64;
  }
  v26[16] |= 0x400000u;
  v24 = (unsigned int *)v120;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 12LL) |= 0x400u;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 184LL) = v25;
LABEL_25:
  v31 = 96 * v22 + a3;
  if ( (*(_DWORD *)(v31 + 32) & 4) != 0 )
  {
    v26[20] = *(_DWORD *)(v31 + 48);
  }
  else if ( !v26[20] )
  {
    v85 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v85 + 24) = 4113LL;
    WdLogEvent5_WdError(v85);
    v24 = (unsigned int *)v120;
  }
  v32 = *(_QWORD *)(v21 + 40);
  if ( !v32 || (v26[16] & 0x100000) == 0 )
  {
    v123 = 0LL;
    goto LABEL_30;
  }
  v86 = *(_QWORD *)(v32 + 56);
  if ( *(_QWORD *)(v86 + 176) )
    goto LABEL_157;
  v12 = a2;
  v87 = 0LL;
  v88 = 0LL;
  if ( (*(_DWORD *)(a2 + 56) & 0x10000) != 0 && v24 )
  {
    v87 = v24;
    v88 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL);
  }
  v89 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 544LL)
                                                                                        + 8LL)
                                                                            + 1208LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 552LL),
          v86 + 176,
          v87,
          v88);
  v9 = v89;
  if ( v89 >= 0 )
  {
LABEL_157:
    v123 = *(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 176LL;
LABEL_30:
    v33 = (DXGDEVICE *)a1;
    v9 = *(_QWORD *)(a1 + 608);
    v125 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 544LL);
    v126 = *(_QWORD *)(v21 + 48);
    v34 = DXGPROCESS::GetCurrent(v32, (__int64)v24);
    if ( v34 )
    {
      if ( *((struct _KTHREAD **)v34 + 19) == KeGetCurrentThread() )
      {
        v34 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v34 + 144, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v57 = *((_DWORD *)v34 + 40);
            if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v35, &EventBlockThread, v36, v57);
          }
          ExAcquirePushLockExclusiveEx((char *)v34 + 144, 0LL);
        }
        *((_QWORD *)v34 + 19) = KeGetCurrentThread();
      }
      v33 = (DXGDEVICE *)a1;
    }
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, PVOID, __int64, __int64 *))(*(_QWORD *)(v125 + 8) + 120LL))(
                    v9,
                    v26,
                    v126,
                    v25,
                    v123,
                    &v127);
    if ( v34 )
    {
      *((_QWORD *)v34 + 19) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v34 + 144, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v117 )
      ObfDereferenceObject(v25);
    if ( (int)v9 < 0 )
      goto LABEL_124;
    v38 = v127;
    if ( !v127 )
    {
      v91 = WdLogNewEntry5_WdAssertion(0LL);
      *(_QWORD *)(v91 + 24) = 4176LL;
      WdLogEvent5_WdAssertion(v91);
      v38 = v127;
    }
    v24 = a6;
    *(_QWORD *)(*(_QWORD *)(v21 + 48) + 8LL) = v38;
    if ( !a6 )
      goto LABEL_43;
    v56 = a6[4];
    if ( v56 == 4 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v96 = (_DWORD *)*((_QWORD *)a6 + 3);
        v97 = *(_QWORD *)(v21 + 48);
        LODWORD(v116) = v96[5];
        LODWORD(v115) = v96[4];
        LODWORD(v114) = v96[3];
        LODWORD(v113) = v96[2];
        LODWORD(v112) = v96[1];
        LODWORD(HandleInformation) = *v96;
        v98 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationGdiSurface;
        LODWORD(Object) = *a6;
LABEL_168:
        McTemplateK0pqqqqqqq((__int64)v96, v98, v37, v97, Object, HandleInformation, v112, v113, v114, v115, v116);
      }
    }
    else
    {
      v92 = v56 - 1;
      if ( v92 )
      {
        v93 = v92 - 1;
        if ( v93 )
        {
          if ( v93 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v94 = (_DWORD *)*((_QWORD *)a6 + 3);
            LODWORD(v113) = v94[2];
            LODWORD(v112) = v94[1];
            LODWORD(HandleInformation) = *v94;
            LODWORD(Object) = *a6;
            McTemplateK0pqqqq(
              (__int64)v94,
              &EventCddStandardAllocationStagingSurface,
              v37,
              *(_QWORD *)(v21 + 48),
              Object,
              HandleInformation,
              v112,
              v113);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v95 = (_DWORD *)*((_QWORD *)a6 + 3);
          LODWORD(v114) = v95[3];
          LODWORD(v113) = v95[2];
          LODWORD(v112) = v95[1];
          LODWORD(HandleInformation) = *v95;
          LODWORD(Object) = *a6;
          McTemplateK0pqqqqq(
            (__int64)v95,
            (__int64)a6,
            v37,
            *(_QWORD *)(v21 + 48),
            Object,
            HandleInformation,
            v112,
            v113,
            v114);
        }
        goto LABEL_43;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v96 = (_DWORD *)*((_QWORD *)a6 + 3);
        v97 = *(_QWORD *)(v21 + 48);
        LODWORD(v116) = v96[5];
        LODWORD(v115) = v96[4];
        LODWORD(v114) = v96[3];
        LODWORD(v113) = v96[2];
        LODWORD(v112) = v96[1];
        LODWORD(HandleInformation) = *v96;
        v98 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationSharedPrimarySurface;
        LODWORD(Object) = *a6;
        goto LABEL_168;
      }
    }
LABEL_43:
    v9 = v120;
    goto LABEL_44;
  }
  v90 = WdLogNewEntry5_WdError(v32);
  *(_QWORD *)(v90 + 24) = v9;
  WdLogEvent5_WdError(v90);
  if ( v30 )
    ObfDereferenceObject(v25);
LABEL_156:
  v10 = v118;
LABEL_63:
  v52 = a1;
LABEL_64:
  if ( (int)v9 >= 0 )
    goto LABEL_65;
LABEL_125:
  v76 = 0;
  if ( *(_DWORD *)(a2 + 44) )
  {
    v77 = a5;
    do
    {
      if ( (*(_DWORD *)(v77 + 72) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(v52 + 16) + 544LL),
          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v52 + 16) + 552LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v77 + 24));
        *(_DWORD *)(v77 + 72) &= ~0x800u;
      }
      v78 = *(_QWORD *)(v77 + 48);
      v79 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v78 + 8);
      if ( v79 && !a7 && (!*(_DWORD *)(v52 + 328) && (*(_DWORD *)(v78 + 4) & 1) != 0 || (*(_DWORD *)(v78 + 4) & 2) != 0) )
      {
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(v52 + 16) + 544LL),
          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v52 + 16) + 552LL),
          v79);
        *(_DWORD *)(*(_QWORD *)(v77 + 48) + 4LL) |= 0x10u;
      }
      v80 = *(_QWORD *)(v77 + 24);
      if ( v80 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v52 + 16) + 544LL)
                                                                            + 8LL)
                                                                + 160LL))(
          *(_QWORD *)(*(_QWORD *)(v52 + 16) + 552LL),
          v80,
          0LL,
          0LL);
        *(_QWORD *)(v77 + 24) = 0LL;
      }
      v81 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v77 + 48) + 8LL);
      if ( v81 && !a7 )
      {
        VIDMM_EXPORT::VidMmDestroyAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(v52 + 16) + 544LL),
          *(struct VIDMM_DEVICE **)(v52 + 608),
          0LL,
          v81);
        *(_QWORD *)(*(_QWORD *)(v77 + 48) + 8LL) = 0LL;
      }
      v77 = *(_QWORD *)(v77 + 64);
      ++v76;
    }
    while ( v76 < *(_DWORD *)(a2 + 44) );
  }
  return (unsigned int)v9;
}
