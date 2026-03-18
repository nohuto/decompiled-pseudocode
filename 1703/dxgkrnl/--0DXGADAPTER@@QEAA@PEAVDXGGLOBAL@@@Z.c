/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C010DE4C
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0110684 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
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
  DeferredContext[180] = 0;
  *(_DWORD *)(DeferredContext + 182) = 0x10000;
  DeferredContext[186] = 0;
  *((_QWORD *)DeferredContext + 24) = 0LL;
  *((_DWORD *)DeferredContext + 50) = -1;
  *((_QWORD *)DeferredContext + 29) = 0LL;
  DeferredContext[2205] = 0;
  *((_WORD *)DeferredContext + 1105) = 0;
  *((_DWORD *)DeferredContext + 556) = 0;
  *((_DWORD *)DeferredContext + 558) = 0;
  *((_WORD *)DeferredContext + 1122) = 256;
  *((_QWORD *)DeferredContext + 285) = 0LL;
  *((_QWORD *)DeferredContext + 286) = 0LL;
  *((_QWORD *)DeferredContext + 287) = 0LL;
  *((_DWORD *)DeferredContext + 578) = 0;
  *((_QWORD *)DeferredContext + 290) = 0LL;
  *((_QWORD *)DeferredContext + 291) = 0LL;
  *((_DWORD *)DeferredContext + 616) = 0;
  *((_DWORD *)DeferredContext + 617) = -1;
  *((_DWORD *)DeferredContext + 618) = -1;
  *(_QWORD *)(DeferredContext + 2476) = 0LL;
  *((_QWORD *)DeferredContext + 335) = 0LL;
  *(_DWORD *)(DeferredContext + 2757) = 0;
  *(_WORD *)(DeferredContext + 2761) = 256;
  *((_DWORD *)DeferredContext + 691) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 2784);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 350) = 0LL;
  *((_DWORD *)DeferredContext + 750) = 0;
  *((_DWORD *)DeferredContext + 772) = 0;
  *((_QWORD *)DeferredContext + 392) = 0LL;
  DeferredContext[3144] = 0;
  *((_DWORD *)DeferredContext + 852) = 0;
  *((_DWORD *)DeferredContext + 898) = -1;
  *((_QWORD *)DeferredContext + 448) = 0LL;
  *((_QWORD *)DeferredContext + 447) = 0LL;
  *((_DWORD *)DeferredContext + 902) = 0;
  *((_QWORD *)DeferredContext + 452) = 0LL;
  *((_QWORD *)DeferredContext + 453) = 0LL;
  *((_QWORD *)DeferredContext + 454) = 0LL;
  *((_DWORD *)DeferredContext + 910) = 0;
  DeferredContext[3840] = 0;
  *((_DWORD *)DeferredContext + 961) = 0;
  *((_DWORD *)DeferredContext + 967) = 0;
  *((_QWORD *)DeferredContext + 484) = 0LL;
  DeferredContext[3880] = 0;
  *((_DWORD *)DeferredContext + 973) = 0;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 208), NotificationEvent, 1u);
  memset(DeferredContext + 240, 0, 0x4F0uLL);
  memset(DeferredContext + 1512, 0, 0x60uLL);
  memset(DeferredContext + 1608, 0, 0x240uLL);
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  KeInitializeEvent((PRKEVENT)DeferredContext + 94, NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(DeferredContext + 2872));
  KeInitializeDpc((PRKDPC)(DeferredContext + 2936), (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3416));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3480), (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 446) = DeferredContext;
  *((_QWORD *)DeferredContext + 445) = DxgkpProcessVSyncPhaseThread;
  *((_QWORD *)DeferredContext + 443) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 450);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3704));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3768), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 479);
  *((_QWORD *)DeferredContext + 460) = DeferredContext;
  *((_QWORD *)DeferredContext + 459) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 457) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 461);
  *((_QWORD *)DeferredContext + 354) = DeferredContext + 2824;
  *((_QWORD *)DeferredContext + 353) = DeferredContext + 2824;
  *((_QWORD *)DeferredContext + 356) = DeferredContext + 2840;
  *((_QWORD *)DeferredContext + 355) = DeferredContext + 2840;
  return (DXGADAPTER *)DeferredContext;
}
