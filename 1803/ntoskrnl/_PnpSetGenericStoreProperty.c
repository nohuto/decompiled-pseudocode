/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x1405D2410
 * Callers:
 *     PiDqIrpPropertySet @ 0x1405C24A0 (PiDqIrpPropertySet.c)
 *     _PnpSetObjectPropertyWorker @ 0x1405D2178 (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x1405D3304 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x1405E70CC (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3);
  else
    return PnpDeletePropertyWorker(a1);
}
