/*
 * XREFs of KiFatalFilter @ 0x1402410B4
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14012F870 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x14047A5D0 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
