/*
 * XREFs of KiInitializeUserApc @ 0x1400DBCA0
 * Callers:
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x14000EF80 (KiSetupForInstrumentationReturn.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     KeContextFromKframes @ 0x1400D9CC0 (KeContextFromKframes.c)
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiCopyInformation @ 0x140203A98 (KiCopyInformation.c)
 */

unsigned __int64 __fastcall KiInitializeUserApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  unsigned __int64 result; // rax
  _QWORD *v12; // r8
  const char *i; // rax
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v17; // [rsp+40h] [rbp-108h]
  _QWORD *v18; // [rsp+50h] [rbp-F8h]
  _BYTE v19[2]; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+6Ah] [rbp-DEh]
  unsigned __int64 v21; // [rsp+78h] [rbp-D0h]

  if ( a1 )
  {
    v18 = (_QWORD *)((*(_QWORD *)(a2 + 384) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = (__int64)(v18 - 154);
    v17 = (__int64)(v18 - 154);
    if ( (unsigned __int64)(v18 - 154) >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 1271) = *(_BYTE *)(v9 + 1271);
    v10 = v18 - 154;
    *(_DWORD *)(v17 + 48) = 1048603;
    KeContextFromKframes(a2, a1, v17);
    v18[3] = *(_QWORD *)(v17 + 152);
    *v18 = *(_QWORD *)(v17 + 248);
  }
  else
  {
    v10 = *(_QWORD **)(a2 + 208);
  }
  *v10 = a4;
  v10[1] = a5;
  v10[2] = a6;
  v10[3] = a3;
  *(_QWORD *)(a2 + 384) = v10;
  *(_QWORD *)(a2 + 360) = KeUserApcDispatcher;
  *(_WORD *)(a2 + 368) = 51;
  if ( *(_BYTE *)(a2 + 43) != 2 )
    KiSetupForInstrumentationReturn(a2);
  result = KiQueryUnbiasedInterruptTime();
  v21 = result;
  if ( result >= qword_140387E20 )
  {
    __sidt(v19);
    v12 = (_QWORD *)v20;
    for ( i = (const char *)v20; (unsigned __int64)i < v20 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v14 = 848;
    v15 = qword_140387E10;
    while ( v14 >= 8 )
    {
      v15 = __ROR8__(v15 - *v12++, qword_140387E18);
      v14 -= 8;
    }
    while ( v14 )
    {
      v15 = __ROR8__(v15 - *(unsigned __int8 *)v12, qword_140387E18);
      v12 = (_QWORD *)((char *)v12 + 1);
      --v14;
    }
    if ( qword_140387E28 != v15 )
    {
      if ( qword_140387DE0 )
        goto LABEL_22;
      qword_140387DE0 = (unsigned int)__ROL4__(-1879048176, 196);
      qword_140387DE8 = 0LL;
      qword_140387DF0 = 0LL;
      qword_140387DF8 = 269LL;
      qword_140387E00 = v20;
    }
    if ( !qword_140387DE0 )
    {
LABEL_25:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140387E20 = result;
      return result;
    }
LABEL_22:
    if ( stru_140387DA0.DeferredRoutine != KiSchedulerDpc )
    {
      stru_140387DA0.TargetInfoAsUlong = 275;
      stru_140387DA0.DeferredRoutine = KiSchedulerDpc;
      stru_140387DA0.DeferredContext = &stru_140387DA0;
      stru_140387DA0.DpcData = 0LL;
      stru_140387DA0.ProcessorHistory = 0LL;
    }
    qword_140387E08 = 574120LL;
    KeInsertQueueDpc(&stru_140387DA0, 0LL, 0LL);
    goto LABEL_25;
  }
  return result;
}
