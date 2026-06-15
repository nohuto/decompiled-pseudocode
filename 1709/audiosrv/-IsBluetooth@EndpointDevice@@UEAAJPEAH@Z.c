/*
 * XREFs of ?IsBluetooth@EndpointDevice@@UEAAJPEAH@Z @ 0x1800EA000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::IsBluetooth(EndpointDevice *this, int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = (unsigned int)(*((_DWORD *)this + 24) - 1) <= 1;
  return result;
}
