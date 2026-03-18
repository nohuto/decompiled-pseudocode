/*
 * XREFs of ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C0096150
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003628 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00036A4 (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0003834 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00038C8 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0003F38 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqq @ 0x1C0020738 (McTemplateK0pqqqq.c)
 *     McTemplateK0pqqqqq @ 0x1C00241BC (McTemplateK0pqqqqq.c)
 *     McTemplateK0pqqqqqqq @ 0x1C002427C (McTemplateK0pqqqqqqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??$ProcessSectionAttributes@U_DXGK_ALLOCATIONINFO@@@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0182274 (--$ProcessSectionAttributes@U_DXGK_ALLOCATIONINFO@@@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
 *     ??$ProcessSysMemAttributes@U_DXGK_ALLOCATIONINFO@@@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C018234C (--$ProcessSysMemAttributes@U_DXGK_ALLOCATIONINFO@@@@YAJPEAXIPEAU_DXGK_ALLOCATIONINFO@@@Z.c)
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
  __int64 v12; // rsi
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
  PVOID v24; // r12
  _DWORD *v25; // rsi
  unsigned int v26; // ebx
  int v27; // r8d
  __int64 v28; // r15
  int v29; // eax
  char v30; // bl
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // rcx
  __int64 v44; // rax
  struct DXGPROCESS *v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rax
  int v52; // edx
  __int64 v54; // r15
  __int64 v55; // rcx
  unsigned int v56; // ecx
  __int64 v57; // rax
  unsigned int v58; // edx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rcx
  int v62; // r9d
  int v63; // r9d
  unsigned int v64; // ecx
  unsigned int v65; // ecx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // r9
  NTSTATUS v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned int v81; // eax
  __int64 v82; // r9
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rax
  _QWORD *v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r11
  int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  _DWORD *v93; // rcx
  _DWORD *v94; // rcx
  _DWORD *v95; // rcx
  __int64 v96; // r9
  const EVENT_DESCRIPTOR *v97; // rdx
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  unsigned int v101; // ebx
  __int64 v102; // r14
  __int64 v103; // rcx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v104; // r8
  __int64 v105; // rdx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v106; // r9
  __int64 v107; // rax
  __int64 v108; // rax
  PVOID *Object; // [rsp+20h] [rbp-B9h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-B1h]
  __int64 v111; // [rsp+30h] [rbp-A9h]
  __int64 v112; // [rsp+38h] [rbp-A1h]
  __int64 v113; // [rsp+40h] [rbp-99h]
  __int64 v114; // [rsp+48h] [rbp-91h]
  __int64 v115; // [rsp+50h] [rbp-89h]
  char v116; // [rsp+60h] [rbp-79h]
  char v117; // [rsp+61h] [rbp-78h]
  char v118[6]; // [rsp+62h] [rbp-77h] BYREF
  __int64 v119; // [rsp+68h] [rbp-71h]
  int v120; // [rsp+70h] [rbp-69h]
  int v121; // [rsp+74h] [rbp-65h] BYREF
  __int64 v122; // [rsp+78h] [rbp-61h]
  int v123; // [rsp+80h] [rbp-59h]
  __int64 v124; // [rsp+88h] [rbp-51h]
  __int64 v125; // [rsp+90h] [rbp-49h]
  __int64 v126; // [rsp+98h] [rbp-41h] BYREF
  __int64 v127; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v128; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v129; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v130; // [rsp+B8h] [rbp-21h] BYREF
  PVOID v131; // [rsp+C0h] [rbp-19h] BYREF
  char v132[16]; // [rsp+C8h] [rbp-11h] BYREF

  v8 = *(_DWORD *)(a2 + 56);
  LODWORD(v9) = 0;
  v120 = 0;
  v10 = 1;
  v117 = 1;
  v11 = a4;
  v12 = a2;
  if ( (v8 & 0x10000) != 0 && a6 )
  {
    v67 = WdLogNewEntry5_WdError(a1);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v67 + 24) = a1;
    *(_QWORD *)(v67 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v67);
    return (unsigned int)v9;
  }
  v14 = v8;
  v15 = 1;
  v16 = (v8 & 0x4000) != 0;
  if ( (v14 & 0x400) == 0 )
    v15 = v16;
  v17 = *(_QWORD *)(a1 + 16);
  v123 = v15;
  v18 = *(_QWORD *)(v17 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 144)) )
  {
    v68 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v68 + 24) = 3758LL;
    WdLogEvent5_WdAssertion(v68);
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
    v118[0] = v123;
    v25 = (_DWORD *)(v11 + 88LL * (unsigned int)v22);
    v119 = 0LL;
    v26 = (v25[4] + 4095) & 0xFFFFF000;
    if ( (*(_DWORD *)(v23 + 4) & 0x200F) != 0 )
      v118[0] = 1;
    if ( !*(_QWORD *)(v23 + 16) )
    {
      v69 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v69 + 24) = 3786LL;
      WdLogEvent5_WdAssertion(v69);
    }
    v27 = v25[16];
    if ( (v27 & 0x4000) != 0 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2312LL) + 16LL);
      v9 = *(_QWORD *)(*(_QWORD *)(v23 + 2216) + 48LL * ((*(_DWORD *)(v21 + 72) >> 12) & 0x3F) + 32);
      if ( !*(_BYTE *)(a1 + 1688) || !v9 )
      {
        v70 = WdLogNewEntry5_WdError(v23);
        v32 = a1;
        *(_QWORD *)(v70 + 24) = a1;
        *(_QWORD *)(v70 + 32) = v9;
        WdLogEvent5_WdError(v70);
        LODWORD(v9) = -1073741823;
        goto LABEL_168;
      }
    }
    if ( !a7 )
    {
      v28 = a2;
      v116 = 0;
      v29 = *(_DWORD *)(a2 + 56);
      if ( (v29 & 0x10000) != 0 )
      {
        if ( (v29 & 0x20) != 0 )
        {
          v9 = *(_QWORD *)(96 * v22 + a3 + 8);
          v25[16] = v27 | 0x10;
          v119 = v9;
          LODWORD(v9) = ProcessSysMemAttributes<_DXGK_ALLOCATIONINFO>((PVOID)v9);
          if ( (int)v9 < 0 )
            goto LABEL_167;
          v71 = v119;
          v28 = a2;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 12LL) |= 0x200u;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 184LL) = v71;
        }
        else
        {
          v72 = ObReferenceObjectByHandle(*(HANDLE *)(96 * v22 + a3 + 8), 0x20000u, 0LL, 1, &v131, 0LL);
          v24 = v131;
          v9 = v72;
          if ( v72 < 0 )
          {
            v100 = WdLogNewEntry5_WdError(v73);
            *(_QWORD *)(v100 + 24) = *(_QWORD *)(96 * v22 + a3 + 8);
            *(_QWORD *)(v100 + 32) = v9;
            WdLogEvent5_WdError(v100);
            v32 = a1;
            goto LABEL_141;
          }
          v25[16] |= 0x400000u;
          v116 = 1;
          v74 = ProcessSectionAttributes<_DXGK_ALLOCATIONINFO>(v24);
          v9 = v74;
          if ( v74 < 0 )
          {
            v99 = (_QWORD *)WdLogNewEntry5_WdError(v75);
            goto LABEL_161;
          }
          v28 = a2;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 12LL) |= 0x400u;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 184LL) = v24;
        }
      }
      else if ( (v29 & 0x20) != 0 )
      {
        if ( (*((_BYTE *)DXGPROCESS::GetCurrent() + 307) & 8) != 0 )
        {
          v77 = *(_QWORD *)(96 * v22 + a3 + 8);
          v25[16] |= 0x10u;
          v119 = v77;
        }
        else
        {
          if ( *((_QWORD *)v25 + 2) > (unsigned __int64)v26 )
          {
            LODWORD(v9) = -1073741811;
            v107 = WdLogNewEntry5_WdError(v76);
            *(_QWORD *)(v107 + 24) = *(_QWORD *)(88LL * (unsigned int)v22 + a4 + 16);
            *(_QWORD *)(v107 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v107);
            goto LABEL_167;
          }
          *((_QWORD *)v25 + 2) = v26;
          v119 = (*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v26);
          if ( !v119 )
          {
            v80 = WdLogNewEntry5_WdError(v78);
            *(_QWORD *)(v80 + 24) = 3915LL;
            goto LABEL_166;
          }
          *(_QWORD *)(96 * v22 + a3 + 8) = v119;
        }
      }
      else if ( (v27 & 0x10) != 0 )
      {
        v119 = *(_QWORD *)(96 * v22 + a3 + 8);
      }
      else if ( (v27 & 0x400000) != 0 )
      {
        if ( *(_DWORD *)(a2 + 44) != 1 || (v27 & 0x2000000) == 0 || !a6 || !*((_QWORD *)a6 + 4) )
        {
          v79 = WdLogNewEntry5_WdAssertion(v23);
          *(_QWORD *)(v79 + 24) = 3934LL;
          WdLogEvent5_WdAssertion(v79);
        }
        v24 = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD))a6 + 4))(*((_QWORD *)a6 + 5), v26);
        if ( !v24 )
        {
          v80 = WdLogNewEntry5_WdError(v66);
          *(_QWORD *)(v80 + 24) = 3940LL;
LABEL_166:
          WdLogEvent5_WdError(v80);
          LODWORD(v9) = -1073741823;
LABEL_167:
          v32 = a1;
LABEL_168:
          v12 = a2;
          goto LABEL_169;
        }
        v116 = 1;
      }
      if ( a6 )
      {
        v55 = *a6;
        if ( (v55 & 0x40) != 0 )
        {
          if ( !*((_QWORD *)a6 + 41) && !*((_QWORD *)a6 + 53) )
          {
            v80 = WdLogNewEntry5_WdError(v55);
            *(_QWORD *)(v80 + 24) = 3962LL;
            goto LABEL_166;
          }
          v81 = a6[104];
          if ( (v81 & 1) != 0 )
          {
            v9 = *((_QWORD *)a6 + 53);
            v25[16] |= 0x10u;
            v119 = v9;
            LODWORD(v9) = ProcessSysMemAttributes<_DXGK_ALLOCATIONINFO>((PVOID)v9);
            if ( (int)v9 < 0 )
              goto LABEL_167;
            v82 = v119;
            v28 = a2;
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 12LL) |= 0x200u;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 184LL) = v82;
          }
          else
          {
            if ( (v81 & 2) != 0 )
            {
              v24 = (PVOID)*((_QWORD *)a6 + 53);
              ObfReferenceObject(v24);
              v30 = 1;
              v116 = 1;
              v83 = ProcessSectionAttributes<_DXGK_ALLOCATIONINFO>(v24);
              v9 = v83;
              if ( v83 < 0 )
              {
                v99 = (_QWORD *)WdLogNewEntry5_WdError(v84);
                v99[5] = 4000LL;
LABEL_161:
                v32 = a1;
                v99[4] = v9;
                v99[3] = a1;
                WdLogEvent5_WdError(v99);
                goto LABEL_162;
              }
              v25[16] |= 0x400000u;
              v28 = a2;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 12LL) |= 0x400u;
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 184LL) = v24;
LABEL_25:
              v31 = 96 * v22;
              if ( (*(_DWORD *)(96 * v22 + a3 + 32) & 4) != 0 )
              {
                v25[20] = *(_DWORD *)(v31 + a3 + 48);
              }
              else if ( !v25[20] )
              {
                v85 = WdLogNewEntry5_WdError(v31);
                *(_QWORD *)(v85 + 24) = 4030LL;
                WdLogEvent5_WdError(v85);
              }
              v32 = a1;
              if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 16) + 16LL)) >= 2000
                && (v35 = *(_QWORD *)(v21 + 40)) != 0
                && (v25[16] & 0x100000) != 0 )
              {
                v86 = (_QWORD *)(*(_QWORD *)(v35 + 56) + 176LL);
                if ( !*v86 )
                {
                  v87 = 0LL;
                  v88 = 0LL;
                  if ( (*(_DWORD *)(v28 + 56) & 0x10000) != 0 && v33 )
                  {
                    v87 = v33;
                    v88 = *(_QWORD *)(*(_QWORD *)(v28 + 32) + 8LL);
                  }
                  v89 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v34 + 528)
                                                                                                  + 8LL)
                                                                                      + 1192LL))(
                          *(_QWORD *)(v34 + 536),
                          v86,
                          v87,
                          v88);
                  v9 = v89;
                  if ( v89 < 0 )
                  {
                    v91 = WdLogNewEntry5_WdError(v90);
                    *(_QWORD *)(v91 + 24) = v9;
                    WdLogEvent5_WdError(v91);
                    if ( !v30 )
                    {
LABEL_141:
                      v10 = v117;
                      goto LABEL_142;
                    }
LABEL_162:
                    ObfDereferenceObject(v24);
                    goto LABEL_141;
                  }
                }
                v122 = *(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL) + 176LL;
              }
              else
              {
                v122 = 0LL;
              }
              v9 = *(_QWORD *)(a1 + 592);
              v124 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 528LL);
              v125 = *(_QWORD *)(v21 + 48);
              Current = DXGPROCESS::GetCurrent();
              if ( Current )
              {
                if ( *((struct _KTHREAD **)Current + 18) == KeGetCurrentThread() )
                {
                  Current = 0LL;
                }
                else
                {
                  KeEnterCriticalRegion();
                  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 136, 0LL) )
                  {
                    if ( bTracingEnabled )
                    {
                      v62 = *((_DWORD *)Current + 38);
                      if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                        McTemplateK0q(v37, &EventBlockThread, v38, v62);
                    }
                    ExAcquirePushLockExclusiveEx((char *)Current + 136, 0LL);
                  }
                  *((_QWORD *)Current + 18) = KeGetCurrentThread();
                }
                v32 = a1;
              }
              LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, PVOID, __int64, __int64 *))(*(_QWORD *)(v124 + 8) + 120LL))(
                              v9,
                              v25,
                              v125,
                              v24,
                              v122,
                              &v126);
              if ( Current )
              {
                *((_QWORD *)Current + 18) = 0LL;
                ExReleasePushLockExclusiveEx((char *)Current + 136, 0LL);
                KeLeaveCriticalRegion();
              }
              if ( v116 )
                ObfDereferenceObject(v24);
              if ( (int)v9 < 0 )
                goto LABEL_168;
              v40 = v126;
              if ( !v126 )
              {
                v92 = WdLogNewEntry5_WdAssertion(0LL);
                *(_QWORD *)(v92 + 24) = 4094LL;
                WdLogEvent5_WdAssertion(v92);
                v40 = v126;
              }
              *(_QWORD *)(*(_QWORD *)(v21 + 48) + 8LL) = v40;
              if ( !a6 )
                goto LABEL_44;
              v56 = a6[4];
              if ( v56 == 4 )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  v95 = (_DWORD *)*((_QWORD *)a6 + 3);
                  v96 = *(_QWORD *)(v21 + 48);
                  LODWORD(v115) = v95[5];
                  LODWORD(v114) = v95[4];
                  LODWORD(v113) = v95[3];
                  LODWORD(v112) = v95[2];
                  LODWORD(v111) = v95[1];
                  LODWORD(HandleInformation) = *v95;
                  v97 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationGdiSurface;
                  LODWORD(Object) = *a6;
LABEL_148:
                  McTemplateK0pqqqqqqq(
                    (__int64)v95,
                    v97,
                    v39,
                    v96,
                    Object,
                    HandleInformation,
                    v111,
                    v112,
                    v113,
                    v114,
                    v115);
                }
              }
              else
              {
                v64 = v56 - 1;
                if ( v64 )
                {
                  v65 = v64 - 1;
                  if ( v65 )
                  {
                    if ( v65 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    {
                      v93 = (_DWORD *)*((_QWORD *)a6 + 3);
                      LODWORD(v112) = v93[2];
                      LODWORD(v111) = v93[1];
                      LODWORD(HandleInformation) = *v93;
                      LODWORD(Object) = *a6;
                      McTemplateK0pqqqq(
                        (__int64)v93,
                        &EventCddStandardAllocationStagingSurface,
                        v39,
                        *(_QWORD *)(v21 + 48),
                        Object,
                        HandleInformation,
                        v111,
                        v112);
                    }
                  }
                  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    v94 = (_DWORD *)*((_QWORD *)a6 + 3);
                    LODWORD(v113) = v94[3];
                    LODWORD(v112) = v94[2];
                    LODWORD(v111) = v94[1];
                    LODWORD(HandleInformation) = *v94;
                    LODWORD(Object) = *a6;
                    McTemplateK0pqqqqq(
                      (__int64)v94,
                      (__int64)a6,
                      v39,
                      *(_QWORD *)(v21 + 48),
                      Object,
                      HandleInformation,
                      v111,
                      v112,
                      v113);
                  }
                  goto LABEL_44;
                }
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  v95 = (_DWORD *)*((_QWORD *)a6 + 3);
                  v96 = *(_QWORD *)(v21 + 48);
                  LODWORD(v115) = v95[5];
                  LODWORD(v114) = v95[4];
                  LODWORD(v113) = v95[3];
                  LODWORD(v112) = v95[2];
                  LODWORD(v111) = v95[1];
                  LODWORD(HandleInformation) = *v95;
                  v97 = (const EVENT_DESCRIPTOR *)&EventCddStandardAllocationSharedPrimarySurface;
                  LODWORD(Object) = *a6;
                  goto LABEL_148;
                }
              }
LABEL_44:
              v9 = v119;
              goto LABEL_45;
            }
            v25[16] |= 0x400000u;
            v24 = (PVOID)*((_QWORD *)a6 + 41);
          }
        }
      }
      v30 = v116;
      goto LABEL_25;
    }
    v54 = *(_QWORD *)(*(_QWORD *)(v21 + 40) + 56LL);
    if ( v54 )
      v9 = *(_QWORD *)(v54 + 184);
    else
      v9 = 0LL;
    v32 = a1;
    if ( (*(_DWORD *)(a2 + 56) & 0x80u) != 0 )
      v120 = 1;
LABEL_45:
    v41 = *(_QWORD *)(v32 + 16);
    v42 = *(_QWORD *)(v32 + 592);
    v121 = 0;
    v43 = *(_QWORD *)(v41 + 536);
    v125 = *(_QWORD *)(v41 + 528);
    LODWORD(v119) = v25[13];
    v44 = *(_QWORD *)(v21 + 48);
    v122 = v43;
    v124 = *(_QWORD *)(v44 + 8);
    v45 = DXGPROCESS::GetCurrent();
    if ( v45 )
    {
      if ( *((struct _KTHREAD **)v45 + 18) == KeGetCurrentThread() )
      {
        v45 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v45 + 136, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v63 = *((_DWORD *)v45 + 38);
            if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v46, &EventBlockThread, v47, v63);
          }
          ExAcquirePushLockExclusiveEx((char *)v45 + 136, 0LL);
        }
        *((_QWORD *)v45 + 18) = KeGetCurrentThread();
      }
      v32 = a1;
    }
    LODWORD(HandleInformation) = v120;
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, POBJECT_HANDLE_INFORMATION, __int64, __int64 *, int *, char *))(*(_QWORD *)(v125 + 8) + 136LL))(
                    v122,
                    v42,
                    v124,
                    (unsigned int)v119,
                    v9,
                    HandleInformation,
                    v21,
                    &v127,
                    &v121,
                    v118);
    if ( v45 )
    {
      *((_QWORD *)v45 + 18) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v45 + 136, 0LL);
      KeLeaveCriticalRegion();
    }
    v10 = v118[0] && v117;
    v117 = v10;
    *(_DWORD *)(v21 + 72) ^= (*(_DWORD *)(v21 + 72) ^ (v121 << 12)) & 0x3F000;
    if ( (int)v9 < 0 )
      goto LABEL_168;
    v49 = v127;
    if ( !v127 )
    {
      v98 = WdLogNewEntry5_WdAssertion(v48);
      *(_QWORD *)(v98 + 24) = 4198LL;
      WdLogEvent5_WdAssertion(v98);
      v49 = v127;
    }
    *(_QWORD *)(v21 + 24) = v49;
    v50 = v25[16];
    v51 = *(_QWORD *)(v21 + 48);
    if ( (v50 & 0x100) != 0 )
    {
      *(_DWORD *)(v51 + 4) |= 8u;
    }
    else
    {
      v52 = *(_DWORD *)(v51 + 4);
      if ( (v52 & 0x20) == 0 && (v50 & 0x20200) == 0 && (v52 & 0x4000) == 0 )
        goto LABEL_61;
    }
    if ( (v25[16] & 0x200) != 0 )
      *(_DWORD *)(*(_QWORD *)(v21 + 48) + 4LL) |= 0x20u;
    if ( (v25[16] & 0x20000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v21 + 48) + 4LL) |= 0x4000u;
    LODWORD(v9) = VIDMM_EXPORT::VidMmPinAllocation(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(v32 + 16) + 528LL),
                    *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v32 + 16) + 536LL),
                    *(struct _VIDMM_MULTI_ALLOC **)(v21 + 24),
                    0LL,
                    0LL);
    if ( (int)v9 < 0 )
      goto LABEL_168;
    *(_DWORD *)(v21 + 72) |= 0x800u;
LABEL_61:
    if ( !DXGDEVICE::UmdManagesResidency((DXGDEVICE *)v32) || !a6 || a6[4] != 2 )
      goto LABEL_63;
    v57 = *(_QWORD *)(v32 + 16);
    v58 = *(_DWORD *)(v21 + 72);
    v128 = 0LL;
    v130 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v57 + 528) + 8LL) + 960LL))(
      *(_QWORD *)(v32 + 592),
      (v58 >> 12) & 0x3F,
      &v128,
      &v130);
    v59 = *(_QWORD *)(v32 + 16);
    v129 = 0LL;
    v60 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v59 + 528) + 8LL)
                                                                                               + 768LL))(
            *(_QWORD *)(v59 + 536),
            v128,
            v21 + 24,
            1LL,
            3,
            &v129,
            v132);
    v9 = v60;
    if ( v60 < 0 )
      break;
    if ( v60 == 259 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 16)
                                                                                            + 528LL)
                                                                                + 8LL)
                                                                    + 968LL))(
        *(_QWORD *)(*(_QWORD *)(v32 + 16) + 536LL),
        &v130,
        &v129,
        1LL);
      LODWORD(v9) = 0;
    }
LABEL_63:
    v12 = a2;
    v22 = (unsigned int)(v22 + 1);
    v21 = *(_QWORD *)(v21 + 64);
    if ( (unsigned int)v22 >= *(_DWORD *)(a2 + 44) )
      goto LABEL_64;
    v11 = a4;
  }
  v108 = WdLogNewEntry5_WdError(v61);
  *(_QWORD *)(v108 + 24) = v9;
  WdLogEvent5_WdError(v108);
LABEL_142:
  v12 = a2;
LABEL_64:
  if ( (int)v9 >= 0 )
    goto LABEL_65;
LABEL_169:
  v101 = 0;
  if ( *(_DWORD *)(v12 + 44) )
  {
    v102 = a5;
    do
    {
      if ( (*(_DWORD *)(v102 + 72) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(v32 + 16) + 528LL),
          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v32 + 16) + 536LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v102 + 24));
        *(_DWORD *)(v102 + 72) &= ~0x800u;
      }
      v103 = *(_QWORD *)(v102 + 48);
      v104 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v103 + 8);
      if ( v104
        && !a7
        && (!*(_DWORD *)(v32 + 328) && (*(_DWORD *)(v103 + 4) & 1) != 0 || (*(_DWORD *)(v103 + 4) & 2) != 0) )
      {
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(v32 + 16) + 528LL),
          *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v32 + 16) + 536LL),
          v104);
        *(_DWORD *)(*(_QWORD *)(v102 + 48) + 4LL) |= 0x10u;
      }
      v105 = *(_QWORD *)(v102 + 24);
      if ( v105 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 528LL)
                                                                            + 8LL)
                                                                + 160LL))(
          *(_QWORD *)(*(_QWORD *)(v32 + 16) + 536LL),
          v105,
          0LL,
          0LL);
        *(_QWORD *)(v102 + 24) = 0LL;
      }
      v106 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v102 + 48) + 8LL);
      if ( v106 && !a7 )
      {
        VIDMM_EXPORT::VidMmDestroyAllocation(
          *(VIDMM_EXPORT **)(*(_QWORD *)(v32 + 16) + 528LL),
          *(struct VIDMM_DEVICE **)(v32 + 592),
          0LL,
          v106);
        *(_QWORD *)(*(_QWORD *)(v102 + 48) + 8LL) = 0LL;
      }
      v102 = *(_QWORD *)(v102 + 64);
      ++v101;
    }
    while ( v101 < *(_DWORD *)(v12 + 44) );
  }
  return (unsigned int)v9;
}
