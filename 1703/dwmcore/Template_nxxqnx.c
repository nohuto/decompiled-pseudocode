/*
 * XREFs of Template_nxxqnx @ 0x18014201C
 * Callers:
 *     ?Trace@CRateInfo@@QEAAXXZ @ 0x1800B8414 (-Trace@CRateInfo@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_nxxqnx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONGLONG a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-59h] BYREF
  char *v12; // [rsp+30h] [rbp-49h]
  __int64 v13; // [rsp+38h] [rbp-41h]
  char *v14; // [rsp+40h] [rbp-39h]
  __int64 v15; // [rsp+48h] [rbp-31h]
  char *v16; // [rsp+50h] [rbp-29h]
  __int64 v17; // [rsp+58h] [rbp-21h]
  __int64 v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  char *v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]

  v12 = &a5;
  UserData.Ptr = a4;
  v14 = &a6;
  *(_QWORD *)&UserData.Size = 8LL;
  v16 = &a7;
  v18 = a9;
  v20 = &a10;
  v13 = 8LL;
  v15 = 8LL;
  v17 = 4LL;
  v19 = 8LL;
  v21 = 8LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_RATEINFO, 6u, &UserData);
}
