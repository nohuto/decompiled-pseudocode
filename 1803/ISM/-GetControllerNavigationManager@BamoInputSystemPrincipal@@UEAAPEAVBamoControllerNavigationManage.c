/*
 * XREFs of ?GetControllerNavigationManager@BamoInputSystemPrincipal@@UEAAPEAVBamoControllerNavigationManagerPrincipal@@XZ @ 0x180021A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoControllerNavigationManagerPrincipal *__fastcall BamoInputSystemPrincipal::GetControllerNavigationManager(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoControllerNavigationManagerPrincipal *)*((_QWORD *)this + 11);
}
