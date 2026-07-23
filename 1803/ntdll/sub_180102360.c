/*
 * XREFs of sub_180102360 @ 0x180102360
 * Callers:
 *     sub_180012070 @ 0x180012070 (sub_180012070.c)
 *     sub_18001F734 @ 0x18001F734 (sub_18001F734.c)
 *     sub_180022300 @ 0x180022300 (sub_180022300.c)
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 *     sub_18006248C @ 0x18006248C (sub_18006248C.c)
 * Callees:
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180102360(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  __int64 v5; // [rsp+30h] [rbp-59h] BYREF
  __int64 v6; // [rsp+38h] [rbp-51h] BYREF
  __int64 v7; // [rsp+40h] [rbp-49h] BYREF
  __int64 v8; // [rsp+48h] [rbp-41h] BYREF
  __int64 v9; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v10[32]; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  __int64 *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  __int64 *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  __int64 *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  __int64 *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]

  if ( (unsigned int)dword_180156650 > 5 )
  {
    v6 = *a2;
    v7 = a2[1];
    v8 = a2[2];
    v9 = a2[3];
    v11 = &v5;
    v13 = &v6;
    v15 = &v7;
    v17 = &v8;
    v19 = &v9;
    v5 = a1;
    v12 = 8LL;
    v14 = 8LL;
    v16 = 8LL;
    v18 = 8LL;
    v20 = 8LL;
    return sub_1800886A4(
             (__int64)&dword_180156650,
             (unsigned __int8 *)dword_180123C65,
             a3,
             a4,
             7u,
             (PEVENT_DATA_DESCRIPTOR)v10);
  }
  return result;
}
