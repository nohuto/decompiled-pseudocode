/*
 * XREFs of MiVaRegionSessionSpecialPool @ 0x140217D9C
 * Callers:
 *     MiExpandSpecialPool @ 0x140216C28 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x140216E10 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiVaRegionSessionSpecialPool(__int64 a1, int a2)
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( a2 )
    ++*(_DWORD *)(result + 8000);
  else
    --*(_DWORD *)(result + 8000);
  return result;
}
