/*
 * XREFs of DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C01DFA84
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0118E70 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1C0011F04 (DpiIsValidEdid.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1C01DF7F0 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiFdoValidateIntegratedDisplayDescriptor(__int64 a1)
{
  unsigned int *v1; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int16 v9; // bp
  __int16 v10; // ax
  __int64 v11; // rax
  __int64 v12; // rcx

  v1 = *(unsigned int **)(a1 + 96);
  v3 = *(unsigned int *)(a1 + 24);
  if ( *v1 >= 0x10 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v5 = (unsigned __int64)*v1 >> 4;
    v4[5] = 1LL;
    goto LABEL_21;
  }
  if ( v1[16] >= 0x80 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v5 = (unsigned __int64)v1[16] >> 7;
    v4[5] = 2LL;
    goto LABEL_21;
  }
  if ( (int)DpiFdoValidateDxgkColorimetry(v1 + 17, v3) >= 0 )
  {
    if ( (unsigned __int8)(*((_BYTE *)v1 + 120) - 1) > 3u )
    {
      v4 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v5 = *((unsigned __int8 *)v1 + 120);
      v4[5] = 3LL;
    }
    else if ( (unsigned __int8)(*((_BYTE *)v1 + 121) - 1) > 2u )
    {
      v4 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v5 = *((unsigned __int8 *)v1 + 121);
      v4[5] = 4LL;
    }
    else
    {
      if ( *((_BYTE *)v1 + 122) > 0x10u )
      {
        v4 = (_QWORD *)WdLogNewEntry5_WdError(v7);
        v4[3] = *((unsigned __int8 *)v1 + 122);
        v4[4] = 16LL;
        v4[5] = v3;
        v4[6] = 5LL;
LABEL_22:
        WdLogEvent5_WdError(v4);
        return 3221225485LL;
      }
      if ( *((_BYTE *)v1 + 123) == 1 )
      {
        v9 = *(_WORD *)(a1 + 92);
        if ( (unsigned __int16)(v9 - 124) >= 0x80u )
        {
          v10 = ((v9 - 124) & 0xFF80) + 124;
          *(_WORD *)(a1 + 92) = v10;
          if ( v9 != v10 )
          {
            v11 = WdLogNewEntry5_WdWarning(65408LL, v6, v8);
            *(_QWORD *)(v11 + 24) = v9 - *(unsigned __int16 *)(a1 + 92);
            WdLogEvent5_WdWarning(v11);
          }
          if ( DpiIsValidEdid((__int64)(v1 + 31)) )
            return 0LL;
          v4 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v4[3] = v3;
          v4[4] = 8LL;
        }
        else
        {
          v4 = (_QWORD *)WdLogNewEntry5_WdError(v7);
          v4[3] = v9;
          v4[4] = 7LL;
        }
        goto LABEL_22;
      }
      v4 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v5 = *((unsigned __int8 *)v1 + 123);
      v4[5] = 6LL;
    }
LABEL_21:
    v4[3] = v5;
    v4[4] = v3;
    goto LABEL_22;
  }
  return 3221225485LL;
}
