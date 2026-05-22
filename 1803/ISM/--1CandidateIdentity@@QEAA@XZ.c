/*
 * XREFs of ??1CandidateIdentity@@QEAA@XZ @ 0x1800668E0
 * Callers:
 *     _Edges::AddOrUpdate_::_1_::dtor$4 @ 0x1800E6FFA (_Edges--AddOrUpdate_--_1_--dtor$4.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$4_0 @ 0x1800E7048 (_Edges--AddOrUpdate_--_1_--dtor$4_0.c)
 *     _Edges::HitTest_::_1_::dtor$0 @ 0x1800E70C4 (_Edges--HitTest_--_1_--dtor$0.c)
 *     _TracingSessionHelper::StartOrStop_::_1_::dtor$2 @ 0x1800E7362 (_TracingSessionHelper--StartOrStop_--_1_--dtor$2.c)
 *     _EdgyImpl::EnsureInputTargeting_::_1_::dtor$2 @ 0x1800E963A (_EdgyImpl--EnsureInputTargeting_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CandidateIdentity::~CandidateIdentity(CandidateIdentity *this)
{
  std::wstring::_Tidy_deallocate(this);
}
