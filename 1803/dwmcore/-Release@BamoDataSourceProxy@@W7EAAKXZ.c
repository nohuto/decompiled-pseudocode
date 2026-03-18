/*
 * XREFs of ?Release@BamoDataSourceProxy@@W7EAAKXZ @ 0x1800DD5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall BamoDataSourceProxy::Release(__int64 a1)
{
  return BamoDataProviderRegistrarPrincipal::Release((BamoDataProviderRegistrarPrincipal *)(a1 - 8));
}
