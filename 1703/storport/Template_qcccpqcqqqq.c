/*
 * XREFs of Template_qcccpqcqqqq @ 0x1C0038118
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C000E778 (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccpqcqqqq(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  char *v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  char *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  char *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  char *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  char *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  char *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  char *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int v36; // [rsp+138h] [rbp+38h] BYREF

  v36 = a4;
  UserData.Ptr = (unsigned __int64)&v36;
  *(_QWORD *)&UserData.Size = 4LL;
  v14 = 0;
  v16 = &a5;
  v18 = &a6;
  v20 = &a7;
  v17 = 1LL;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v28 = &a11;
  v30 = &a12;
  v32 = &a13;
  v34 = &v14;
  v19 = 1LL;
  v21 = 1LL;
  v23 = 8LL;
  v25 = 4LL;
  v27 = 1LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitPowerRequest, a3, 0xBu, &UserData);
}
