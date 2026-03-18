/*
 * XREFs of DpiPdoSetDevicePower @ 0x1C020DAF8
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C003A7D0 (DpiPdoDispatchPower.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C0109360 (DpiPdoDispatchInternalIoctl.c)
 *     DxgkPowerOnOffMonitor @ 0x1C01FC280 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C010930C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0109340 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C020ABE0 (DpiDxgkDdiSetPowerState.c)
 */

__int64 __fastcall DpiPdoSetDevicePower(__int64 a1, int a2, unsigned int a3)
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
    if ( (*(_BYTE *)(v9 + 3737) & 4) == 0 )
    {
      v4 = DpiAcquireCoreSyncAccessSafe(a1, 1);
      if ( v4 >= 0 )
      {
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3728), 1);
        DpiDxgkDdiSetPowerState(v8, *(_QWORD *)(v3 + 48), *(unsigned int *)(v3 + 504), a2, a3);
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v9 + 3728));
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
