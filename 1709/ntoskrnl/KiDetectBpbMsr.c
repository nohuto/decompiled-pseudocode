/*
 * XREFs of KiDetectBpbMsr @ 0x14017B87C
 * Callers:
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int16 __fastcall KiDetectBpbMsr(__int64 a1, char a2)
{
  int v5; // r9d
  unsigned __int16 v10; // r8
  int v15; // r10d
  __int16 v26; // cx

  _RAX = 0LL;
  v5 = 0;
  __asm { cpuid }
  v10 = 0;
  if ( (unsigned int)_RAX < 7 )
  {
    v15 = 0;
  }
  else
  {
    _RAX = 7LL;
    __asm { cpuid }
    v15 = _RDX;
    if ( (_RDX & 0x20000000) != 0 )
    {
      _RAX = __readmsr(0x10Au);
      v10 = (_RAX & 2) != 0;
      LOBYTE(v5) = (_RAX & 2) != 0;
      if ( (_RAX & 0x10) != 0 )
      {
        LOWORD(_RAX) = 128;
        v5 = 1;
        v10 |= 0x80u;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x1000) != 0 )
    {
      v10 |= 4u;
      v5 = 1;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v10 |= 8u;
      v5 = 1;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v10 |= 0x20u;
      v5 = 1;
    }
    v26 = v10 | 0x40;
    if ( (_RBX & 0x1000000) == 0 )
      v26 = v10;
    LOWORD(_RAX) = v26 | 0xC0;
    if ( (_RBX & 0x4000000) == 0 )
      LOWORD(_RAX) = v26;
    v10 = _RAX;
    if ( (_RAX & 0x40) != 0 )
      v5 = 1;
  }
  else
  {
    if ( (v15 & 0x4000000) != 0 )
    {
      v10 |= 0xCu;
      v5 = 1;
    }
    if ( (v15 & 0x8000000) != 0 )
    {
      v10 |= 0x24u;
      v5 = 1;
    }
    if ( v15 < 0 )
    {
      v10 |= 0x40u;
      v5 = 1;
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v10 |= 0x10u;
    *(_BYTE *)(a1 + 249) |= 4u;
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    LOWORD(_RAX) = KiCpu0HardwareFlags;
    if ( KiCpu0HardwareFlags != v10 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, (unsigned __int16)KiCpu0HardwareFlags, v10, 0LL);
  }
  else
  {
    KiCpu0HardwareFlags = v10;
    LOWORD(KiSpeculationFeatures) = v10;
  }
  if ( v5 )
    KiMicrocodeTrackerEnabled = 1;
  return _RAX;
}
