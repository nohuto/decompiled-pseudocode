/*
 * XREFs of ??4?$shared_ptr@VCPowerReference@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800296B8
 * Callers:
 *     ?AcquirePowerReference@CVADServer@@QEAAXXZ @ 0x180025CF0 (-AcquirePowerReference@CVADServer@@QEAAXXZ.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002CBE0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<CPowerReference>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  *a1 = v2;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
