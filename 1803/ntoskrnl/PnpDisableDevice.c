/*
 * XREFs of PnpDisableDevice @ 0x140727528
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1405DC404 (PnpIsDeviceInstanceEnabled.c)
 * Callees:
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x1405C8A58 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1405C8B00 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14073A3B0 (PiIrpQueryRemoveDevice.c)
 */

void __fastcall PnpDisableDevice(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 300);
  if ( v2 >= 769 )
  {
    if ( v2 <= 770 )
      goto LABEL_6;
    if ( v2 > 781 )
      goto LABEL_7;
    if ( (int)PiIrpQueryRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32)) >= 0 )
    {
LABEL_6:
      IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 2);
      IopReleaseDeviceResources(a1, 1);
    }
    else
    {
      IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32), 3);
    }
  }
LABEL_7:
  if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
    PipClearDevNodeProblem(a1);
  PipSetDevNodeProblem(a1, a2, 0);
}
