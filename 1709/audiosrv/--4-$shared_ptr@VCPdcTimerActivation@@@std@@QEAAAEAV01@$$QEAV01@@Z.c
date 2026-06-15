/*
 * XREFs of ??4?$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002CB04
 * Callers:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18002C3E4 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002CBE0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::shared_ptr<CPdcTimerActivation>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rcx

  v3 = *a2;
  v4 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  *a1 = v3;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
