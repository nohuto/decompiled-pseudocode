/*
 * XREFs of Template_xxxq @ 0x1801A89E8
 * Callers:
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1801A77DC (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xxxq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  __int64 v7; // [rsp+20h] [rbp-29h] BYREF
  __int64 v8; // [rsp+28h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-19h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-9h]
  __int64 v11; // [rsp+48h] [rbp-1h]
  char *v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+58h] [rbp+Fh]
  char *v14; // [rsp+60h] [rbp+17h]
  __int64 v15; // [rsp+68h] [rbp+1Fh]

  v8 = qword_180241C48;
  v7 = qword_180241C40;
  UserData.Ptr = (ULONGLONG)&v7;
  v10 = &v8;
  v12 = &a5;
  v14 = &a6;
  *(_QWORD *)&UserData.Size = 8LL;
  v11 = 8LL;
  v13 = 8LL;
  v15 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATEWAITFAILED, 4u, &UserData);
}
