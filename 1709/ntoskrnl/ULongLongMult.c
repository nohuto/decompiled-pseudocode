/*
 * XREFs of ULongLongMult @ 0x1401E5E10
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1406A5150 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpAddNamespaceNodeToList @ 0x1406A5394 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x1406A5A34 (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x1406A5CD8 (VrpDestroyNamespaceNodeList.c)
 *     VrpFindNamespaceNode @ 0x1406A5DA0 (VrpFindNamespaceNode.c)
 *     SdbpCheckPackageAttributes @ 0x14076EF30 (SdbpCheckPackageAttributes.c)
 *     SdbpFreePackageAttributes @ 0x14076F298 (SdbpFreePackageAttributes.c)
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
