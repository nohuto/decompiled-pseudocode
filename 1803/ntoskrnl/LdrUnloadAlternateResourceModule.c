/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x140163988
 * Callers:
 *     MiUnloadSystemImage @ 0x1405BCA9C (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016399C (LdrUnloadAlternateResourceModuleEx.c)
 */

BOOLEAN __stdcall LdrUnloadAlternateResourceModule(PVOID BaseAddress)
{
  ULONG v1; // edx

  return LdrUnloadAlternateResourceModuleEx(BaseAddress, v1);
}
