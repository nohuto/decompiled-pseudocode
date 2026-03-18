/*
 * XREFs of DpiFdoValidateIntegratedDisplayDescriptor @ 0x1C01C5D40
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0112030 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiFdoValidateDxgkColorimetry @ 0x1C01C5C54 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiFdoValidateIntegratedDisplayDescriptor(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = (unsigned int)a2;
  if ( *a1 >= 0x10 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v5 = (unsigned __int64)*a1 >> 4;
    goto LABEL_15;
  }
  if ( a1[16] >= 0x80 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v5 = (unsigned __int64)a1[16] >> 7;
    goto LABEL_15;
  }
  if ( (int)DpiFdoValidateDxgkColorimetry(a1 + 17, a2) >= 0 )
  {
    LOBYTE(v7) = 1;
    if ( (unsigned __int8)(*((_BYTE *)a1 + 120) - 1) > 3u )
    {
      v4 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
      v5 = *((unsigned __int8 *)a1 + 120);
    }
    else if ( (unsigned __int8)(*((_BYTE *)a1 + 121) - 1) > 2u )
    {
      v4 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
      v5 = *((unsigned __int8 *)a1 + 121);
    }
    else
    {
      if ( *((_BYTE *)a1 + 122) > 0x10u )
      {
        v4 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
        v4[3] = *((unsigned __int8 *)a1 + 122);
        v4[4] = 16LL;
        v4[5] = v3;
LABEL_16:
        WdLogEvent5_WdError(v4);
        return 3221225485LL;
      }
      if ( *((_BYTE *)a1 + 123) == 1 )
        return 0LL;
      v4 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
      v5 = *((unsigned __int8 *)a1 + 123);
    }
LABEL_15:
    v4[3] = v5;
    v4[4] = v3;
    goto LABEL_16;
  }
  return 3221225485LL;
}
