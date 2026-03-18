/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C011432C
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0119870 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  KSPIN_LOCK *v3; // rcx

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_QWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 1) = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_DWORD *)DeferredContext + 22) = -1;
  *((_QWORD *)DeferredContext + 10) = 0LL;
  *((_QWORD *)DeferredContext + 9) = 0LL;
  *((_DWORD *)DeferredContext + 28) = -1;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 12) = 0LL;
  *((_QWORD *)DeferredContext + 16) = 0LL;
  *((_QWORD *)DeferredContext + 15) = 0LL;
  *((_DWORD *)DeferredContext + 34) = 0;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_DWORD *)DeferredContext + 38) = 2;
  *((_DWORD *)DeferredContext + 44) = 0;
  *(_DWORD *)(DeferredContext + 181) = 0x10000;
  *(_WORD *)(DeferredContext + 185) = 0;
  *((_QWORD *)DeferredContext + 24) = 0LL;
  *((_DWORD *)DeferredContext + 50) = -1;
  *((_QWORD *)DeferredContext + 29) = 0LL;
  DeferredContext[2229] = 0;
  *((_WORD *)DeferredContext + 1117) = 0;
  DeferredContext[2236] = 0;
  *((_DWORD *)DeferredContext + 562) = 0;
  *((_DWORD *)DeferredContext + 564) = 0;
  *(_WORD *)(DeferredContext + 2269) = 256;
  *((_QWORD *)DeferredContext + 288) = 0LL;
  *((_QWORD *)DeferredContext + 289) = 0LL;
  *((_QWORD *)DeferredContext + 290) = 0LL;
  *((_DWORD *)DeferredContext + 584) = 0;
  *((_QWORD *)DeferredContext + 293) = 0LL;
  *((_QWORD *)DeferredContext + 294) = 0LL;
  *((_DWORD *)DeferredContext + 622) = 0;
  *((_DWORD *)DeferredContext + 623) = -1;
  *((_DWORD *)DeferredContext + 624) = -1;
  *(_QWORD *)(DeferredContext + 2500) = 0LL;
  *((_QWORD *)DeferredContext + 338) = 0LL;
  *(_DWORD *)(DeferredContext + 2781) = 0;
  *(_WORD *)(DeferredContext + 2785) = 256;
  *((_DWORD *)DeferredContext + 697) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 2808);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 353) = 0LL;
  *((_DWORD *)DeferredContext + 756) = 0;
  *((_DWORD *)DeferredContext + 778) = 0;
  *((_QWORD *)DeferredContext + 394) = 0LL;
  DeferredContext[3160] = 0;
  *((_DWORD *)DeferredContext + 856) = 0;
  *((_DWORD *)DeferredContext + 902) = -1;
  *((_QWORD *)DeferredContext + 450) = 0LL;
  *((_QWORD *)DeferredContext + 449) = 0LL;
  *((_DWORD *)DeferredContext + 906) = 0;
  *((_QWORD *)DeferredContext + 454) = 0LL;
  *((_QWORD *)DeferredContext + 455) = 0LL;
  *((_QWORD *)DeferredContext + 456) = 0LL;
  *((_DWORD *)DeferredContext + 914) = 0;
  DeferredContext[3856] = 0;
  *((_DWORD *)DeferredContext + 965) = 0;
  *((_DWORD *)DeferredContext + 971) = 0;
  *((_QWORD *)DeferredContext + 486) = 0LL;
  DeferredContext[3896] = 0;
  *((_QWORD *)DeferredContext + 488) = 0LL;
  *((_DWORD *)DeferredContext + 981) = 0;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 208), NotificationEvent, 1u);
  memset(DeferredContext + 240, 0, 0x508uLL);
  memset(DeferredContext + 1536, 0, 0x60uLL);
  memset(DeferredContext + 1632, 0, 0x240uLL);
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  KeInitializeEvent((PRKEVENT)DeferredContext + 95, NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(DeferredContext + 2896));
  KeInitializeDpc((PRKDPC)(DeferredContext + 2960), (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3432));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3496), (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 448) = DeferredContext;
  *((_QWORD *)DeferredContext + 447) = DxgkpProcessVSyncPhaseThread;
  *((_QWORD *)DeferredContext + 445) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 452);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3720));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3784), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 481);
  *((_QWORD *)DeferredContext + 462) = DeferredContext;
  *((_QWORD *)DeferredContext + 461) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 459) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 463);
  *((_QWORD *)DeferredContext + 357) = DeferredContext + 2848;
  *((_QWORD *)DeferredContext + 356) = DeferredContext + 2848;
  *((_QWORD *)DeferredContext + 359) = DeferredContext + 2864;
  *((_QWORD *)DeferredContext + 358) = DeferredContext + 2864;
  return (DXGADAPTER *)DeferredContext;
}
