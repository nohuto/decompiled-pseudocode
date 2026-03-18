/*
 * XREFs of DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C01FB7CC
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01F24BC (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiIsValidEdid @ 0x1C003C5A8 (DpiIsValidEdid.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1C01FB538 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiFdoValidateIntegratedDisplayDescriptor(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rbx
  __int64 v4; // rdi
  _QWORD *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = *(unsigned int **)(a2 + 96);
  v4 = *(unsigned int *)(a2 + 24);
  if ( *v2 >= 0x10 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v7 = (unsigned __int64)*v2 >> 4;
    v6[5] = 1LL;
    goto LABEL_22;
  }
  if ( v2[16] >= 0x400 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v7 = (unsigned __int64)v2[16] >> 10;
    v6[5] = 2LL;
    goto LABEL_22;
  }
  if ( (int)DpiFdoValidateDxgkColorimetry(v2 + 17, v4) >= 0 )
  {
    if ( (unsigned __int8)(*((_BYTE *)v2 + 120) - 1) > 3u )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v7 = *((unsigned __int8 *)v2 + 120);
      v6[5] = 3LL;
    }
    else if ( (unsigned __int8)(*((_BYTE *)v2 + 121) - 1) > 4u )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v7 = *((unsigned __int8 *)v2 + 121);
      v6[5] = 4LL;
    }
    else
    {
      if ( *((_BYTE *)v2 + 122) > 0x10u )
      {
        v6 = (_QWORD *)WdLogNewEntry5_WdError(v8);
        v6[3] = *((unsigned __int8 *)v2 + 122);
        v6[4] = 16LL;
        v6[5] = v4;
        v6[6] = 5LL;
LABEL_23:
        WdLogEvent5_WdError(v6);
        return 3221225485LL;
      }
      if ( *((_BYTE *)v2 + 123) == 1 )
      {
        if ( *(_WORD *)(a2 + 94) >= 0x80u && DpiIsValidEdid(*(char **)(a2 + 104)) )
        {
          if ( (v2[16] & 0x200) == 0 || *(_BYTE *)(a1 + 2559) || *(_BYTE *)(a1 + 2556) )
            return 0LL;
          v6 = (_QWORD *)WdLogNewEntry5_WdError(v8);
          v6[3] = v4;
          v6[4] = 10LL;
        }
        else
        {
          v6 = (_QWORD *)WdLogNewEntry5_WdError(v8);
          v6[3] = v4;
          v6[4] = 8LL;
        }
        goto LABEL_23;
      }
      v6 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v7 = *((unsigned __int8 *)v2 + 123);
      v6[5] = 6LL;
    }
LABEL_22:
    v6[3] = v7;
    v6[4] = v4;
    goto LABEL_23;
  }
  return 3221225485LL;
}
