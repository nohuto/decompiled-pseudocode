/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00BB7D4
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00C116C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00069D0 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000D924 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     Template_pqqqqqqqqppp @ 0x1C0025E5C (Template_pqqqqqqqqppp.c)
 *     ?VmBusSendCreateContextVirtual@DXGADAPTER@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C002F494 (-VmBusSendCreateContextVirtual@DXGADAPTER@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIEN.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C00BC024 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C00CD580 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD *Src, size_t Size)
{
  UINT v3; // r15d
  DXGADAPTER *v6; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rbx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 AllocationListSize; // rdx
  __m128i v24; // xmm2
  __int64 Value; // r9
  __int64 v26; // rax
  __int64 v27; // r10
  __int64 v28; // r10
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 *v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // r8
  __int64 v37; // r9
  SIZE_T *v38; // r14
  ULONG64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  SIZE_T *v42; // rbx
  NTSTATUS v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r12
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  SIZE_T *v52; // rbx
  NTSTATUS v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r14
  struct DXGADAPTER *v59; // rbx
  struct DXGGLOBAL *v60; // rax
  __int64 v61; // r14
  unsigned __int64 v62; // rbx
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 result; // rax
  NTSTATUS VirtualMemory; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned __int64 *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  SIZE_T v79; // rcx
  __int64 v80; // rax
  UINT v81; // ebx
  UINT HostProcess; // eax
  int ContextVirtual; // eax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // r14
  unsigned __int64 v89; // rbx
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // rax
  __int128 v97; // xmm0
  __m128i v98; // xmm2
  __m128i v99; // xmm2
  _QWORD *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  NTSTATUS v105; // eax
  struct DXGADAPTER *v106; // rbx
  struct DXGGLOBAL *Global; // rax
  PVOID PoolWithTag; // rax
  __int64 v109; // rax
  __int64 v110; // rcx
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  PVOID v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  __int64 AllocationType; // [rsp+20h] [rbp-138h]
  __int64 AllocationTypea; // [rsp+20h] [rbp-138h]
  __int64 Protect; // [rsp+28h] [rbp-130h]
  __int64 v122; // [rsp+30h] [rbp-128h]
  size_t Sizea; // [rsp+38h] [rbp-120h]
  size_t Sizeb; // [rsp+38h] [rbp-120h]
  void *Srca; // [rsp+40h] [rbp-118h]
  __int128 v126; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v127; // [rsp+90h] [rbp-C8h]
  int v128; // [rsp+A0h] [rbp-B8h]
  DXGCONTEXT *v129; // [rsp+A8h] [rbp-B0h]
  unsigned __int64 v130; // [rsp+B0h] [rbp-A8h]
  _QWORD *v131; // [rsp+B8h] [rbp-A0h]
  _DXGKARG_CREATECONTEXT v132; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v133; // [rsp+110h] [rbp-48h]
  __int64 v134; // [rsp+118h] [rbp-40h]
  __int64 v135; // [rsp+120h] [rbp-38h]

  v3 = Size;
  v128 = Size;
  v131 = Src;
  v129 = this;
  v6 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  DXGADAPTER::NotifyContextCreation(v6, this, 1, *((_DWORD *)this + 84));
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v126, Current, v8, v9);
  v10 = HMGRTABLE::AllocHandle(
          (unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 192LL),
          (__int64)this,
          7LL,
          0LL,
          0);
  v14 = v10;
  *((_DWORD *)this + 6) = v10;
  if ( !v10 )
  {
    v77 = WdLogNewEntry5_WdWarning(0LL, v11, v12, v13);
    *(_QWORD *)(v77 + 24) = this;
    *(_QWORD *)(v77 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v77);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v126);
    return 3221225495LL;
  }
  v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v16 = (v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v16 < *(_DWORD *)(v15 + 208) )
  {
    v17 = *(_QWORD *)(v15 + 192);
    v18 = *(_DWORD *)(v17 + 16 * v16 + 8);
    if ( v14 >> 30 == ((v18 >> 4) & 3) && (v18 & 0x1000) == 0 && (v18 & 0xF) != 0 )
      *(_DWORD *)(v17 + 16LL * ((v14 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v126);
  if ( *((_BYTE *)v6 + 186) )
  {
    *((_BYTE *)this + 369) = 1;
    v80 = *((_QWORD *)this + 2);
    v81 = *(_DWORD *)(v80 + 336);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v80 + 40));
    LODWORD(Sizea) = v3;
    ContextVirtual = DXGADAPTER::VmBusSendCreateContextVirtual(
                       v6,
                       HostProcess,
                       v81,
                       *((_DWORD *)this + 84),
                       *((_DWORD *)this + 85),
                       *(struct _D3DDDI_CREATECONTEXTFLAGS *)((char *)this + 348),
                       (enum _D3DKMT_CLIENTHINT)*((_DWORD *)this + 36),
                       Sizea,
                       Src);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( ContextVirtual )
    {
      v88 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v89 = *((unsigned int *)this + 6);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v88 + 168));
      v91 = ((unsigned int)v89 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v91 < *(_DWORD *)(v88 + 208) )
      {
        v92 = *(_QWORD *)(v88 + 192);
        v93 = *(unsigned int *)(v92 + 16 * v91 + 8);
        v94 = ((unsigned int)v89 >> 26) & 0x30;
        if ( (((unsigned int)v89 >> 26) & 0x30) == (*(_BYTE *)(v92 + 16 * v91 + 8) & 0x30) && (v93 & 0xF) != 0 )
        {
          v95 = 2 * ((v89 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v92 + 8 * v95 + 8) & 0x1000) == 0 )
          {
            v96 = WdLogNewEntry5_WdAssertion(v94, v93, v92, v90);
            *(_QWORD *)(v96 + 24) = 190LL;
            WdLogEvent5_WdAssertion(v96);
          }
          *(_DWORD *)(*(_QWORD *)(v88 + 192) + 8 * v95 + 8) &= ~0x1000u;
        }
      }
      *(_QWORD *)(v88 + 176) = 0LL;
      ExReleasePushLockExclusiveEx(v88 + 168, 0LL);
      KeLeaveCriticalRegion();
      if ( bTracingEnabled )
      {
        v126 = *((_OWORD *)this + 12);
        v127 = *((_OWORD *)this + 13);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(Srca) = DWORD2(v126);
          LODWORD(Sizeb) = DWORD1(v126);
          LODWORD(v122) = v126;
          LODWORD(Protect) = *((_DWORD *)this + 85);
          LODWORD(AllocationTypea) = *((_DWORD *)this + 84);
          Template_pqqqqqqqqppp(
            DWORD1(v126),
            &EventCreateContext,
            v126,
            *((_QWORD *)this + 2),
            AllocationTypea,
            Protect,
            v122,
            Sizeb,
            Srca,
            HIDWORD(v126),
            (_DWORD)v127,
            0,
            this,
            *((unsigned int *)this + 6),
            0LL);
        }
      }
      return 0LL;
    }
    v86 = WdLogNewEntry5_WdError(v85, v84);
    *(_QWORD *)(v86 + 24) = 778LL;
