/*
 * XREFs of sub_180030CC8 @ 0x180030CC8
 * Callers:
 *     sub_180030D2C @ 0x180030D2C (sub_180030D2C.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     sub_1800F86F8 @ 0x1800F86F8 (sub_1800F86F8.c)
 * Callees:
 *     sub_180030EF0 @ 0x180030EF0 (sub_180030EF0.c)
 */

__int64 __fastcall sub_180030CC8(__int64 a1, wchar_t *a2)
{
  unsigned int v2; // ebx
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx

  v2 = 0;
  if ( a1 )
  {
    v5 = *(wchar_t **)(a1 + 136);
    if ( v5 && (unsigned __int8)sub_180030EF0(v5, a2) )
    {
      return (unsigned int)-1073741772;
    }
    else
    {
      v6 = *(wchar_t **)(a1 + 152);
      if ( v6 )
        return (unsigned __int8)sub_180030EF0(v6, a2) != 0 ? 0xC0000034 : 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
