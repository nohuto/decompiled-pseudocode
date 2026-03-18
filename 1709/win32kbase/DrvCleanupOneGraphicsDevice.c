/*
 * XREFs of DrvCleanupOneGraphicsDevice @ 0x1C00A5070
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0058550 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0059068 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0097ECC (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4D44 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00F93C4 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     bSetDeviceSessionUsage @ 0x1C0078940 (bSetDeviceSessionUsage.c)
 */

__int64 __fastcall DrvCleanupOneGraphicsDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 184);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *(_QWORD *)(a1 + 200);
  if ( v3 )
    Win32FreePool(v3);
  v4 = *(_QWORD *)(a1 + 216);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *(_QWORD *)(a1 + 208);
  if ( v5 )
    Win32FreePool(v5);
  v6 = *(_QWORD *)(a1 + 232);
  if ( v6 )
    Win32FreePool(v6);
  if ( *(_QWORD *)(a1 + 240) )
  {
    if ( (*(_DWORD *)(a1 + 164) & 2) != 0 )
      bSetDeviceSessionUsage(a1, 0);
    ObfDereferenceObject(*(PVOID *)(a1 + 240));
  }
  v7 = *(_QWORD *)(a1 + 288);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  return Win32FreePool(a1);
}
