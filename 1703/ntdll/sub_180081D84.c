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

__int64 __fastcall sub_180081D84(unsigned __int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // ecx
  unsigned int *v11; // r9
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
  __int16 v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int *v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v31[32]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int64 *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  unsigned int **v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int16 *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int16 *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  __int16 *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  _BYTE v46[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v47[16]; // [rsp+120h] [rbp+20h] BYREF

  result = RtlRunOnceExecuteOnce(
             &qword_18015C050,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))sub_180087F30,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = (unsigned __int16)dword_18015BF50;
    result = (unsigned int)++dword_18015BF50;
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
        result = (__int64)sub_18003660C(a1, v9, 0, 1);
        v11 = (unsigned int *)result;
      }
      if ( v11 )
      {
        if ( a4 >= 2 )
        {
          if ( a4 == 2 )
          {
            if ( (unsigned int)dword_180155500 > 5 )
            {
              result = sub_1800898DC(&dword_180155500, 0x400000000000LL);
              if ( (_BYTE)result )
              {
                v27 = *a3;
                v28 = a3[1];
                v25 = 4;
                v37 = 4LL;
                v38 = &v25;
                v32 = &v27;
                v40 = (__int16 *)(v17 + 28);
                LODWORD(v26) = a2 != 0;
                v33 = 8LL;
                v34 = &v28;
                v35 = 8LL;
                v36 = &v26;
                v39 = v18;
                v41 = 16LL;
                return sub_1800905E4(
                         (unsigned int)&dword_180155500,
                         (unsigned int)&unk_180124410,
                         v16,
                         v17,
                         7,
                         (__int64)v31);
              }
            }
          }
          else if ( a4 == 3 )
          {
            if ( (unsigned int)dword_180155500 > 5 )
            {
              result = sub_1800898DC(&dword_180155500, 0x400000000000LL);
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
                v36 = (unsigned int **)&v29;
                v42 = (__int16 *)(v20 + 28);
                LODWORD(v26) = a2 != 0;
                v33 = 8LL;
                v35 = 8LL;
                v37 = 8LL;
                v38 = (__int16 *)&v26;
                v41 = v21;
                v43 = 16LL;
                return sub_1800905E4(
                         (unsigned int)&dword_180155500,
                         (unsigned int)&unk_1801242E9,
                         v19,
                         v20,
                         8,
                         (__int64)v31);
              }
            }
          }
          else if ( (unsigned int)dword_180155500 > 5 )
          {
            result = sub_1800898DC(&dword_180155500, 0x400000000000LL);
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
              v36 = (unsigned int **)&v27;
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
              return sub_1800905E4(
                       (unsigned int)&dword_180155500,
                       (unsigned int)&unk_1801240FD,
                       v22,
                       v23,
                       9,
                       (__int64)v31);
            }
          }
        }
        else if ( (unsigned int)dword_180155500 > 5 )
        {
          result = sub_1800898DC(&dword_180155500, 0x400000000000LL);
          if ( (_BYTE)result )
          {
            sub_1800D6BE4(v47, L"ResIdCount less than 2.");
            return sub_1800905E4(
                     (unsigned int)&dword_180155500,
                     (unsigned int)&unk_1801240C1,
                     v14,
                     v15,
                     3,
                     (__int64)v46);
          }
        }
      }
      else if ( (unsigned int)dword_180155500 > 5 )
      {
        result = sub_1800898DC(&dword_180155500, 0x400000000000LL);
        if ( (_BYTE)result )
        {
          sub_1800D6BE4(v47, L"Failed to retrieve service checksum.");
          return sub_1800905E4((unsigned int)&dword_180155500, (unsigned int)&unk_1801241E8, v12, v13, 3, (__int64)v46);
        }
      }
    }
  }
  return result;
}
