/*
 * XREFs of CleanupTPFrameList @ 0x1C01A6320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C01A508C (-GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z.c)
 *     FreeTPFrame @ 0x1C01A686C (FreeTPFrame.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CleanupTPFrameList(__int64 a1, unsigned int *a2)
{
  struct tagPOINTERINPUTFRAME *result; // rax
  __int64 v3; // rdx

  while ( 1 )
  {
    result = PointerFrameList::GetEarliestTPFrame(0LL, a2);
    if ( !result )
      break;
    FreeTPFrame(result, v3);
  }
  return result;
}
