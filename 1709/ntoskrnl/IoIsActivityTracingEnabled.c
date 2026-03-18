/*
 * XREFs of IoIsActivityTracingEnabled @ 0x1401149A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IoIsActivityTracingEnabled()
{
  return (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0;
}
