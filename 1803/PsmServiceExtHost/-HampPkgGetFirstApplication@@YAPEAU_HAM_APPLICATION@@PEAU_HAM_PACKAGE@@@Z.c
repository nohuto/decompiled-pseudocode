/*
 * XREFs of ?HampPkgGetFirstApplication@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@@Z @ 0x180067720
 * Callers:
 *     ?HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z @ 0x180040A80 (-HampPkgGetInterruptiveUIState@@YAKPEAU_HAM_PACKAGE@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_APPLICATION *__fastcall HampPkgGetFirstApplication(struct _HAM_PACKAGE *a1)
{
  return HamRcNodeGetFirst(a1, 1);
}
