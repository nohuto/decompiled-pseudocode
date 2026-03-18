/*
 * XREFs of VfThunkRemoveTargetNotify @ 0x1407A2108
 * Callers:
 *     VfTargetDriversRemove @ 0x1400F8F58 (VfTargetDriversRemove.c)
 * Callees:
 *     ViThunkFreeSharedThunksArray @ 0x1407A2148 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkRemoveTargetNotify(__int64 a1)
{
  unsigned int *v2; // rcx
  __int64 result; // rax

  v2 = (unsigned int *)(a1 + 24);
  result = *v2;
  if ( (result & 1) == 0 )
  {
    ViThunkFreeSharedThunksArray(v2);
    ViThunkFreeSharedThunksArray(a1 + 32);
    ViThunkFreeSharedThunksArray(a1 + 40);
    return ViThunkFreeSharedThunksArray(a1 + 48);
  }
  return result;
}
