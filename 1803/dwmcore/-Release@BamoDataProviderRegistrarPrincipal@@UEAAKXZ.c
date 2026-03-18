/*
 * XREFs of ?Release@BamoDataProviderRegistrarPrincipal@@UEAAKXZ @ 0x1801690F0
 * Callers:
 *     ?Release@BamoDataSourceProxy@@W7EAAKXZ @ 0x1800DD5C0 (-Release@BamoDataSourceProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderRegistrarPrincipal::Release(BamoDataProviderRegistrarPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
