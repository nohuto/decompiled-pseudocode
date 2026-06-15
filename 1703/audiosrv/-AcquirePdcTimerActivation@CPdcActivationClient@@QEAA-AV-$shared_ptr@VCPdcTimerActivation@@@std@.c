/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180027044
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180026C54 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??$make_shared@VCPdcTimerActivation@@QEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEBQEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x18002711C (--$make_shared@VCPdcTimerActivation@@QEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$emplace_back@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAXAEBQEAVCVADServer@@@Z @ 0x18002E2DC (--$emplace_back@AEBQEAVCVADServer@@@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@@@std@@.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // rdi
  struct _Mtx_internal_imp_t *v5; // rbx
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  std::_Ref_count_base *v11; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp+10h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  v3 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( *(_QWORD *)a1 )
  {
    try
    {
      v5 = (struct _Mtx_internal_imp_t *)(a1 + 32);
      v15 = a1 + 32;
      v6 = _Mtx_lock((_Mtx_t)(a1 + 32));
      if ( v6 )
        std::_Throw_C_error(v6);
      std::vector<CVADServer *>::emplace_back<CVADServer * const &>(a1 + 8, &v17);
      v7 = _Mtx_unlock(v5);
      if ( v7 )
        std::_Throw_C_error(v7);
      v15 = a1;
      v8 = (__int64 *)std::make_shared<CPdcTimerActivation,CPdcActivationClient * const,CVADServer * &>(v13, &v15, &v17);
      v9 = *v8;
      v10 = v8[1];
      *v8 = 0LL;
      v8[1] = 0LL;
      v11 = (std::_Ref_count_base *)v3[1];
      v3[1] = v10;
      *v3 = v9;
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
    catch ( std::bad_alloc )
    {
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::AcquirePdcTimerActivation", 0x38u, -2147024882);
      return v16;
    }
  }
  return v3;
}
