/*
 * XREFs of DestroyProcessInfoEditionRundown @ 0x1C0043340
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C00430FC (-TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall DestroyProcessInfoEditionRundown(struct tagPROCESSINFO *a1)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)aDeviceTemplate[153];
  if ( v2 && v2[4] == *(_QWORD *)a1 )
  {
    if ( v2[6] )
      HMAssignmentUnlock(v2 + 6);
    if ( v2[7] )
      HMAssignmentUnlock(v2 + 7);
  }
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 222) )
    {
      TraceLoggingProcessUsageOnTerminationEvent(a1);
      *((_DWORD *)a1 + 222) = 0;
    }
  }
}
