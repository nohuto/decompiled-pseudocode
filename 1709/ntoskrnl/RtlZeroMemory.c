/*
 * XREFs of RtlZeroMemory @ 0x1402557E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void __stdcall RtlZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
