/*
 * XREFs of ??$emplace_back@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAXAEBQEAVCVADServer@@@Z @ 0x180017524
 * Callers:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x180029BA0 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x180016CB0 (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

char *__fastcall std::vector<CVADServer *>::emplace_back<CVADServer * const &>(__int64 a1, char **a2)
{
  char **v4; // rax
  char **v5; // rdi
  char *result; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  char *v12; // rax
  char *v13; // r14
  char *v14; // [rsp+70h] [rbp+18h]

  v4 = *(char ***)(a1 + 16);
  v5 = *(char ***)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = v7 + 1;
    v9 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    v10 = v9 >> 1;
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v7 + 1;
    }
    else
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    v12 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v11, 8uLL);
    v13 = v12;
    v14 = v12;
    try
    {
      *(_QWORD *)&v12[8 * v7] = *a2;
      memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Deallocate(v14, v11, 8uLL);
      throw;
    }
    if ( *(_QWORD *)a1 )
      std::_Deallocate(*(void **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3, 8uLL);
    *(_QWORD *)a1 = v13;
    *(_QWORD *)(a1 + 8) = &v13[8 * v8];
    result = &v13[8 * v11];
    *(_QWORD *)(a1 + 16) = result;
  }
  else
  {
    result = *a2;
    *v5 = *a2;
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
