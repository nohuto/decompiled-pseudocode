/*
 * XREFs of PnprQuiesceWorker @ 0x1404185D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PnprCompleteWake @ 0x1401F9EA0 (PnprCompleteWake.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnprQuiesceDevices @ 0x140417C24 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1404186F0 (PnprWakeDevices.c)
 *     PnprLockPagesForReplace @ 0x1406A27C0 (PnprLockPagesForReplace.c)
 */

void __fastcall PnprQuiesceWorker(PVOID P)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  PVOID v5[2]; // [rsp+40h] [rbp-68h] BYREF
  char v6[64]; // [rsp+50h] [rbp-58h] BYREF

  v5[0] = (PVOID)(PnprContext + 10520);
  v5[1] = (PVOID)(PnprContext + 10568);
  if ( KeWaitForMultipleObjects(2u, v5, WaitAny, Executive, 0, 0, 0LL, 0LL) != 1 )
  {
    PnprLockPagesForReplace();
    v2 = PnprQuiesceDevices(v6);
    v3 = PnprContext;
    v4 = v2;
    *(_DWORD *)(PnprContext + 10616) = v2;
    KeSetEvent((PRKEVENT)(v3 + 10544), 0, 0);
    if ( v4 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(PnprContext + 10568), Executive, 0, 0, 0LL);
      PnprWakeDevices(v6);
    }
    PnprCompleteWake();
  }
  KeSetEvent((PRKEVENT)(PnprContext + 10592), 0, 0);
  ExFreePoolWithTag(P, 0x51706E50u);
}
