/*
 * XREFs of MiPointerEncode @ 0x140217BDC
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPointerEncode(__int64 a1)
{
  return a1 ^ qword_14036CFC0;
}
