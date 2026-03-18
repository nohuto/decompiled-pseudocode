/*
 * XREFs of McTemplateU0xxxq @ 0x1801C3AB8
 * Callers:
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1801C29EC (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0xxxq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  __int64 v7; // [rsp+20h] [rbp-29h] BYREF
  __int64 v8; // [rsp+28h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-9h]
  __int64 v11; // [rsp+48h] [rbp-1h]
  __int64 *v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+58h] [rbp+Fh]
  char *v14; // [rsp+60h] [rbp+17h]
  __int64 v15; // [rsp+68h] [rbp+1Fh]
  char *v16; // [rsp+70h] [rbp+27h]
  __int64 v17; // [rsp+78h] [rbp+2Fh]

  v8 = qword_180272F58;
  v7 = qword_180272F60;
  v11 = 8LL;
  v10 = &v7;
  v12 = &v8;
  v14 = &a5;
  v16 = &a6;
  v13 = 8LL;
  v15 = 8LL;
  v17 = 4LL;
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATEWAITFAILED,
           5u,
           &v9);
}
