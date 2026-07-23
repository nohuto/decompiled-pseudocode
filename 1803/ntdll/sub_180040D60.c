/*
 * XREFs of sub_180040D60 @ 0x180040D60
 * Callers:
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 * Callees:
 *     sub_1800385D0 @ 0x1800385D0 (sub_1800385D0.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 *     sub_180040E38 @ 0x180040E38 (sub_180040E38.c)
 */

__int64 __fastcall sub_180040D60(PUNICODE_STRING a1, int a2, int a3, int a4, __int64 a5, __int64 *a6, __int64 a7)
{
  int v10; // ebp
  int v11; // eax
  int v12; // ebx

  v10 = (int)a1;
  *a6 = 0LL;
  if ( (a3 & 0x20) != 0 )
  {
    v11 = sub_1800385D0(a1, 0LL, a3, (__int64)a6, 0LL);
    goto LABEL_4;
  }
  if ( (a3 & 0x200) != 0 )
  {
    v11 = sub_1800385D0(0LL, a1, a3, (__int64)a6, 0LL);
LABEL_4:
    v12 = v11;
    goto LABEL_5;
  }
  v12 = -1073741515;
LABEL_5:
  if ( v12 == -1073741515 )
  {
    v12 = sub_180040E38(v10, a2, a3, a4, a5, (__int64)a6, a7);
    if ( v12 >= 0 )
      return (unsigned int)sub_180040514(*(char **)(*a6 + 176));
  }
  else
  {
    sub_1800389D0(*a6);
  }
  return (unsigned int)v12;
}