LABEL_89:
    WdLogEvent5_WdError(v86);
    return 3221225473LL;
  }
  LODWORD(v19) = 0;
  memset(&v132, 0, sizeof(v132));
  v132.hContext = this;
  v132.NodeOrdinal = *((_DWORD *)this + 84);
  v132.EngineAffinity = *((_DWORD *)this + 85);
  v132.pPrivateDriverData = Src;
  v132.PrivateDriverDataSize = v3;
  v21 = *((_QWORD *)this + 2);
  if ( *(_DWORD *)(v21 + 328) == 2 || *((_DWORD *)this + 36) == 2 )
    v132.Flags.Value |= 2u;
  v132.Flags.Value ^= (v132.Flags.Value ^ (4 * *((unsigned __int8 *)this + 366))) & 4;
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL);
  if ( (*(_DWORD *)(v22 + 1672) & 1) != 0 )
  {
    if ( (*((_DWORD *)this + 87) & 8) != 0 )
      v132.hContext = 0LL;
    else
      LODWORD(v19) = ADAPTER_RENDER::DdiCreateContext(*(ADAPTER_RENDER **)(v21 + 16), *(void **)(v21 + 416), &v132);
    *((_DWORD *)this + 10) |= 1u;
    AllocationListSize = v132.ContextInfo.AllocationListSize;
  }
  else
  {
    v132.hContext = *(HANDLE *)(v21 + 416);
    v97 = *(_OWORD *)(v21 + 424);
    *(_QWORD *)&v127 = *(_QWORD *)(v21 + 440);
    v132.ContextInfo.DmaBufferSize = v97;
    *(_QWORD *)&v127 = *(_QWORD *)(v21 + 440);
    v132.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v21 + 424));
    v98 = *(__m128i *)(v21 + 424);
    *(_QWORD *)&v127 = *(_QWORD *)(v21 + 440);
    v98.m128i_i64[0] = _mm_srli_si128(v98, 8).m128i_u64[0];
    AllocationListSize = HIDWORD(v98.m128i_i64[0]);
    v132.ContextInfo.AllocationListSize = v98.m128i_u32[1];
    v126 = *(_OWORD *)(v21 + 424);
    *(_QWORD *)&v127 = *(_QWORD *)(v21 + 440);
    v132.ContextInfo.PatchLocationListSize = v127;
    v99 = *(__m128i *)(v21 + 424);
    *(_QWORD *)&v127 = *(_QWORD *)(v21 + 440);
    v132.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_srli_si128(v99, 8));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( (int)v19 < 0 )
    return (unsigned int)v19;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 2 || *((_DWORD *)this + 36) == 2)
    && (_DWORD)AllocationListSize != 256 )
  {
    v76 = WdLogNewEntry5_WdWarning(v22, AllocationListSize, v21, v20);
    *(_QWORD *)(v76 + 24) = 256LL;
    *(_QWORD *)(v76 + 32) = v132.ContextInfo.AllocationListSize;
    WdLogEvent5_WdWarning(v76);
    v132.ContextInfo.AllocationListSize = 256;
  }
  *((_QWORD *)this + 23) = v132.hContext;
  *((_OWORD *)this + 12) = *(_OWORD *)&v132.ContextInfo.DmaBufferSize;
  v24 = *(__m128i *)&v132.ContextInfo.PatchLocationListSize;
  *((_OWORD *)this + 13) = *(_OWORD *)&v132.ContextInfo.PatchLocationListSize;
  Value = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v24, 8));
  if ( (Value & 2) != 0 )
  {
    v26 = *((_QWORD *)this + 2);
    *(_BYTE *)(v26 + 1823) = 1;
    *(_BYTE *)(*(_QWORD *)(v26 + 40) + 240LL) = 1;
    Value = v132.ContextInfo.Caps.Value;
  }
  if ( *((_BYTE *)this + 366) )
  {
    v27 = *((_QWORD *)this + 2);
    AllocationListSize = 6LL * *((unsigned int *)this + 86);
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 2192LL)
                    + 48LL * *((unsigned int *)this + 86)
                    + 24);
    if ( v21 )
      LOBYTE(v21) = *(_BYTE *)(74LL * *((unsigned int *)this + 84) + v21 + 73);
    else
      v21 = 0LL;
    v22 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
    v28 = *(_QWORD *)(*(_QWORD *)(v22 + 2192) + 48LL * *((unsigned int *)this + 86) + 24);
    if ( v28 )
    {
      v22 = 74LL * *((unsigned int *)this + 84);
      v29 = *(_BYTE *)(v22 + v28 + 72);
    }
    else
    {
      v29 = 0;
    }
    if ( (Value & 4) != 0 || (_BYTE)v21 && !v29 )
    {
      if ( !(_BYTE)v21 )
      {
        v87 = WdLogNewEntry5_WdWarning(v22, AllocationListSize, v21, Value);
        *(_QWORD *)(v87 + 24) = 893LL;
        WdLogEvent5_WdWarning(v87);
        return 3221225473LL;
      }
      *((_BYTE *)this + 367) = 1;
    }
    else
    {
      *((_BYTE *)this + 368) = 1;
    }
  }
  else if ( !*((_DWORD *)this + 48) )
  {
    v101 = WdLogNewEntry5_WdAssertion(v22, AllocationListSize, v21, Value);
    *(_QWORD *)(v101 + 24) = 904LL;
    WdLogEvent5_WdAssertion(v101);
  }
  if ( !*((_BYTE *)this + 366) )
  {
    if ( !*((_DWORD *)this + 51) )
    {
      v102 = WdLogNewEntry5_WdAssertion(v22, AllocationListSize, v21, Value);
      *(_QWORD *)(v102 + 24) = 905LL;
      WdLogEvent5_WdAssertion(v102);
    }
    if ( !*((_BYTE *)this + 366) && !*((_DWORD *)this + 52) )
    {
      v103 = WdLogNewEntry5_WdAssertion(v22, AllocationListSize, v21, Value);
      *(_QWORD *)(v103 + 24) = 906LL;
      WdLogEvent5_WdAssertion(v103);
    }
  }
  if ( bTracingEnabled )
  {
    v126 = *((_OWORD *)this + 12);
    v127 = *((_OWORD *)this + 13);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(AllocationType) = *((_DWORD *)this + 84);
      Template_pqqqqqqqqppp(
        DWORD1(v126),
        &EventCreateContext,
        v126,
        *((_QWORD *)this + 2),
        AllocationType,
        *((_DWORD *)this + 85),
        (_DWORD)v126,
        DWORD1(v126),
        DWORD2(v126),
        HIDWORD(v126),
        (_DWORD)v127,
        0,
        this,
        *((unsigned int *)this + 6),
        0LL);
    }
  }
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  LODWORD(v135) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 276LL);
  HIDWORD(v133) = *((_DWORD *)this + 84);
  LODWORD(v134) = *((_DWORD *)this + 86);
  v30 = *((unsigned int *)this + 87);
  v31 = (2 * (_DWORD)v30) & 2;
  LODWORD(v133) = (2 * v30) & 2;
  if ( *((_BYTE *)this + 366) )
  {
    LODWORD(v31) = v31 | 0x80;
    LODWORD(v133) = v31;
  }
  v32 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( *(int *)(v32 + 1944) >= 0x2000 || *(_BYTE *)(v32 + 2228) )
  {
    if ( (unsigned int)v30 < 0x10 )
    {
      LODWORD(v133) = ((unsigned __int8)v31 ^ (unsigned __int8)(8 * v30)) & 0x20 ^ v31;
      goto LABEL_34;
    }
    v86 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v86 + 24) = 944LL;
    goto LABEL_89;
  }
