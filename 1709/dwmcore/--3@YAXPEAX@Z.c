/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1801C8490
 * Callers:
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x1800C41C0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall operator delete(void *a1)
{
  WPF::ProcessHeapImpl::Free(a1);
}
