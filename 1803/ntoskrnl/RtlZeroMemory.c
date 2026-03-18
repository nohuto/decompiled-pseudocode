/*
 * XREFs of RtlZeroMemory @ 0x14028D830
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __stdcall RtlZeroMemory(void *a1, SIZE_T Length)
{
  memset(a1, 0, Length);
}
