/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00FDD94
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E84EC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0007014 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00162D4 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0ppp @ 0x1C002CACC (McTemplateK0ppp.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C002CB50 (McTemplateK0pqqqqqqqqppp.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00975C4 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C009A53C (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C00A32A8 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C01820D0 (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD **Src, UINT a3)
{
  _BYTE *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _KTHREAD **Current; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned int v17; // edx
  __int64 v18; // r14
  __int64 v19; // rbx
  __int64 v20; // r10
  UINT Value; // r8d
  char v22; // r15
  UINT v23; // r8d
  unsigned int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rdx
  ADAPTER_RENDER *v30; // r10
  __int64 v31; // rcx
  int v32; // eax
  unsigned __int64 AllocationListSize; // r8
  __m128i v34; // xmm2
  char v35; // r10
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  char v39; // r9
  char v40; // al
  __int64 v41; // rcx
  int v42; // edx
  int v43; // edx
  __int64 v44; // rcx
  unsigned int v45; // r9d
  unsigned __int64 *v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // r8
  SIZE_T *v49; // r14
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  SIZE_T *v52; // r14
  NTSTATUS v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r15
  HANDLE v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  SIZE_T *v62; // rbx
  NTSTATUS v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r14
  struct DXGADAPTER *v68; // rbx
  struct DXGGLOBAL *v69; // rax
  __int64 v70; // r14
  unsigned __int64 v71; // rbx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 result; // rax
  NTSTATUS VirtualMemory; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned __int64 *v81; // rax
  __int64 v82; // rax
  char v83; // r8
  char v84; // r8
  NTSTATUS v85; // eax
  __int64 v86; // rcx
  struct DXGADAPTER *v87; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v89; // rax
  _QWORD *v90; // rax
  SIZE_T v91; // rcx
  unsigned int v92; // ebx
  unsigned int HostProcess; // eax
  unsigned int ContextVirtual; // eax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // r14
  unsigned __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r10
  __int64 v107; // r11
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rax
  __int128 v111; // xmm0
  __m128i v112; // xmm2
  _QWORD *v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r14
  __int64 v121; // rax
  PVOID PoolWithTag; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rcx
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  PVOID v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // rax
  ULONG AllocationType[2]; // [rsp+20h] [rbp-1A8h]
  ULONG AllocationTypea[2]; // [rsp+20h] [rbp-1A8h]
  ULONG Protect[2]; // [rsp+28h] [rbp-1A0h]
  __int64 v136; // [rsp+30h] [rbp-198h]
  size_t Size; // [rsp+38h] [rbp-190h]
  size_t Sizea; // [rsp+38h] [rbp-190h]
  void *Srca; // [rsp+40h] [rbp-188h]
  _BYTE v141[16]; // [rsp+90h] [rbp-138h] BYREF
  __int64 v142; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v143; // [rsp+A8h] [rbp-120h]
  _BYTE v144[48]; // [rsp+B8h] [rbp-110h] BYREF
  _DXGKARG_CREATECONTEXT v145; // [rsp+F0h] [rbp-D8h] BYREF
  __int128 v146; // [rsp+140h] [rbp-88h]
  __int128 v147; // [rsp+150h] [rbp-78h]
  __int64 v148; // [rsp+160h] [rbp-68h]
  __int64 v149; // [rsp+168h] [rbp-60h]
  __int64 v150; // [rsp+170h] [rbp-58h]
  int v151; // [rsp+178h] [rbp-50h]

  v6 = *(_BYTE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v6, this, 1, *((_DWORD *)this + 88));
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8, v7);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v141, Current);
  v10 = HMGRTABLE::AllocHandle(
          (unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 232LL),
          (__int64)this,
          7,
          0,
          0);
  v13 = v10;
  *((_DWORD *)this + 6) = v10;
  if ( !v10 )
  {
    v89 = WdLogNewEntry5_WdWarning(0LL, v11, v12);
    *(_QWORD *)(v89 + 24) = this;
    *(_QWORD *)(v89 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v89);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
    return 3221225495LL;
  }
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v15 = (v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *(_DWORD *)(v14 + 248) )
  {
    v16 = *(_QWORD *)(v14 + 232);
    v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
    if ( v13 >> 30 == ((v17 >> 5) & 3) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
      *(_DWORD *)(v16 + 16LL * ((v13 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v141);
  v18 = *((_QWORD *)this + 2);
  if ( v6[185] )
  {
    *((_BYTE *)this + 401) = 1;
    v92 = *(_DWORD *)(v18 + 336);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v18 + 40));
    LODWORD(Size) = a3;
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v6 + 4080),
                       HostProcess,
                       v92,
                       *((_DWORD *)this + 88),
                       *((_DWORD *)this + 89),
                       *(struct _D3DDDI_CREATECONTEXTFLAGS *)((char *)this + 364),
                       *((enum _D3DKMT_CLIENTHINT *)this + 36),
                       Size,
                       Src);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( ContextVirtual )
    {
      v98 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v99 = *((unsigned int *)this + 6);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v98 + 208));
      v100 = ((unsigned int)v99 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v100 < *(_DWORD *)(v98 + 248) )
      {
        v101 = *(_QWORD *)(v98 + 232);
        v102 = ((unsigned int)v99 >> 25) & 0x60;
        if ( (((unsigned int)v99 >> 25) & 0x60) == (*(_BYTE *)(v101 + 16 * v100 + 8) & 0x60)
          && (*(_DWORD *)(v101 + 16 * v100 + 8) & 0x1F) != 0 )
        {
          v103 = 2 * ((v99 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v101 + 8 * v103 + 8) & 0x2000) == 0 )
          {
            v104 = WdLogNewEntry5_WdAssertion(v102);
            *(_QWORD *)(v104 + 24) = 215LL;
            WdLogEvent5_WdAssertion(v104);
            v101 = *(_QWORD *)(v98 + 232);
          }
          *(_DWORD *)(v101 + 8 * v103 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v98 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v98 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( bTracingEnabled )
      {
        v146 = *((_OWORD *)this + 12);
        v147 = *((_OWORD *)this + 13);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(Srca) = DWORD2(v146);
          LODWORD(Sizea) = DWORD1(v146);
          LODWORD(v136) = v146;
          Protect[0] = *((_DWORD *)this + 89);
          AllocationTypea[0] = *((_DWORD *)this + 88);
          McTemplateK0pqqqqqqqqppp(
            DWORD1(v146),
            &EventCreateContext,
            v146,
            *((_QWORD *)this + 2),
            *(_QWORD *)AllocationTypea,
            *(_QWORD *)Protect,
            v136,
            Sizea,
            Srca,
            HIDWORD(v146),
            (_DWORD)v147,
            0,
            this,
            *((unsigned int *)this + 6),
            0LL);
        }
      }
      return 0LL;
    }
    v96 = WdLogNewEntry5_WdError(v95);
    *(_QWORD *)(v96 + 24) = 888LL;
    goto LABEL_107;
  }
  LODWORD(v19) = 0;
  memset(&v145, 0, sizeof(v145));
  v145.hContext = this;
  v20 = *((unsigned int *)this + 88);
  v145.NodeOrdinal = *((_DWORD *)this + 88);
  v145.EngineAffinity = *((_DWORD *)this + 89);
  v145.pPrivateDriverData = Src;
  v145.PrivateDriverDataSize = a3;
  if ( *(_DWORD *)(v18 + 328) == 2 || *((_DWORD *)this + 36) == 2 )
    Value = v145.Flags.Value | 2;
  else
    Value = v145.Flags.Value;
  v22 = *((_BYTE *)this + 398);
  v23 = ((unsigned __int8)Value ^ (unsigned __int8)(4 * v22)) & 4 ^ Value;
  v145.Flags.Value = v23;
  v24 = *((_DWORD *)this + 91);
  v25 = *(_QWORD *)(v18 + 16);
  if ( (v24 & 0x10) != 0 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v25 + 16)) >= 2400 )
    {
      v108 = *(_QWORD *)(v107 + 2360) + 352LL * *((unsigned int *)this + 90);
      v109 = *(_QWORD *)(v108 + 24);
      if ( v109 && (v108 = 74 * v106, (*(_BYTE *)(74 * v106 + v109 + 68) & 1) != 0) )
      {
        if ( v22 )
        {
          if ( v24 < 0x20 )
          {
LABEL_132:
            v145.Flags.Value = v23 | 0x10;
            goto LABEL_15;
          }
          v96 = WdLogNewEntry5_WdError(v108);
          *(_QWORD *)(v96 + 24) = 957LL;
        }
        else
        {
          v96 = WdLogNewEntry5_WdError(v108);
          *(_QWORD *)(v96 + 24) = 951LL;
        }
      }
      else
      {
        v96 = WdLogNewEntry5_WdError(v108);
        *(_QWORD *)(v96 + 24) = 945LL;
      }
    }
    else
    {
      v96 = WdLogNewEntry5_WdError(v105);
      *(_QWORD *)(v96 + 24) = 939LL;
    }
