/*
 * XREFs of ?GetPinId@EndpointDevice@@UEAAJPEAK@Z @ 0x180118210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::GetPinId(EndpointDevice *this, unsigned int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *((_DWORD *)this + 19);
  return result;
}
