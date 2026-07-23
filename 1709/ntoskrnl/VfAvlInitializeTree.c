/*
 * XREFs of VfAvlInitializeTree @ 0x140278144
 * Callers:
 *     VfInitVerifierComponents @ 0x1407A7380 (VfInitVerifierComponents.c)
 * Callees:
 *     VfAvlInitializeTreeEx @ 0x1407A22C0 (VfAvlInitializeTreeEx.c)
 */

__int64 __fastcall VfAvlInitializeTree(
        void *a1,
        __int64 a2,
        __int64 a3,
        void (__cdecl *FreeRoutine)(_RTL_AVL_TABLE *, PVOID))
{
  return VfAvlInitializeTreeEx(a1, FreeRoutine);
}
