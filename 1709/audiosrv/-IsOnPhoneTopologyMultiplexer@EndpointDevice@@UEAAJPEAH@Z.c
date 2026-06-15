/*
 * XREFs of ?IsOnPhoneTopologyMultiplexer@EndpointDevice@@UEAAJPEAH@Z @ 0x1800EA250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::IsOnPhoneTopologyMultiplexer(EndpointDevice *this, int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  if ( *((int *)this + 21) >= 3 )
    return 2147549183LL;
  *a2 = *((_DWORD *)this + 21) == 2;
  return result;
}
