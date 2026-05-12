/*
 * XREFs of Template_qcccjxxcxxqqq @ 0x1C0046110
 * Callers:
 *     StorpTelemetrySendUnitQos @ 0x1C00458C4 (StorpTelemetrySendUnitQos.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjxxcxxqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  char *v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  char *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  char *v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  char *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  char *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  char *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  char *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  char *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+148h] [rbp+48h] BYREF

  v42 = a4;
  UserData.Ptr = (unsigned __int64)&v42;
  *(_QWORD *)&UserData.Size = 4LL;
  v18 = &a5;
  v19 = 1LL;
  v20 = &a6;
  v21 = 1LL;
  v22 = &a7;
  v24 = a8;
  v26 = &a9;
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  v34 = &a13;
  v36 = &a14;
  v38 = &a15;
  v40 = &a16;
  v23 = 1LL;
  v25 = 16LL;
  v27 = 8LL;
  v29 = 8LL;
  v31 = 1LL;
  v33 = 8LL;
  v35 = 8LL;
  v37 = 4LL;
  v39 = 4LL;
  v41 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitQosData, 0LL, 0xDu, &UserData);
}
