/*
 * XREFs of Template_jqxtpp @ 0x1C004A74C
 * Callers:
 *     ndisSetEnableWakeUp @ 0x1C00D72FC (ndisSetEnableWakeUp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxtpp(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  char *v11; // [rsp+40h] [rbp-41h]
  __int64 v12; // [rsp+48h] [rbp-39h]
  char *v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  char *v15; // [rsp+60h] [rbp-21h]
  __int64 v16; // [rsp+68h] [rbp-19h]
  char *v17; // [rsp+70h] [rbp-11h]
  __int64 v18; // [rsp+78h] [rbp-9h]
  char *v19; // [rsp+80h] [rbp-1h]
  __int64 v20; // [rsp+88h] [rbp+7h]

  v11 = &a5;
  UserData.Ptr = a4;
  v13 = &a6;
  *(_QWORD *)&UserData.Size = 16LL;
  v15 = &a7;
  v17 = &a8;
  v19 = &a9;
  v12 = 4LL;
  v14 = 8LL;
  v16 = 4LL;
  v18 = 8LL;
  v20 = 8LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &SetEnableWakeUpCompleted, a3, 6u, &UserData);
}
