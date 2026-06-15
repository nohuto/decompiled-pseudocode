/*
 * XREFs of ?GetNumDevices@EndpointCollection@@UEAAJPEA_K@Z @ 0x180117D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointCollection::GetNumDevices(EndpointCollection *this, unsigned __int64 *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *((_QWORD *)this + 6);
  return result;
}
