/*
 * XREFs of ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00CC738
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00424C0 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CC81C (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0052E00 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

__int64 __fastcall DrvAddAdapterLuid(struct _LUID a1)
{
  _DWORD *v1; // r10
  struct _LUID v2; // r8
  unsigned int v3; // r11d
  __int64 v5; // r9
  __int64 v6; // r9
  unsigned int v7; // r11d
  struct _LUID v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v1 = gpGdiSharedMemory;
  v2 = a1;
  v3 = *((_DWORD *)gpGdiSharedMemory + 393257);
  if ( v3 >= (unsigned int)gcMaximumAdapterCount )
    return 3221225612LL;
  v5 = 0LL;
  if ( v3 )
  {
    while ( !operator==(&v8, &gpAdapterLuids[v5]) )
    {
      v5 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v5 >= v7 )
        goto LABEL_6;
    }
    ++gpDevicesPerLuid[v6];
  }
  else
  {
LABEL_6:
    gpAdapterLuids[v5] = v2;
    ++gpDevicesPerLuid[v5];
    ++v1[393257];
    ++v1[393256];
  }
  return 0LL;
}
