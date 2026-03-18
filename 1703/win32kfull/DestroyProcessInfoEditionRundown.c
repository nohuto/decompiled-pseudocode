/*
 * XREFs of DestroyProcessInfoEditionRundown @ 0x1C00B9DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C00B9E34 (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DestroyProcessInfoEditionRundown(struct tagPROCESSINFO *a1)
{
  PRKEVENT v2; // rdi

  v2 = aDeviceTemplate[153];
  if ( v2 && v2[1].Header.WaitListHead.Flink == *(struct _LIST_ENTRY **)a1 )
  {
    if ( *(_QWORD *)&v2[2].Header.Lock )
      HMAssignmentUnlock(&v2[2]);
    if ( v2[2].Header.WaitListHead.Flink )
      HMAssignmentUnlock(&v2[2].Header.WaitListHead);
  }
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 220) )
    {
      TraceLoggingProcessUsageOnTerminationEvent(a1);
      *((_DWORD *)a1 + 220) = 0;
    }
  }
}
