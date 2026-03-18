/*
 * XREFs of KiFatalFilter @ 0x140203C14
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140028AC0 (KeExpandKernelStackAndCalloutInternal.c)
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalFilter(ULONG a1, ULONG_PTR *a2)
{
  KeBugCheckEx(a1, *(int *)*a2, *(_QWORD *)(*a2 + 16), *a2, a2[1]);
}
