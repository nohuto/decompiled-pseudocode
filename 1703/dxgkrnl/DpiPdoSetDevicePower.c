/*
 * XREFs of DpiPdoSetDevicePower @ 0x1C0102D24
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C000F780 (DpiPdoDispatchPower.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00A86E0 (DpiPdoDispatchInternalIoctl.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0103FE8 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C010323C (DpiDxgkDdiSetPowerState.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C01126F4 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C01127C4 (DxgkAcquireAdapterDdiSync.c)
 */

__int64 __fastcall DpiPdoSetDevicePower(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 v8; // r12
  __int64 v9; // r14
  struct _KEVENT *v10; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v8 = *(_QWORD *)(v3 + 40);
  v9 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_DWORD *)(v3 + 284) != a2 )
  {
    *(_DWORD *)(v3 + 284) = a2;
    if ( (*(_BYTE *)(v9 + 3713) & 4) == 0 )
    {
      v4 = DpiAcquireCoreSyncAccessSafe(a1, 1);
      if ( v4 >= 0 )
      {
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3704), 1LL);
        DpiDxgkDdiSetPowerState(v8, *(_QWORD *)(v3 + 48), *(_DWORD *)(v3 + 504), a2, a3);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v9 + 3704));
        DpiReleaseCoreSyncAccessSafe(a1, 1);
        v4 = 0;
      }
    }
    v10 = (struct _KEVENT *)(v3 + 984);
    if ( a2 == 1 )
    {
      KeClearEvent(v10);
      KeSetEvent((PRKEVENT)(v3 + 1008), 0, 0);
    }
    else
    {
      KeSetEvent(v10, 0, 0);
      KeClearEvent((PRKEVENT)(v3 + 1008));
    }
  }
  return (unsigned int)v4;
}
