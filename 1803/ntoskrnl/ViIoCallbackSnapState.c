/*
 * XREFs of ViIoCallbackSnapState @ 0x140816ED4
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1408124C0 (IovpLocalCompletionRoutine.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 */

_DWORD *ViIoCallbackSnapState()
{
  _DWORD *result; // rax
  unsigned __int8 CurrentIrql; // cl

  result = ExAllocateFromNPagedLookasideList(&ViIoCallbackStateLookaside);
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)result = CurrentIrql;
    result[1] = KeGetCurrentThread()->WaitBlock[3].SpareLong;
  }
  return result;
}
