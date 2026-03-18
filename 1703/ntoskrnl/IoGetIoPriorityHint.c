/*
 * XREFs of IoGetIoPriorityHint @ 0x14004AF20
 * Callers:
 *     IopCallDriverReference @ 0x14004AD54 (IopCallDriverReference.c)
 *     IoRetrievePriorityInfo @ 0x1400FEEA0 (IoRetrievePriorityInfo.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
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
