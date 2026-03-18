/*
 * XREFs of PnprQuiesceWorker @ 0x140484180
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PnprCompleteWake @ 0x14023C958 (PnprCompleteWake.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnprQuiesceDevices @ 0x1404837F0 (PnprQuiesceDevices.c)
 *     PnprWakeDevices @ 0x1404842A0 (PnprWakeDevices.c)
 *     PnprLockPagesForReplace @ 0x140734A00 (PnprLockPagesForReplace.c)
 */

void __fastcall PnprQuiesceWorker(PVOID P)
{
  int v2; // eax
  struct _KEVENT *v3; // rcx
  int v4; // ebx
  PVOID v5[2]; // [rsp+40h] [rbp-68h] BYREF
  char v6[64]; // [rsp+50h] [rbp-58h] BYREF

  v5[0] = (PVOID)(PnprContext + 20760);
  v5[1] = (PVOID)(PnprContext + 20808);
  if ( KeWaitForMultipleObjects(2u, v5, WaitAny, Executive, 0, 0, 0LL, 0LL) != 1 )
  {
    PnprLockPagesForReplace();
    v2 = PnprQuiesceDevices(v6);
    v3 = (struct _KEVENT *)PnprContext;
    v4 = v2;
    *(_DWORD *)(PnprContext + 20856) = v2;
    KeSetEvent(v3 + 866, 0, 0);
    if ( v4 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(PnprContext + 20808), Executive, 0, 0, 0LL);
      PnprWakeDevices(v6);
    }
    PnprCompleteWake();
  }
  KeSetEvent((PRKEVENT)(PnprContext + 20832), 0, 0);
  ExFreePoolWithTag(P, 0x51706E50u);
}
