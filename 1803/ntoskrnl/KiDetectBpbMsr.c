/*
 * XREFs of KiDetectBpbMsr @ 0x140171D04
 * Callers:
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiDetectAmdSsbdSupport @ 0x1401A5F9C (KiDetectAmdSsbdSupport.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall KiDetectBpbMsr(__int64 a1, char a2)
{
  __int64 v2; // r11
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  int v15; // r10d
  _DWORD v26[6]; // [rsp+30h] [rbp-20h] BYREF

  v2 = a1;
  v26[0] = 0;
  _RAX = 0LL;
  __asm { cpuid }
  v9 = 0LL;
  v10 = 0LL;
  if ( (unsigned int)result < 7 )
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
      result = __readmsr(0x10Au);
      if ( (result & 2) != 0 )
      {
        v10 = 1LL;
        LOWORD(v26[0]) = 1;
      }
      LOBYTE(v9) = (result & 2) != 0;
      if ( (result & 0x10) != 0 )
      {
        result = 128LL;
        v9 = 1LL;
        LOWORD(v10) = v10 | 0x80;
        LOWORD(v26[0]) = v10;
      }
    }
  }
  if ( *(_BYTE *)(v2 + 141) == 1 )
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
      LOWORD(v10) = v10 | 4;
      v9 = 1LL;
      LOWORD(v26[0]) = v10;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      LOWORD(v10) = v10 | 8;
      v9 = 1LL;
      LOWORD(v26[0]) = v10;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      LOWORD(v10) = v10 | 0x20;
      v9 = 1LL;
      LOWORD(v26[0]) = v10;
    }
    result = KiDetectAmdSsbdSupport((unsigned int)_RBX, v26, v10, v9);
    LOWORD(v10) = v26[0];
    if ( !(_BYTE)result )
      goto LABEL_27;
LABEL_26:
    LODWORD(v9) = 1;
    goto LABEL_27;
  }
  if ( (v15 & 0x4000000) != 0 )
  {
    LOWORD(v10) = v10 | 0xC;
    LODWORD(v9) = 1;
  }
  if ( (v15 & 0x8000000) != 0 )
  {
    LOWORD(v10) = v10 | 0x24;
    LODWORD(v9) = 1;
  }
  if ( v15 < 0 )
  {
    LOWORD(v10) = v10 | 0x40;
    goto LABEL_26;
  }
LABEL_27:
  if ( (a2 & 1) != 0 )
  {
    LOWORD(v10) = v10 | 0x10;
    *(_BYTE *)(v2 + 249) |= 4u;
  }
  if ( *(_DWORD *)(v2 + 36) )
  {
    result = (unsigned __int16)KiCpu0HardwareFlags;
    if ( KiCpu0HardwareFlags != (_WORD)v10 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, (unsigned __int16)KiCpu0HardwareFlags, (unsigned __int16)v10, 0LL);
  }
  else
  {
    KiCpu0HardwareFlags = v10;
    LOWORD(KiSpeculationFeatures) = v10;
  }
  if ( (_DWORD)v9 )
    KiMicrocodeTrackerEnabled = 1;
  return result;
}
