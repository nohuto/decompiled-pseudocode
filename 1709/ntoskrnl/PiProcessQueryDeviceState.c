/*
 * XREFs of PiProcessQueryDeviceState @ 0x140552C70
 * Callers:
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x1405E7840 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1400FBB18 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x1400FC934 (PoFxActivateDevice.c)
 *     PnpRequestDeviceAction @ 0x1400FF444 (PnpRequestDeviceAction.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PnpCheckForActiveDependencies @ 0x140527D10 (PnpCheckForActiveDependencies.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeUserFlags @ 0x140552DC0 (PipClearDevNodeUserFlags.c)
 *     IopQueryDeviceState @ 0x140553A7C (IopQueryDeviceState.c)
 *     PipSetDevNodeUserFlags @ 0x14055E900 (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x1405DEE68 (IopIncDisableableDepends.c)
 *     PnpRequestDeviceRemoval @ 0x1405EDBB0 (PnpRequestDeviceRemoval.c)
 *     IopDecDisableableDepends @ 0x1405F2404 (IopDecDisableableDepends.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(_QWORD *Object)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // esi
  char v5; // di
  int v6; // eax
  PVOID **v7; // rcx
  __int64 v9; // r8
  int v10; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v1 = Object[39];
  P = 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  PiPnpRtlBeginOperation((__int64 **)&P);
  PoFxActivateDevice(*(_QWORD *)(v3 + 32));
  *(_DWORD *)(v3 + 704) |= 0x100u;
  v4 = IopQueryDeviceState(Object, &v10);
  if ( v4 < 0 )
  {
    v4 = 0;
    goto LABEL_14;
  }
  v5 = v10;
  if ( (v10 & 2) != 0 )
    PipSetDevNodeUserFlags(v3, 2LL);
  else
    PipClearDevNodeUserFlags(v3, 2LL);
  if ( (v5 & 0x40) != 0 )
    PipSetDevNodeUserFlags(v3, 64LL);
  else
    PipClearDevNodeUserFlags(v3, 64LL);
  v6 = *(_DWORD *)(v3 + 400);
  if ( (v5 & 0x20) != 0 )
  {
    if ( (v6 & 8) == 0 )
    {
      PipSetDevNodeUserFlags(v3, 8LL);
      IopIncDisableableDepends(v3);
    }
  }
  else if ( (v6 & 8) != 0 )
  {
    IopDecDisableableDepends(v3);
    PipClearDevNodeUserFlags(v3, 8LL);
  }
  if ( ((v5 & 9) != 0 || (v5 & 4) != 0 && (v5 & 0x10) == 0) && PnpCheckForActiveDependencies(v3, 3u) )
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
  v7 = (PVOID **)P;
  *(_DWORD *)(v3 + 704) &= ~0x100u;
  if ( v7 )
    PiPnpRtlEndOperation(v7);
  return (unsigned int)v4;
}
