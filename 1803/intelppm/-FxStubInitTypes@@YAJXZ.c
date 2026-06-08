/*
 * XREFs of ?FxStubInitTypes@@YAJXZ @ 0x1C0003E78
 * Callers:
 *     DriverEntry_0 @ 0x1C0003CF0 (DriverEntry_0.c)
 * Callees:
 *     AcpiCStateIdleCancel @ 0x1C0001580 (AcpiCStateIdleCancel.c)
 */

__int64 FxStubInitTypes(void)
{
  if ( &__KMDF_TYPE_INIT_START <= &__KMDF_TYPE_INIT_END )
    return 0LL;
  else
    return 3221225595LL;
}
