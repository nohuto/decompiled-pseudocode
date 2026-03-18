/*
 * XREFs of ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C2AB0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C000529C (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000DD94 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000DF04 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000DF98 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0020AEC (-VidMmCloseAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAPEAU_VIDMM.c)
 *     ?VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0020B7C (-VidMmDestroyAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_.c)
 *     Template_pqqqqq @ 0x1C0025A74 (Template_pqqqqq.c)
 *     Template_pqqqqqqq @ 0x1C0025B38 (Template_pqqqqqqq.c)
 *     Template_pdqqq @ 0x1C0042BC8 (Template_pdqqq.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::CreateVidMmAllocations<_DXGK_ALLOCATIONINFO>(
        DXGDEVICE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6,
        char a7,
        __int64 a8)
{
  int v8; // eax
  __int64 v9; // rdi
  __int16 v10; // r10
  bool v11; // r15
  BOOL v12; // eax
  int v13; // r13d
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdi
  _DWORD *v27; // r15
  unsigned int v28; // ebx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // r12
  __int64 v36; // r13
  struct DXGPROCESS *Current; // rbx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  PVOID v41; // r13
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // r12
  __int64 v49; // r13
  struct DXGPROCESS *v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // rax
  _DWORD *v59; // rdx
  int v60; // ecx
  int v61; // edx
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // edx
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r15
  unsigned int *v73; // r12
  __int64 v74; // rcx
  unsigned int *v75; // r12
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // r9d
  __int64 v81; // rax
  _DWORD *v82; // rcx
  _DWORD *v83; // rcx
  _DWORD *v84; // rcx
  _DWORD *v85; // rcx
  int v86; // r9d
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v89; // ebx
  __int64 v90; // rsi
  __int64 v91; // rcx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v92; // r8
  struct _VIDMM_MULTI_ALLOC *v93; // r8
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v94; // r9
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v100[2]; // [rsp+20h] [rbp-E8h]
  __int64 v101; // [rsp+28h] [rbp-E0h]
  __int64 v102; // [rsp+30h] [rbp-D8h]
  __int64 v103; // [rsp+38h] [rbp-D0h]
  __int64 v104; // [rsp+40h] [rbp-C8h]
  __int64 v105; // [rsp+48h] [rbp-C0h]
  __int64 v106; // [rsp+50h] [rbp-B8h]
  _DWORD *v107; // [rsp+60h] [rbp-A8h]
  int v108; // [rsp+68h] [rbp-A0h]
  int v109; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v110; // [rsp+70h] [rbp-98h]
  PVOID Object; // [rsp+78h] [rbp-90h]
  int v112; // [rsp+80h] [rbp-88h]
  __int64 v113; // [rsp+88h] [rbp-80h]
  __int64 v114; // [rsp+90h] [rbp-78h] BYREF
  __int64 v115; // [rsp+98h] [rbp-70h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v117; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v118; // [rsp+B0h] [rbp-58h] BYREF
  char v119[80]; // [rsp+B8h] [rbp-50h] BYREF
  char v120; // [rsp+110h] [rbp+8h] BYREF
  char v121; // [rsp+118h] [rbp+10h]
  __int64 v122; // [rsp+120h] [rbp+18h]
  __int64 v123; // [rsp+128h] [rbp+20h]

  v123 = a4;
  v122 = a3;
  v8 = *(_DWORD *)(a2 + 56);
  LODWORD(v9) = 0;
  v10 = v8;
  v108 = 0;
  v11 = 1;
  v121 = 1;
  v12 = (v8 & 0x4000) != 0;
  v13 = 1;
  if ( (v10 & 0x400) == 0 )
    v13 = v12;
  v15 = a4;
  v16 = *((_QWORD *)this + 2);
  v112 = v13;
  v18 = *(_QWORD *)(v16 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v18 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 144)) )
  {
    v70 = WdLogNewEntry5_WdAssertion(v20, v19, a3, a4);
    *(_QWORD *)(v70 + 24) = 3481LL;
    WdLogEvent5_WdAssertion(v70);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13));
  if ( a8 )
  {
    v21 = *(_QWORD *)(a8 + 24);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v21 + 160) )
      ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v21 + 144));
  }
  v22 = a5;
  v23 = 0LL;
  v110 = 0;
  if ( !*(_DWORD *)(a2 + 44) )
  {
LABEL_57:
    *(_DWORD *)(a2 + 56) = *(_DWORD *)(a2 + 56) & 0xFFFFBFFF | (v11 << 14);
    return (unsigned int)v9;
  }
  while ( 1 )
  {
    v24 = *(_QWORD *)(v22 + 48);
    v25 = 0LL;
    v26 = (unsigned int)v23;
    v120 = v13;
    v27 = (_DWORD *)(v15 + 88LL * (unsigned int)v23);
    v113 = 0LL;
    Object = 0LL;
    v107 = v27;
    v28 = (v27[4] + 4095) & 0xFFFFF000;
    if ( (*(_DWORD *)(v24 + 4) & 0x200F) != 0 )
      v120 = 1;
    if ( !*(_QWORD *)(v24 + 16) )
    {
      v71 = WdLogNewEntry5_WdAssertion(v24, 0LL, a3, a4);
      *(_QWORD *)(v71 + 24) = 3509LL;
      WdLogEvent5_WdAssertion(v71);
    }
    v29 = (unsigned int)v27[16];
    if ( (v29 & 0x4000) != 0 )
    {
      v25 = 6LL * ((*(_DWORD *)(v22 + 72) >> 12) & 0x3F);
      v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2288LL) + 16LL);
      v72 = *(_QWORD *)(*(_QWORD *)(v24 + 2192) + 48LL * ((*(_DWORD *)(v22 + 72) >> 12) & 0x3F) + 32);
      if ( !*((_BYTE *)this + 1816) || !v72 )
      {
        v88 = WdLogNewEntry5_WdError(v24, v25);
        *(_QWORD *)(v88 + 24) = this;
        *(_QWORD *)(v88 + 32) = v72;
        WdLogEvent5_WdError(v88);
        LODWORD(v9) = -1073741823;
        goto LABEL_121;
      }
      v27 = v107;
    }
    v30 = *(_DWORD *)(a2 + 56);
    if ( a7 )
    {
      if ( (v30 & 0x80u) != 0 )
        v108 = 1;
      goto LABEL_38;
    }
    LODWORD(a8) = 0;
    if ( (v30 & 0x20) != 0 )
    {
      if ( *((_QWORD *)v27 + 2) > (unsigned __int64)v28 )
      {
        LODWORD(v9) = -1073741811;
        v96 = WdLogNewEntry5_WdError(v24, v25);
        *(_QWORD *)(v96 + 24) = *(_QWORD *)(88LL * (unsigned int)v23 + v123 + 16);
        *(_QWORD *)(v96 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v96);
        goto LABEL_121;
      }
      v73 = a6;
      *((_QWORD *)v27 + 2) = v28;
      v113 = (*((__int64 (__fastcall **)(_QWORD, _QWORD))v73 + 4))(*((_QWORD *)v73 + 5), v28);
      if ( !v113 )
      {
        v95 = WdLogNewEntry5_WdError(v74, 0LL);
        *(_QWORD *)(v95 + 24) = 3564LL;
        WdLogEvent5_WdError(v95);
        LODWORD(v9) = -1073741823;
        goto LABEL_121;
      }
      *(_QWORD *)(96 * v26 + v122 + 8) = v113;
LABEL_21:
      v31 = v122;
      goto LABEL_22;
    }
    if ( (v29 & 0x10) == 0 )
    {
      if ( (v29 & 0x400000) != 0 )
      {
        v75 = a6;
        if ( *(_DWORD *)(a2 + 44) != 1 || (v29 & 0x2000000) == 0 || !a6 || !*((_QWORD *)a6 + 4) )
        {
          v76 = WdLogNewEntry5_WdAssertion(v24, v25, v29, a4);
          *(_QWORD *)(v76 + 24) = 3584LL;
          WdLogEvent5_WdAssertion(v76);
        }
        Object = (PVOID)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v75 + 4))(*((_QWORD *)v75 + 5), v28);
        if ( !Object )
        {
          v97 = WdLogNewEntry5_WdError(v78, v77);
          *(_QWORD *)(v97 + 24) = 3590LL;
          WdLogEvent5_WdError(v97);
          LODWORD(v9) = -1073741823;
          goto LABEL_121;
        }
        LODWORD(a8) = 1;
      }
      goto LABEL_21;
    }
    v31 = v122;
    v113 = *(_QWORD *)(96 * v23 + v122 + 8);
LABEL_22:
    v32 = a6;
    if ( a6 )
    {
      v63 = *a6;
      if ( (v63 & 0x40) != 0 )
      {
        if ( !*((_QWORD *)a6 + 41) )
        {
          v98 = WdLogNewEntry5_WdError(v63, v31);
          *(_QWORD *)(v98 + 24) = 3609LL;
          WdLogEvent5_WdError(v98);
          LODWORD(v9) = -1073741823;
          goto LABEL_121;
        }
        v27[16] |= 0x400000u;
        Object = (PVOID)*((_QWORD *)v32 + 41);
      }
    }
    v33 = 96 * v26;
    if ( (*(_DWORD *)(96 * v26 + v31 + 32) & 4) != 0 )
    {
      v27[20] = *(_DWORD *)(v33 + v31 + 48);
    }
    else if ( !v27[20] )
    {
      v79 = WdLogNewEntry5_WdError(v33, v31);
      *(_QWORD *)(v79 + 24) = 3627LL;
      WdLogEvent5_WdError(v79);
    }
    v34 = *((_QWORD *)this + 74);
    v35 = *(_QWORD *)(v22 + 48);
    v36 = *(_QWORD *)(*((_QWORD *)this + 2) + 432LL);
    Current = DXGPROCESS::GetCurrent(v33);
    if ( Current )
    {
      if ( *((struct _KTHREAD **)Current + 15) == KeGetCurrentThread() )
      {
        Current = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)Current + 112, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v80 = *((_DWORD *)Current + 32);
            if ( v80 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v38, &EventBlockThread, v39, v80);
          }
          ExAcquirePushLockExclusiveEx((char *)Current + 112, 0LL);
        }
        *((_QWORD *)Current + 15) = KeGetCurrentThread();
      }
    }
    v40 = *(_QWORD *)(v36 + 8);
    v41 = Object;
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, PVOID, __int64 *))(v40 + 120))(
                    v34,
                    v107,
                    v35,
                    Object,
                    &v114);
    if ( Current )
    {
      *((_QWORD *)Current + 15) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 112, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (_DWORD)a8 )
      ObfDereferenceObject(v41);
    if ( (int)v9 < 0 )
      goto LABEL_121;
    v24 = v114;
    if ( !v114 )
    {
      v81 = WdLogNewEntry5_WdAssertion(0LL, v42, v43, v44);
      *(_QWORD *)(v81 + 24) = 3646LL;
      WdLogEvent5_WdAssertion(v81);
      v24 = v114;
    }
    v45 = (__int64)a6;
    *(_QWORD *)(*(_QWORD *)(v22 + 48) + 8LL) = v24;
    if ( v45 )
    {
      v24 = *(unsigned int *)(v45 + 16);
      if ( (_DWORD)v24 == 4 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v85 = *(_DWORD **)(v45 + 24);
          LODWORD(v106) = v85[5];
          LODWORD(v105) = v85[4];
          LODWORD(v104) = v85[3];
          LODWORD(v103) = v85[2];
          LODWORD(v102) = v85[1];
          LODWORD(v101) = *v85;
          v100[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v45;
          Template_pqqqqqqq(
            (__int64)v85,
            &EventCddStandardAllocationGdiSurface,
            v43,
            *(_QWORD *)(v22 + 48),
            *(_QWORD *)&v100[0].0,
            v101,
            v102,
            v103,
            v104,
            v105,
            v106);
        }
      }
      else
      {
        v24 = (unsigned int)(v24 - 1);
        if ( (_DWORD)v24 )
        {
          v24 = (unsigned int)(v24 - 1);
          if ( (_DWORD)v24 )
          {
            if ( (_DWORD)v24 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              v82 = *(_DWORD **)(v45 + 24);
              LODWORD(v103) = v82[2];
              LODWORD(v102) = v82[1];
              LODWORD(v101) = *v82;
              v100[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v45;
              Template_pdqqq(
                (__int64)v82,
                &EventCddStandardAllocationStagingSurface,
                v43,
                *(_QWORD *)(v22 + 48),
                *(_QWORD *)&v100[0].0,
                v101,
                v102,
                v103);
            }
          }
          else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v83 = *(_DWORD **)(v45 + 24);
            LODWORD(v104) = v83[3];
            LODWORD(v103) = v83[2];
            LODWORD(v102) = v83[1];
            LODWORD(v101) = *v83;
            v100[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v45;
            Template_pqqqqq(
              (__int64)v83,
              v45,
              v43,
              *(_QWORD *)(v22 + 48),
              *(_QWORD *)&v100[0].0,
              v101,
              v102,
              v103,
              v104);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v84 = *(_DWORD **)(v45 + 24);
          LODWORD(v106) = v84[5];
          LODWORD(v105) = v84[4];
          LODWORD(v104) = v84[3];
          LODWORD(v103) = v84[2];
          LODWORD(v102) = v84[1];
          LODWORD(v101) = *v84;
          v100[0] = *(struct _D3DDDICB_DESTROYALLOCATION2FLAGS *)v45;
          Template_pqqqqqqq(
            (__int64)v84,
            &EventCddStandardAllocationSharedPrimarySurface,
            v43,
            *(_QWORD *)(v22 + 48),
            *(_QWORD *)&v100[0].0,
            v101,
            v102,
            v103,
            v104,
            v105,
            v106);
        }
      }
    }
LABEL_38:
    v46 = *((_QWORD *)this + 2);
    v47 = *((_QWORD *)this + 74);
    v109 = 0;
    v48 = *(_QWORD *)(v46 + 440);
    v49 = *(_QWORD *)(v46 + 432);
    LODWORD(a8) = v107[13];
    Object = *(PVOID *)(*(_QWORD *)(v22 + 48) + 8LL);
    v50 = DXGPROCESS::GetCurrent(v24);
    if ( v50 )
    {
      if ( *((struct _KTHREAD **)v50 + 15) == KeGetCurrentThread() )
      {
        v50 = 0LL;
      }
      else
      {
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v50 + 112, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v86 = *((_DWORD *)v50 + 32);
            if ( v86 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v51, &EventBlockThread, v52, v86);
          }
          ExAcquirePushLockExclusiveEx((char *)v50 + 112, 0LL);
        }
        *((_QWORD *)v50 + 15) = KeGetCurrentThread();
      }
    }
    LODWORD(v101) = v108;
    LODWORD(v9) = (*(__int64 (__fastcall **)(__int64, __int64, PVOID, _QWORD, __int64, __int64, __int64, __int64 *, int *, char *))(*(_QWORD *)(v49 + 8) + 136LL))(
                    v48,
                    v47,
                    Object,
                    (unsigned int)a8,
                    v113,
                    v101,
                    v22,
                    &v115,
                    &v109,
                    &v120);
    if ( v50 )
    {
      *((_QWORD *)v50 + 15) = 0LL;
      ExReleasePushLockExclusiveEx((char *)v50 + 112, 0LL);
      KeLeaveCriticalRegion();
    }
    v11 = v120 && v121;
    v57 = (*(_DWORD *)(v22 + 72) ^ (v109 << 12)) & 0x3F000;
    v121 = v11;
    *(_DWORD *)(v22 + 72) ^= v57;
    if ( (int)v9 < 0 )
      goto LABEL_121;
    v58 = v115;
    if ( !v115 )
    {
      v87 = WdLogNewEntry5_WdAssertion(v54, v53, v55, v56);
      *(_QWORD *)(v87 + 24) = 3745LL;
      WdLogEvent5_WdAssertion(v87);
      v58 = v115;
    }
    v59 = v107;
    *(_QWORD *)(v22 + 24) = v58;
    v60 = v107[16];
    if ( (v60 & 0x100) == 0 )
    {
      v61 = *(_DWORD *)(*(_QWORD *)(v22 + 48) + 4LL);
      if ( (v61 & 0x20) == 0 && (v60 & 0x20200) == 0 && (v61 & 0x4000) == 0 )
        goto LABEL_53;
      v59 = v107;
    }
    if ( (v107[16] & 0x100) != 0 )
      *(_DWORD *)(*(_QWORD *)(v22 + 48) + 4LL) |= 8u;
    if ( (v59[16] & 0x200) != 0 )
      *(_DWORD *)(*(_QWORD *)(v22 + 48) + 4LL) |= 0x20u;
    if ( (v59[16] & 0x20000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v22 + 48) + 4LL) |= 0x4000u;
    LODWORD(v9) = VIDMM_EXPORT::VidMmPinAllocation(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
                    *(struct _VIDMM_MULTI_ALLOC **)(v22 + 24),
                    0LL,
                    0LL);
    if ( (int)v9 < 0 )
      goto LABEL_121;
    *(_DWORD *)(v22 + 72) |= 0x800u;
LABEL_53:
    if ( !DXGDEVICE::UmdManagesResidency(this) || !a6 || a6[4] != 2 )
      goto LABEL_55;
    v64 = *((_QWORD *)this + 2);
    v65 = *(_DWORD *)(v22 + 72);
    v116 = 0LL;
    v118 = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v64 + 432) + 8LL) + 960LL))(
      *((_QWORD *)this + 74),
      (v65 >> 12) & 0x3F,
      &v116,
      &v118);
    v66 = *((_QWORD *)this + 2);
    v117 = 0LL;
    v67 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v66 + 432) + 8LL)
                                                                                               + 768LL))(
            *(_QWORD *)(v66 + 440),
            v116,
            v22 + 24,
            1LL,
            3,
            &v117,
            v119);
    v9 = v67;
    if ( v67 < 0 )
      break;
    if ( v67 == 259 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 432LL)
                                                                                + 8LL)
                                                                    + 968LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 440LL),
        &v118,
        &v117,
        1LL);
      LODWORD(v9) = 0;
    }
LABEL_55:
    v22 = *(_QWORD *)(v22 + 64);
    v23 = (unsigned int)(v110 + 1);
    v110 = v23;
    if ( (unsigned int)v23 >= *(_DWORD *)(a2 + 44) )
      goto LABEL_56;
    LOBYTE(v13) = v112;
    v15 = v123;
  }
  v99 = WdLogNewEntry5_WdError(v69, v68);
  *(_QWORD *)(v99 + 24) = v9;
  WdLogEvent5_WdError(v99);
LABEL_56:
  if ( (int)v9 >= 0 )
    goto LABEL_57;
LABEL_121:
  v89 = 0;
  if ( *(_DWORD *)(a2 + 44) )
  {
    v90 = a5;
    do
    {
      if ( (*(_DWORD *)(v90 + 72) & 0x800) != 0 )
      {
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v90 + 24));
        *(_DWORD *)(v90 + 72) &= ~0x800u;
      }
      v91 = *(_QWORD *)(v90 + 48);
      v92 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v91 + 8);
      if ( v92 && !a7 && (!*((_DWORD *)this + 82) && (*(_DWORD *)(v91 + 4) & 1) != 0 || (*(_DWORD *)(v91 + 4) & 2) != 0) )
      {
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
          v92);
        *(_DWORD *)(*(_QWORD *)(v90 + 48) + 4LL) |= 0x10u;
      }
      v93 = *(struct _VIDMM_MULTI_ALLOC **)(v90 + 24);
      if ( v93 )
      {
        VIDMM_EXPORT::VidMmCloseAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
          v93,
          0LL,
          0);
        *(_QWORD *)(v90 + 24) = 0LL;
      }
      v94 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(v90 + 48) + 8LL);
      if ( v94 && !a7 )
      {
        VIDMM_EXPORT::VidMmDestroyAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
          *((struct VIDMM_DEVICE **)this + 74),
          0LL,
          v94);
        *(_QWORD *)(*(_QWORD *)(v90 + 48) + 8LL) = 0LL;
      }
      v90 = *(_QWORD *)(v90 + 64);
      ++v89;
    }
    while ( v89 < *(_DWORD *)(a2 + 44) );
  }
  return (unsigned int)v9;
}
