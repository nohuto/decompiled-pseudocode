/*
 * XREFs of KiDetectBpbMsr @ 0x14017C168
 * Callers:
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall KiDetectBpbMsr(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  int v9; // r9d
  unsigned __int16 v10; // r8
  int v15; // r10d
  char v24; // [rsp+30h] [rbp-20h]

  v24 = 0;
  _RAX = 0LL;
  __asm { cpuid }
  v9 = 0;
  v10 = 0;
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
        v10 = 1;
        v24 = 1;
        v9 = 1;
      }
      if ( (result & 0x10) != 0 )
      {
        result = 128LL;
        v9 = 1;
        v10 |= 0x80u;
        v24 = v10;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 141) == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)result < 0x80000008 )
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
      v9 = 1;
      v24 = v10;
    }
    if ( (_RBX & 0x4000) != 0 )
    {
      v10 |= 8u;
      v9 = 1;
      v24 = v10;
    }
    if ( (_RBX & 0x8000) != 0 )
    {
      v10 |= 0x20u;
      v9 = 1;
      v24 = v10;
    }
    if ( (_RBX & 0x1000000) != 0 )
    {
      v10 |= 0x40u;
      v24 = v10;
    }
    if ( (_RBX & 0x4000000) != 0 )
    {
      result = 192LL;
      v10 |= 0xC0u;
      v24 = v10;
    }
    if ( (v24 & 0x40) != 0 )
      goto LABEL_30;
  }
  else
  {
    if ( (v15 & 0x4000000) != 0 )
    {
      v10 |= 0xCu;
      v9 = 1;
    }
    if ( (v15 & 0x8000000) != 0 )
    {
      v10 |= 0x24u;
      v9 = 1;
    }
    if ( v15 < 0 )
    {
      v10 |= 0x40u;
LABEL_30:
      v9 = 1;
    }
  }
  if ( (a2 & 1) != 0 )
  {
    v10 |= 0x10u;
    *(_BYTE *)(a1 + 249) |= 4u;
  }
  if ( *(_DWORD *)(a1 + 36) )
  {
    result = (unsigned __int16)KiSpeculationFeatures;
    if ( (_WORD)KiSpeculationFeatures != v10 )
      KeBugCheckEx(0x5Du, 0x53524249uLL, (unsigned __int16)KiSpeculationFeatures, v10, 0LL);
  }
  else
  {
    LOWORD(KiSpeculationFeatures) = v10;
  }
  if ( v9 )
    KiMicrocodeTrackerEnabled = 1;
  return result;
}
