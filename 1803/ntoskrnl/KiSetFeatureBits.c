/*
 * XREFs of KiSetFeatureBits @ 0x140479754
 * Callers:
 *     KiInitializeBootStructures @ 0x140478DD0 (KiInitializeBootStructures.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14016D110 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     HvlSetHardwareMbecAvailable @ 0x140226D54 (HvlSetHardwareMbecAvailable.c)
 *     KiSetProcessorSignature @ 0x14046F4C8 (KiSetProcessorSignature.c)
 *     KiDetectKvaLeakage @ 0x14047A204 (KiDetectKvaLeakage.c)
 *     KiDetectAccessBitErrata @ 0x14047A3DC (KiDetectAccessBitErrata.c)
 *     KiDetectCacheErrata @ 0x14047A44C (KiDetectCacheErrata.c)
 *     KiGetCpuVendor @ 0x14047A4BC (KiGetCpuVendor.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 */

char __fastcall KiSetFeatureBits(__int64 a1)
{
  char CpuVendor; // r9
  int v8; // r8d
  unsigned int v9; // edi
  unsigned int v10; // ebx
  char v11; // cl
  char v17; // cl
  ULONG_PTR v28; // r15
  int v29; // edi
  unsigned int v30; // r13d
  int v41; // r14d
  ULONG_PTR v42; // r12
  char v43; // r11
  __int64 v44; // r8
  unsigned __int64 v45; // rcx
  __int64 v46; // rbx
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rdi
  char v50; // cl
  unsigned int v51; // r15d
  int v57; // ecx
  unsigned int v58; // r14d
  unsigned int v74; // ecx
  unsigned __int8 v75; // dl
  bool v81; // cf
  unsigned int v82; // ecx
  char v83; // al
  unsigned int v84; // ebx
  __int64 v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  char IsHyperThreadingEnabled; // al
  int v90; // ecx
  int v91; // eax
  char v93; // r8
  __int64 v102; // rdx
  unsigned int v103; // r10d
  __int64 v109; // rcx
  unsigned __int64 v110; // rcx
  __int64 v111; // rdx
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rax
  char v114; // r9
  __int64 v120; // rcx
  __int64 v125; // r8
  __int64 v126; // rdi
  unsigned __int64 v131; // rax
  __int64 v132; // rdx
  unsigned __int8 v133; // dl
  unsigned __int64 v148; // rax
  char v153; // r8
  unsigned int v155; // [rsp+30h] [rbp-78h]
  bool v156; // [rsp+38h] [rbp-70h]
  unsigned int v157; // [rsp+40h] [rbp-68h]
  int v158; // [rsp+44h] [rbp-64h]

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
  v156 = (unsigned __int8)(v11 - 1) <= 1u;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( v11 == 2 )
    {
      if ( v9 != 6 )
        goto LABEL_42;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
      if ( v10 > 0x27 )
      {
        if ( v10 > 0x3A )
        {
          if ( v10 != 60 )
          {
            if ( v10 <= 0x44 )
              goto LABEL_27;
            if ( v10 > 0x46 )
            {
              if ( v10 != 77 )
                goto LABEL_27;
              goto LABEL_39;
            }
          }
        }
        else if ( ((v10 - 42) & 0xFFFFFFEF) != 0 )
        {
          if ( v10 <= 0x2B )
            goto LABEL_27;
          if ( v10 > 0x2F )
          {
            if ( v10 - 53 > 2 )
              goto LABEL_27;
            goto LABEL_39;
          }
        }
      }
      else
      {
        if ( v10 >= 0x26 || ((v10 - 15) & 0xFFFFFFF7) == 0 )
          goto LABEL_39;
        if ( v10 != 26 )
        {
          if ( v10 != 28 && v10 != 29 )
          {
            if ( v10 - 30 <= 1 || v10 == 37 )
              goto LABEL_26;
LABEL_27:
            if ( KiLastBranchFromBaseMSR )
              KiLastBranchTOSMSR = 457;
            goto LABEL_42;
          }
LABEL_39:
          KiLastBranchFromBaseMSR = 64;
          KiLastBranchToBaseMSR = 96;
          goto LABEL_27;
        }
      }
LABEL_26:
      KiLastBranchFromBaseMSR = 1664;
      KiLastBranchToBaseMSR = 1728;
      goto LABEL_27;
    }
    if ( v11 == 1 )
    {
      KiLastBranchFromBaseMSR = 475;
      KiLastBranchToBaseMSR = 476;
      KiLastExceptionFromBaseMSR = 477;
      KiLastExceptionToBaseMSR = 478;
    }
  }
LABEL_42:
  _RAX = 0LL;
  __asm { cpuid }
  v155 = _RAX;
  v17 = *(_BYTE *)(a1 + 141);
  if ( v17 == 2 )
  {
    __writemsr(0x8Bu, 0LL);
    _RAX = 1LL;
    __asm { cpuid }
  }
  else if ( v17 != 1 )
  {
    goto LABEL_46;
  }
  *(_QWORD *)(a1 + 25256) = __readmsr(0x8Bu);
