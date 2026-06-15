/*
 * XREFs of ??$emplace_back@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAXAEBQEAVCVADServer@@@Z @ 0x18002E2DC
 * Callers:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180027044 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180025A1C (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Change_array@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@AEAAXQEAPEAVCVADServer@@_K1@Z @ 0x18002E274 (-_Change_array@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@@@std@@@std@@AEAAXQEAPEAVCVA.c)
 */

__int64 __fastcall std::vector<CVADServer *>::emplace_back<CVADServer * const &>(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rax
  void *v11; // r14
  __int64 *v12; // rax
  _QWORD *v13; // [rsp+70h] [rbp+18h]

  result = *(_QWORD *)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( (__int64 *)result == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = (result - *(_QWORD *)a1) >> 3;
    v8 = v7 >> 1;
    if ( v7 > 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v6 + 1;
    }
    else
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    v10 = std::_Allocate(v9, 8uLL);
    v11 = v10;
    v13 = v10;
    try
    {
      v12 = &v10[v6];
      if ( v12 )
        *v12 = *a2;
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Deallocate(v13, v9, 8uLL);
      throw;
    }
    return std::vector<CVADServer *>::_Change_array(a1, (__int64)v11, v6 + 1, v9);
  }
  else
  {
    if ( v5 )
    {
      result = *a2;
      *v5 = *a2;
    }
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
