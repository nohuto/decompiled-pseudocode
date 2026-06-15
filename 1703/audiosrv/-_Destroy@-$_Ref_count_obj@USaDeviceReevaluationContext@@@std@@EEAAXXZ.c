/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@USaDeviceReevaluationContext@@@std@@EEAAXXZ @ 0x1800AD6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Ref_count_obj<SaDeviceReevaluationContext>::_Destroy(__int64 a1)
{
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
}
