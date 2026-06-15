/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180027230
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x1800273B0 (-_Destroy@-$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1CPdcTimerActivation@@QEAA@XZ @ 0x1800274A0 (--1CPdcTimerActivation@@QEAA@XZ.c)
 */

void __fastcall std::_Ref_count_obj<CPdcTimerActivation>::_Destroy(__int64 a1)
{
  CPdcTimerActivation::~CPdcTimerActivation((CPdcTimerActivation *)(a1 + 16));
}
