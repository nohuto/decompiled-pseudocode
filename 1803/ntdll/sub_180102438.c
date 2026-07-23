/*
 * XREFs of sub_180102438 @ 0x180102438
 * Callers:
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 *     sub_1800624DC @ 0x1800624DC (sub_1800624DC.c)
 * Callees:
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180102438(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG result; // eax
  int v5; // [rsp+30h] [rbp-29h] BYREF
  __int64 v6; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v8[32]; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  __int64 *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  int *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh]

  switch ( a1 )
  {
    case 0x1000:
      if ( (unsigned int)dword_180156650 > 5 )
      {
        v7[0] = a2;
        v6 = a3;
        v11 = &v6;
        v5 = a4;
        v9 = v7;
        v10 = 8LL;
        v12 = 8LL;
        v13 = &v5;
        v14 = 4LL;
        return sub_1800886A4(
                 (__int64)&dword_180156650,
                 (unsigned __int8 *)dword_180123C30,
                 a3,
                 a4,
                 5u,
                 (PEVENT_DATA_DESCRIPTOR)v8);
      }
      break;
    case 0x2000:
      if ( (unsigned int)dword_180156650 > 5 )
      {
        v7[0] = a2;
        v6 = a3;
        v11 = &v6;
        v5 = a4;
        v9 = v7;
        v10 = 8LL;
        v12 = 8LL;
        v13 = &v5;
        v14 = 4LL;
        return sub_1800886A4(
                 (__int64)&dword_180156650,
                 (unsigned __int8 *)dword_180123BD5,
                 a3,
                 a4,
                 5u,
                 (PEVENT_DATA_DESCRIPTOR)v8);
      }
      break;
    case 0x4000:
      if ( (unsigned int)dword_180156650 > 5 )
      {
        v7[0] = a2;
        v6 = a3;
        v11 = &v6;
        v5 = a4;
        v9 = v7;
        v10 = 8LL;
        v12 = 8LL;
        v13 = &v5;
        v14 = 4LL;
        return sub_1800886A4(
                 (__int64)&dword_180156650,
                 (unsigned __int8 *)dword_180123CF4,
                 a3,
                 a4,
                 5u,
                 (PEVENT_DATA_DESCRIPTOR)v8);
      }
      break;
    default:
      if ( a1 == 0x8000 && (unsigned int)dword_180156650 > 5 )
      {
        v6 = a2;
        v7[0] = a3;
        v11 = v7;
        v5 = a4;
        v9 = &v6;
        v10 = 8LL;
        v12 = 8LL;
        v13 = &v5;
        v14 = 4LL;
        return sub_1800886A4(
                 (__int64)&dword_180156650,
                 (unsigned __int8 *)dword_180123B9F,
                 a3,
                 a4,
                 5u,
                 (PEVENT_DATA_DESCRIPTOR)v8);
      }
      break;
  }
  return result;
}
