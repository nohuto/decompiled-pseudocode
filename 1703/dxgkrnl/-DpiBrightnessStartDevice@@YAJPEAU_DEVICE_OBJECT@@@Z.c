/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C010E2F4
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DpiQueryMiniportInterface @ 0x1C010FC78 (DpiQueryMiniportInterface.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01C8D84 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C01C99D0 (-DpiBrightnessSetupAggregateEvents@@YAXPEAU_DEVICE_OBJECT@@@Z.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rdi
  int MiniportInterface; // r14d
  __int64 v5; // xmm1_8
  int v6; // [rsp+60h] [rbp+8h] BYREF
  char v7; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 4192), 0);
  MiniportInterface = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_2, 88, 2);
  if ( MiniportInterface < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 1098) = 131160;
  *((_QWORD *)DeviceExtension + 544) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 543) = a1;
  *((_QWORD *)DeviceExtension + 545) = DpiDoInterfaceDereference;
  *((_DWORD *)DeviceExtension + 1084) = 65592;
  *((_QWORD *)DeviceExtension + 546) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 547) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 548) = DpiBrightnessIfGet;
  *(_OWORD *)(DeviceExtension + 4248) = *((_OWORD *)DeviceExtension + 271);
  *(_OWORD *)(DeviceExtension + 4264) = *((_OWORD *)DeviceExtension + 272);
  *(_OWORD *)(DeviceExtension + 4280) = *((_OWORD *)DeviceExtension + 273);
  v5 = *((_QWORD *)DeviceExtension + 548);
  *((_QWORD *)DeviceExtension + 538) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 539) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 540) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 537) = v5;
  *((_QWORD *)DeviceExtension + 541) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 1062) = 131160;
  if ( (*((int (__fastcall **)(_QWORD, char *))DeviceExtension + 556))(*((_QWORD *)DeviceExtension + 550), &v7) >= 0
    && (v7 & 1) != 0 )
  {
    v6 |= 1u;
    (*((void (__fastcall **)(_QWORD, int *))DeviceExtension + 557))(*((_QWORD *)DeviceExtension + 550), &v6);
  }
  (*((void (__fastcall **)(_QWORD, char *))DeviceExtension + 555))(
    *((_QWORD *)DeviceExtension + 550),
    DeviceExtension + 4096);
  DeviceExtension[4184] = DeviceExtension[4096];
  DpiBrightnessAISetBacklightOptLevel(a1);
  DpiBrightnessSetupAggregateEvents(a1);
  return (unsigned int)MiniportInterface;
}