LABEL_34:
  v33 = _guard_dispatch_icall_fptr();
  *((_QWORD *)this + 29) = v33;
  if ( !v33 )
    return 3221225495LL;
  if ( *((_BYTE *)this + 366) && *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) != 2 && *((_DWORD *)this + 36) != 2
    || (result = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 51), *((_DWORD *)this + 52)),
        (int)result >= 0) )
  {
    v38 = (SIZE_T *)((char *)this + 48);
    *((_QWORD *)this + 6) = *((unsigned int *)this + 48);
    *((_DWORD *)this + 18) = *((_DWORD *)this + 51);
    *((_DWORD *)this + 26) = *((_DWORD *)this + 52);
    if ( *((_BYTE *)this + 366) )
    {
      if ( *((_QWORD *)this + 37) )
      {
        v104 = WdLogNewEntry5_WdAssertion(v35, v34, v36, v37);
        *(_QWORD *)(v104 + 24) = 986LL;
        WdLogEvent5_WdAssertion(v104);
      }
      v39 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 300LL);
      if ( (v39 & 0x10) == 0 || !Src || v128 != 16 )
        goto LABEL_42;
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
        v34 = (unsigned __int64 *)v131[1];
        v36 = (_QWORD *)*v131;
        v130 = 0LL;
        v39 = MmUserProbeAddress;
        v74 = v34;
        if ( (unsigned __int64)v34 >= MmUserProbeAddress )
          v74 = (unsigned __int64 *)MmUserProbeAddress;
        v130 = *v74;
        if ( !v34 || v130 < 8 || !v36 )
        {
          v75 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v34, v36, v37);
          *(_QWORD *)(v75 + 24) = this;
          *(_QWORD *)(v75 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v75);
          return 3221225485LL;
        }
        if ( (unsigned __int64)v36 >= MmUserProbeAddress )
          v36 = (_QWORD *)MmUserProbeAddress;
        *v36 = *((_QWORD *)this + 7);
        if ( (unsigned __int64)v34 >= MmUserProbeAddress )
          v34 = (unsigned __int64 *)MmUserProbeAddress;
        *v34 = *v38;
        goto LABEL_42;
      }
    }
    else
    {
      v105 = ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)this + 7,
               0LL,
               (PSIZE_T)this + 6,
               0x3000u,
               4u);
      v19 = v105;
      if ( v105 >= 0 )
      {
        v106 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
        Global = DXGGLOBAL::GetGlobal();
        if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
               (struct DXGGLOBAL *)((char *)Global + 1108),
               v106) )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, *v38, 0x4B677844u);
          *((_QWORD *)this + 8) = PoolWithTag;
          if ( !PoolWithTag )
          {
            v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v34, v36, v37);
            v78[3] = this;
            v79 = *v38;
