/*
 * XREFs of RtlFillMemory @ 0x1402557C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
