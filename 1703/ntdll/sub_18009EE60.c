/*
 * XREFs of sub_18009EE60 @ 0x18009EE60
 * Callers:
 *     pow @ 0x1800AAD80 (pow.c)
 * Callees:
 *     sub_18009DD10 @ 0x18009DD10 (sub_18009DD10.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_18009EE60(double a1, double a2, double a3, unsigned int a4)
{
  unsigned int v4; // r9d
  int v6; // [rsp+20h] [rbp-48h]
  unsigned int v7; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]

  if ( a4 == 2 )
  {
    v4 = 2;
    v9 = *(_QWORD *)&a2;
    v8 = *(_QWORD *)&a1;
    v7 = 34;
    v6 = 4;
    goto LABEL_10;
  }
  if ( a4 > 2 )
  {
    if ( a4 <= 6 )
    {
      v4 = 1;
      v9 = *(_QWORD *)&a2;
      v8 = *(_QWORD *)&a1;
      v7 = 33;
      v6 = 8;
      goto LABEL_10;
    }
    if ( a4 <= 8 )
    {
      v4 = 4;
      v9 = *(_QWORD *)&a2;
      v8 = *(_QWORD *)&a1;
      v7 = 34;
      v6 = 18;
      goto LABEL_10;
    }
    if ( a4 == 9 )
    {
      v4 = 3;
      v9 = *(_QWORD *)&a2;
      v8 = *(_QWORD *)&a1;
      v7 = 34;
      v6 = 17;
LABEL_10:
      sub_18009DD10((__int64)&unk_18011903C, 29, *(__int64 *)&a3, v4, v6, v7, v8, v9, 2);
    }
  }
  return *(__m128 *)&a3;
}
