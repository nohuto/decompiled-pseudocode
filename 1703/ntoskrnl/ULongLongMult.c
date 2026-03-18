/*
 * XREFs of ULongLongMult @ 0x1401E1D04
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14067AA04 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpAddNamespaceNodeToList @ 0x14067AC20 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x14067B280 (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x14067B510 (VrpDestroyNamespaceNodeList.c)
 *     VrpFindNamespaceNode @ 0x14067B5D4 (VrpFindNamespaceNode.c)
 *     SdbpCheckPackageAttributes @ 0x14072C200 (SdbpCheckPackageAttributes.c)
 *     SdbpFreePackageAttributes @ 0x14072C588 (SdbpFreePackageAttributes.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  ULONGLONG v4; // rcx
  HRESULT result; // eax

  v4 = ullMultiplicand * ullMultiplier;
  result = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = v4;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  return result;
}
