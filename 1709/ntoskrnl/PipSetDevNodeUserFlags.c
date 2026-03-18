/*
 * XREFs of PipSetDevNodeUserFlags @ 0x14055E900
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PiProcessQueryDeviceState @ 0x140552C70 (PiProcessQueryDeviceState.c)
 *     PnpTrackQueryRemoveDevices @ 0x14055D26C (PnpTrackQueryRemoveDevices.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14055EA44 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PnpShutdownDevices @ 0x1406BDC40 (PnpShutdownDevices.c)
 *     PiProcessSetDeviceProblem @ 0x1406D1CAC (PiProcessSetDeviceProblem.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14052DAE4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

char __fastcall PipSetDevNodeUserFlags(__int64 a1, int a2)
{
  int v2; // edi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(a1 + 400) = a2 | v2;
  LOBYTE(v4) = v2 ^ (a2 | v2);
  if ( (((unsigned __int16)v2 ^ (unsigned __int16)(a2 | v2)) & 0x347) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(a1, v5, 11);
      v4 = *(_DWORD *)(a1 + 400) ^ v2;
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 0x40) != 0 )
        LOBYTE(v4) = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 29);
      if ( ((*(_BYTE *)(a1 + 400) ^ (unsigned __int8)v2) & 4) != 0 )
        LOBYTE(v4) = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 30);
    }
  }
  return v4;
}
