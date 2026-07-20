/*
 * XREFs of SmpEventWriteString2 @ 0x140011EF4
 * Callers:
 *     SmpProcessFileRenames @ 0x1400070C0 (SmpProcessFileRenames.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 */

void __fastcall SmpEventWriteString2(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v5; // ecx
  int v6; // r8d
  unsigned __int16 v7; // ax
  __int64 v8; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v10; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+38h] [rbp-48h]
  int v12; // [rsp+3Ch] [rbp-44h]
  char *v13; // [rsp+40h] [rbp-40h]
  int v14; // [rsp+48h] [rbp-38h]
  int v15; // [rsp+4Ch] [rbp-34h]
  __int64 v16; // [rsp+50h] [rbp-30h]
  int v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+5Ch] [rbp-24h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+6Ch] [rbp-14h]

  if ( SmpTraceHandle )
  {
    if ( EtwEventEnabled(SmpTraceHandle, &SmssEvt_FileRename_Info) )
    {
      v5 = *a2;
      v6 = *a3;
      v7 = *a2;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      LOWORD(v9[0]) = v7 >> 1;
      WORD2(v9[0]) = (unsigned __int16)v6 >> 1;
      v10 = v9;
      v13 = (char *)v9 + 4;
      v16 = *((_QWORD *)a2 + 1);
      v8 = *((_QWORD *)a3 + 1);
      v11 = 2;
      v14 = 2;
      v17 = v5;
      v20 = v6;
      v19 = v8;
      EtwEventWrite(SmpTraceHandle, &SmssEvt_FileRename_Info, 4LL, &v10, v9[0], v9[1]);
    }
  }
}