LABEL_107:
    WdLogEvent5_WdError(v96);
    return 3221225473LL;
  }
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 2360LL) + 352LL * *((unsigned int *)this + 90);
  v27 = *(_QWORD *)(v26 + 24);
  if ( v27 )
  {
    v26 = 74 * v20;
    v28 = *(_BYTE *)(74 * v20 + v27 + 68) & 1;
  }
  else
  {
    v28 = 0;
  }
  if ( v28 )
  {
    if ( (v24 & 8) != 0 )
    {
      v24 |= 0x10u;
      *((_DWORD *)this + 91) = v24;
      goto LABEL_132;
    }
    v96 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v96 + 24) = 975LL;
    goto LABEL_107;
  }
LABEL_15:
  v29 = *((_QWORD *)this + 2);
  v30 = *(ADAPTER_RENDER **)(v29 + 16);
  v31 = *(unsigned int *)(*((_QWORD *)v30 + 2) + 1832LL);
  if ( (v31 & 1) != 0 )
  {
    if ( (v24 & 8) != 0 )
    {
      v145.hContext = 0LL;
    }
    else
    {
      v32 = ADAPTER_RENDER::DdiCreateContext(v30, *(void **)(v29 + 432), &v145);
      v19 = v32;
      if ( v32 < 0 )
      {
        v110 = WdLogNewEntry5_WdError(v31);
        *(_QWORD *)(v110 + 24) = v19;
        WdLogEvent5_WdError(v110);
      }
    }
    *((_DWORD *)this + 10) |= 1u;
    AllocationListSize = v145.ContextInfo.AllocationListSize;
  }
  else
  {
    v145.hContext = *(HANDLE *)(v29 + 432);
    v111 = *(_OWORD *)(v29 + 440);
    v142 = *(_QWORD *)(v29 + 456);
    v145.ContextInfo.DmaBufferSize = v111;
    v142 = *(_QWORD *)(v29 + 456);
    v145.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v29 + 440));
    v112 = *(__m128i *)(v29 + 440);
    v142 = *(_QWORD *)(v29 + 456);
    v112.m128i_i64[0] = _mm_srli_si128(v112, 8).m128i_u64[0];
    AllocationListSize = HIDWORD(v112.m128i_i64[0]);
    v145.ContextInfo.AllocationListSize = v112.m128i_u32[1];
    v142 = *(_QWORD *)(v29 + 456);
    v145.ContextInfo.PatchLocationListSize = v142;
    v145.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(v29 + 440), 8));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( (int)v19 < 0 )
    return (unsigned int)v19;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 2 || *((_DWORD *)this + 36) == 2)
    && (_DWORD)AllocationListSize != 256 )
  {
    v114 = WdLogNewEntry5_WdWarning(v31, v29, AllocationListSize);
    *(_QWORD *)(v114 + 24) = 256LL;
    *(_QWORD *)(v114 + 32) = v145.ContextInfo.AllocationListSize;
    WdLogEvent5_WdWarning(v114);
    v145.ContextInfo.AllocationListSize = 256;
  }
  *((_QWORD *)this + 23) = v145.hContext;
  *((_OWORD *)this + 12) = *(_OWORD *)&v145.ContextInfo.DmaBufferSize;
  v34 = *(__m128i *)&v145.ContextInfo.PatchLocationListSize;
  *((_OWORD *)this + 13) = *(_OWORD *)&v145.ContextInfo.PatchLocationListSize;
  v35 = _mm_cvtsi128_si32(_mm_srli_si128(v34, 8));
  if ( (v35 & 2) != 0 )
  {
    v36 = *((_QWORD *)this + 2);
    *(_BYTE *)(v36 + 1711) = 1;
    *(_BYTE *)(*(_QWORD *)(v36 + 40) + 289LL) = 1;
    v35 = (char)v145.ContextInfo.Caps.0;
  }
  LOBYTE(AllocationListSize) = *((_BYTE *)this + 398);
  if ( (_BYTE)AllocationListSize )
  {
    v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2360LL)
        + 352LL * *((unsigned int *)this + 90);
    v38 = *(_QWORD *)(v37 + 24);
    if ( v38 )
    {
      v37 = 74LL * *((unsigned int *)this + 88);
      v39 = *(_BYTE *)(v37 + v38 + 73);
    }
    else
    {
      v39 = 0;
    }
    if ( v38 )
    {
      v37 = 74LL * *((unsigned int *)this + 88);
      v40 = *(_BYTE *)(v37 + v38 + 72);
    }
    else
    {
      v40 = 0;
    }
    if ( (v35 & 4) != 0 || v39 && !v40 )
    {
      if ( !v39 )
      {
        v97 = WdLogNewEntry5_WdWarning(v37, v38, AllocationListSize);
        *(_QWORD *)(v97 + 24) = 1052LL;
        WdLogEvent5_WdWarning(v97);
        return 3221225473LL;
      }
      *((_BYTE *)this + 399) = 1;
    }
    else
    {
      *((_BYTE *)this + 400) = 1;
    }
  }
  else
  {
    v83 = 0;
    if ( !*((_DWORD *)this + 48) )
    {
      v115 = WdLogNewEntry5_WdAssertion(v31);
      *(_QWORD *)(v115 + 24) = 1063LL;
      WdLogEvent5_WdAssertion(v115);
      v83 = *((_BYTE *)this + 398);
    }
    if ( !v83 )
    {
      v84 = 0;
      if ( !*((_DWORD *)this + 51) )
      {
        v116 = WdLogNewEntry5_WdAssertion(v31);
        *(_QWORD *)(v116 + 24) = 1064LL;
        WdLogEvent5_WdAssertion(v116);
        v84 = *((_BYTE *)this + 398);
      }
      if ( !v84 && !*((_DWORD *)this + 52) )
      {
        v117 = WdLogNewEntry5_WdAssertion(v31);
        *(_QWORD *)(v117 + 24) = 1065LL;
        WdLogEvent5_WdAssertion(v117);
      }
    }
  }
  if ( bTracingEnabled )
  {
    v146 = *((_OWORD *)this + 12);
    v147 = *((_OWORD *)this + 13);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      AllocationType[0] = *((_DWORD *)this + 88);
      McTemplateK0pqqqqqqqqppp(
        DWORD1(v146),
        &EventCreateContext,
        v146,
        *((_QWORD *)this + 2),
        *(_QWORD *)AllocationType,
        *((_DWORD *)this + 89),
        (_DWORD)v146,
        DWORD1(v146),
        DWORD2(v146),
        HIDWORD(v146),
        (_DWORD)v147,
        0,
        this,
        *((unsigned int *)this + 6),
        0LL);
    }
  }
  v41 = *((_QWORD *)this + 2);
  if ( (*((_DWORD *)this + 91) & 0x10) == 0 )
  {
    v148 = 0LL;
    v149 = 0LL;
    v150 = 0LL;
    v151 = 0;
    HIDWORD(v150) = *(_DWORD *)(*(_QWORD *)(v41 + 40) + 328LL);
    HIDWORD(v148) = *((_DWORD *)this + 88);
    LODWORD(v149) = *((_DWORD *)this + 90);
    v42 = (2 * (unsigned __int8)*((_DWORD *)this + 91)) & 2;
    LODWORD(v148) = v42;
    if ( *((_BYTE *)this + 398) )
      LODWORD(v148) = v42 | 0x80;
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
LABEL_42:
      v47 = _guard_dispatch_icall_fptr();
      *((_QWORD *)this + 29) = v47;
      if ( v47 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0ppp(v47, &EventAssociateContext, (__int64)v48, this, v47, *((_QWORD *)this + 23));
LABEL_45:
        if ( !*((_BYTE *)this + 398) || *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 2 || *((_DWORD *)this + 36) == 2 )
        {
          result = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 51), *((_DWORD *)this + 52));
          if ( (int)result < 0 )
            return result;
        }
        v49 = (SIZE_T *)((char *)this + 48);
        *((_QWORD *)this + 6) = *((unsigned int *)this + 48);
        *((_DWORD *)this + 18) = *((_DWORD *)this + 51);
        *((_DWORD *)this + 26) = *((_DWORD *)this + 52);
        if ( *((_BYTE *)this + 398) )
        {
          if ( *((_QWORD *)this + 39) )
          {
            v121 = WdLogNewEntry5_WdAssertion(v47);
            *(_QWORD *)(v121 + 24) = 1188LL;
            WdLogEvent5_WdAssertion(v121);
          }
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 300LL) & 0x10) == 0
            || !Src
            || a3 != 16 )
          {
            goto LABEL_52;
          }
          VirtualMemory = ZwAllocateVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            (PVOID *)this + 7,
                            0LL,
                            (PSIZE_T)this + 6,
                            0x3000u,
                            4u);
          v19 = VirtualMemory;
          if ( VirtualMemory >= 0 )
          {
            v46 = Src[1];
            v48 = *Src;
            v143 = 0LL;
            v81 = v46;
            if ( (unsigned __int64)v46 >= MmUserProbeAddress )
              v81 = (unsigned __int64 *)MmUserProbeAddress;
            v143 = *v81;
            if ( !v46 || v143 < 8 || !v48 )
            {
              v82 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v46, v48);
              *(_QWORD *)(v82 + 24) = this;
              *(_QWORD *)(v82 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v82);
              return 3221225485LL;
            }
            if ( (unsigned __int64)v48 >= MmUserProbeAddress )
              v48 = (_QWORD *)MmUserProbeAddress;
            *v48 = *((_QWORD *)this + 7);
            if ( (unsigned __int64)v46 >= MmUserProbeAddress )
              v46 = (unsigned __int64 *)MmUserProbeAddress;
            *v46 = *v49;
            goto LABEL_52;
          }
        }
        else
        {
          v85 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PVOID *)this + 7,
                  0LL,
                  (PSIZE_T)this + 6,
                  0x3000u,
                  4u);
          v19 = v85;
          if ( v85 >= 0 )
          {
            v86 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            v87 = *(struct DXGADAPTER **)(v86 + 16);
            Global = DXGGLOBAL::GetGlobal(v86);
            if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                   (struct DXGGLOBAL *)((char *)Global + 1188),
                   v87) )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, *v49, 0x4B677844u);
              *((_QWORD *)this + 8) = PoolWithTag;
              if ( !PoolWithTag )
              {
                v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v123, v46, v48);
                v90[3] = this;
                v91 = *v49;
