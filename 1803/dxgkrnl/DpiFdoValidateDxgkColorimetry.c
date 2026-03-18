/*
 * XREFs of DpiFdoValidateDxgkColorimetry @ 0x1C01FB538
 * Callers:
 *     DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C01FB7CC (DpiFdoValidateIntegratedDisplayDescriptor.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C020B148 (DpiGetMonitorColorimetryOverride.c)
 * Callees:
 *     _lambda_7fd6b90712c1724b9dd78ba440ff6b5c_::operator() @ 0x1C003AB40 (_lambda_7fd6b90712c1724b9dd78ba440ff6b5c_--operator().c)
 */

__int64 __fastcall DpiFdoValidateDxgkColorimetry(unsigned int *a1, unsigned int a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  unsigned int *v5; // rax
  __int64 v7; // rcx
  int v8; // r9d
  _QWORD *v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v2 = (__int64 *)(a1 + 2);
  v3 = a2;
  v5 = a1;
  if ( a1 < a1 + 2 )
  {
    while ( !*(_BYTE *)v5 )
    {
      v5 = (unsigned int *)((char *)v5 + 1);
      if ( v5 >= (unsigned int *)v2 )
        goto LABEL_6;
    }
    v5 = 0LL;
  }
LABEL_6:
  if ( v5 )
    return 279LL;
  if ( !lambda_7fd6b90712c1724b9dd78ba440ff6b5c_::operator()((__int64)a1, *((_QWORD *)a1 + 3)) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v9[3] = a1[6];
    v9[4] = a1[7];
    v9[5] = v3;
    v9[6] = 1LL;
    goto LABEL_41;
  }
  v10 = a1[9];
  if ( !v10
    || (v7 = a1[10], !(_DWORD)v7)
    || (unsigned int)v7 > v10
    || (v11 = a1[8], v11 >= v10)
    || v11 >= (unsigned int)v7 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v9[4] = 2LL;
    goto LABEL_40;
  }
  v12 = a1[11];
  if ( (v12 & 3) != 0 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v9[3] = (int)(a1[11] << 30) >> 30;
    v9[4] = v3;
    v9[5] = 3LL;
    goto LABEL_41;
  }
  if ( !(_DWORD)v12 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v9[4] = 4LL;
LABEL_40:
    v9[3] = v3;
    goto LABEL_41;
  }
  if ( (((unsigned __int8)v12 | (unsigned __int8)(((unsigned int)v12 | ((unsigned int)v12 >> 6)) >> 6)) & 0xFCu) >= 4
    || (v12 & 0x3F00000) != 0 )
  {
    if ( !lambda_7fd6b90712c1724b9dd78ba440ff6b5c_::operator()(v12, *(_QWORD *)a1) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v9[3] = *a1;
      v9[4] = a1[1];
      v9[5] = v3;
      v9[6] = 6LL;
      goto LABEL_41;
    }
    if ( !lambda_7fd6b90712c1724b9dd78ba440ff6b5c_::operator()(v13, *v2) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v9[3] = *(unsigned int *)v2;
      v9[4] = a1[3];
      v9[5] = v3;
      v9[6] = 7LL;
      goto LABEL_41;
    }
    if ( !lambda_7fd6b90712c1724b9dd78ba440ff6b5c_::operator()(v14, *((_QWORD *)a1 + 2)) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v9[3] = a1[4];
      v9[4] = a1[5];
      v9[5] = v3;
      v9[6] = 8LL;
      goto LABEL_41;
    }
  }
  else
  {
    if ( *a1 != v8 || a1[1] != v8 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v9[3] = *a1;
      v9[4] = a1[1];
      v9[5] = v3;
      v9[6] = 9LL;
      goto LABEL_41;
    }
    if ( *(_DWORD *)v2 != v8 || a1[3] != v8 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v9[3] = *(unsigned int *)v2;
      v9[4] = a1[3];
      v9[5] = v3;
      v9[6] = 10LL;
      goto LABEL_41;
    }
    if ( a1[4] != v8 || a1[5] != v8 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v9[3] = a1[4];
      v9[4] = a1[5];
      v9[5] = v3;
      v9[6] = 11LL;
      goto LABEL_41;
    }
  }
  if ( a1[12] < 8 )
    return 0LL;
  v9 = (_QWORD *)WdLogNewEntry5_WdError(v12);
  v9[3] = (unsigned __int64)a1[12] >> 3;
  v9[4] = v3;
  v9[5] = 5LL;
LABEL_41:
  WdLogEvent5_WdError(v9);
  return 3221225485LL;
}
