/*
 * XREFs of KiGetXSaveSupportedFeatures @ 0x140180D68
 * Callers:
 *     KiInitializeXSave @ 0x14047C600 (KiInitializeXSave.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KiGetXSaveSupportedFeatures(__int64 a1)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  unsigned __int64 v12; // rdx
  int v18; // r8d
  int v19; // r8d
  unsigned __int64 v20; // rcx
  unsigned int *v21; // rdi
  _DWORD *v22; // rsi
  int v23; // edx
  unsigned int i; // r8d
  unsigned int v25; // ebp
  __int64 v31; // r8

  _RAX = 1LL;
  __asm { cpuid }
  v7 = 0;
  if ( (_RCX & 0x4000000) == 0 )
    goto LABEL_16;
  _RAX = 13LL;
  __asm { cpuid }
  result = (unsigned int)result;
  v12 = (unsigned int)result | ((unsigned __int64)(unsigned int)_RDX << 32);
  *(_QWORD *)a1 = v12;
  if ( (v12 & 3) == 3 )
  {
    *(_DWORD *)(a1 + 16) = _RCX;
    _RAX = 13LL;
    __asm { cpuid }
    v18 = 0;
    if ( (_RAX & 0xA) == 0xA )
      v18 = 2;
    v19 = *(_DWORD *)(a1 + 20) & 0xFFFFFFFC | _RAX & 1 | v18;
    *(_DWORD *)(a1 + 20) = v19;
    if ( (v19 & 2) != 0 )
      v20 = (unsigned int)_RCX | ((unsigned __int64)(unsigned int)_RDX << 32);
    else
      v20 = 0LL;
    *(_QWORD *)(a1 + 536) = v20;
    v21 = (unsigned int *)(a1 + 28);
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 160;
    v22 = (_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 32) = 160;
    v23 = 576;
    *(_DWORD *)(a1 + 36) = 256;
    for ( i = 2; i < 0x40; ++i )
    {
      v25 = v23;
      if ( ((1LL << i) & *(_QWORD *)a1) != 0 )
      {
        _RAX = 13LL;
        __asm { cpuid }
        *(v22 - 1) = _RBX;
        *v22 = _RAX;
        v23 = _RBX + _RAX;
        if ( v25 >= (int)_RBX + (int)_RAX )
          v23 = v25;
        if ( (_RCX & 2) != 0 )
          *(_QWORD *)(a1 + 544) |= 1LL << i;
      }
      v22 += 2;
    }
    result = *(unsigned int *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = v23;
    if ( (result & 2) != 0 )
    {
      v31 = 556LL;
      do
      {
        if ( ((1LL << v7) & *(_QWORD *)(a1 + 536)) != 0 )
        {
          _RAX = 13LL;
          __asm { cpuid }
          *(_DWORD *)(v31 + a1) = result;
          if ( (_RCX & 2) != 0 )
            *(_QWORD *)(a1 + 544) |= 1LL << v7;
        }
        else
        {
          result = *v21;
          *(_DWORD *)(v31 + a1) = result;
        }
        ++v7;
        v31 += 4LL;
        v21 += 2;
      }
      while ( v7 < 0x40 );
    }
  }
  else
  {
LABEL_16:
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
  }
  return result;
}
