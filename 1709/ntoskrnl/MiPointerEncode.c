/*
 * XREFs of MiPointerEncode @ 0x140221518
 * Callers:
 *     MiAllocatePagedPoolPages @ 0x14009B1E0 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPointerEncode(__int64 a1)
{
  return a1 ^ qword_140389280;
}
