/*
 * XREFs of KiSetFeatureBits @ 0x14040FD30
 * Callers:
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14014A450 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiDetectKvaLeakage @ 0x1404035D4 (KiDetectKvaLeakage.c)
 *     KiSetProcessorSignature @ 0x140403B40 (KiSetProcessorSignature.c)
 *     KiDetectAccessBitErrata @ 0x140410754 (KiDetectAccessBitErrata.c)
 *     KiDetectCacheErrata @ 0x1404107C4 (KiDetectCacheErrata.c)
 *     KiGetCpuVendor @ 0x140410834 (KiGetCpuVendor.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 */

char __fastcall KiSetFeatureBits(__int64 a1)
{
  char CpuVendor; // r9
  int v8; // r8d
  unsigned int v9; // esi
  unsigned int v10; // ebx
  char v11; // cl
  char v17; // cl
  ULONG_PTR v28; // r15
  int v29; // esi
  unsigned int v30; // r13d
  int v41; // r14d
  ULONG_PTR v42; // r12
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rsi
  char v50; // r10
  unsigned int v51; // r14d
  int v57; // ecx
  bool v58; // cf
  unsigned int v59; // r12d
  unsigned int v75; // ecx
  unsigned int v81; // ecx
  unsigned int v82; // ebx
  __int64 v83; // rdx
  unsigned int v84; // eax
  __int64 v85; // rcx
  unsigned int v86; // eax
  bool v87; // zf
  char v89; // r8
  __int64 v98; // rdx
  __int64 v104; // rcx
  unsigned __int64 v105; // rcx
  __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rax
  char v109; // r9
  __int64 v115; // r8
  __int64 v116; // rsi
  __int64 v121; // rbx
  unsigned __int64 v136; // rax
  unsigned int v142; // [rsp+30h] [rbp-78h]
  bool v143; // [rsp+38h] [rbp-70h]
  unsigned int v144; // [rsp+40h] [rbp-68h]
  int v145; // [rsp+44h] [rbp-64h]

  CpuVendor = KiGetCpuVendor();
  *(_BYTE *)(a1 + 141) = CpuVendor;
  if ( !CpuVendor )
    KeBugCheck(0x5Du);
  _RAX = 1LL;
  __asm { cpuid }
  v8 = _RAX;
  v9 = ((unsigned int)_RAX >> 8) & 0xF;
  if ( v9 == 15 )
  {
    v9 = (unsigned __int8)((unsigned int)_RAX >> 20) + 15;
    v10 = (unsigned __int64)(_RAX & 0xF0 | ((unsigned int)_RAX >> 8) & 0xF00) >> 4;
  }
  else
  {
    v10 = (unsigned __int8)_RAX >> 4;
  }
  if ( CpuVendor == 2 && v9 == 6 || CpuVendor == 3 && v9 == 6 )
    v10 |= ((unsigned int)_RAX >> 12) & 0xF0;
  *(_BYTE *)(a1 + 65) = 1;
  *(_BYTE *)(a1 + 64) = v9;
  *(_WORD *)(a1 + 66) = _RAX & 0xF | ((_WORD)v10 << 8);
  if ( CpuVendor == 2 && (v9 >= 0xF || v9 == 6 && v10 > 0xD) )
    __writemsr(0x1A0u, __readmsr(0x1A0u) & 0xFFFFFFFFFFBFFFFFuLL);
  KiSetProcessorSignature(a1, v8);
  v11 = *(_BYTE *)(a1 + 141);
  v143 = (unsigned __int8)(v11 - 1) <= 1u;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v11 == 2 )
    {
      if ( v9 != 6 )
        goto LABEL_45;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
      if ( v10 > 0x27 )
      {
        if ( v10 > 0x3A )
        {
          if ( v10 == 60 )
            goto LABEL_40;
          if ( v10 <= 0x44 )
            goto LABEL_41;
          if ( v10 <= 0x46 )
            goto LABEL_40;
          if ( v10 != 77 )
            goto LABEL_41;
        }
        else
        {
          if ( ((v10 - 42) & 0xFFFFFFEF) == 0 )
            goto LABEL_40;
          if ( v10 <= 0x2B )
            goto LABEL_41;
          if ( v10 <= 0x2F )
            goto LABEL_40;
          if ( v10 - 53 > 2 )
            goto LABEL_41;
        }
      }
      else if ( v10 < 0x26 && ((v10 - 15) & 0xFFFFFFF7) != 0 )
      {
        if ( v10 == 26 )
        {
LABEL_40:
          KiLastBranchFromBaseMSR = 1664;
          KiLastBranchToBaseMSR = 1728;
          goto LABEL_41;
        }
        if ( v10 != 28 && v10 != 29 )
        {
          if ( v10 - 30 <= 1 || v10 == 37 )
            goto LABEL_40;
LABEL_41:
          if ( KiLastBranchFromBaseMSR )
            KiLastBranchTOSMSR = 457;
          goto LABEL_45;
        }
      }
      KiLastBranchFromBaseMSR = 64;
      KiLastBranchToBaseMSR = 96;
      goto LABEL_41;
    }
    if ( v11 == 1 )
    {
      KiLastBranchFromBaseMSR = 475;
      KiLastBranchToBaseMSR = 476;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
    }
  }
