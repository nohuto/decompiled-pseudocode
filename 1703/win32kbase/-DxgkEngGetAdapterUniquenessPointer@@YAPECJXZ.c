/*
 * XREFs of ?DxgkEngGetAdapterUniquenessPointer@@YAPECJXZ @ 0x1C0095FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

volatile int *DxgkEngGetAdapterUniquenessPointer(void)
{
  return (volatile int *)((char *)gpGdiSharedMemory + 1573024);
}
