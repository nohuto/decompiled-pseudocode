/*
 * XREFs of ?IsInParallelMode@CPartitionVerticalBlankScheduler@@UEBA_NXZ @ 0x180148DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CPartitionVerticalBlankScheduler::IsInParallelMode(CPartitionVerticalBlankScheduler *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 7638) || *((_DWORD *)this + 7639) )
    return 1;
  return result;
}
