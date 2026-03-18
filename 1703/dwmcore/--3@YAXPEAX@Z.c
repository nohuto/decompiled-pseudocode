/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180189130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete(void *a1)
{
  WPF::ProcessHeapImpl::Free(a1);
}
