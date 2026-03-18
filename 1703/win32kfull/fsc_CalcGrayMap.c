/*
 * XREFs of fsc_CalcGrayMap @ 0x1C02C0370
 * Callers:
 *     fs_ContourScan @ 0x1C02BA328 (fs_ContourScan.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     fsc_CalcGrayRow @ 0x1C02DB470 (fsc_CalcGrayRow.c)
 */

__int64 __fastcall fsc_CalcGrayMap(__int16 *a1, __int16 *a2, __int16 a3)
{
  __int64 v6; // rdi
  __int16 v7; // bx
  __int16 v8; // dx
  __int64 v9; // r8
  __int16 v10; // bp
  __int16 v11; // si
  __int64 v12; // rax
  __int16 v13; // dx
  __int16 v14; // cx
  unsigned __int16 v15; // cx
  __int64 v16; // rdi
  __int64 v17; // r15
  __int16 i; // bp
  __int64 result; // rax
  _QWORD v20[2]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v21; // [rsp+30h] [rbp-58h]
  __int16 v22; // [rsp+32h] [rbp-56h]
  __int16 v23; // [rsp+34h] [rbp-54h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h]
  __int64 v27; // [rsp+50h] [rbp-38h]

  memset(*((void **)a2 + 5), 0, (unsigned int)(-4 * (a2[1] - a2[2])));
  v6 = *((_QWORD *)a1 + 5);
  v7 = a3;
  v8 = a1[1];
  v9 = *((_QWORD *)a2 + 5);
  v10 = a2[1];
  v11 = v8 - a1[2];
  v25 = v6 + *((int *)a1 + 9);
  v12 = v9 + *((int *)a2 + 9);
  v22 = a3;
  v24 = v6;
  v26 = v9;
  v27 = v12;
  v13 = v8 - a3 * v10;
  if ( v13 >= 0 )
  {
    v6 += *a1 * v13;
    v11 -= v13;
  }
  else
  {
    v7 = a3 + v13;
  }
  v14 = a2[6];
  v21 = v14 - a2[4];
  v15 = a3 * v14 - a1[4];
  v16 = ((__int64)(v15 - 1) >> 3) + v6;
  v23 = 7 - ((v15 - 1) & 7);
  v17 = v9 + v21 - 1;
  for ( i = v10 - 1; i >= a2[2]; --i )
  {
    for ( v20[1] = v17; v7; --v7 )
    {
      if ( !v11 )
        break;
      v20[0] = v16;
      result = fsc_CalcGrayRow(v20);
      if ( (_DWORD)result )
        return result;
      v16 += *a1;
      --v11;
    }
    v7 = a3;
    v17 += *a2;
  }
  return 0LL;
}