LABEL_101:
                v90[4] = v91;
                v90[5] = -1073741801LL;
LABEL_102:
                WdLogEvent5_WdWarning(v90);
                return 3221225495LL;
              }
            }
LABEL_52:
            v50 = *((unsigned int *)this + 18);
            if ( (_DWORD)v50 )
            {
              v51 = 8 * v50;
              if ( v51 > 0xFFFFFFFF )
              {
                v124 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v46, v48);
                *(_QWORD *)(v124 + 24) = this;
                v125 = *((unsigned int *)this + 18);
                goto LABEL_150;
              }
              v52 = (SIZE_T *)((char *)this + 80);
              *((_QWORD *)this + 10) = (unsigned int)v51;
              v53 = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)this + 11,
                      0LL,
                      (PSIZE_T)this + 10,
                      0x3000u,
                      4u);
              v57 = v53;
              if ( v53 < 0 )
              {
                v126 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56);
                v126[3] = this;
                v126[4] = *v52;
                v126[5] = v57;
                WdLogEvent5_WdWarning(v126);
                return (unsigned int)v57;
              }
              v58 = MmSecureVirtualMemory(*((PVOID *)this + 11), *v52, 4u);
              *((_QWORD *)this + 12) = v58;
              if ( !v58 )
                goto LABEL_152;
            }
            v60 = *((unsigned int *)this + 26);
            if ( !(_DWORD)v60 )
            {
LABEL_61:
              v70 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
              v71 = *((unsigned int *)this + 6);
              DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v70 + 208));
              v72 = ((unsigned int)v71 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v72 < *(_DWORD *)(v70 + 248) )
              {
                v73 = *(_QWORD *)(v70 + 232);
                v74 = ((unsigned int)v71 >> 25) & 0x60;
                if ( (((unsigned int)v71 >> 25) & 0x60) == (*(_BYTE *)(v73 + 16 * v72 + 8) & 0x60)
                  && (*(_DWORD *)(v73 + 16 * v72 + 8) & 0x1F) != 0 )
                {
                  v75 = 2 * ((v71 >> 6) & 0xFFFFFF);
                  if ( (*(_DWORD *)(v73 + 8 * v75 + 8) & 0x2000) == 0 )
                  {
                    v132 = WdLogNewEntry5_WdAssertion(v74);
                    *(_QWORD *)(v132 + 24) = 215LL;
                    WdLogEvent5_WdAssertion(v132);
                    v73 = *(_QWORD *)(v70 + 232);
                  }
                  *(_DWORD *)(v73 + 8 * v75 + 8) &= ~0x2000u;
                }
              }
              *(_QWORD *)(v70 + 216) = 0LL;
              ExReleasePushLockExclusiveEx(v70 + 208, 0LL);
              KeLeaveCriticalRegion();
              return 0LL;
            }
            v61 = 24 * v60;
            if ( (unsigned __int64)(24 * v60) <= 0xFFFFFFFF )
            {
              v62 = (SIZE_T *)((char *)this + 112);
              *((_QWORD *)this + 14) = (unsigned int)v61;
              v63 = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)this + 15,
                      0LL,
                      (PSIZE_T)this + 14,
                      0x3000u,
                      4u);
              v67 = v63;
              if ( v63 < 0 )
              {
                v127 = (_QWORD *)WdLogNewEntry5_WdWarning(v65, v64, v66);
                v127[3] = this;
                v127[4] = *v62;
                v127[5] = v67;
                WdLogEvent5_WdWarning(v127);
                return (unsigned int)v67;
              }
              *((_QWORD *)this + 17) = MmSecureVirtualMemory(*((PVOID *)this + 15), *v62, 4u);
              if ( *((_QWORD *)this + 17) )
              {
                v68 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
                v69 = DXGGLOBAL::GetGlobal(v59);
                if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                       (struct DXGGLOBAL *)((char *)v69 + 1188),
                       v68) )
                {
                  v128 = ExAllocatePoolWithTag(PagedPool, *((_QWORD *)this + 14), 0x4B677844u);
                  *((_QWORD *)this + 16) = v128;
                  if ( !v128 )
                  {
                    v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v130, v129, v131);
                    v90[3] = this;
                    v91 = *((_QWORD *)this + 14);
                    goto LABEL_101;
                  }
                }
                goto LABEL_61;
              }
