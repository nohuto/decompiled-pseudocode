/*
 * XREFs of KiDetectKvaLeakage @ 0x1404235C0
 * Callers:
 *     KiSetFeatureBits @ 0x140427A44 (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall KiDetectKvaLeakage(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx
  char v9; // r9
  unsigned __int64 v15; // rax
  ULONG_PTR v16; // r10
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx

  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    if ( *(_BYTE *)(a1 + 64) != 6
      || (LOBYTE(v1) = *(_BYTE *)(a1 + 67), (unsigned __int8)v1 > 0x36u)
      || (v3 = 0x6000C010000000LL, !_bittest64(&v3, v1)) )
    {
      _RAX = 0LL;
      __asm { cpuid }
      v9 = 0;
      if ( (unsigned int)_RAX < 7 )
        goto LABEL_10;
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RDX & 0x20000000) != 0 )
      {
        v15 = __readmsr(0x10Au);
        v9 = v15;
      }
      if ( (v9 & 1) == 0 || (KiMicrocodeTrackerEnabled = 1, (KeFeatureBits2 & 0x28) == 8) )
      {
LABEL_10:
        v16 = *(unsigned int *)(a1 + 36);
        if ( (_DWORD)v16 && !KiKvaLeakage )
          KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
        KiKvaLeakage = 1;
        if ( (KeFeatureBits2 & 0x10) != 0 )
        {
          if ( !(_DWORD)v16 )
            KiImplementedPhysicalBits = -1;
        }
        else
        {
          v17 = 46;
          v18 = 0LL;
          v19 = 0LL;
          while ( KiCpuTable[v19] != 2 || KiCpuTable[v19 + 1] != *(_DWORD *)(a1 + 1728) )
          {
            ++v18;
            v19 = 4 * v18;
            if ( KiCpuTable[4 * v18 + 2] == 18 )
              goto LABEL_23;
          }
          v17 = KiCpuTable[4 * v18 + 3];
          if ( !v17 )
          {
            _RAX = 0x80000000LL;
            __asm { cpuid }
            if ( (unsigned int)_RAX < 0x80000008 )
            {
              LOBYTE(_RAX) = 36;
            }
            else
            {
              _RAX = 2147483656LL;
              __asm { cpuid }
            }
            v17 = (unsigned __int8)_RAX;
          }
LABEL_23:
          if ( (_DWORD)v16 )
          {
            if ( v17 != KiImplementedPhysicalBits && !KiKvaLeakageSimulate )
              KeBugCheckEx(0x5Du, 0x4C315446uLL, v16, v17, KiImplementedPhysicalBits);
          }
          else
          {
            KiImplementedPhysicalBits = v17;
          }
        }
      }
    }
  }
}
