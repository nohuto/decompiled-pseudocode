/*
 * XREFs of ?IsUSB@EndpointDevice@@UEAAJPEAH@Z @ 0x1800EA350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::IsUSB(EndpointDevice *this, int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *((_DWORD *)this + 24) == 3;
  return result;
}
