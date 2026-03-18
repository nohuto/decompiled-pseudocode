/*
 * XREFs of Template_xxxqNR3 @ 0x180149DFC
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800B0364 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xxxqNR3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-39h] BYREF
  __int64 *v10; // [rsp+30h] [rbp-29h]
  __int64 v11; // [rsp+38h] [rbp-21h]
  char *v12; // [rsp+40h] [rbp-19h]
  __int64 v13; // [rsp+48h] [rbp-11h]
  int *v14; // [rsp+50h] [rbp-9h]
  __int64 v15; // [rsp+58h] [rbp-1h]
  __int64 v16; // [rsp+60h] [rbp+7h]
  int v17; // [rsp+68h] [rbp+Fh]
  int v18; // [rsp+6Ch] [rbp+13h]
  __int64 v19; // [rsp+B0h] [rbp+57h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+5Fh] BYREF

  v20 = a4;
  v19 = a3;
  UserData.Ptr = (ULONGLONG)&v19;
  *(_QWORD *)&UserData.Size = 8LL;
  v18 = 0;
  v10 = &v20;
  v12 = &a5;
  v14 = &a6;
  v16 = a8;
  v17 = 16 * a6;
  v11 = 8LL;
  v13 = 8LL;
  v15 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_BLT, 5u, &UserData);
}