LABEL_45:
  _RAX = 0LL;
  __asm { cpuid }
  v142 = _RAX;
  v17 = *(_BYTE *)(a1 + 141);
  if ( v17 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
  }
  else if ( v17 != 1 )
  {
    goto LABEL_49;
  }
  *(_QWORD *)(a1 + 25592) = __readmsr(0x8Bu);
LABEL_49:
  _RAX = 1LL;
  __asm { cpuid }
  v28 = (unsigned int)_RDX;
  v29 = _RCX;
  v145 = _RCX;
  v30 = _RBX;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v144 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v41 = _RDX;
  v42 = (unsigned int)_RCX;
  KiDetectCacheErrata(a1);
  KiDetectAccessBitErrata();
  KiDetectKvaLeakage(v43);
  _m_prefetchw((const void *)a1);
  if ( *(_BYTE *)(a1 + 141) == 1 )
    v41 |= 0x100000u;
  *(_DWORD *)(a1 + 212) = HIBYTE(v30);
  *(_DWORD *)(a1 + 232) = (v30 >> 5) & 0x7F8;
  v44 = 0LL;
  if ( (v28 & 0x789F3FD) != 0x789F3FD
    || (v41 & 0x800) == 0
    || (v41 & 0x100000) == 0
    || (v29 & 0x2000) == 0
    || (v42 & 1) == 0
    || (_DWORD)KiOpPrefetchPatchSkip )
  {
    if ( !*(_DWORD *)(a1 + 36) )
      KdInitSystem(0LL, KeLoaderBlock_0);
    KeBugCheckEx(0x5Du, v28, (unsigned int)v41, v42, (unsigned int)KiOpPrefetchPatchSkip);
  }
  v45 = ((v28 & 0x200000 | 0x20113DFE000LL) >> 12) | 0x80000;
  if ( (v29 & 1) == 0 )
    v45 = (v28 & 0x200000 | 0x20113DFE000LL) >> 12;
  v46 = v45 | 0x100000000LL;
  if ( (v29 & 0x40000000) == 0 )
    v46 = v45;
  if ( (v41 & 0x8000000) != 0 )
  {
    v46 |= 0x400000000uLL;
    __writemsr(0xC0000103, *(unsigned __int8 *)(a1 + 209) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 8));
  }
  __writemsr(0x174u, 0LL);
  __writemsr(0x176u, 0LL);
  __writemsr(0x175u, 0LL);
  v47 = 0x4000LL;
  v48 = v46 | 0x4000;
  if ( v41 >= 0 )
    v48 = v46;
  v49 = v48 | 0x2000000000LL;
  if ( (v41 & 0x4000000) == 0 )
    v49 = v48;
  if ( (v41 & 0x2000000) != 0 )
    __writemsr(0xC0000080, __readmsr(0xC0000080) | 0x4000);
  *(_WORD *)(a1 + 142) = 257;
  v50 = *(_BYTE *)(a1 + 141);
  if ( (unsigned __int8)(v50 - 2) <= 1u )
  {
    v59 = v142;
    if ( v142 < 0xB )
      goto LABEL_87;
    _RAX = 11LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
      *(_DWORD *)(a1 + 212) = _RDX;
      LODWORD(v47) = 0;
      v44 = 1LL;
      do
      {
        _RAX = 11LL;
        __asm { cpuid }
        v47 = (unsigned int)(v47 + 1);
        v75 = ((unsigned int)_RCX >> 8) - 1;
        if ( v75 )
        {
          if ( v75 == 1 )
            v44 = (unsigned int)(1 << (_RAX & 0x1F));
        }
        else
        {
          *(_BYTE *)(a1 + 143) = 1 << (_RAX & 0x1F);
        }
      }
      while ( (_WORD)_RBX );
      *(_BYTE *)(a1 + 142) = (unsigned int)v44 / *(unsigned __int8 *)(a1 + 143);
      v51 = v144;
    }
    else
    {
LABEL_87:
      if ( v142 >= 4 )
      {
        _RAX = 4LL;
        __asm { cpuid }
        _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
        *(_BYTE *)(a1 + 142) = 1 << _RCX;
      }
      v51 = v144;
      if ( (v28 & 0x10000000) != 0 )
      {
        _BitScanReverse(&v81, 2 * BYTE2(v30) - 1);
        *(_BYTE *)(a1 + 143) = (1 << v81) / (unsigned int)*(unsigned __int8 *)(a1 + 142);
      }
    }
  }
  else
  {
    v51 = v144;
    if ( v50 != 1 || v144 < 0x80000008 )
      goto LABEL_77;
    _RAX = 2147483656LL;
    __asm { cpuid }
    v44 = (unsigned int)_RCX;
    v57 = (unsigned __int16)_RCX >> 12;
    if ( !v57 )
      _BitScanReverse((unsigned int *)&v57, 2 * (unsigned __int8)v44 + 1);
    *(_BYTE *)(a1 + 142) = 1 << v57;
    if ( v144 >= 0x8000001E )
    {
      v58 = (v42 & 0x400000) != 0;
      v59 = v142;
      if ( v58 )
      {
        _RAX = 2147483678LL;
        __asm { cpuid }
        LODWORD(_RBX) = (unsigned int)_RBX >> 8;
        *(_BYTE *)(a1 + 143) = _RBX + 1;
        *(_BYTE *)(a1 + 142) /= (unsigned __int8)(_RBX + 1);
      }
    }
    else
    {
LABEL_77:
      v59 = v142;
    }
  }
  if ( v50 == 1 )
  {
    v49 |= 0x200000uLL;
  }
  else if ( v50 == 2 )
  {
    v49 |= 0x1000000uLL;
  }
  v82 = *(unsigned __int8 *)(a1 + 143);
  v83 = (unsigned int)KiMaximumGroupSize;
  v84 = (unsigned __int8)KiMaximumGroupSize;
  v85 = v82 * *(unsigned __int8 *)(a1 + 142);
  if ( (unsigned int)v85 > (unsigned __int8)KiMaximumGroupSize )
  {
    if ( v82 > KiMaximumGroupSize )
      *(_BYTE *)(a1 + 143) = KiMaximumGroupSize;
    v82 = *(unsigned __int8 *)(a1 + 143);
    v83 = v84 % v82;
    *(_BYTE *)(a1 + 142) = v84 / v82;
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    v87 = (unsigned __int8)HalIsHyperThreadingEnabled(v85, v83, v44, v47) == 0;
    LODWORD(_RAX) = *(unsigned __int8 *)(a1 + 143);
    if ( v87 )
    {
      *(_DWORD *)(a1 + 220) = ~(_RAX * *(unsigned __int8 *)(a1 + 142) - 1);
      goto LABEL_105;
    }
    v86 = _RAX - 1;
  }
  else
  {
    v86 = v82 - 1;
  }
  LODWORD(_RAX) = ~v86;
  *(_DWORD *)(a1 + 220) = _RAX;
