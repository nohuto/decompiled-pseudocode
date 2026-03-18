/*
 * XREFs of KiDetectKvaLeakage @ 0x1404035D4
 * Callers:
 *     KiSetFeatureBits @ 0x14040FD30 (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall KiDetectKvaLeakage(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v3; // rcx
  char v5; // r9
  unsigned __int64 v15; // rax
  ULONG_PTR v16; // r10
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // ecx

  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 67);
    if ( *(_BYTE *)(a1 + 64) != 6 || (unsigned __int8)v1 > 0x36u || (v3 = 0x6000C010000000LL, !_bittest64(&v3, v1)) )
    {
      _RAX = 0LL;
      v5 = 0;
      __asm { cpuid }
      if ( (unsigned int)_RAX < 7 )
        goto LABEL_10;
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RDX & 0x20000000) != 0 )
      {
        v15 = __readmsr(0x10Au);
        v5 = v15;
      }
      if ( (v5 & 1) == 0 || (KiMicrocodeTrackerEnabled = 1, (KeFeatureBits2 & 0x28) == 8) )
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
          v17 = 0LL;
          v18 = 0LL;
          v19 = 46;
          while ( KiCpuTable[v18] != 2 || KiCpuTable[v18 + 1] != *(_DWORD *)(a1 + 1728) )
          {
            ++v17;
            v18 = 4 * v17;
            if ( KiCpuTable[4 * v17 + 2] == 18 )
              goto LABEL_23;
          }
          v19 = KiCpuTable[4 * v17 + 3];
          if ( !v19 )
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
            v19 = (unsigned __int8)_RAX;
          }
LABEL_23:
          if ( (_DWORD)v16 )
          {
            if ( v19 != KiImplementedPhysicalBits && !KiKvaLeakageSimulate )
              KeBugCheckEx(0x5Du, 0x4C315446uLL, v16, v19, KiImplementedPhysicalBits);
          }
          else
          {
            KiImplementedPhysicalBits = v19;
          }
        }
      }
    }
  }
}
