/*
 * XREFs of ?Release@BamoInputSystemPrincipal@@UEAAKXZ @ 0x18000B2B0
 * Callers:
 *     ?Release@BamoHeatGripServicePrincipal@@W7EAAKXZ @ 0x18000D0F0 (-Release@BamoHeatGripServicePrincipal@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoInputSystemPrincipal::Release(BamoInputSystemPrincipal *this)
{
  return (**((__int64 (__fastcall ***)(char *))this + 2))((char *)this + 16);
}
