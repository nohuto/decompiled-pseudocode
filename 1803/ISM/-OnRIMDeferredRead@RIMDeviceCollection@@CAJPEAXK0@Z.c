/*
 * XREFs of ?OnRIMDeferredRead@RIMDeviceCollection@@CAJPEAXK0@Z @ 0x18006DF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeviceCollection::OnRIMDeferredRead(RIMDeviceCollection *a1, int a2, void *a3)
{
  if ( a2 )
    return 2147549183LL;
  *((_BYTE *)a1 + 2736) = 0;
  return RIMDeviceCollection::ReadInputReportFromRIM(a1);
}
