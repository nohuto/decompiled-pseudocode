/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18002C3E4
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002CBE0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x18002CA6C (--$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 *     ??4?$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002CB04 (--4-$shared_ptr@VCPdcTimerActivation@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$emplace_back@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAXAEBQEAVCVADServer@@@Z @ 0x1800304F4 (--$emplace_back@AEBQEAVCVADServer@@@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@@@std@@.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  struct _Mtx_internal_imp_t *v5; // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  char v10[8]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp+10h]
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  v3 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( *(_QWORD *)a1 )
  {
    try
    {
      v5 = (struct _Mtx_internal_imp_t *)(a1 + 32);
      v12 = a1 + 32;
      v6 = _Mtx_lock((_Mtx_t)(a1 + 32));
      if ( v6 )
        std::_Throw_C_error(v6);
      std::vector<CVADServer *>::emplace_back<CVADServer * const &>(a1 + 8, &v14);
      v7 = _Mtx_unlock(v5);
      if ( v7 )
        std::_Throw_C_error(v7);
      v12 = a1;
      v8 = std::make_shared<CPdcTimerActivation,CPdcActivationClient *,CVADServer * &>(v10, &v12, &v14);
      std::shared_ptr<CPdcTimerActivation>::operator=(v3, v8);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
    }
    catch ( std::bad_alloc )
    {
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::AcquirePdcTimerActivation", 0x38u, -2147024882);
      return v13;
    }
  }
  return v3;
}
