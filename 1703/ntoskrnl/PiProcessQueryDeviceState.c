/*
 * XREFs of PiProcessQueryDeviceState @ 0x1404A79A4
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x140584508 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     PoFxActivateDevice @ 0x14006815C (PoFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140068444 (PoFxIdleDevice.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PnpCheckForActiveDependencies @ 0x14048BE70 (PnpCheckForActiveDependencies.c)
 *     IopQueryDeviceState @ 0x1404A792C (IopQueryDeviceState.c)
 *     PipClearDevNodeUserFlags @ 0x1404A7AF4 (PipClearDevNodeUserFlags.c)
 *     PnpRequestDeviceRemoval @ 0x14056DB8C (PnpRequestDeviceRemoval.c)
 *     IopIncDisableableDepends @ 0x1405CB9FC (IopIncDisableableDepends.c)
 *     PipSetDevNodeUserFlags @ 0x1405CC2B8 (PipSetDevNodeUserFlags.c)
 *     IopDecDisableableDepends @ 0x1405D5EC8 (IopDecDisableableDepends.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(_QWORD *Object)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // esi
  char v5; // di
  int v6; // eax
  char *v7; // rcx
  __int64 v9; // r8
  int v10; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v1 = Object[39];
  P = 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  PiPnpRtlBeginOperation((__int64 **)&P);
  PoFxActivateDevice(*(_QWORD *)(v3 + 32));
  *(_DWORD *)(v3 + 704) |= 0x100u;
  v4 = IopQueryDeviceState((int)Object, &v10);
  if ( v4 < 0 )
  {
    v4 = 0;
    goto LABEL_14;
  }
  v5 = v10;
  if ( (v10 & 2) != 0 )
    PipSetDevNodeUserFlags(v3);
  else
    PipClearDevNodeUserFlags(v3);
  if ( (v5 & 0x40) != 0 )
    PipSetDevNodeUserFlags(v3);
  else
    PipClearDevNodeUserFlags(v3);
  v6 = *(_DWORD *)(v3 + 400);
  if ( (v5 & 0x20) != 0 )
  {
    if ( (v6 & 8) == 0 )
    {
      PipSetDevNodeUserFlags(v3);
      IopIncDisableableDepends(v3);
    }
  }
  else if ( (v6 & 8) != 0 )
  {
    IopDecDisableableDepends(v3);
    PipClearDevNodeUserFlags(v3);
  }
  if ( ((v5 & 9) != 0 || (v5 & 0x14) == 4) && PnpCheckForActiveDependencies(v3, 3u) )
  {
    v9 = 51LL;
  }
  else if ( (v5 & 9) != 0 )
  {
    v9 = (v5 & 1) != 0 ? 29 : 24;
  }
  else
  {
    if ( (v5 & 0x10) != 0 )
    {
      PnpRequestDeviceAction(Object, 13, 0, (v5 & 4) != 0, 0LL, 0LL, 0LL);
      goto LABEL_14;
    }
    if ( (v5 & 4) == 0 )
      goto LABEL_14;
    v9 = 43LL;
  }
  PnpRequestDeviceRemoval(v3, 0LL, v9, 0LL);
  v4 = -1073741823;
LABEL_14:
  PoFxIdleDevice(*(_QWORD *)(v3 + 32));
  v7 = (char *)P;
  *(_DWORD *)(v3 + 704) &= ~0x100u;
  if ( v7 )
    PiPnpRtlEndOperation(v7);
  return (unsigned int)v4;
}
