/*
 * XREFs of sub_1800884C4 @ 0x1800884C4
 * Callers:
 *     RtlGetSetBootStatusData @ 0x180088370 (RtlGetSetBootStatusData.c)
 * Callees:
 *     sub_1800886A4 @ 0x1800886A4 (sub_1800886A4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwReadFile @ 0x1800A53C0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1800A5400 (ZwWriteFile.c)
 */

__int64 __fastcall sub_1800884C4(__int64 a1, char a2, int a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // [rsp+50h] [rbp-99h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-91h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-89h] BYREF
  int v19; // [rsp+68h] [rbp-81h]
  int v20; // [rsp+70h] [rbp-79h]
  _DWORD v21[31]; // [rsp+74h] [rbp-75h]

  v20 = 0;
  v16 = 0LL;
  v9 = a3;
  v21[0] = 4;
  v21[1] = 4;
  v21[15] = 48;
  v21[28] = 48;
  v21[2] = 4;
  v21[4] = 1;
  v21[6] = 1;
  v21[8] = 1;
  v21[10] = 1;
  v21[12] = 1;
  v21[16] = 1;
  v21[18] = 1;
  v21[20] = 4;
  v21[22] = 4;
  v21[24] = 4;
  v21[30] = 1;
  v21[3] = 8;
  v21[5] = 9;
  v21[7] = 10;
  v21[9] = 11;
  v21[11] = 12;
  v21[13] = 16;
  v21[14] = 32;
  v21[17] = 49;
  v21[19] = 52;
  v21[21] = 56;
  v21[23] = 60;
  v21[25] = 64;
  v21[26] = 20;
  v21[27] = 88;
  v21[29] = 50;
  result = ZwReadFile(a1, 0LL, 0LL, 0LL, v18, &v17, 4, &v16, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)v9 >= 0x10 )
    {
      return 3221225485LL;
    }
    else
    {
      v11 = (unsigned int)v21[2 * v9];
      v16 = (unsigned int)v21[2 * v9 - 1];
      v12 = (unsigned int)v11;
      if ( v11 + v16 > (unsigned __int64)v17 )
      {
        return 3221225561LL;
      }
      else if ( a5 < (unsigned int)v11 )
      {
        return 3221225507LL;
      }
      else
      {
        if ( a2 )
        {
          v13 = ZwReadFile(a1, 0LL, 0LL, 0LL, v18, a4, v11, &v16, 0LL);
        }
        else
        {
          v14 = ZwWriteFile(a1, 0LL, 0LL, 0LL, v18, a4, v11, &v16, 0LL);
          LOBYTE(v15) = 1;
          v13 = v14;
          sub_1800886A4(v15, a4, v16, v12);
        }
        if ( v13 >= 0 )
        {
          if ( a6 )
            *a6 = v19;
        }
        return (unsigned int)v13;
      }
    }
  }
  return result;
}
