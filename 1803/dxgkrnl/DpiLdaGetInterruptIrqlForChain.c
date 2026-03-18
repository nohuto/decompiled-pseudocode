/*
 * XREFs of DpiLdaGetInterruptIrqlForChain @ 0x1C0209228
 * Callers:
 *     DpiFdoConnectInterrupt @ 0x1C01F2108 (DpiFdoConnectInterrupt.c)
 * Callees:
 *     DpiFdoGetInterruptIrql @ 0x1C01F4CDC (DpiFdoGetInterruptIrql.c)
 */

__int64 __fastcall DpiLdaGetInterruptIrqlForChain(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rbx
  unsigned __int8 v3; // bp
  int InterruptIrql; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int8 v12; // dl
  _QWORD *v13; // rax
  __int64 result; // rax
  unsigned __int8 v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  InterruptIrql = -1073741823;
  if ( *(_BYTE *)(v2 + 508) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    v7 = *(_QWORD *)(v2 + 2592);
    if ( !v7 )
    {
LABEL_15:
      InterruptIrql = -1071774666;
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1);
      v13[3] = 275LL;
      v13[4] = 21LL;
      v13[5] = -1071774666LL;
      WdLogEvent5_WdCriticalError(v13);
      goto LABEL_16;
    }
    v6 = *(_QWORD *)(v7 + 64);
  }
  v8 = *(_DWORD *)(v6 + 2600);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v6 + 2592);
    while ( 1 )
    {
      a1 = *(_QWORD *)(v10 + 8 * v9);
      v11 = *(_QWORD *)(a1 + 64);
      if ( (unsigned int)(*(_DWORD *)(v11 + 236) - 1) > 1 )
        goto LABEL_15;
      a1 = *(_QWORD *)(v11 + 1152);
      if ( !a1 && !*(_BYTE *)(v2 + 2556) )
        goto LABEL_15;
      InterruptIrql = DpiFdoGetInterruptIrql(a1, &v15);
      if ( InterruptIrql >= 0 )
      {
        v12 = v3;
        if ( v3 < v15 )
          v12 = v15;
        v9 = (unsigned int)(v9 + 1);
        v3 = v12;
        if ( (unsigned int)v9 < v8 )
          continue;
      }
      break;
    }
  }
LABEL_16:
  result = (unsigned int)InterruptIrql;
  *a2 = v3;
  return result;
}
