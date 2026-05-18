/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180007078
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x180008470 (--3@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete(void *a1)
{
  WPF::ProcessHeapImpl::Free(a1);
}
