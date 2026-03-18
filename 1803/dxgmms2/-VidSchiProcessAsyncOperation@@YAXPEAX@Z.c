/*
 * XREFs of ?VidSchiProcessAsyncOperation@@YAXPEAX@Z @ 0x1C0030EB0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C00BEDF4 (VidSchiCreateNodeSchedulingLog.c)
 */

void __fastcall VidSchiProcessAsyncOperation(_QWORD *P)
{
  if ( *((_DWORD *)P + 10) == 1 )
    VidSchiCreateNodeSchedulingLog(P[6], *((unsigned int *)P + 14));
  _InterlockedDecrement((volatile signed __int32 *)(P[4] + 6224LL));
  KeSetEvent((PRKEVENT)(P[4] + 6232LL), 0, 0);
  ExFreePoolWithTag(P, 0);
}
