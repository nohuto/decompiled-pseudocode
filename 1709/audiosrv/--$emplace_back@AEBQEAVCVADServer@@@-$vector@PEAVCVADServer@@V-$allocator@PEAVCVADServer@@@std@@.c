/*
 * XREFs of ??$emplace_back@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAXAEBQEAVCVADServer@@@Z @ 0x1800304F4
 * Callers:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18002C3E4 (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x18002FA90 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

char *__fastcall std::vector<CVADServer *>::emplace_back<CVADServer * const &>(const void **a1, char **a2)
{
  char *result; // rax
  char *v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  char *v11; // rax
  char *v12; // r14
  char **v13; // rax
  char *v14; // [rsp+70h] [rbp+18h]

  result = (char *)a1[2];
  v5 = (char *)a1[1];
  if ( result == v5 )
  {
    v6 = (v5 - (_BYTE *)*a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + 1;
    v8 = (result - (_BYTE *)*a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v6 + 1;
    }
    else
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    v11 = (char *)std::_Allocate(v10, 8uLL);
    v12 = v11;
    v14 = v11;
    try
    {
      v13 = (char **)&v11[8 * v6];
      if ( v13 )
        *v13 = *a2;
      memmove(v12, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
    }
    catch ( ... )
    {
      std::_Deallocate(v14, v10, 8uLL);
      throw;
    }
    if ( *a1 )
      std::_Deallocate(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3, 8uLL);
    *a1 = v12;
    a1[1] = &v12[8 * v7];
    result = &v12[8 * v10];
    a1[2] = result;
  }
  else
  {
    if ( v5 )
    {
      result = *a2;
      *(_QWORD *)v5 = *a2;
    }
    a1[1] = (char *)a1[1] + 8;
  }
  return result;
}
