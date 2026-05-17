/*
 * XREFs of sub_18007A164 @ 0x18007A164
 * Callers:
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 *     LdrResGetRCConfig @ 0x1800539B0 (LdrResGetRCConfig.c)
 *     sub_18007A45C @ 0x18007A45C (sub_18007A45C.c)
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CC66C @ 0x1800CC66C (sub_1800CC66C.c)
 */

__int64 __fastcall sub_18007A164(unsigned __int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r9
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // r8d
  int v16; // r9d
  int v17; // r8d
  int v18; // r9d
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // r10
  __int16 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v31[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int64 *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  __int64 *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int16 *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int16 *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  __int16 *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  _BYTE v46[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v47[16]; // [rsp+110h] [rbp+10h] BYREF

  result = RtlRunOnceExecuteOnce(
             &qword_18015D080,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))sub_180082590,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = (unsigned __int16)dword_18015CFB0;
    result = (unsigned int)++dword_18015CFB0;
    if ( !v10 )
    {
      v26 = 0LL;
      if ( a2 )
      {
        result = LdrResGetRCConfig(a1, a2, &v26, 4096, 0);
        if ( (int)result >= 0 )
          v11 = v26;
        else
          v11 = 0LL;
      }
      else
      {
        result = (__int64)sub_180033B60(a1, v9, 0, 1);
        v11 = result;
      }
      if ( v11 )
      {
        if ( a4 < 2 )
        {
          if ( (unsigned int)dword_180156530 > 5 )
          {
            result = sub_18007A45C(&dword_180156530, 0x400000000000LL);
            if ( (_BYTE)result )
            {
              sub_1800CC66C(v47, L"ResIdCount less than 2.");
              return sub_1800886A4(
                       (unsigned int)&dword_180156530,
                       (unsigned int)&unk_1801236E1,
                       v17,
                       v18,
                       3,
                       (__int64)v46);
            }
          }
        }
        else if ( a4 == 2 )
        {
          if ( (unsigned int)dword_180156530 > 5 )
          {
            result = sub_18007A45C(&dword_180156530, 0x400000000000LL);
            if ( (_BYTE)result )
            {
              v27 = *a3;
              v28 = a3[1];
              v25 = 4;
              v37 = 4LL;
              v38 = &v25;
              v32 = &v27;
              v40 = (__int16 *)(v20 + 28);
              LODWORD(v26) = a2 != 0;
              v33 = 8LL;
              v34 = &v28;
              v35 = 8LL;
              v36 = &v26;
              v39 = v21;
              v41 = 16LL;
              return sub_1800886A4(
                       (unsigned int)&dword_180156530,
                       (unsigned int)&unk_180123B41,
                       v19,
                       v20,
                       7,
                       (__int64)v31);
            }
          }
        }
        else if ( a4 == 3 )
        {
          if ( (unsigned int)dword_180156530 > 5 )
          {
            result = sub_18007A45C(&dword_180156530, 0x400000000000LL);
            if ( (_BYTE)result )
            {
              v28 = *a3;
              v27 = a3[1];
              v29 = a3[2];
              v25 = 4;
              v39 = 4LL;
              v34 = &v27;
              v40 = &v25;
              v32 = &v28;
              v36 = &v29;
              v42 = (__int16 *)(v13 + 28);
              LODWORD(v26) = a2 != 0;
              v33 = 8LL;
              v35 = 8LL;
              v37 = 8LL;
              v38 = (__int16 *)&v26;
              v41 = v14;
              v43 = 16LL;
              return sub_1800886A4(
                       (unsigned int)&dword_180156530,
                       (unsigned int)&unk_1801239B2,
                       v12,
                       v13,
                       8,
                       (__int64)v31);
            }
          }
        }
        else if ( (unsigned int)dword_180156530 > 5 )
        {
          result = sub_18007A45C(&dword_180156530, 0x400000000000LL);
          if ( (_BYTE)result )
          {
            v29 = *a3;
            v28 = a3[1];
            v27 = a3[2];
            v30 = a3[3];
            v25 = 4;
            v41 = 4LL;
            v34 = &v28;
            v42 = &v25;
            v32 = &v29;
            v36 = &v27;
            v44 = v23 + 28;
            LODWORD(v26) = a2 != 0;
            v33 = 8LL;
            v35 = 8LL;
            v37 = 8LL;
            v38 = (__int16 *)&v30;
            v39 = 8LL;
            v40 = (__int16 *)&v26;
            v43 = v24;
            v45 = 16LL;
            return sub_1800886A4(
                     (unsigned int)&dword_180156530,
                     (unsigned int)&unk_1801237A7,
                     v22,
                     v23,
                     9,
                     (__int64)v31);
          }
        }
      }
      else if ( (unsigned int)dword_180156530 > 5 )
      {
        result = sub_18007A45C(&dword_180156530, 0x400000000000LL);
        if ( (_BYTE)result )
        {
          sub_1800CC66C(v47, L"Failed to retrieve service checksum.");
          return sub_1800886A4((unsigned int)&dword_180156530, (unsigned int)&unk_180123892, v15, v16, 3, (__int64)v46);
        }
      }
    }
  }
  return result;
}
