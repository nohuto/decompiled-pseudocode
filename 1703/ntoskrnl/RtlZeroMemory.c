/*
 * XREFs of RtlZeroMemory @ 0x14023F5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
