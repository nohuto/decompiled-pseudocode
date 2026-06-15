/*
 * XREFs of ?GetRank@EndpointDevice@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAI@Z @ 0x1800E9650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::GetRank(EndpointDevice *this, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a3 )
    return 2147500035LL;
  if ( a2 > 2 )
    return 2147942487LL;
  *a3 = *((_DWORD *)this + (int)a2 + 25);
  return result;
}
