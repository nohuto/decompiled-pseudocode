/*
 * XREFs of ViIoCallbackSnapState @ 0x1407681E8
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1407637D0 (IovpLocalCompletionRoutine.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14005302C (ExAllocateFromNPagedLookasideList.c)
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
