/*
 * XREFs of ?GetEndpointCapability@EndpointDevice@@UEAAJW4EndpointCapability@@PEAH@Z @ 0x1800E94B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::GetEndpointCapability(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a3 )
    return 2147500035LL;
  if ( a2 > 1 )
    return 2147942487LL;
  if ( a2 == 1 )
    *a3 = *(_DWORD *)(a1 + 88);
  return result;
}
