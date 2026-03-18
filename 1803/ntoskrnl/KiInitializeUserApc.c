/*
 * XREFs of KiInitializeUserApc @ 0x1400C07EC
 * Callers:
 *     KiDeliverApc @ 0x1400F8A70 (KiDeliverApc.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KiDispatchException @ 0x140130BA0 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x140131360 (KeContextFromKframes.c)
 *     KiSetupForInstrumentationReturn @ 0x140144468 (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiCopyInformation @ 0x140240F28 (KiCopyInformation.c)
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
  _QWORD *v17; // [rsp+40h] [rbp-108h]
  _QWORD *v18; // [rsp+50h] [rbp-F8h]
  _BYTE v19[2]; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v20; // [rsp+6Ah] [rbp-DEh]
  unsigned __int64 v21; // [rsp+78h] [rbp-D0h]

  if ( a1 )
  {
    v18 = (_QWORD *)((*(_QWORD *)(a2 + 384) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = (__int64)(v18 - 154);
    v17 = v18 - 154;
    if ( (unsigned __int64)(v18 - 154) >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 1271) = *(_BYTE *)(v9 + 1271);
    v10 = v18 - 154;
    *((_DWORD *)v17 + 12) = 1048603;
    KeContextFromKframes(a2, a1, v17);
    v18[3] = v17[19];
    *v18 = v17[31];
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
  if ( result >= qword_1403CB010 )
  {
    __sidt(v19);
    v12 = (_QWORD *)v20;
    for ( i = (const char *)v20; (unsigned __int64)i < v20 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v14 = 848;
    v15 = qword_1403CB000;
    while ( v14 >= 8 )
    {
      v15 = __ROR8__(v15 - *v12++, qword_1403CB008);
      v14 -= 8;
    }
    while ( v14 )
    {
      v15 = __ROR8__(v15 - *(unsigned __int8 *)v12, qword_1403CB008);
      v12 = (_QWORD *)((char *)v12 + 1);
      --v14;
    }
    if ( qword_1403CB018 != v15 )
    {
      if ( qword_1403CAFD0 )
        goto LABEL_21;
      qword_1403CAFD0 = (unsigned int)__ROL4__(-1879048176, 196);
      qword_1403CAFD8 = 0LL;
      qword_1403CAFE0 = 0LL;
      qword_1403CAFE8 = 269LL;
      qword_1403CAFF0 = v20;
    }
    if ( !qword_1403CAFD0 )
    {
LABEL_24:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_1403CB010 = result;
      return result;
    }
LABEL_21:
    if ( (void (__fastcall __noreturn *)())stru_1403CAF90.DeferredRoutine != KiSchedulerDpc )
    {
      stru_1403CAF90.TargetInfoAsUlong = 275;
      stru_1403CAF90.DeferredRoutine = (PKDEFERRED_ROUTINE)KiSchedulerDpc;
      stru_1403CAF90.DeferredContext = &stru_1403CAF90;
      stru_1403CAF90.DpcData = 0LL;
      stru_1403CAF90.ProcessorHistory = 0LL;
    }
    qword_1403CAFF8 = 574120LL;
    KeInsertQueueDpc(&stru_1403CAF90, 0LL, 0LL);
    goto LABEL_24;
  }
  return result;
}