LABEL_152:
              v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v46, v48);
              v90[3] = this;
              v90[4] = -1073741801LL;
              goto LABEL_102;
            }
            v124 = WdLogNewEntry5_WdWarning(v61, v46, v48);
            *(_QWORD *)(v124 + 24) = this;
            v125 = *((unsigned int *)this + 26);
LABEL_150:
            *(_QWORD *)(v124 + 32) = v125;
            WdLogEvent5_WdWarning(v124);
            return 3221225621LL;
          }
        }
        v113 = (_QWORD *)WdLogNewEntry5_WdWarning(v79, v78, v80);
        v113[3] = this;
        v113[4] = *v49;
        v113[5] = v19;
        WdLogEvent5_WdWarning(v113);
        return (unsigned int)v19;
      }
      return 3221225495LL;
    }
    if ( v45 < 0x20 )
    {
      LODWORD(v148) = ((unsigned __int8)v43 ^ (unsigned __int8)(8 * v45)) & 0x20 ^ v43;
      goto LABEL_42;
    }
    v96 = WdLogNewEntry5_WdError(v44);
    *(_QWORD *)(v96 + 24) = 1143LL;
    goto LABEL_107;
  }
  v146 = 0uLL;
  *(_QWORD *)&v147 = 0LL;
  DWORD2(v147) = 0;
  DWORD1(v147) = *(_DWORD *)(*(_QWORD *)(v41 + 40) + 328LL);
  DWORD1(v146) = *((_DWORD *)this + 88);
  DWORD2(v146) = *((_DWORD *)this + 90);
  LODWORD(v146) = 2 * (*((_DWORD *)this + 91) & 1 | (4 * (*((_DWORD *)this + 91) & 4 | 0x110)));
  v120 = _guard_dispatch_icall_fptr();
  *((_QWORD *)this + 32) = v120;
  if ( !v120 )
    return 3221225495LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppp(v118, &EventAssociateContext, v119, this, v120, *((_QWORD *)this + 23));
  memset(v144, 0, sizeof(v144));
  result = _guard_dispatch_icall_fptr();
  if ( (int)result >= 0 )
    goto LABEL_45;
  return result;
}
