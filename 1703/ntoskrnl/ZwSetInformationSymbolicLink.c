/*
 * XREFs of ZwSetInformationSymbolicLink @ 0x1401810E0
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1405A28B8 (ObpInitializeRootNamespace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationSymbolicLink(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
