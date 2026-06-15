/*
 * XREFs of ?SetRank@EndpointDevice@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@I@Z @ 0x1800EA590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::SetRank(EndpointDevice *this, unsigned int a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 > 2 )
    return 2147942487LL;
  *((_DWORD *)this + (int)a2 + 25) = a3;
  return result;
}
