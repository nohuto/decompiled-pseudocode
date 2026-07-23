/*
 * XREFs of sub_1801063D4 @ 0x1801063D4
 * Callers:
 *     sub_180038FC4 @ 0x180038FC4 (sub_180038FC4.c)
 *     SbSelectProcedure @ 0x180039270 (SbSelectProcedure.c)
 *     sub_1800831CC @ 0x1800831CC (sub_1800831CC.c)
 * Callees:
 *     EtwEventWrite @ 0x18005E0F0 (EtwEventWrite.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

ULONG __fastcall sub_1801063D4(REGHANDLE RegHandle, __int64 a2, __int16 a3, unsigned __int16 a4, __int64 a5)
{
  ULONG v9; // r8d
  __int16 v11; // [rsp+28h] [rbp-61h] BYREF
  _QWORD v12[16]; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int16 v13; // [rsp+100h] [rbp+77h] BYREF

  v13 = a4;
  memset(&v12[1], 0, 0x78uLL);
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
  return EtwEventWrite(RegHandle, &stru_1801246D0, v9, (PEVENT_DATA_DESCRIPTOR)v12);
}
