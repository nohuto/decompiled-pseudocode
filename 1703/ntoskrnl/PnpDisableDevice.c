/*
 * XREFs of PnpDisableDevice @ 0x14059AF18
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1405594C0 (PnpIsDeviceInstanceEnabled.c)
 * Callees:
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1405705A0 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x140570978 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14059AA20 (PiIrpQueryRemoveDevice.c)
 */

void __fastcall PnpDisableDevice(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 300);
  if ( v2 >= 769 )
  {
    if ( v2 <= 770 )
    {
LABEL_3:
      IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 2);
      IopReleaseDeviceResources(a1, 1);
      goto LABEL_4;
    }
    if ( v2 <= 781 )
    {
      if ( (int)PiIrpQueryRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 0LL) >= 0 )
        goto LABEL_3;
      IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 3);
    }
  }
LABEL_4:
  if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
    PipClearDevNodeProblem(a1);
  PipSetDevNodeProblem(a1, a2, 0);
}
