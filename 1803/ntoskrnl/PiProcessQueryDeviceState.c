/*
 * XREFs of PiProcessQueryDeviceState @ 0x1405D4790
 * Callers:
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x140612980 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     PoFxIdleDevice @ 0x140146A58 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x140146BA0 (PoFxActivateDevice.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     PnpRequestDeviceRemoval @ 0x1405C75A4 (PnpRequestDeviceRemoval.c)
 *     PnpCheckForActiveDependencies @ 0x1405CE34C (PnpCheckForActiveDependencies.c)
 *     PipClearDevNodeUserFlags @ 0x1405D48DC (PipClearDevNodeUserFlags.c)
 *     IopQueryDeviceState @ 0x1405D4918 (IopQueryDeviceState.c)
 *     PipSetDevNodeUserFlags @ 0x14060509C (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x14064A550 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x140655A70 (IopDecDisableableDepends.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(_QWORD *Object)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // esi
  unsigned int v5; // edi
  int v6; // eax
  PVOID **v7; // rcx
  int v9; // r8d
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
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
    PipClearDevNodeUserFlags(v3);
  if ( (v5 & 0x40) != 0 )
    PipSetDevNodeUserFlags(v3, 64LL);
  else
    PipClearDevNodeUserFlags(v3);
  v6 = *(_DWORD *)(v3 + 400) & 8;
  if ( (v5 & 0x20) != 0 )
  {
    if ( !v6 )
    {
      PipSetDevNodeUserFlags(v3, 8LL);
      IopIncDisableableDepends(v3);
    }
  }
  else if ( v6 )
  {
    IopDecDisableableDepends(v3);
    PipClearDevNodeUserFlags(v3);
  }
  if ( ((v5 & 9) != 0 || (v5 & 4) != 0 && (v5 & 0x10) == 0) && PnpCheckForActiveDependencies(v3, 3u) )
  {
    v9 = 51;
  }
  else if ( (v5 & 9) != 0 )
  {
    v9 = (v5 & 1) != 0 ? 29 : 24;
  }
  else
  {
    if ( (v5 & 0x10) != 0 )
    {
      PnpRequestDeviceAction(Object, 13, 0, (v5 >> 2) & 1, 0LL, 0LL, 0LL);
      goto LABEL_14;
    }
    if ( (v5 & 4) == 0 )
      goto LABEL_14;
    v9 = 43;
  }
  PnpRequestDeviceRemoval(v3, 0, v9, 0);
  v4 = -1073741823;
LABEL_14:
  PoFxIdleDevice(*(_QWORD *)(v3 + 32));
  v7 = (PVOID **)P;
  *(_DWORD *)(v3 + 704) &= ~0x100u;
  if ( v7 )
    PiPnpRtlEndOperation(v7);
  return (unsigned int)v4;
}
