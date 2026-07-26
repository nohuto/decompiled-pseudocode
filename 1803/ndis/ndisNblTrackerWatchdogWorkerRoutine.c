/*
 * XREFs of ndisNblTrackerWatchdogWorkerRoutine @ 0x1C00F0020
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisMLiveBugCheck @ 0x1C004FEBC (ndisMLiveBugCheck.c)
 */

void __fastcall ndisNblTrackerWatchdogWorkerRoutine(_DWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v6; // rdi

  v4 = P[2];
  if ( !v4 || (unsigned int)(v4 - 3) <= 2 )
  {
    v6 = *(_QWORD *)P;
    if ( (_BYTE)KdDebuggerNotPresent )
      ndisMLiveBugCheck(v6, 48LL, v6, *(_QWORD *)(v6 + 3856), 0LL);
    ndisDereferenceMiniport(v6, 0x67u, a3, a4);
  }
  ExFreePoolWithTag(P, 0);
}
