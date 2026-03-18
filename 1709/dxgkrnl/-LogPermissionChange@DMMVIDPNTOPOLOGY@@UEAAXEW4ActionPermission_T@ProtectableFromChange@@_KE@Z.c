/*
 * XREFs of ?LogPermissionChange@DMMVIDPNTOPOLOGY@@UEAAXEW4ActionPermission_T@ProtectableFromChange@@_KE@Z @ 0x1C00A3C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DMMVIDPNTOPOLOGY::LogPermissionChange(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v6; // rbp
  unsigned __int8 v8; // di
  __int64 v9; // rcx
  _QWORD *result; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax

  v6 = a3;
  v8 = a2;
  if ( a3 == 1 )
  {
    v9 = (unsigned __int8)a2;
    if ( !(_BYTE)a2 )
      goto LABEL_6;
    v9 = (unsigned int)(unsigned __int8)a2 - 1;
    if ( (unsigned __int8)a2 == 1 )
      goto LABEL_6;
    v9 = (unsigned int)(unsigned __int8)a2 - 2;
    if ( (unsigned __int8)a2 == 2 )
    {
      result = (_QWORD *)WdLogNewEntry5_WdTrace(v9, a2);
      result[4] = a5;
      result[5] = a1 - 56;
      goto LABEL_7;
    }
    if ( (unsigned __int8)a2 == 3 )
    {
LABEL_6:
      result = (_QWORD *)WdLogNewEntry5_WdTrace(v9, a2);
      result[4] = a1 - 56;
LABEL_7:
      result[3] = a4;
      return result;
    }
    goto LABEL_14;
  }
  if ( a3 != 2 )
  {
    v11 = WdLogNewEntry5_WdError((unsigned int)(a3 - 1));
    *(_QWORD *)(v11 + 24) = v6;
    return (_QWORD *)WdLogEvent5_WdError(v11);
  }
  v9 = (unsigned __int8)a2;
  if ( (_BYTE)a2 )
  {
    v9 = (unsigned int)(unsigned __int8)a2 - 1;
    if ( (unsigned __int8)a2 != 1 )
    {
      v9 = (unsigned int)(unsigned __int8)a2 - 2;
      if ( (unsigned int)v9 >= 2 )
      {
LABEL_14:
        v11 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v11 + 24) = v8;
        return (_QWORD *)WdLogEvent5_WdError(v11);
      }
    }
  }
  v12 = WdLogNewEntry5_WdTrace(v9, a2);
  *(_QWORD *)(v12 + 24) = a1 - 56;
  if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 80) )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1 - 56);
    WdLogEvent5_WdAssertion(v13);
  }
  result = *(_QWORD **)(a1 + 88);
  *(_QWORD *)(v12 + 32) = result[v8];
  return result;
}
