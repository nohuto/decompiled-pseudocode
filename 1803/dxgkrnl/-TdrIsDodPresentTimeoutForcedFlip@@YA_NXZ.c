/*
 * XREFs of ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1C019A288
 * Callers:
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01D6024 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 * Callees:
 *     <none>
 */

bool TdrIsDodPresentTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceDodPresentTimeout, 0) != 0;
}
