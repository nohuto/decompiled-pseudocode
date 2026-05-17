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

__int64 __fastcall sub_180040D60(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *a6,
        __int64 a7)
{
  int v7; // r14d
  int v8; // esi
  int v9; // r15d
  int v10; // ebp
  int v11; // eax
  int v12; // ebx

  v7 = a4;
  v8 = (int)a3;
  v9 = a2;
  v10 = (int)a1;
  *(_QWORD *)a6 = 0LL;
  if ( ((unsigned __int8)a3 & 0x20) != 0 )
  {
    v11 = sub_1800385D0(a1, 0LL, a3, a6, 0LL);
    goto LABEL_4;
  }
  if ( ((unsigned __int16)a3 & 0x200) != 0 )
  {
    v11 = sub_1800385D0(0LL, (unsigned __int64)a1, a3, a6, 0LL);
LABEL_4:
    v12 = v11;
    goto LABEL_5;
  }
  v12 = -1073741515;
LABEL_5:
  if ( v12 == -1073741515 )
  {
    v12 = sub_180040E38(v10, v9, v8, v7, a5, (__int64)a6, a7);
    if ( v12 >= 0 )
      return (unsigned int)sub_180040514(*(_QWORD *)(*(_QWORD *)a6 + 176LL));
  }
  else
  {
    sub_1800389D0(*(_QWORD *)a6, a2, a3, a4);
  }
  return (unsigned int)v12;
}