LABEL_83:
            v78[4] = v79;
            v78[5] = -1073741801LL;
LABEL_84:
            WdLogEvent5_WdWarning(v78);
            return 3221225495LL;
          }
        }
LABEL_42:
        v40 = *((unsigned int *)this + 18);
        if ( (_DWORD)v40 )
        {
          v41 = 8 * v40;
          if ( v41 > 0xFFFFFFFF )
          {
            v109 = WdLogNewEntry5_WdWarning(v39, v34, v36, v37);
            *(_QWORD *)(v109 + 24) = this;
            v110 = *((unsigned int *)this + 18);
            goto LABEL_123;
          }
          v42 = (SIZE_T *)((char *)this + 80);
          *((_QWORD *)this + 10) = (unsigned int)v41;
          v43 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PVOID *)this + 11,
                  0LL,
                  (PSIZE_T)this + 10,
                  0x3000u,
                  4u);
          v48 = v43;
          if ( v43 < 0 )
          {
            v111 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
            v111[3] = this;
            v111[4] = *v42;
            v111[5] = v48;
            WdLogEvent5_WdWarning(v111);
            return (unsigned int)v48;
          }
          *((_QWORD *)this + 12) = MmSecureVirtualMemory(*((PVOID *)this + 11), *v42, 4u);
          if ( !*((_QWORD *)this + 12) )
            goto LABEL_125;
        }
        v50 = *((unsigned int *)this + 26);
        if ( !(_DWORD)v50 )
        {
LABEL_51:
          v61 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
          v62 = *((unsigned int *)this + 6);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v61 + 168));
          v64 = ((unsigned int)v62 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v64 < *(_DWORD *)(v61 + 208) )
          {
            v65 = *(_QWORD *)(v61 + 192);
            v66 = *(unsigned int *)(v65 + 16 * v64 + 8);
            v67 = ((unsigned int)v62 >> 26) & 0x30;
            if ( (((unsigned int)v62 >> 26) & 0x30) == (*(_BYTE *)(v65 + 16 * v64 + 8) & 0x30) && (v66 & 0xF) != 0 )
            {
              v68 = 2 * ((v62 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v65 + 8 * v68 + 8) & 0x1000) == 0 )
              {
                v118 = WdLogNewEntry5_WdAssertion(v67, v66, v65, v63);
                *(_QWORD *)(v118 + 24) = 190LL;
                WdLogEvent5_WdAssertion(v118);
              }
              *(_DWORD *)(*(_QWORD *)(v61 + 192) + 8 * v68 + 8) &= ~0x1000u;
            }
          }
          *(_QWORD *)(v61 + 176) = 0LL;
          ExReleasePushLockExclusiveEx(v61 + 168, 0LL);
          KeLeaveCriticalRegion();
          return 0LL;
        }
        v51 = 24 * v50;
        if ( (unsigned __int64)(24 * v50) <= 0xFFFFFFFF )
        {
          v52 = (SIZE_T *)((char *)this + 112);
          *((_QWORD *)this + 14) = (unsigned int)v51;
          v53 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PVOID *)this + 15,
                  0LL,
                  (PSIZE_T)this + 14,
                  0x3000u,
                  4u);
          v58 = v53;
          if ( v53 < 0 )
          {
            v112 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v54, v56, v57);
            v112[3] = this;
            v112[4] = *v52;
            v112[5] = v58;
            WdLogEvent5_WdWarning(v112);
            return (unsigned int)v58;
          }
          *((_QWORD *)this + 17) = MmSecureVirtualMemory(*((PVOID *)this + 15), *v52, 4u);
          if ( *((_QWORD *)this + 17) )
          {
            v59 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
            v60 = DXGGLOBAL::GetGlobal();
            if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                   (struct DXGGLOBAL *)((char *)v60 + 1108),
                   v59) )
            {
              v113 = ExAllocatePoolWithTag(PagedPool, *((_QWORD *)this + 14), 0x4B677844u);
              *((_QWORD *)this + 16) = v113;
              if ( !v113 )
              {
                v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v115, v114, v116, v117);
                v78[3] = this;
                v79 = *((_QWORD *)this + 14);
                goto LABEL_83;
              }
            }
            goto LABEL_51;
          }
LABEL_125:
          v78 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, v34, v36, v37);
          v78[3] = this;
          v78[4] = -1073741801LL;
          goto LABEL_84;
        }
        v109 = WdLogNewEntry5_WdWarning(v51, v34, v36, v37);
        *(_QWORD *)(v109 + 24) = this;
        v110 = *((unsigned int *)this + 26);
LABEL_123:
        *(_QWORD *)(v109 + 32) = v110;
        WdLogEvent5_WdWarning(v109);
        return 3221225621LL;
      }
    }
    v100 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v71, v73, v37);
    v100[3] = this;
    v100[4] = *v38;
    v100[5] = v19;
    WdLogEvent5_WdWarning(v100);
    return (unsigned int)v19;
  }
  return result;
}
