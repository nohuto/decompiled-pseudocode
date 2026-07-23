/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14014933C
 * Callers:
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall LdrUnloadAlternateResourceModule(PVOID BaseAddress)
{
  ULONG v1; // edx

  return LdrUnloadAlternateResourceModuleEx(BaseAddress, v1);
}
