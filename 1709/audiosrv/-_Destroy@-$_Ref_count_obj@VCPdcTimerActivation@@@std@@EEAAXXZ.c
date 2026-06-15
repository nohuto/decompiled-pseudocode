/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x18002A3E0
 * Callers:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 * Callees:
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x18002A6F8 (--1CPdcTimerActivation@@QEAA@XZ.c)
 */

void __fastcall std::_Ref_count_obj<CPdcTimerActivation>::_Destroy(__int64 a1)
{
  CPdcTimerActivation::~CPdcTimerActivation((CPdcTimerActivation *)(a1 + 16));
}
