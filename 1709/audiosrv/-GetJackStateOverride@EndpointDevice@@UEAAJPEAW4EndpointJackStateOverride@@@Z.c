/*
 * XREFs of ?GetJackStateOverride@EndpointDevice@@UEAAJPEAW4EndpointJackStateOverride@@@Z @ 0x1800E95D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::GetJackStateOverride(EndpointDevice *this, enum EndpointJackStateOverride *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *(_DWORD *)a2 = *((_DWORD *)this + 34);
  return result;
}
