/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180029BA0
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x1800260A0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??$emplace_back@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAXAEBQEAVCVADServer@@@Z @ 0x180017524 (--$emplace_back@AEBQEAVCVADServer@@@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@@@std@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEAPEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x18006398C (--$make_shared@VCPdcTimerActivation@@PEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(__int64 a1, _QWORD *a2, char *a3)
{
  struct _Mtx_internal_imp_t *v5; // rbx
  int v6; // eax
  int v7; // eax
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  std::_Ref_count_base *v11; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp+10h]
  char *v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
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
      v8 = (__int64 *)std::make_shared<CPdcTimerActivation,CPdcActivationClient *,CVADServer * &>(v13, &v15, &v17);
      v9 = *v8;
      v10 = v8[1];
      *v8 = 0LL;
      v8[1] = 0LL;
      *a2 = v9;
      v11 = (std::_Ref_count_base *)a2[1];
      a2[1] = v10;
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
  return a2;
}