LABEL_46:
  _RAX = 1LL;
  __asm { cpuid }
  v28 = (unsigned int)_RDX;
  v29 = _RCX;
  v158 = _RCX;
  v30 = _RBX;
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v157 = _RAX;
  _RAX = 2147483649LL;
  __asm { cpuid }
  v41 = _RDX;
  v42 = (unsigned int)_RCX;
  KiDetectCacheErrata(a1);
  KiDetectAccessBitErrata();
  KiDetectKvaLeakage();
  _m_prefetchw((const void *)a1);
  v43 = 1;
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
    v58 = v155;
    if ( v155 < 0xB )
      goto LABEL_84;
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
        v74 = ((unsigned int)_RCX >> 8) - 1;
        if ( v74 )
        {
          if ( v74 == 1 )
            v44 = (unsigned int)(1 << (_RAX & 0x1F));
        }
        else
        {
          *(_BYTE *)(a1 + 143) = 1 << (_RAX & 0x1F);
        }
      }
      while ( (_WORD)_RBX );
      *(_BYTE *)(a1 + 142) = (unsigned int)v44 / *(unsigned __int8 *)(a1 + 143);
      v51 = v157;
    }
    else
    {
LABEL_84:
      v75 = 1;
      if ( v155 >= 4 )
      {
        _RAX = 4LL;
        __asm { cpuid }
        _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
        v75 = 1 << _RCX;
        *(_BYTE *)(a1 + 142) = 1 << _RCX;
      }
      v81 = (v28 & 0x10000000) != 0;
      v51 = v157;
      if ( v81 )
      {
        _BitScanReverse(&v82, 2 * BYTE2(v30) - 1);
        *(_BYTE *)(a1 + 143) = (1 << v82) / (unsigned int)v75;
      }
    }
  }
  else
  {
    v51 = v157;
    if ( v50 != 1 || v157 < 0x80000008 )
      goto LABEL_74;
    _RAX = 2147483656LL;
    __asm { cpuid }
    v44 = (unsigned int)_RCX;
    v57 = (unsigned __int16)_RCX >> 12;
    if ( !v57 )
      _BitScanReverse((unsigned int *)&v57, 2 * (unsigned __int8)v44 + 1);
    *(_BYTE *)(a1 + 142) = 1 << v57;
    if ( v157 >= 0x8000001E )
    {
      v58 = v155;
      if ( (v42 & 0x400000) != 0 )
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
LABEL_74:
      v58 = v155;
    }
  }
  v83 = *(_BYTE *)(a1 + 141);
  if ( v83 == 1 )
  {
    v49 |= 0x200000uLL;
  }
  else if ( v83 == 2 )
  {
    v49 |= 0x1000000uLL;
  }
  v84 = *(unsigned __int8 *)(a1 + 143);
  v85 = (unsigned int)KiMaximumGroupSize;
  v86 = (unsigned __int8)KiMaximumGroupSize;
  v87 = v84 * *(unsigned __int8 *)(a1 + 142);
  if ( (unsigned int)v87 > (unsigned __int8)KiMaximumGroupSize )
  {
    if ( v84 > KiMaximumGroupSize )
    {
      *(_BYTE *)(a1 + 143) = KiMaximumGroupSize;
      LOBYTE(v84) = v85;
    }
    v87 = (unsigned __int8)v84;
    v85 = v86 % (unsigned __int8)v84;
    *(_BYTE *)(a1 + 142) = v86 / (unsigned __int8)v84;
  }
  if ( !*(_DWORD *)(a1 + 36) )
  {
    v88 = (unsigned __int8)v84;
LABEL_101:
    v91 = v88 - 1;
    goto LABEL_102;
  }
  IsHyperThreadingEnabled = HalIsHyperThreadingEnabled(v87, v85, v44, v47);
  v90 = *(unsigned __int8 *)(a1 + 143);
  v43 = 1;
  if ( !IsHyperThreadingEnabled )
  {
    v88 = v90 * *(unsigned __int8 *)(a1 + 142);
    goto LABEL_101;
  }
  v91 = v90 - 1;
