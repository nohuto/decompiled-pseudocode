/*
 * XREFs of ?OverrideJackState@EndpointDevice@@UEAAJW4EndpointJackStateOverride@@@Z @ 0x1800EA3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::OverrideJackState(__int64 a1, unsigned int a2)
{
  int v2; // eax

  v2 = 1;
  if ( a2 > 1 )
    v2 = 0;
  else
    *(_DWORD *)(a1 + 136) = a2;
  return v2 == 0 ? 0x80070057 : 0;
}
