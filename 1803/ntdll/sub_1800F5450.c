/*
 * XREFs of sub_1800F5450 @ 0x1800F5450
 * Callers:
 *     sub_180069670 @ 0x180069670 (sub_180069670.c)
 *     sub_1800F52E0 @ 0x1800F52E0 (sub_1800F52E0.c)
 *     sub_1800F5450 @ 0x1800F5450 (sub_1800F5450.c)
 * Callees:
 *     sub_1800F5450 @ 0x1800F5450 (sub_1800F5450.c)
 */

bool __fastcall sub_1800F5450(_QWORD *a1, int a2, __int16 *a3)
{
  __int16 *v3; // r9
  int v6; // ebp
  char v7; // di
  __int16 v9; // ax

  v3 = (__int16 *)a1[5];
  if ( a2 < 0x10000 )
  {
    if ( (unsigned __int64)v3 < a1[4] )
    {
      while ( a3 != v3 )
      {
        v9 = *a3;
        *a3 = a2;
        LOWORD(a2) = v9;
        ++a3;
      }
      *v3 = a2;
      a1[5] = v3 + 1;
      if ( (__int16 *)a1[8] == v3 - 1 )
        a1[8] = v3;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v6 = (a2 - 0x10000) / 1024;
    v7 = 0;
    if ( (unsigned __int8)sub_1800F5450(a1, (unsigned __int16)((a2 - 0x10000) % 1024 - 9216)) )
      return (unsigned __int8)sub_1800F5450(a1, (unsigned __int16)(v6 - 10240)) != 0;
    return v7;
  }
}
