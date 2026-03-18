/*
 * XREFs of KiInitializeUserApc @ 0x140007918
 * Callers:
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 * Callees:
 *     KiSetupForInstrumentationReturn @ 0x1400073D8 (KiSetupForInstrumentationReturn.c)
 *     KiDispatchException @ 0x140007C60 (KiDispatchException.c)
 *     KeContextFromKframes @ 0x140008458 (KeContextFromKframes.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiCopyInformation @ 0x1401FDAD4 (KiCopyInformation.c)
 */

unsigned __int64 __fastcall KiInitializeUserApc(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  unsigned __int64 result; // rax
  _QWORD *v12; // r8
  const char *i; // rax
  unsigned int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // [rsp+38h] [rbp-120h]
  _QWORD *v18; // [rsp+40h] [rbp-118h]
  _QWORD *v19; // [rsp+58h] [rbp-100h]
  char v20[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+72h] [rbp-E6h]
  unsigned __int64 v22; // [rsp+80h] [rbp-D8h]

  v17 = a1;
  if ( a1 )
  {
    v19 = (_QWORD *)((*(_QWORD *)(a2 + 384) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = (__int64)(v19 - 154);
    v18 = v19 - 154;
    if ( (unsigned __int64)(v19 - 154) >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 1271) = *(_BYTE *)(v9 + 1271);
    v10 = v19 - 154;
    *((_DWORD *)v18 + 12) = 1048603;
    KeContextFromKframes(a2, v17, v18);
    a1 = v19;
    v19[3] = v18[19];
    *v19 = v18[31];
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
  LOBYTE(a1) = 1;
  result = KiQueryUnbiasedInterruptTime(a1);
  v22 = result;
  if ( result >= qword_14036BBA0 )
  {
    __sidt(v20);
    v12 = (_QWORD *)v21;
    for ( i = (const char *)v21; (unsigned __int64)i < v21 + 848; i += 64 )
      _mm_prefetch(i, 0);
    v14 = 848;
    v15 = qword_14036BB90;
    v16 = (unsigned int)qword_14036BB98;
    while ( v14 >= 8 )
    {
      v15 = __ROR8__(v15 - *v12++, qword_14036BB98);
      v14 -= 8;
    }
    while ( v14 )
    {
      v15 = __ROR8__(v15 - *(unsigned __int8 *)v12, qword_14036BB98);
      v12 = (_QWORD *)((char *)v12 + 1);
      --v14;
    }
    if ( qword_14036BBA8 != v15 )
    {
      if ( qword_14036BB60 )
        goto LABEL_22;
      qword_14036BB60 = (unsigned int)__ROL4__(-1879048176, 196);
      qword_14036BB68 = 0LL;
      qword_14036BB70 = 0LL;
      qword_14036BB78 = 269LL;
      qword_14036BB80 = v21;
    }
    if ( !qword_14036BB60 )
    {
LABEL_25:
      LOBYTE(v16) = 1;
      result = KiQueryUnbiasedInterruptTime(v16) + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_14036BBA0 = result;
      return result;
    }
LABEL_22:
    if ( Dpc.DeferredRoutine != KiSchedulerDpc )
    {
      Dpc.TargetInfoAsUlong = 275;
      Dpc.DeferredRoutine = KiSchedulerDpc;
      Dpc.DeferredContext = &Dpc;
      Dpc.DpcData = 0LL;
      Dpc.ProcessorHistory = 0LL;
    }
    qword_14036BB88 = 574120LL;
    KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    goto LABEL_25;
  }
  return result;
}
