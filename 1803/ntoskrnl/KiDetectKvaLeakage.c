/*
 * XREFs of KiDetectKvaLeakage @ 0x14047A204
 * Callers:
 *     KiSetFeatureBits @ 0x140479754 (KiSetFeatureBits.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall KiDetectKvaLeakage(__int64 a1)
{
  unsigned __int64 v1; // rax
  char v2; // r9
  __int64 v4; // rcx
  char v10; // r10
  unsigned __int64 v16; // rax
  ULONG_PTR v17; // r10
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx

  v2 = *(_BYTE *)(a1 + 141);
  if ( v2 == 2 )
  {
    if ( *(_BYTE *)(a1 + 64) == 6 )
    {
      LOBYTE(v1) = *(_BYTE *)(a1 + 67);
      if ( (unsigned __int8)v1 <= 0x36u )
      {
        v4 = 0x6000C010000000LL;
        if ( _bittest64(&v4, v1) )
          return;
      }
    }
  }
  else if ( v2 != 3 || *(_BYTE *)(a1 + 64) == 6 && *(_BYTE *)(a1 + 67) == 13 )
  {
    return;
  }
  _RAX = 0LL;
  __asm { cpuid }
  v10 = 0;
  if ( (unsigned int)_RAX < 7 )
    goto LABEL_14;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x20000000) != 0 )
  {
    v16 = __readmsr(0x10Au);
    v10 = v16;
  }
  if ( (v10 & 1) == 0 || (KiMicrocodeTrackerEnabled = 1, (KeFeatureBits2 & 0x28) == 8) )
  {
LABEL_14:
    v17 = *(unsigned int *)(a1 + 36);
    if ( (_DWORD)v17 && !KiKvaLeakage )
      KeBugCheckEx(0x5Du, 0x4B56414CuLL, 0LL, 0LL, 0LL);
    KiKvaLeakage = 1;
    if ( v2 != 2 || (KeFeatureBits2 & 0x10) != 0 )
    {
      if ( !(_DWORD)v17 )
        KiImplementedPhysicalBits = -1;
    }
    else
    {
      v18 = 46;
      v19 = 0LL;
      v20 = 0LL;
      while ( KiCpuTable[v20] != 2 || KiCpuTable[v20 + 1] != *(_DWORD *)(a1 + 1736) )
      {
        ++v19;
        v20 = 4 * v19;
        if ( KiCpuTable[4 * v19 + 2] == 18 )
          goto LABEL_28;
      }
      v18 = KiCpuTable[4 * v19 + 3];
      if ( !v18 )
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
        v18 = (unsigned __int8)_RAX;
      }
LABEL_28:
      if ( (_DWORD)v17 )
      {
        if ( v18 != KiImplementedPhysicalBits && !KiKvaLeakageSimulate )
          KeBugCheckEx(0x5Du, 0x4C315446uLL, v17, v18, KiImplementedPhysicalBits);
      }
      else
      {
        KiImplementedPhysicalBits = v18;
      }
    }
  }
}
