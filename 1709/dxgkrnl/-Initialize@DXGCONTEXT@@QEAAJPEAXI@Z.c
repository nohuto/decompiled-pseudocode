/*
 * XREFs of ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00C08F4
 * Callers:
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C0094048 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00029A4 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008C80 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0pqqqqqqqqppp @ 0x1C00245A4 (McTemplateK0pqqqqqqqqppp.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C007A79C (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z @ 0x1C0080284 (-DdiCreateContext@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_CREATECONTEXT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z @ 0x1C00C1184 (-EnsurePriviledgedDmaPool@DXGCONTEXT@@QEAAJII@Z.c)
 *     ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C01959DC (-VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGCONTEXT::Initialize(DXGCONTEXT *this, _QWORD *Src, size_t Size)
{
  UINT v3; // r15d
  _BYTE *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // r8
  ADAPTER_RENDER *v22; // r9
  __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 AllocationListSize; // rdx
  __m128i v26; // xmm2
  char v27; // r10
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // al
  int v34; // edx
  int v35; // edx
  __int64 v36; // rcx
  unsigned int v37; // r8d
  __int64 v38; // rax
  unsigned __int64 *v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // r8
  SIZE_T *v42; // r14
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  SIZE_T *v45; // r14
  NTSTATUS v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r15
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  SIZE_T *v54; // rbx
  NTSTATUS v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r14
  struct DXGADAPTER *v60; // rbx
  struct DXGGLOBAL *v61; // rax
  __int64 v62; // r14
  unsigned __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rbx
  __int64 result; // rax
  NTSTATUS VirtualMemory; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned __int64 *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  SIZE_T v78; // rcx
  __int64 v79; // rax
  unsigned int v80; // ebx
  unsigned int HostProcess; // eax
  unsigned int ContextVirtual; // eax
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // r14
  unsigned __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rcx
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rax
  __int128 v99; // xmm0
  __m128i v100; // xmm2
  __m128i v101; // xmm2
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  NTSTATUS v108; // eax
  __int64 v109; // rcx
  struct DXGADAPTER *v110; // rbx
  struct DXGGLOBAL *Global; // rax
  PVOID PoolWithTag; // rax
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rcx
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  PVOID v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rax
  __int64 AllocationType; // [rsp+20h] [rbp-158h]
  __int64 AllocationTypea; // [rsp+20h] [rbp-158h]
  __int64 Protect; // [rsp+28h] [rbp-150h]
  __int64 v126; // [rsp+30h] [rbp-148h]
  size_t Sizea; // [rsp+38h] [rbp-140h]
  size_t Sizeb; // [rsp+38h] [rbp-140h]
  void *Srca; // [rsp+40h] [rbp-138h]
  __int128 v130; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v131; // [rsp+90h] [rbp-E8h]
  DXGCONTEXT *v132; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v133; // [rsp+A8h] [rbp-D0h]
  _DXGKARG_CREATECONTEXT v134; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v135; // [rsp+100h] [rbp-78h]
  __int64 v136; // [rsp+108h] [rbp-70h]
  __int64 v137; // [rsp+110h] [rbp-68h]
  __int64 v138; // [rsp+118h] [rbp-60h]
  __int64 v139; // [rsp+120h] [rbp-58h]
  __int64 v140; // [rsp+128h] [rbp-50h]

  v3 = Size;
  v132 = this;
  v6 = *(_BYTE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  DXGADAPTER::NotifyContextCreation((DXGADAPTER *)v6, this, 1, *((_DWORD *)this + 88));
  Current = DXGPROCESS::GetCurrent(v8, v7);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)&v130, Current);
  v10 = HMGRTABLE::AllocHandle(
          (unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 224LL),
          (__int64)this,
          7,
          0,
          0);
  v13 = v10;
  *((_DWORD *)this + 6) = v10;
  if ( !v10 )
  {
    v76 = WdLogNewEntry5_WdWarning(0LL, v11, v12);
    *(_QWORD *)(v76 + 24) = this;
    *(_QWORD *)(v76 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v76);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v130);
    return 3221225495LL;
  }
  v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  v15 = (v10 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *(_DWORD *)(v14 + 240) )
  {
    v16 = *(_QWORD *)(v14 + 224);
    v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
    if ( v13 >> 30 == ((v17 >> 5) & 3) && (v17 & 0x2000) == 0 && (v17 & 0x1F) != 0 )
      *(_DWORD *)(v16 + 16LL * ((v13 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v130);
  if ( v6[185] )
  {
    *((_BYTE *)this + 401) = 1;
    v79 = *((_QWORD *)this + 2);
    v80 = *(_DWORD *)(v79 + 336);
    HostProcess = DXGPROCESS::GetHostProcess(*(DXGPROCESS **)(v79 + 40));
    LODWORD(Sizea) = v3;
    ContextVirtual = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v6 + 3888),
                       HostProcess,
                       v80,
                       *((_DWORD *)this + 88),
                       *((_DWORD *)this + 89),
                       *(struct _D3DDDI_CREATECONTEXTFLAGS *)((char *)this + 364),
                       *((enum _D3DKMT_CLIENTHINT *)this + 36),
                       Sizea,
                       Src);
    *((_DWORD *)this + 7) = ContextVirtual;
    if ( ContextVirtual )
    {
      v86 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
      v87 = *((unsigned int *)this + 6);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v86 + 200));
      v88 = ((unsigned int)v87 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v88 < *(_DWORD *)(v86 + 240) )
      {
        v89 = *(_QWORD *)(v86 + 224);
        v90 = ((unsigned int)v87 >> 25) & 0x60;
        if ( (((unsigned int)v87 >> 25) & 0x60) == (*(_BYTE *)(v89 + 16 * v88 + 8) & 0x60)
          && (*(_DWORD *)(v89 + 16 * v88 + 8) & 0x1F) != 0 )
        {
          v91 = 2 * ((v87 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v89 + 8 * v91 + 8) & 0x2000) == 0 )
          {
            v92 = WdLogNewEntry5_WdAssertion(v90);
            *(_QWORD *)(v92 + 24) = 191LL;
            WdLogEvent5_WdAssertion(v92);
          }
          *(_DWORD *)(*(_QWORD *)(v86 + 224) + 8 * v91 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v86 + 208) = 0LL;
      ExReleasePushLockExclusiveEx(v86 + 200, 0LL);
      KeLeaveCriticalRegion();
      if ( bTracingEnabled )
      {
        v130 = *((_OWORD *)this + 12);
        v131 = *((_OWORD *)this + 13);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          LODWORD(Srca) = DWORD2(v130);
          LODWORD(Sizeb) = DWORD1(v130);
          LODWORD(v126) = v130;
          LODWORD(Protect) = *((_DWORD *)this + 89);
          LODWORD(AllocationTypea) = *((_DWORD *)this + 88);
          McTemplateK0pqqqqqqqqppp(
            DWORD1(v130),
            &EventCreateContext,
            v130,
            *((_QWORD *)this + 2),
            AllocationTypea,
            Protect,
            v126,
            Sizeb,
            Srca,
            HIDWORD(v130),
            (_DWORD)v131,
            0,
            this,
            *((unsigned int *)this + 6),
            0LL);
        }
      }
      return 0LL;
    }
    v84 = WdLogNewEntry5_WdError(v83);
    *(_QWORD *)(v84 + 24) = 790LL;
    goto LABEL_96;
  }
  LODWORD(v18) = 0;
  memset(&v134, 0, sizeof(v134));
  v134.hContext = this;
  v134.NodeOrdinal = *((_DWORD *)this + 88);
  v134.EngineAffinity = *((_DWORD *)this + 89);
  v134.pPrivateDriverData = Src;
  v134.PrivateDriverDataSize = v3;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 2 || *((_DWORD *)this + 36) == 2 )
    v134.Flags.Value |= 2u;
  v134.Flags.Value ^= (v134.Flags.Value ^ (4 * *((unsigned __int8 *)this + 398))) & 4;
  if ( byte_1C0061A58 && *((_BYTE *)this + 398) )
    *((_DWORD *)this + 91) |= 0x10u;
  v20 = *((_DWORD *)this + 91);
  if ( (v20 & 0x10) != 0 )
  {
    if ( !byte_1C0061A58 )
    {
      if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) < 2300 )
      {
        v85 = WdLogNewEntry5_WdWarning(v94, v93, v95);
        *(_QWORD *)(v85 + 24) = 848LL;
        goto LABEL_98;
      }
      v19 = *(_QWORD *)(*(_QWORD *)(v95 + 16) + 16LL);
      v96 = *(_QWORD *)(v19 + 2216) + 48LL * *((unsigned int *)this + 90);
      v97 = *(_QWORD *)(v96 + 24);
      if ( !v97 || (v19 = 74LL * *((unsigned int *)this + 88), (*(_BYTE *)(v19 + v97 + 68) & 1) == 0) )
      {
        v85 = WdLogNewEntry5_WdWarning(v19, v96, v97);
        *(_QWORD *)(v85 + 24) = 854LL;
        goto LABEL_98;
      }
      if ( !*((_BYTE *)this + 398) )
      {
        v85 = WdLogNewEntry5_WdWarning(v19, v96, v97);
        *(_QWORD *)(v85 + 24) = 860LL;
        goto LABEL_98;
      }
    }
    v20 = *((_DWORD *)this + 91);
    if ( v20 < 0x20 )
    {
      v134.Flags.Value |= 0x10u;
      goto LABEL_12;
    }
    v84 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v84 + 24) = 867LL;
LABEL_96:
    WdLogEvent5_WdError(v84);
    return 3221225473LL;
  }
LABEL_12:
  v21 = *((_QWORD *)this + 2);
  v22 = *(ADAPTER_RENDER **)(v21 + 16);
  v23 = *(unsigned int *)(*((_QWORD *)v22 + 2) + 1696LL);
  if ( (v23 & 1) != 0 )
  {
    if ( (v20 & 8) != 0 )
    {
      v134.hContext = 0LL;
    }
    else
    {
      v24 = ADAPTER_RENDER::DdiCreateContext(v22, *(void **)(v21 + 416), &v134);
      v18 = v24;
      if ( v24 < 0 )
      {
        v98 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v98 + 24) = v18;
        WdLogEvent5_WdError(v98);
      }
    }
    *((_DWORD *)this + 10) |= 1u;
    AllocationListSize = v134.ContextInfo.AllocationListSize;
  }
  else
  {
    v134.hContext = *(HANDLE *)(v21 + 416);
    v99 = *(_OWORD *)(v21 + 424);
    *(_QWORD *)&v131 = *(_QWORD *)(v21 + 440);
    v134.ContextInfo.DmaBufferSize = v99;
    *(_QWORD *)&v131 = *(_QWORD *)(v21 + 440);
    v134.ContextInfo.DmaBufferSegmentSet = HIDWORD(*(_QWORD *)(v21 + 424));
    v100 = *(__m128i *)(v21 + 424);
    *(_QWORD *)&v131 = *(_QWORD *)(v21 + 440);
    v100.m128i_i64[0] = _mm_srli_si128(v100, 8).m128i_u64[0];
    AllocationListSize = HIDWORD(v100.m128i_i64[0]);
    v134.ContextInfo.AllocationListSize = v100.m128i_u32[1];
    v130 = *(_OWORD *)(v21 + 424);
    *(_QWORD *)&v131 = *(_QWORD *)(v21 + 440);
    v134.ContextInfo.PatchLocationListSize = v131;
    v101 = *(__m128i *)(v21 + 424);
    *(_QWORD *)&v131 = *(_QWORD *)(v21 + 440);
    v134.ContextInfo.DmaBufferPrivateDataSize = _mm_cvtsi128_si32(_mm_srli_si128(v101, 8));
    *((_DWORD *)this + 10) &= ~1u;
  }
  if ( (int)v18 < 0 )
    return (unsigned int)v18;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 2 || *((_DWORD *)this + 36) == 2)
    && (_DWORD)AllocationListSize != 256 )
  {
    v75 = WdLogNewEntry5_WdWarning(v23, AllocationListSize, v21);
    *(_QWORD *)(v75 + 24) = 256LL;
    *(_QWORD *)(v75 + 32) = v134.ContextInfo.AllocationListSize;
    WdLogEvent5_WdWarning(v75);
    v134.ContextInfo.AllocationListSize = 256;
  }
  *((_QWORD *)this + 23) = v134.hContext;
  *((_OWORD *)this + 12) = *(_OWORD *)&v134.ContextInfo.DmaBufferSize;
  v26 = *(__m128i *)&v134.ContextInfo.PatchLocationListSize;
  *((_OWORD *)this + 13) = *(_OWORD *)&v134.ContextInfo.PatchLocationListSize;
  v27 = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8));
  if ( (v27 & 2) != 0 )
  {
    v28 = *((_QWORD *)this + 2);
    *(_BYTE *)(v28 + 1695) = 1;
    *(_BYTE *)(*(_QWORD *)(v28 + 40) + 272LL) = 1;
    v27 = (char)v134.ContextInfo.Caps.0;
  }
  if ( *((_BYTE *)this + 398) )
  {
    v23 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v29 = *(_QWORD *)(v23 + 16);
    v30 = *((unsigned int *)this + 90);
    v31 = 6 * v30;
    v32 = *(_QWORD *)(*(_QWORD *)(v29 + 2216) + 48 * v30 + 24);
    if ( v32 )
    {
      v23 = 74LL * *((unsigned int *)this + 88);
      LOBYTE(v29) = *(_BYTE *)(v23 + v32 + 73);
    }
    else
    {
      LOBYTE(v29) = 0;
    }
    if ( v32 )
    {
      v23 = 74LL * *((unsigned int *)this + 88);
      v33 = *(_BYTE *)(v23 + v32 + 72);
    }
    else
    {
      v33 = 0;
    }
    if ( (v27 & 4) == 0 && (!(_BYTE)v29 || v33) )
    {
      *((_BYTE *)this + 400) = 1;
      goto LABEL_30;
    }
    if ( (_BYTE)v29 )
    {
      *((_BYTE *)this + 399) = 1;
      goto LABEL_30;
    }
    v85 = WdLogNewEntry5_WdWarning(v23, v29, v31);
    *(_QWORD *)(v85 + 24) = 945LL;
LABEL_98:
    WdLogEvent5_WdWarning(v85);
    return 3221225473LL;
  }
  if ( !*((_DWORD *)this + 48) )
  {
    v103 = WdLogNewEntry5_WdAssertion(v23);
    *(_QWORD *)(v103 + 24) = 956LL;
    WdLogEvent5_WdAssertion(v103);
  }
LABEL_30:
  if ( !*((_BYTE *)this + 398) )
  {
    if ( !*((_DWORD *)this + 51) )
    {
      v104 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v104 + 24) = 957LL;
      WdLogEvent5_WdAssertion(v104);
    }
    if ( !*((_BYTE *)this + 398) && !*((_DWORD *)this + 52) )
    {
      v105 = WdLogNewEntry5_WdAssertion(v23);
      *(_QWORD *)(v105 + 24) = 958LL;
      WdLogEvent5_WdAssertion(v105);
    }
  }
  if ( bTracingEnabled )
  {
    v130 = *((_OWORD *)this + 12);
    v131 = *((_OWORD *)this + 13);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(AllocationType) = *((_DWORD *)this + 88);
      McTemplateK0pqqqqqqqqppp(
        DWORD1(v130),
        &EventCreateContext,
        v130,
        *((_QWORD *)this + 2),
        AllocationType,
        *((_DWORD *)this + 89),
        (_DWORD)v130,
        DWORD1(v130),
        DWORD2(v130),
        HIDWORD(v130),
        (_DWORD)v131,
        0,
        this,
        *((unsigned int *)this + 6),
        0LL);
    }
  }
  if ( (*((_DWORD *)this + 91) & 0x10) == 0 )
  {
    v138 = 0LL;
    v139 = 0LL;
    v140 = 0LL;
    LODWORD(v140) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 312LL);
    HIDWORD(v138) = *((_DWORD *)this + 88);
    LODWORD(v139) = *((_DWORD *)this + 90);
    v34 = (2 * *((_DWORD *)this + 91)) & 2;
    LODWORD(v138) = v34;
    if ( *((_BYTE *)this + 398) )
      LODWORD(v138) = v34 | 0x80;
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
      goto LABEL_40;
    if ( v37 < 0x20 )
    {
      LODWORD(v138) = ((unsigned __int8)v35 ^ (unsigned __int8)(8 * v37)) & 0x20 ^ v35;
LABEL_40:
      v38 = _guard_dispatch_icall_fptr();
      *((_QWORD *)this + 29) = v38;
      goto LABEL_41;
    }
    v84 = WdLogNewEntry5_WdError(v36);
    *(_QWORD *)(v84 + 24) = 1031LL;
    goto LABEL_96;
  }
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  LODWORD(v137) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 312LL);
  HIDWORD(v135) = *((_DWORD *)this + 88);
  LODWORD(v136) = *((_DWORD *)this + 90);
  LODWORD(v135) = 2 * (*((_DWORD *)this + 91) & 1 | (4 * (*((_DWORD *)this + 91) & 4 | 0x190)));
  v106 = _guard_dispatch_icall_fptr();
  *((_QWORD *)this + 32) = v106;
  if ( !v106 )
    return 3221225495LL;
  LODWORD(v135) = v135 & 0xFFFFFBFF;
  v38 = _guard_dispatch_icall_fptr();
  *((_QWORD *)this + 33) = v38;
LABEL_41:
  if ( !v38 )
    return 3221225495LL;
  if ( *((_BYTE *)this + 398) && *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) != 2 && *((_DWORD *)this + 36) != 2
    || (result = DXGCONTEXT::EnsurePriviledgedDmaPool(this, *((_DWORD *)this + 51), *((_DWORD *)this + 52)),
        (int)result >= 0) )
  {
    v42 = (SIZE_T *)((char *)this + 48);
    *((_QWORD *)this + 6) = *((unsigned int *)this + 48);
    *((_DWORD *)this + 18) = *((_DWORD *)this + 51);
    *((_DWORD *)this + 26) = *((_DWORD *)this + 52);
    if ( *((_BYTE *)this + 398) )
    {
      if ( *((_QWORD *)this + 39) )
      {
        v107 = WdLogNewEntry5_WdAssertion(v40);
        *(_QWORD *)(v107 + 24) = 1074LL;
        WdLogEvent5_WdAssertion(v107);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 300LL) & 0x10) == 0
        || !Src
        || v3 != 16 )
      {
        goto LABEL_49;
      }
      VirtualMemory = ZwAllocateVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        (PVOID *)this + 7,
                        0LL,
                        (PSIZE_T)this + 6,
                        0x3000u,
                        4u);
      v18 = VirtualMemory;
      if ( VirtualMemory >= 0 )
      {
        v39 = (unsigned __int64 *)Src[1];
        v41 = (_QWORD *)*Src;
        v133 = 0LL;
        v73 = v39;
        if ( (unsigned __int64)v39 >= MmUserProbeAddress )
          v73 = (unsigned __int64 *)MmUserProbeAddress;
        v133 = *v73;
        if ( !v39 || v133 < 8 || !v41 )
        {
          v74 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v39, v41);
          *(_QWORD *)(v74 + 24) = this;
          *(_QWORD *)(v74 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v74);
          return 3221225485LL;
        }
        if ( (unsigned __int64)v41 >= MmUserProbeAddress )
          v41 = (_QWORD *)MmUserProbeAddress;
        *v41 = *((_QWORD *)this + 7);
        if ( (unsigned __int64)v39 >= MmUserProbeAddress )
          v39 = (unsigned __int64 *)MmUserProbeAddress;
        *v39 = *v42;
        goto LABEL_49;
      }
    }
    else
    {
      v108 = ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)this + 7,
               0LL,
               (PSIZE_T)this + 6,
               0x3000u,
               4u);
      v18 = v108;
      if ( v108 >= 0 )
      {
        v109 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
        v110 = *(struct DXGADAPTER **)(v109 + 16);
        Global = DXGGLOBAL::GetGlobal(v109);
        if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
               (struct DXGGLOBAL *)((char *)Global + 1108),
               v110) )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, *v42, 0x4B677844u);
          *((_QWORD *)this + 8) = PoolWithTag;
          if ( !PoolWithTag )
          {
            v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v113, v39, v41);
            v77[3] = this;
            v78 = *v42;
LABEL_90:
            v77[4] = v78;
            v77[5] = -1073741801LL;
LABEL_91:
            WdLogEvent5_WdWarning(v77);
            return 3221225495LL;
          }
        }
LABEL_49:
        v43 = *((unsigned int *)this + 18);
        if ( (_DWORD)v43 )
        {
          v44 = 8 * v43;
          if ( v44 > 0xFFFFFFFF )
          {
            v114 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, v39, v41);
            *(_QWORD *)(v114 + 24) = this;
            v115 = *((unsigned int *)this + 18);
            goto LABEL_142;
          }
          v45 = (SIZE_T *)((char *)this + 80);
          *((_QWORD *)this + 10) = (unsigned int)v44;
          v46 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PVOID *)this + 11,
                  0LL,
                  (PSIZE_T)this + 10,
                  0x3000u,
                  4u);
          v50 = v46;
          if ( v46 < 0 )
          {
            v116 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49);
            v116[3] = this;
            v116[4] = *v45;
            v116[5] = v50;
            WdLogEvent5_WdWarning(v116);
            return (unsigned int)v50;
          }
          *((_QWORD *)this + 12) = MmSecureVirtualMemory(*((PVOID *)this + 11), *v45, 4u);
          if ( !*((_QWORD *)this + 12) )
            goto LABEL_144;
        }
        v52 = *((unsigned int *)this + 26);
        if ( !(_DWORD)v52 )
        {
LABEL_58:
          v62 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
          v63 = *((unsigned int *)this + 6);
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v62 + 200));
          v64 = ((unsigned int)v63 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v64 < *(_DWORD *)(v62 + 240) )
          {
            v65 = *(_QWORD *)(v62 + 224);
            v66 = ((unsigned int)v63 >> 25) & 0x60;
            if ( (((unsigned int)v63 >> 25) & 0x60) == (*(_BYTE *)(v65 + 16 * v64 + 8) & 0x60)
              && (*(_DWORD *)(v65 + 16 * v64 + 8) & 0x1F) != 0 )
            {
              v67 = 2 * ((v63 >> 6) & 0xFFFFFF);
              if ( (*(_DWORD *)(v65 + 8 * v67 + 8) & 0x2000) == 0 )
              {
                v122 = WdLogNewEntry5_WdAssertion(v66);
                *(_QWORD *)(v122 + 24) = 191LL;
                WdLogEvent5_WdAssertion(v122);
              }
              *(_DWORD *)(*(_QWORD *)(v62 + 224) + 8 * v67 + 8) &= ~0x2000u;
            }
          }
          *(_QWORD *)(v62 + 208) = 0LL;
          ExReleasePushLockExclusiveEx(v62 + 200, 0LL);
          KeLeaveCriticalRegion();
          return 0LL;
        }
        v53 = 24 * v52;
        if ( (unsigned __int64)(24 * v52) <= 0xFFFFFFFF )
        {
          v54 = (SIZE_T *)((char *)this + 112);
          *((_QWORD *)this + 14) = (unsigned int)v53;
          v55 = ZwAllocateVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PVOID *)this + 15,
                  0LL,
                  (PSIZE_T)this + 14,
                  0x3000u,
                  4u);
          v59 = v55;
          if ( v55 < 0 )
          {
            v117 = (_QWORD *)WdLogNewEntry5_WdWarning(v57, v56, v58);
            v117[3] = this;
            v117[4] = *v54;
            v117[5] = v59;
            WdLogEvent5_WdWarning(v117);
            return (unsigned int)v59;
          }
          *((_QWORD *)this + 17) = MmSecureVirtualMemory(*((PVOID *)this + 15), *v54, 4u);
          if ( *((_QWORD *)this + 17) )
          {
            v60 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
            v61 = DXGGLOBAL::GetGlobal(v51);
            if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                   (struct DXGGLOBAL *)((char *)v61 + 1108),
                   v60) )
            {
              v118 = ExAllocatePoolWithTag(PagedPool, *((_QWORD *)this + 14), 0x4B677844u);
              *((_QWORD *)this + 16) = v118;
              if ( !v118 )
              {
                v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v120, v119, v121);
                v77[3] = this;
                v78 = *((_QWORD *)this + 14);
                goto LABEL_90;
              }
            }
            goto LABEL_58;
          }
LABEL_144:
          v77 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v39, v41);
          v77[3] = this;
          v77[4] = -1073741801LL;
          goto LABEL_91;
        }
        v114 = WdLogNewEntry5_WdWarning(v53, v39, v41);
        *(_QWORD *)(v114 + 24) = this;
        v115 = *((unsigned int *)this + 26);
LABEL_142:
        *(_QWORD *)(v114 + 32) = v115;
        WdLogEvent5_WdWarning(v114);
        return 3221225621LL;
      }
    }
    v102 = (_QWORD *)WdLogNewEntry5_WdWarning(v71, v70, v72);
    v102[3] = this;
    v102[4] = *v42;
    v102[5] = v18;
    WdLogEvent5_WdWarning(v102);
    return (unsigned int)v18;
  }
  return result;
}
