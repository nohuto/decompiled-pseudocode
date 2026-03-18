/*
 * XREFs of Interrupter_DetermineSegmentSizeAndCount @ 0x1C005BF18
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x1C005C93C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Interrupter_DetermineSegmentSizeAndCount(__int64 a1)
{
  _QWORD *v1; // r8
  unsigned int v2; // edx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(v1[16] + 64LL) )
    v2 = 1;
  else
    v2 = (v1[34] & 0x10000000LL) != 0 ? 8 : 4;
  result = *(unsigned int *)(v1[11] + 92LL);
  if ( (unsigned int)result < v2 )
    v2 = *(_DWORD *)(v1[11] + 92LL);
  if ( v2 > 2 )
  {
    result = v1[34];
    if ( (result & 0x1000000000000LL) != 0 )
      v2 = 2;
  }
  *(_DWORD *)(a1 + 108) = v2;
  *(_DWORD *)(a1 + 112) = v2;
  *(_DWORD *)(a1 + 104) = 4096;
  *(_DWORD *)(a1 + 116) = 256;
  return result;
}
