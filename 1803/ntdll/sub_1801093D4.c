/*
 * XREFs of sub_1801093D4 @ 0x1801093D4
 * Callers:
 *     sub_18002D3B8 @ 0x18002D3B8 (sub_18002D3B8.c)
 *     SbSelectProcedure @ 0x18002D680 (SbSelectProcedure.c)
 *     sub_18007EDB4 @ 0x18007EDB4 (sub_18007EDB4.c)
 * Callees:
 *     EtwEventWrite @ 0x180007400 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

ULONG __fastcall sub_1801093D4(REGHANDLE RegHandle, __int64 a2, __int16 a3, unsigned __int16 a4, __int64 a5)
{
  ULONG v9; // r8d
  __int16 v11; // [rsp+28h] [rbp-61h] BYREF
  _QWORD v12[16]; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int16 v13; // [rsp+100h] [rbp+77h] BYREF

  v13 = a4;
  memset(v12, 0, sizeof(v12));
  v11 = a3;
  v12[0] = a2;
  v12[2] = &v11;
  v12[4] = &v13;
  v12[1] = 16LL;
  v9 = 3;
  v12[3] = 2LL;
  v12[5] = 2LL;
  if ( a4 )
  {
    v9 = 4;
    v12[6] = a5;
    v12[7] = a4;
  }
  return EtwEventWrite(RegHandle, &stru_180123F50, v9, (PEVENT_DATA_DESCRIPTOR)v12);
}