LABEL_105:
  v89 = *(_BYTE *)(a1 + 141);
  if ( v89 == 2 && v51 >= 0x80000008 )
  {
LABEL_109:
    _RAX = 2147483656LL;
    __asm { cpuid }
    KiMtrrMaxRangeShift = _RAX;
    goto LABEL_111;
  }
  if ( v89 == 1 )
  {
    if ( v51 < 0x80000008 )
    {
      KiMtrrMaxRangeShift = 40;
      goto LABEL_111;
    }
    goto LABEL_109;
  }
LABEL_111:
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  if ( v89 == 2 && v59 >= 6 )
  {
    _RAX = 6LL;
    __asm { cpuid }
    v98 = v49 | 0x400000;
    if ( (_RCX & 2) == 0 )
      v98 = v49;
    v49 = v98;
    if ( (_RAX & 0x2000) != 0 )
    {
      LOBYTE(_RAX) = 0;
      v49 = v98 | 0x8000000000LL;
    }
  }
  if ( (unsigned __int8)(v89 - 1) <= 1u && v59 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    v104 = v49 | 1;
    if ( (_RBX & 0x80u) == 0LL )
      v104 = v49;
    v49 = v104 | 0x10000000;
    if ( (_RBX & 1) == 0 )
      v49 = v104;
    LOBYTE(_RAX) = v49;
    if ( (_RBX & 0x400) != 0 && (v145 & 0x20000) != 0 )
      v49 |= 0x40000000000uLL;
    if ( (v49 & 0x10000001) != 0 )
    {
      v105 = __readcr4();
      if ( (v49 & 1) != 0 )
        v105 |= 0x100000uLL;
      LOBYTE(_RAX) = 0;
      v106 = v105 | 0x10000;
      if ( (v49 & 0x10000000) == 0 )
        v106 = v105;
      v107 = v106;
      if ( *(_DWORD *)(a1 + 36) )
      {
        if ( (v49 & 0x40000000000LL) != 0 )
        {
          LOBYTE(_RAX) = KiFlushPcid;
          if ( KiFlushPcid )
            v107 = v106 | 0x20000;
        }
      }
      __writecr4(v107);
      if ( (v107 & 0x20000) != 0 )
      {
        v108 = __readcr3();
        _RAX = v108 | 2;
        __writecr3(_RAX);
      }
    }
  }
  v109 = *(_BYTE *)(a1 + 141);
  if ( v109 == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    _RAX = v49 | 0x800000000LL;
    if ( (_RBX & 0x800000) == 0 )
      _RAX = v49;
    v49 = _RAX;
    if ( (_RBX & 0x1000000) != 0 )
    {
      LOBYTE(_RAX) = 0;
      v49 |= 0x1000000000uLL;
    }
  }
  v115 = v49 | 0x20000;
  if ( !v143 )
    v115 = v49;
  v116 = v115;
  if ( v109 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) != 0 )
    {
      v121 = v115;
      if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL && (__readmsr(0x48Bu) & 0x200000000LL) != 0 )
        v121 = v115 | 0x4000000;
      _RAX = __readmsr(0x3Au);
      v116 = v121 | 0x8000000;
      if ( (_RAX & 5) != 5 )
        v116 = v121;
      if ( (_RAX & 4) != 0 )
        KiVirtFlags |= 1u;
      if ( (_RAX & 1) != 0 )
        KiVirtFlags |= 2u;
    }
  }
  else if ( v109 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) != 0 )
        v116 = v115 | 0x4000000;
    }
    _RAX = __readmsr(0xC0010114);
    if ( (_RAX & 0x10) == 0 )
    {
      v116 |= 0x8000000uLL;
      KiVirtFlags |= 1u;
    }
  }
  if ( v109 == 2 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v136 = __readmsr(0x3Au);
      _RAX = v136 & 0x40001;
      if ( _RAX == 262145 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        if ( (_RAX & 1) != 0 )
        {
          v116 |= 0x10000000000uLL;
          LOBYTE(_RAX) = MEMORY[0xFFFFF7800000036C] | 2;
          MEMORY[0xFFFFF7800000036C] |= 2u;
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    LOBYTE(_RAX) = *(_BYTE *)(a1 + 64);
    if ( (char)_RAX > 15 && (_BYTE)_RAX != 17 )
    {
      LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
      if ( !(_BYTE)_RAX )
      {
        _RAX = __readmsr(0xC0011029) | 2;
        __writemsr(0xC0011029, _RAX);
      }
    }
  }
  *(_QWORD *)(a1 + 25576) = v116;
  return _RAX;
}
