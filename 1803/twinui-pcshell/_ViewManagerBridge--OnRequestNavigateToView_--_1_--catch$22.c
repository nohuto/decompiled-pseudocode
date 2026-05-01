/*
 * XREFs of _ViewManagerBridge::OnRequestNavigateToView_::_1_::catch$22 @ 0x1800B4AE8
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewManagerBridge::OnRequestNavigateToView_::_1_::catch_22(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(*(_QWORD *)(a2 + 144) + 72LL) + 112LL))(
    *(_QWORD *)(*(_QWORD *)(a2 + 144) + 72LL),
    *(unsigned int *)(a2 + 96),
    0LL,
    0LL,
    1);
  return &loc_1800584C3;
}
