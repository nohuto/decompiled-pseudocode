/*
 * XREFs of NdisMRemoveMiniportInternal @ 0x1C00621EC
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00121B4 (ndisIfDeregisterInterfaceEx.c)
 *     NdisMRemoveMiniport @ 0x1C00621D0 (NdisMRemoveMiniport.c)
 *     ndisMiniportFatalError @ 0x1C00EDC6C (ndisMiniportFatalError.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall NdisMRemoveMiniportInternal(__int64 a1, unsigned __int16 a2)
{
  KIRQL v4; // al
  int v5; // ecx

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x61u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, a1);
  if ( (*(_DWORD *)(a1 + 120) & 0x100) == 0 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    v5 = *(_DWORD *)(a1 + 124);
    if ( (v5 & 0x100) != 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
    }
    else
    {
      *(_DWORD *)(a1 + 124) = v5 | 0x100;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
      ndisLogMiniportEvent(a1, a2);
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 3856));
    }
    if ( (unsigned __int8)byte_1C0099614 >= 4u )
      WPP_SF_q(0x62u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, a1);
  }
}
