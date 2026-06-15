/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180001554
 * Callers:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027058 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall operator new(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
