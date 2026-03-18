/*
 * XREFs of DpiLdaGetInterruptIrqlForChain @ 0x1C01CD7B0
 * Callers:
 *     DpiFdoConnectInterrupt @ 0x1C0114A5C (DpiFdoConnectInterrupt.c)
 * Callees:
 *     DpiFdoGetInterruptIrql @ 0x1C0114B88 (DpiFdoGetInterruptIrql.c)
 */

__int64 __fastcall DpiLdaGetInterruptIrqlForChain(__int64 a1, unsigned __int8 *a2)
{
  int InterruptIrql; // edi
  unsigned __int8 v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // r15
  unsigned __int8 v15; // dl
  _QWORD *v16; // rax
  __int64 result; // rax
  unsigned __int8 v18; // [rsp+50h] [rbp+8h] BYREF

  InterruptIrql = -1073741823;
  v5 = 0;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*(_QWORD *)(a1 + 64) + 168LL));
  v9 = *(_QWORD *)(a1 + 64);
  if ( *(_BYTE *)(v9 + 508) == 1 )
  {
    v10 = v9;
  }
  else
  {
    v11 = *(_QWORD *)(v9 + 2592);
    if ( !v11 )
    {
LABEL_15:
      InterruptIrql = -1071774666;
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8);
      v16[3] = 275LL;
      v16[4] = 21LL;
      v16[5] = -1071774666LL;
      WdLogEvent5_WdCriticalError(v16);
      goto LABEL_16;
    }
    v10 = *(_QWORD *)(v11 + 64);
  }
  v12 = *(_DWORD *)(v10 + 2600);
  v13 = 0LL;
  if ( v12 )
  {
    v14 = *(_QWORD *)(v10 + 2592);
    while ( 1 )
    {
      v7 = *(_QWORD *)(v14 + 8 * v13);
      v6 = *(_QWORD *)(v7 + 64);
      if ( (unsigned int)(*(_DWORD *)(v6 + 236) - 1) > 1 )
        goto LABEL_15;
      v7 = *(_QWORD *)(v6 + 1152);
      if ( !v7 && !*(_BYTE *)(v9 + 2556) )
        goto LABEL_15;
      InterruptIrql = DpiFdoGetInterruptIrql(v7, &v18);
      if ( InterruptIrql >= 0 )
      {
        v15 = v5;
        if ( v5 < v18 )
          v15 = v18;
        v13 = (unsigned int)(v13 + 1);
        v5 = v15;
        if ( (unsigned int)v13 < v12 )
          continue;
      }
      break;
    }
  }
LABEL_16:
  result = (unsigned int)InterruptIrql;
  *a2 = v5;
  return result;
}
