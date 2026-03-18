/*
 * XREFs of ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C000E9B8
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000AD40 (VidSchDdiNotifyInterruptWorker.c)
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
  unsigned __int32 v8; // eax
  _QWORD *v9; // rax

  v4 = *((_QWORD *)a1 + 3);
  v5 = a2;
  if ( (_DWORD)a3 )
  {
    v6 = *((_DWORD *)a1 + 28);
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 40, 0, 0);
  }
  else
  {
    *a4 = a2;
    v6 = *((_DWORD *)a1 + 16);
    if ( a2 == v6 || a2 == *((_DWORD *)a1 + 18) )
      return 1LL;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 38, 0, 0);
  }
  if ( v8 < v6 )
  {
    if ( a2 <= v8 )
      return 1LL;
  }
  else if ( a2 > v8 )
  {
LABEL_10:
    v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, 0LL, a3);
    v9[6] = v6;
    v9[3] = 281LL;
    v9[4] = 1LL;
    v9[5] = v5;
    v9[7] = *(_QWORD *)(v4 + 16);
    WdLogEvent5_WdCriticalError(v9);
    JUMPOUT(0x1C001C187LL);
  }
  if ( a2 < v6 )
    goto LABEL_10;
  return 1LL;
}
