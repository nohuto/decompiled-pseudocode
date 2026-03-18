/*
 * XREFs of ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0097FB0
 * Callers:
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0097ECC (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4D44 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00F93C4 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0098090 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall DrvRemoveAdapterLuid(struct _LUID a1)
{
  _DWORD *v1; // r14
  int v2; // r12d
  __int64 v3; // rbp
  unsigned int v4; // r8d
  __int64 v5; // r9
  void *v6; // r10
  int v8; // eax
  int v9; // eax
  unsigned int v11; // esi
  struct _LUID v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  v1 = gpGdiSharedMemory;
  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)gpGdiSharedMemory + 393257) )
  {
    while ( !(unsigned __int8)operator==(&v12) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= v4 )
        goto LABEL_6;
    }
    if ( gpDevicesPerLuid[v3]-- == 1 )
    {
      v2 = 1;
      if ( v1[393257] - (_DWORD)v3 != 1 )
      {
        v11 = v1[393257] - v3 - 1;
        memmove(v6, (const void *)(v5 + 8LL * (unsigned int)(v3 + 1)), 8LL * v11);
        memmove(&gpDevicesPerLuid[v3], &gpDevicesPerLuid[(unsigned int)(v3 + 1)], v11);
      }
    }
  }
LABEL_6:
  v8 = v1[393257];
  if ( (_DWORD)v3 == v8 )
    return 3221225524LL;
  if ( v2 )
  {
    v9 = v8 - 1;
    ++v1[393256];
    v1[393257] = v9;
    gpAdapterLuids[v9] = 0LL;
    gpDevicesPerLuid[v1[393257]] = 0;
  }
  return 0LL;
}
