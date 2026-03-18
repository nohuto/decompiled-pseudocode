/*
 * XREFs of _PnpSetGenericStoreProperty @ 0x1404DB4EC
 * Callers:
 *     _PnpSetObjectPropertyWorker @ 0x1404DB9FC (_PnpSetObjectPropertyWorker.c)
 *     PiDqIrpPropertySet @ 0x1405959E0 (PiDqIrpPropertySet.c)
 * Callees:
 *     _PnpSetPropertyWorker @ 0x1404DB1E0 (_PnpSetPropertyWorker.c)
 *     _PnpDeletePropertyWorker @ 0x1405757E8 (_PnpDeletePropertyWorker.c)
 */

__int64 __fastcall PnpSetGenericStoreProperty(
        __int64 *a1,
        __int64 a2,
        const wchar_t *a3,
        __int64 a4,
        int a5,
        void *a6,
        ULONG a7)
{
  if ( a5 )
    return PnpSetPropertyWorker(a1, a2, a3, a4, a5, a6, a7);
  else
    return PnpDeletePropertyWorker(a1);
}
