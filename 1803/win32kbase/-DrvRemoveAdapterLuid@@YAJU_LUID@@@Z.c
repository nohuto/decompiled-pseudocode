/*
 * XREFs of ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00D0670
 * Callers:
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00CC81C (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CD0F0 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00D3898 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0052E00 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall DrvRemoveAdapterLuid(struct _LUID a1)
{
  _DWORD *v1; // r14
  int v2; // r12d
  __int64 v3; // rbp
  unsigned int v4; // r8d
  __int64 v5; // r9
  void *v6; // r10
  unsigned int v8; // esi
  int v9; // eax
  int v11; // eax
  struct _LUID v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v1 = gpGdiSharedMemory;
  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)gpGdiSharedMemory + 393257) )
  {
    while ( !operator==(&v12, &gpAdapterLuids[v3]) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v4 )
        goto LABEL_8;
    }
    if ( gpDevicesPerLuid[v3]-- == 1 )
    {
      v2 = 1;
      if ( v1[393257] - (_DWORD)v3 != 1 )
      {
        v8 = v1[393257] - v3 - 1;
        memmove(v6, (const void *)(v5 + 8LL * (unsigned int)(v3 + 1)), 8LL * v8);
        memmove(&gpDevicesPerLuid[v3], &gpDevicesPerLuid[(unsigned int)(v3 + 1)], v8);
      }
    }
  }
LABEL_8:
  v9 = v1[393257];
  if ( (_DWORD)v3 == v9 )
    return 3221225524LL;
  if ( v2 )
  {
    v11 = v9 - 1;
    ++v1[393256];
    v1[393257] = v11;
    gpAdapterLuids[v11] = 0LL;
    gpDevicesPerLuid[v1[393257]] = 0;
  }
  return 0LL;
}
