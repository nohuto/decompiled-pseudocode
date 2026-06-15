/*
 * XREFs of _CWorkFifo::CWorkFifo_::_1_::dtor$1 @ 0x18005BAB7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWorkFifo::CWorkFifo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::recursive_mutex::~recursive_mutex((_Mtx_t)(*(_QWORD *)(a2 + 64) + 144LL));
}
