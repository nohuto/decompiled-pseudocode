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

int __fastcall sub_18007A164(PVOID BaseOfImage, __int64 a2, __int64 *a3, int a4)
{
  _DWORD *v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  _DWORD *v11; // r9
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
  __int16 v26; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v32[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int16 *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int16 *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int16 *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  _BYTE v47[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v48[16]; // [rsp+110h] [rbp+10h] BYREF

  LODWORD(v8) = RtlRunOnceExecuteOnce(&stru_18015D080, sub_180082590, 0LL, 0LL);
  if ( (int)v8 >= 0 )
  {
    v10 = (unsigned __int16)dword_18015CFB0;
    LODWORD(v8) = ++dword_18015CFB0;
    if ( !v10 )
    {
      v27 = 0LL;
      if ( a2 )
      {
        LODWORD(v8) = LdrResGetRCConfig(BaseOfImage, a2, &v27, 4096, 0);
        if ( (int)v8 >= 0 )
          v11 = v27;
        else
          v11 = 0LL;
      }
      else
      {
        v8 = sub_180033B60(BaseOfImage, v9, 0, 1);
        v11 = v8;
      }
      if ( v11 )
      {
        if ( a4 < 2 )
        {
          if ( (unsigned int)dword_180156530 > 5 )
          {
            LODWORD(v8) = sub_18007A45C(&dword_180156530, 0x400000000000LL);
            if ( (_BYTE)v8 )
            {
              sub_1800CC66C(v48, L"ResIdCount less than 2.");
              LODWORD(v8) = sub_1800886A4(
                              (int)&dword_180156530,
                              (int)&dword_1801236E1,
                              v17,
                              v18,
                              3u,
                              (PEVENT_DATA_DESCRIPTOR)v47);
            }
          }
        }
        else if ( a4 == 2 )
        {
          if ( (unsigned int)dword_180156530 > 5 )
          {
            LODWORD(v8) = sub_18007A45C(&dword_180156530, 0x400000000000LL);
            if ( (_BYTE)v8 )
            {
              v28 = *a3;
              v29 = a3[1];
              v26 = 4;
              v38 = 4LL;
              v39 = &v26;
              v33 = &v28;
              v41 = (__int16 *)(v20 + 28);
              LODWORD(v27) = a2 != 0;
              v34 = 8LL;
              v35 = &v29;
              v36 = 8LL;
              v37 = (__int64 *)&v27;
              v40 = v21;
              v42 = 16LL;
              LODWORD(v8) = sub_1800886A4(
                              (int)&dword_180156530,
                              (int)&dword_180123B41,
                              v19,
                              v20,
                              7u,
                              (PEVENT_DATA_DESCRIPTOR)v32);
            }
          }
        }
        else if ( a4 == 3 )
        {
          if ( (unsigned int)dword_180156530 > 5 )
          {
            LODWORD(v8) = sub_18007A45C(&dword_180156530, 0x400000000000LL);
            if ( (_BYTE)v8 )
            {
              v29 = *a3;
              v28 = a3[1];
              v30 = a3[2];
              v26 = 4;
              v40 = 4LL;
              v35 = &v28;
              v41 = &v26;
              v33 = &v29;
              v37 = &v30;
              v43 = (__int16 *)(v13 + 28);
              LODWORD(v27) = a2 != 0;
              v34 = 8LL;
              v36 = 8LL;
              v38 = 8LL;
              v39 = (__int16 *)&v27;
              v42 = v14;
              v44 = 16LL;
              LODWORD(v8) = sub_1800886A4(
                              (int)&dword_180156530,
                              (int)&dword_1801239B2,
                              v12,
                              v13,
                              8u,
                              (PEVENT_DATA_DESCRIPTOR)v32);
            }
          }
        }
        else if ( (unsigned int)dword_180156530 > 5 )
        {
          LODWORD(v8) = sub_18007A45C(&dword_180156530, 0x400000000000LL);
          if ( (_BYTE)v8 )
          {
            v30 = *a3;
            v29 = a3[1];
            v28 = a3[2];
            v31 = a3[3];
            v26 = 4;
            v42 = 4LL;
            v35 = &v29;
            v43 = &v26;
            v33 = &v30;
            v37 = &v28;
            v45 = v23 + 28;
            LODWORD(v27) = a2 != 0;
            v34 = 8LL;
            v36 = 8LL;
            v38 = 8LL;
            v39 = (__int16 *)&v31;
            v40 = 8LL;
            v41 = (__int16 *)&v27;
            v44 = v24;
            v46 = 16LL;
            LODWORD(v8) = sub_1800886A4(
                            (int)&dword_180156530,
                            (int)&dword_1801237A7,
                            v22,
                            v23,
                            9u,
                            (PEVENT_DATA_DESCRIPTOR)v32);
          }
        }
      }
      else if ( (unsigned int)dword_180156530 > 5 )
      {
        LODWORD(v8) = sub_18007A45C(&dword_180156530, 0x400000000000LL);
        if ( (_BYTE)v8 )
        {
          sub_1800CC66C(v48, L"Failed to retrieve service checksum.");
          LODWORD(v8) = sub_1800886A4(
                          (int)&dword_180156530,
                          (int)&dword_180123892,
                          v15,
                          v16,
                          3u,
                          (PEVENT_DATA_DESCRIPTOR)v47);
        }
      }
    }
  }
  return (int)v8;
}
