/*
 * XREFs of ?GetHeatGripService@BamoInputSystemPrincipal@@UEAAPEAVBamoHeatGripServicePrincipal@@XZ @ 0x1800216E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoHeatGripServicePrincipal *__fastcall BamoInputSystemPrincipal::GetHeatGripService(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoHeatGripServicePrincipal *)*((_QWORD *)this + 8);
}
