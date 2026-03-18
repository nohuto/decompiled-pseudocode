/*
 * XREFs of ?FxStubInitTypes@@YAJXZ @ 0x1C00398F8
 * Callers:
 *     DriverEntry_0 @ 0x1C0039770 (DriverEntry_0.c)
 * Callees:
 *     HUBFDO_GetPortStatusForDebuggingComplete @ 0x1C000B710 (HUBFDO_GetPortStatusForDebuggingComplete.c)
 */

__int64 FxStubInitTypes(void)
{
  if ( &__KMDF_TYPE_INIT_START <= &__KMDF_TYPE_INIT_END )
    return 0LL;
  else
    return 3221225595LL;
}
