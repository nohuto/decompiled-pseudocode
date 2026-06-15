/*
 * XREFs of ?GetBusTypeMask@EndpointDeviceId@@UEAAJPEAK@Z @ 0x1800ED010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDeviceId::GetBusTypeMask(EndpointDeviceId *this, unsigned int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *((_DWORD *)this + 16);
  return result;
}
