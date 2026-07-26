/*
 * XREFs of ndisNblTrackerWatchdogWorkerRoutine @ 0x1C00E32D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisMLiveBugCheck @ 0x1C00509AC (ndisMLiveBugCheck.c)
 */

void __fastcall ndisNblTrackerWatchdogWorkerRoutine(_DWORD *a1)
{
  int v1; // eax
  __int64 v3; // rdi

  v1 = a1[2];
  if ( !v1 || (unsigned int)(v1 - 3) <= 2 )
  {
    v3 = *(_QWORD *)a1;
    if ( (_BYTE)KdDebuggerNotPresent )
      ndisMLiveBugCheck(v3, 48LL, v3, *(_QWORD *)(v3 + 3856), 0LL);
    ndisDereferenceMiniport(v3, 0x67u);
  }
  ExFreePoolWithTag(a1, 0);
}
