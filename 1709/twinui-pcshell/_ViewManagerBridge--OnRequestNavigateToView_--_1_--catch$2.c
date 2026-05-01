/*
 * XREFs of _ViewManagerBridge::OnRequestNavigateToView_::_1_::catch$2 @ 0x1801EF065
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewManagerBridge::OnRequestNavigateToView_::_1_::catch_2(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(**(_QWORD **)(*(_QWORD *)(a2 + 64) + 80LL) + 112LL))(
    *(_QWORD *)(*(_QWORD *)(a2 + 64) + 80LL),
    *(unsigned int *)(a2 + 48),
    0LL,
    0LL,
    1);
  return &loc_180136AA9;
}
