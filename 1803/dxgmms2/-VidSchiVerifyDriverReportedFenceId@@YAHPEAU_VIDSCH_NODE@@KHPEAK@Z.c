/*
 * XREFs of ?VidSchiVerifyDriverReportedFenceId@@YAHPEAU_VIDSCH_NODE@@KHPEAK@Z @ 0x1C00030C4
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C520 (VidSchDdiNotifyInterruptWorker.c)
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
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  _QWORD *v10; // rax

  v4 = *((_QWORD *)a1 + 3);
  v5 = a2;
  if ( (_DWORD)a3 )
  {
    v6 = *((_DWORD *)a1 + 28);
    v8 = 160LL;
  }
  else
  {
    *a4 = a2;
    v6 = *((_DWORD *)a1 + 16);
    if ( a2 == v6 || a2 == *((_DWORD *)a1 + 18) )
      return 1LL;
    v8 = 152LL;
  }
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)((char *)a1 + v8), 0, 0);
  if ( v9 < v6 )
  {
    if ( (unsigned int)v5 <= v9 )
      return 1LL;
    goto LABEL_8;
  }
  if ( (unsigned int)v5 <= v9 )
  {
LABEL_8:
    if ( (unsigned int)v5 < v6 )
      goto LABEL_13;
    return 1LL;
  }
LABEL_13:
  if ( !*(_BYTE *)(v4 + 53) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, v8, a3);
    v10[6] = v6;
    v10[3] = 281LL;
    v10[4] = 1LL;
    v10[5] = v5;
    v10[7] = *(_QWORD *)(v4 + 16);
    WdLogEvent5_WdCriticalError(v10);
    JUMPOUT(0x1C0018DAALL);
  }
  *((_DWORD *)a1 + 500) = 1;
  result = 0LL;
  *((_BYTE *)a1 + 1993) = 1;
  return result;
}
