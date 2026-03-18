/*
 * XREFs of IoGetIoPriorityHint @ 0x140061250
 * Callers:
 *     IopCallDriverReference @ 0x1400610C0 (IopCallDriverReference.c)
 *     IoRetrievePriorityInfo @ 0x1401070F0 (IoRetrievePriorityInfo.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 * Callees:
 *     <none>
 */

IO_PRIORITY_HINT __stdcall IoGetIoPriorityHint(PIRP Irp)
{
  IO_PRIORITY_HINT result; // eax
  PETHREAD Thread; // rdx

  if ( ((Irp->Flags >> 17) & 7) == 0 )
    return 2;
  result = ((Irp->Flags >> 17) & 7) - 1;
  if ( result < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread )
    {
      if ( Thread[1].Timer.DueTime.LowPart )
        return 2;
    }
  }
  return result;
}
