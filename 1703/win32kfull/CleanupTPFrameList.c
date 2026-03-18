/*
 * XREFs of CleanupTPFrameList @ 0x1C019A6F0
 * Callers:
 *     <none>
 * Callees:
 *     FreeTPFrame @ 0x1C01992F8 (FreeTPFrame.c)
 *     ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C01994F0 (-GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z.c)
 */

__int64 *__fastcall CleanupTPFrameList(__int64 a1, unsigned int *a2)
{
  __int64 *result; // rax

  while ( 1 )
  {
    result = (__int64 *)PointerFrameList::GetEarliestTPFrame(0LL, a2);
    if ( !result )
      break;
    FreeTPFrame(result);
  }
  return result;
}
