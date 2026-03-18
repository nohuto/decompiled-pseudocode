/*
 * XREFs of ?OnExclusiveViewDeactivate@CHolographicClient@@QEAAXIPEAPEAX@Z @ 0x1801C2E98
 * Callers:
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1801BD8E0 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHolographicClient::OnExclusiveViewDeactivate(CHolographicClient *this, unsigned int a2, void **a3)
{
  DbgPrintEx(0, 0, "Exclusive DeActivate\n");
  (*(void (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)this + 3) + 96LL))(*((_QWORD *)this + 3), a2, a3);
}
