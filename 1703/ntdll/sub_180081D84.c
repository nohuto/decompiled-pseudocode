/*
 * XREFs of sub_180081D84 @ 0x180081D84
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 *     LdrResGetRCConfig @ 0x18005C640 (LdrResGetRCConfig.c)
 *     sub_1800898DC @ 0x1800898DC (sub_1800898DC.c)
 *     sub_1800905E4 @ 0x1800905E4 (sub_1800905E4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D6BE4 @ 0x1800D6BE4 (sub_1800D6BE4.c)
 */

int __fastcall sub_180081D84(PVOID BaseOfImage, __int64 a2, __int64 *a3, int a4)
{
  ULONG *v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  ULONG *v11; // r9
  int v12; // r8d
  int v13; // r9d
  int v14; // r8d
  int v15; // r9d
  int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // r10
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // r8d
  __int64 v23; // r9
  __int64 v24; // r10
  __int16 v26; // [rsp+30h] [rbp-D0h] BYREF
  ULONG *v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v32[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  ULONG **v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  __int16 *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int16 *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int16 *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  _BYTE v47[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v48[16]; // [rsp+120h] [rbp+20h] BYREF

  LODWORD(v8) = RtlRunOnceExecuteOnce(&stru_18015C050, sub_180087F30, 0LL, 0LL);
  if ( (int)v8 >= 0 )
  {
    v10 = (unsigned __int16)dword_18015BF50;
    LODWORD(v8) = ++dword_18015BF50;
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
        v8 = sub_18003660C(BaseOfImage, v9, 0, 1);
        v11 = v8;
      }
      if ( v11 )
      {
        if ( a4 >= 2 )
        {
          if ( a4 == 2 )
          {
            if ( (unsigned int)dword_180155500 > 5 )
            {
              LODWORD(v8) = sub_1800898DC(&dword_180155500, 0x400000000000LL);
              if ( (_BYTE)v8 )
              {
                v28 = *a3;
                v29 = a3[1];
                v26 = 4;
                v38 = 4LL;
                v39 = &v26;
                v33 = &v28;
                v41 = (__int16 *)(v17 + 28);
                LODWORD(v27) = a2 != 0;
                v34 = 8LL;
                v35 = &v29;
                v36 = 8LL;
                v37 = &v27;
                v40 = v18;
                v42 = 16LL;
                LODWORD(v8) = sub_1800905E4(
                                (int)&dword_180155500,
                                (int)&dword_180124410,
                                v16,
                                v17,
                                7u,
                                (PEVENT_DATA_DESCRIPTOR)v32);
              }
            }
          }
          else if ( a4 == 3 )
          {
            if ( (unsigned int)dword_180155500 > 5 )
            {
              LODWORD(v8) = sub_1800898DC(&dword_180155500, 0x400000000000LL);
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
                v37 = (ULONG **)&v30;
                v43 = (__int16 *)(v20 + 28);
                LODWORD(v27) = a2 != 0;
                v34 = 8LL;
                v36 = 8LL;
                v38 = 8LL;
                v39 = (__int16 *)&v27;
                v42 = v21;
                v44 = 16LL;
                LODWORD(v8) = sub_1800905E4(
                                (int)&dword_180155500,
                                (int)&dword_1801242E9,
                                v19,
                                v20,
                                8u,
                                (PEVENT_DATA_DESCRIPTOR)v32);
              }
            }
          }
          else if ( (unsigned int)dword_180155500 > 5 )
          {
            LODWORD(v8) = sub_1800898DC(&dword_180155500, 0x400000000000LL);
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
              v37 = (ULONG **)&v28;
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
              LODWORD(v8) = sub_1800905E4(
                              (int)&dword_180155500,
                              (int)&dword_1801240FD,
                              v22,
                              v23,
                              9u,
                              (PEVENT_DATA_DESCRIPTOR)v32);
            }
          }
        }
        else if ( (unsigned int)dword_180155500 > 5 )
        {
          LODWORD(v8) = sub_1800898DC(&dword_180155500, 0x400000000000LL);
          if ( (_BYTE)v8 )
          {
            sub_1800D6BE4(v48, L"ResIdCount less than 2.");
            LODWORD(v8) = sub_1800905E4(
                            (int)&dword_180155500,
                            (int)&dword_1801240C1,
                            v14,
                            v15,
                            3u,
                            (PEVENT_DATA_DESCRIPTOR)v47);
          }
        }
      }
      else if ( (unsigned int)dword_180155500 > 5 )
      {
        LODWORD(v8) = sub_1800898DC(&dword_180155500, 0x400000000000LL);
        if ( (_BYTE)v8 )
        {
          sub_1800D6BE4(v48, L"Failed to retrieve service checksum.");
          LODWORD(v8) = sub_1800905E4(
                          (int)&dword_180155500,
                          (int)&dword_1801241E8,
                          v12,
                          v13,
                          3u,
                          (PEVENT_DATA_DESCRIPTOR)v47);
        }
      }
    }
  }
  return (int)v8;
}
