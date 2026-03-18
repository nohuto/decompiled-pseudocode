/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C014774C
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019CFC4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@XZ @ 0x1C017A2D8 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@XZ.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  KSPIN_LOCK *v3; // rcx
  __int64 v4; // rcx

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
  DeferredContext[187] = 0;
  *((_QWORD *)DeferredContext + 24) = 0LL;
  *((_DWORD *)DeferredContext + 50) = -1;
  *((_QWORD *)DeferredContext + 29) = 0LL;
  DeferredContext[2373] = 0;
  *((_WORD *)DeferredContext + 1189) = 0;
  *((_DWORD *)DeferredContext + 598) = 0;
  *((_DWORD *)DeferredContext + 600) = 0;
  *((_WORD *)DeferredContext + 1207) = 256;
  *((_QWORD *)DeferredContext + 307) = 0LL;
  *((_QWORD *)DeferredContext + 308) = 0LL;
  *((_QWORD *)DeferredContext + 309) = 0LL;
  *((_DWORD *)DeferredContext + 622) = 0;
  *((_QWORD *)DeferredContext + 312) = 0LL;
  *((_QWORD *)DeferredContext + 313) = 0LL;
  *((_DWORD *)DeferredContext + 660) = 0;
  *((_DWORD *)DeferredContext + 661) = -1;
  *((_DWORD *)DeferredContext + 662) = -1;
  *(_QWORD *)(DeferredContext + 2652) = 0LL;
  *((_QWORD *)DeferredContext + 357) = 0LL;
  *(_DWORD *)(DeferredContext + 2933) = 0;
  *(_WORD *)(DeferredContext + 2937) = 256;
  *((_DWORD *)DeferredContext + 735) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 2960);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 372) = 0LL;
  *((_DWORD *)DeferredContext + 794) = 0;
  *((_DWORD *)DeferredContext + 816) = 0;
  *((_QWORD *)DeferredContext + 414) = 0LL;
  DeferredContext[3320] = 0;
  *((_DWORD *)DeferredContext + 896) = 0;
  *((_DWORD *)DeferredContext + 942) = -1;
  *((_QWORD *)DeferredContext + 470) = 0LL;
  *((_QWORD *)DeferredContext + 469) = 0LL;
  *((_DWORD *)DeferredContext + 946) = 0;
  *((_QWORD *)DeferredContext + 474) = 0LL;
  *((_QWORD *)DeferredContext + 475) = 0LL;
  *((_QWORD *)DeferredContext + 476) = 0LL;
  *((_DWORD *)DeferredContext + 954) = 0;
  DeferredContext[4016] = 0;
  *((_DWORD *)DeferredContext + 1005) = 0;
  *((_DWORD *)DeferredContext + 1011) = 0;
  *((_QWORD *)DeferredContext + 506) = 0LL;
  *((_DWORD *)DeferredContext + 1014) = 0;
  DeferredContext[4060] = 0;
  *((_QWORD *)DeferredContext + 508) = 0LL;
  *((_DWORD *)DeferredContext + 1018) = 0;
  DeferredContext[4076] = 0;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE((DXG_VMBUS_CHANNEL_BASE *)(DeferredContext + 4080));
  *(_QWORD *)(v4 + 48) = 0LL;
  *((_DWORD *)DeferredContext + 1042) = 0;
  DeferredContext[4172] = 0;
  *((_DWORD *)DeferredContext + 1044) = 0;
  *((_QWORD *)DeferredContext + 523) = 0LL;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 208), NotificationEvent, 1u);
  memset(DeferredContext + 240, 0, 0x590uLL);
  memset(DeferredContext + 1672, 0, 0x60uLL);
  memset(DeferredContext + 1768, 0, 0x248uLL);
  *((_QWORD *)DeferredContext + 20) = 0LL;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  *((_DWORD *)DeferredContext + 1048) = 0;
  *((_DWORD *)DeferredContext + 1049) = -1;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 2432), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3048));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3112), (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3592));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3656), (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc, DeferredContext);
  *((_QWORD *)DeferredContext + 468) = DeferredContext;
  *((_QWORD *)DeferredContext + 467) = DxgkpProcessVSyncPhaseThread;
  *((_QWORD *)DeferredContext + 465) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 472);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3880));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3944), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 501);
  *((_QWORD *)DeferredContext + 482) = DeferredContext;
  *((_QWORD *)DeferredContext + 481) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 479) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 483);
  *((_QWORD *)DeferredContext + 376) = DeferredContext + 3000;
  *((_QWORD *)DeferredContext + 375) = DeferredContext + 3000;
  *((_QWORD *)DeferredContext + 378) = DeferredContext + 3016;
  *((_QWORD *)DeferredContext + 377) = DeferredContext + 3016;
  return (DXGADAPTER *)DeferredContext;
}
