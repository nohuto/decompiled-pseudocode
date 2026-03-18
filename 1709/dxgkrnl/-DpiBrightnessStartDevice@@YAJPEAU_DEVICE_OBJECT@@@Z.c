/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C011477C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DpiQueryMiniportInterface @ 0x1C0116190 (DpiQueryMiniportInterface.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E2EC8 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E3B20 (-DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rdi
  int MiniportInterface; // r14d
  __int64 v5; // xmm1_8
  int v6; // [rsp+60h] [rbp+8h] BYREF
  char v7; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 4288), 0);
  MiniportInterface = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_2, 88, 2);
  if ( MiniportInterface < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 1122) = 131160;
  *((_QWORD *)DeviceExtension + 556) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 555) = a1;
  *((_QWORD *)DeviceExtension + 557) = DpiDoInterfaceDereference;
  *((_DWORD *)DeviceExtension + 1108) = 65592;
  *((_QWORD *)DeviceExtension + 558) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 559) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 560) = DpiBrightnessIfGet;
  *(_OWORD *)(DeviceExtension + 4344) = *((_OWORD *)DeviceExtension + 277);
  *(_OWORD *)(DeviceExtension + 4360) = *((_OWORD *)DeviceExtension + 278);
  *(_OWORD *)(DeviceExtension + 4376) = *((_OWORD *)DeviceExtension + 279);
  v5 = *((_QWORD *)DeviceExtension + 560);
  *((_QWORD *)DeviceExtension + 550) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 551) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 552) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 549) = v5;
  *((_QWORD *)DeviceExtension + 553) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 1086) = 131160;
  if ( (*((int (__fastcall **)(_QWORD, char *))DeviceExtension + 568))(*((_QWORD *)DeviceExtension + 562), &v7) >= 0
    && (v7 & 1) != 0 )
  {
    v6 |= 1u;
    (*((void (__fastcall **)(_QWORD, int *))DeviceExtension + 569))(*((_QWORD *)DeviceExtension + 562), &v6);
  }
  (*((void (__fastcall **)(_QWORD, char *))DeviceExtension + 567))(
    *((_QWORD *)DeviceExtension + 562),
    DeviceExtension + 4192);
  DeviceExtension[4280] = DeviceExtension[4192];
  DpiBrightnessAISetBacklightOptLevel(a1);
  DpiBrightnessSetupAggregateEvents(a1);
  return (unsigned int)MiniportInterface;
}
