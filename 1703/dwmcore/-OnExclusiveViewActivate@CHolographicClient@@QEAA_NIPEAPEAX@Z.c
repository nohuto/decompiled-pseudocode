/*
 * XREFs of ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NIPEAPEAX@Z @ 0x1801A7F20
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x1801A4968 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicClient::OnExclusiveViewActivate(CHolographicClient *this, unsigned int a2, void **a3)
{
  DbgPrintEx(0, 0, "Exclusive Activate\n");
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)this + 3) + 88LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}
