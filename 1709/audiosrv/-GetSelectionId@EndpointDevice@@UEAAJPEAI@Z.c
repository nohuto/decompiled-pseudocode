/*
 * XREFs of ?GetSelectionId@EndpointDevice@@UEAAJPEAI@Z @ 0x1800E9680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::GetSelectionId(EndpointDevice *this, unsigned int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *((_DWORD *)this + 28);
  return result;
}
