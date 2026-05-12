/*
 * XREFs of Template_pqcccq @ 0x1C0037974
 * Callers:
 *     StorPortUnitActiveConditionStep1 @ 0x1C0004820 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitActiveConditionStep2 @ 0x1C000488C (StorPortUnitActiveConditionStep2.c)
 *     StorPortUnitIdleCondition @ 0x1C0004970 (StorPortUnitIdleCondition.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C000EA38 (StorPortUnitPoFxD0Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C0037434 (StorPortUnitPowerNotRequiredStep2.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C00377F4 (StorPortUnitPowerRequiredStep2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS Template_pqcccq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  va_list v5; // [rsp+40h] [rbp-41h]
  __int64 v6; // [rsp+48h] [rbp-39h]
  va_list v7; // [rsp+50h] [rbp-31h]
  __int64 v8; // [rsp+58h] [rbp-29h]
  va_list v9; // [rsp+60h] [rbp-21h]
  __int64 v10; // [rsp+68h] [rbp-19h]
  va_list v11; // [rsp+70h] [rbp-11h]
  __int64 v12; // [rsp+78h] [rbp-9h]
  va_list v13; // [rsp+80h] [rbp-1h]
  __int64 v14; // [rsp+88h] [rbp+7h]
  __int64 v15; // [rsp+D8h] [rbp+57h] BYREF
  va_list va; // [rsp+D8h] [rbp+57h]
  __int64 v17; // [rsp+E0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+E0h] [rbp+5Fh]
  __int64 v19; // [rsp+E8h] [rbp+67h] BYREF
  va_list va2; // [rsp+E8h] [rbp+67h]
  __int64 v21; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+F0h] [rbp+6Fh]
  __int64 v23; // [rsp+F8h] [rbp+77h] BYREF
  va_list va4; // [rsp+F8h] [rbp+77h]
  va_list va5; // [rsp+100h] [rbp+7Fh] BYREF

  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v23 = va_arg(va5, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 4LL;
  va_copy(v7, va2);
  va_copy(v9, va3);
  va_copy(v11, va4);
  va_copy(v13, va5);
  v8 = 1LL;
  v10 = 1LL;
  v12 = 1LL;
  v14 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, a2, 0LL, 6u, &UserData);
}
