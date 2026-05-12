/*
 * XREFs of Template_qcccjqqbqt @ 0x1C00420D0
 * Callers:
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C0040688 (StorEtwHwTimeoutDetectedEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjqqbqt(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        int a10,
        __int64 a11,
        char a12,
        char a13)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-B1h] BYREF
  char *v15; // [rsp+40h] [rbp-A1h]
  __int64 v16; // [rsp+48h] [rbp-99h]
  char *v17; // [rsp+50h] [rbp-91h]
  __int64 v18; // [rsp+58h] [rbp-89h]
  char *v19; // [rsp+60h] [rbp-81h]
  __int64 v20; // [rsp+68h] [rbp-79h]
  __int64 v21; // [rsp+70h] [rbp-71h]
  __int64 v22; // [rsp+78h] [rbp-69h]
  char *v23; // [rsp+80h] [rbp-61h]
  __int64 v24; // [rsp+88h] [rbp-59h]
  int *v25; // [rsp+90h] [rbp-51h]
  __int64 v26; // [rsp+98h] [rbp-49h]
  __int64 v27; // [rsp+A0h] [rbp-41h]
  int v28; // [rsp+A8h] [rbp-39h]
  int v29; // [rsp+ACh] [rbp-35h]
  char *v30; // [rsp+B0h] [rbp-31h]
  __int64 v31; // [rsp+B8h] [rbp-29h]
  char *v32; // [rsp+C0h] [rbp-21h]
  __int64 v33; // [rsp+C8h] [rbp-19h]
  int v34; // [rsp+118h] [rbp+37h] BYREF

  v34 = a4;
  UserData.Ptr = (unsigned __int64)&v34;
  *(_QWORD *)&UserData.Size = 4LL;
  v29 = 0;
  v15 = &a5;
  v16 = 1LL;
  v17 = &a6;
  v19 = &a7;
  v21 = a8;
  v23 = &a9;
  v25 = &a10;
  v27 = a11;
  v28 = a10;
  v30 = &a12;
  v32 = &a13;
  v18 = 1LL;
  v20 = 1LL;
  v22 = 16LL;
  v24 = 4LL;
  v26 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitHwTimeout, a3, 0xAu, &UserData);
}
