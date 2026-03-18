/*
 * XREFs of VfThunkRemoveTargetNotify @ 0x14080EE38
 * Callers:
 *     VfTargetDriversRemove @ 0x140160844 (VfTargetDriversRemove.c)
 * Callees:
 *     ViThunkFreeSharedThunksArray @ 0x14080F2A4 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkRemoveTargetNotify(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 24);
  if ( (result & 1) == 0 )
  {
    ((void (*)(void))ViThunkFreeSharedThunksArray)();
    ViThunkFreeSharedThunksArray(a1 + 32);
    ViThunkFreeSharedThunksArray(a1 + 40);
    return ViThunkFreeSharedThunksArray(a1 + 48);
  }
  return result;
}
