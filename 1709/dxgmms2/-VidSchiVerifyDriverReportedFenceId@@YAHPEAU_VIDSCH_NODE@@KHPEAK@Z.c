/*
 * XREFs of ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C000D11C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C020 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiVerifyDriverReportedFenceId(
        struct _VIDSCH_NODE *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int32 v6; // edi
  unsigned __int32 v7; // eax
  __int64 result; // rax
  _QWORD *v9; // rax

  v4 = *((_QWORD *)a1 + 3);
  v5 = a2;
  if ( (_DWORD)a3 )
  {
    v6 = *((_DWORD *)a1 + 28);
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 40, 0, 0);
  }
  else
  {
    *a4 = a2;
    v6 = *((_DWORD *)a1 + 16);
    if ( a2 == v6 || a2 == *((_DWORD *)a1 + 18) )
      return 1LL;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 38, 0, 0);
  }
  if ( v7 < v6 )
  {
    if ( a2 <= v7 )
      return 1LL;
  }
  else if ( a2 > v7 )
  {
    goto LABEL_13;
  }
  if ( a2 >= v6 )
    return 1LL;
LABEL_13:
  if ( !*(_BYTE *)(v4 + 53) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, 0LL, a3);
    v9[6] = v6;
    v9[3] = 281LL;
    v9[4] = 1LL;
    v9[5] = v5;
    v9[7] = *(_QWORD *)(v4 + 16);
    WdLogEvent5_WdCriticalError(v9);
    JUMPOUT(0x1C001DBCELL);
  }
  *((_DWORD *)a1 + 492) = 1;
  result = 0LL;
  *((_BYTE *)a1 + 1961) = 1;
  return result;
}
