/*
 * XREFs of RtlFillMemory @ 0x14028D810
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __stdcall RtlFillMemory(void *a1, SIZE_T Length, UCHAR Fill)
{
  memset(a1, Fill, Length);
}
