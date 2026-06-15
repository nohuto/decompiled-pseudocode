/*
 * XREFs of ?IsOnPhoneTopology@EndpointDevice@@UEAAJPEAH@Z @ 0x1800EA230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::IsOnPhoneTopology(EndpointDevice *this, int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *((_DWORD *)this + 22);
  return result;
}
