/*
 * XREFs of NVMeSetFStateIdleTimer @ 0x1C0006130
 * Callers:
 *     NVMePowerActive @ 0x1C000627C (NVMePowerActive.c)
 *     NVMePowerSetFState @ 0x1C00063EC (NVMePowerSetFState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeSetFStateIdleTimer(__int64 a1)
{
  unsigned int v2; // ecx
  int v3; // eax

  v2 = 0;
  if ( *(_DWORD *)(a1 + 1164) == 1 )
  {
    v3 = *(_DWORD *)(a1 + 68);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 64);
    if ( v3 == -1 )
    {
      if ( *(_BYTE *)(a1 + 1162) )
      {
        if ( *(_BYTE *)(a1 + 1161) <= 2u )
          return v2;
        v3 = *(_DWORD *)(a1 + 1188);
      }
      else
      {
        v3 = *(_DWORD *)(a1 + 1180);
      }
    }
  }
  if ( v3 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Setting F-state idle timeout to %ums\n", v3);
    *(_DWORD *)(a1 + 1152) |= 0x20u;
    return (unsigned int)StorPortExtendedFunction(33LL, a1, *(_QWORD *)(a1 + 1192), NVMeFStateIdleTimerCallback);
  }
  return v2;
}
