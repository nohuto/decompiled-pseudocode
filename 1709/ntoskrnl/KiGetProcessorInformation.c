/*
 * XREFs of KiGetProcessorInformation @ 0x140150AFC
 * Callers:
 *     KiIntersectFeaturesWithPolicy @ 0x140428908 (KiIntersectFeaturesWithPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall KiGetProcessorInformation(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax

  _RAX = 0LL;
  __asm { cpuid }
  _RAX = 1LL;
  a1[2] = _RCX;
  *a1 = _RBX;
  a1[1] = _RDX;
  __asm { cpuid }
  *a2 = result;
  *a3 = _RCX;
  *a4 = _RDX;
  return result;
}
