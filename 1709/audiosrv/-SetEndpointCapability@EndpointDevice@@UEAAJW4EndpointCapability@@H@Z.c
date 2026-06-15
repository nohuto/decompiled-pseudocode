/*
 * XREFs of ?SetEndpointCapability@EndpointDevice@@UEAAJW4EndpointCapability@@H@Z @ 0x1800EA4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::SetEndpointCapability(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 > 1 )
    return 2147942487LL;
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 88) = a3;
  return result;
}
