/*
 * XREFs of sub_180030E7C @ 0x180030E7C
 * Callers:
 *     sub_180030D2C @ 0x180030D2C (sub_180030D2C.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     sub_1800F86F8 @ 0x1800F86F8 (sub_1800F86F8.c)
 *     sub_1800FB5E4 @ 0x1800FB5E4 (sub_1800FB5E4.c)
 * Callees:
 *     sub_180030EF0 @ 0x180030EF0 (sub_180030EF0.c)
 */

__int64 __fastcall sub_180030E7C(_QWORD *a1, wchar_t *a2)
{
  unsigned int v2; // ebx
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx
  wchar_t *v7; // rcx
  int v9; // ecx

  v2 = 0;
  if ( a1 )
  {
    v5 = (wchar_t *)a1[17];
    if ( !v5 || (unsigned __int8)sub_180030EF0(v5, a2) )
    {
      v6 = (wchar_t *)a1[16];
      if ( v6 )
      {
        v9 = -((unsigned __int8)sub_180030EF0(v6, a2) == 0);
      }
      else
      {
        v7 = (wchar_t *)a1[19];
        if ( !v7 )
          return v2;
        v9 = -((unsigned __int8)sub_180030EF0(v7, a2) != 0);
      }
      return v9 & 0xC0000034;
    }
    return (unsigned int)-1073741772;
  }
  return 3221225524LL;
}