LABEL_102:
  LODWORD(_RAX) = ~v91;
  *(_DWORD *)(a1 + 220) = _RAX;
  v93 = *(_BYTE *)(a1 + 141);
  if ( (unsigned __int8)(v93 - 1) > 2u || v51 < 0x80000008 )
  {
    if ( v93 == 1 )
      KiMtrrMaxRangeShift = 40;
  }
  else
  {
    _RAX = 2147483656LL;
    __asm { cpuid }
    KiMtrrMaxRangeShift = _RAX;
  }
  KiMtrrMaskBase = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  KiMtrrMaskMask = ((1LL << KiMtrrMaxRangeShift) - 1) & 0xFFFFFFFFFFFFF000uLL;
  if ( v93 == 2 && v58 >= 6 )
  {
    _RAX = 6LL;
    __asm { cpuid }
    v102 = v49 | 0x400000;
    if ( (_RCX & 2) == 0 )
      v102 = v49;
    v49 = v102;
    if ( (_RAX & 0x2000) != 0 )
    {
      LOBYTE(_RAX) = 0;
      v49 = v102 | 0x8000000000LL;
    }
  }
  v103 = 7;
  if ( (unsigned __int8)(v93 - 1) <= 1u && v58 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    v109 = v49 | 1;
    if ( (_RBX & 0x80u) == 0LL )
      v109 = v49;
    v49 = v109 | 0x10000000;
    if ( (_RBX & 1) == 0 )
      v49 = v109;
    LOBYTE(_RAX) = v49;
    if ( (_RBX & 0x400) != 0 && (v158 & 0x20000) != 0 )
      v49 |= 0x40000000000uLL;
    if ( (v49 & 0x10000001) != 0 )
    {
      v110 = __readcr4();
      if ( (v49 & 1) != 0 )
        v110 |= 0x100000uLL;
      LOBYTE(_RAX) = 0;
      v111 = v110 | 0x10000;
      if ( (v49 & 0x10000000) == 0 )
        v111 = v110;
      v112 = v111;
      if ( *(_DWORD *)(a1 + 36) )
      {
        if ( (v49 & 0x40000000000LL) != 0 )
        {
          LOBYTE(_RAX) = KiFlushPcid;
          if ( KiFlushPcid )
            v112 = v111 | 0x20000;
        }
      }
      __writecr4(v112);
      if ( (v112 & 0x20000) != 0 )
      {
        v113 = __readcr3();
        _RAX = v113 | 2;
        __writecr3(_RAX);
      }
    }
  }
  v114 = *(_BYTE *)(a1 + 141);
  if ( v114 == 2 && v58 >= 7 )
  {
    _RAX = 7LL;
    __asm { cpuid }
    v120 = v49 | 0x800000000LL;
    if ( (_RBX & 0x800000) == 0 )
      v120 = v49;
    v49 = v120 | 0x1000000000LL;
    LOBYTE(_RAX) = 0;
    if ( (_RBX & 0x1000000) == 0 )
      v49 = v120;
    if ( (_RBX & 0x8000) != 0 )
    {
      _RAX = 16LL;
      __asm { cpuid }
      if ( (_RBX & 2) != 0 )
      {
        LOBYTE(_RAX) = 0;
        v49 |= 0x100000000000uLL;
      }
    }
  }
  v125 = v49 | 0x20000;
  if ( !v156 )
    v125 = v49;
  v126 = v125;
  if ( v114 == 2 )
  {
    _RAX = 1LL;
    __asm { cpuid }
    if ( (_RCX & 0x20) != 0 )
    {
      if ( (__readmsr(0x482u) & 0x8000000000000000uLL) != 0LL )
      {
        v131 = __readmsr(0x48Bu);
        v132 = v125 | 0x4000000;
        if ( (v131 & 0x200000000LL) == 0 )
          v132 = v125;
        v125 = v132;
        if ( (v132 & 1) != 0 && (v131 & 0x40000000000000LL) != 0 )
          HvlSetHardwareMbecAvailable();
      }
      _RAX = __readmsr(0x3Au);
      v133 = _RAX;
      v126 = v125 | 0x8000000;
      if ( (_RAX & 5) != 5 )
        v126 = v125;
      if ( (_RAX & 4) != 0 )
      {
        LOBYTE(_RAX) = v43 | KiVirtFlags;
        KiVirtFlags |= v43;
      }
      if ( (v133 & (unsigned __int8)v43) != 0 )
      {
        LOBYTE(_RAX) = KiVirtFlags | 2;
        KiVirtFlags |= 2u;
      }
    }
  }
  else if ( v114 == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x8000000A )
    {
      _RAX = 2147483658LL;
      __asm { cpuid }
      if ( (_RDX & 1) != 0 )
        v126 = v125 | 0x4000000;
    }
    _RAX = __readmsr(0xC0010114);
    if ( (_RAX & 0x10) == 0 )
    {
      v126 |= 0x8000000uLL;
      KiVirtFlags |= 1u;
    }
  }
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    _RAX = v103;
    __asm { cpuid }
    if ( (_RBX & 4) != 0 )
    {
      v148 = __readmsr(0x3Au);
      _RAX = v148 & 0x40001;
      if ( _RAX == 262145 )
      {
        _RAX = 18LL;
        __asm { cpuid }
        v153 = _RAX;
        if ( ((unsigned __int8)_RAX & (unsigned __int8)v43) != 0 )
        {
          v126 |= 0x10000000000uLL;
          LODWORD(_RAX) = MEMORY[0xFFFFF7800000036C] | 2;
          MEMORY[0xFFFFF7800000036C] |= 2u;
          if ( (v153 & 2) != 0 )
          {
            v126 |= 0x80000000000uLL;
            LODWORD(_RAX) = _RAX | 4;
            MEMORY[0xFFFFF7800000036C] = _RAX;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 141) == v43 )
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
  *(_QWORD *)(a1 + 25248) = v126;
  return _RAX;
}
