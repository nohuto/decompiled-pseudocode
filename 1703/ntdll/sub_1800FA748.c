/*
 * XREFs of sub_1800FA748 @ 0x1800FA748
 * Callers:
 *     sub_1800FC800 @ 0x1800FC800 (sub_1800FC800.c)
 * Callees:
 *     sub_180046D4C @ 0x180046D4C (sub_180046D4C.c)
 *     sub_18004A35C @ 0x18004A35C (sub_18004A35C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800FA598 @ 0x1800FA598 (sub_1800FA598.c)
 *     sub_1800FB3F8 @ 0x1800FB3F8 (sub_1800FB3F8.c)
 *     sub_1800FC4A0 @ 0x1800FC4A0 (sub_1800FC4A0.c)
 *     sub_1800FC568 @ 0x1800FC568 (sub_1800FC568.c)
 *     sub_1800FC7AC @ 0x1800FC7AC (sub_1800FC7AC.c)
 */

__int64 __fastcall sub_1800FA748(_QWORD *a1, void *a2, wchar_t *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 result; // rax
  char v10; // cl
  _WORD v11[16]; // [rsp+20h] [rbp-48h] BYREF

  result = sub_1800FC4A0(a1, v11);
  if ( (int)result < 0 )
    return result;
  v10 = v11[0];
  if ( (v11[0] & 4) != 0 )
  {
    result = sub_1800FC568(a1, a2, v11);
  }
  else
  {
    if ( (v11[0] & 2) == 0 )
      goto LABEL_7;
    result = sub_1800FC7AC(a1, a2, v11);
  }
  v10 = v11[0];
LABEL_7:
  if ( (int)result >= 0 )
  {
    if ( (v10 & 4) != 0 )
      result = sub_18004A35C((__int64)a1, a3);
    else
      result = sub_180046D4C(a1, a3);
    if ( (int)result >= 0 )
    {
      v11[0] |= 0x820u;
      sub_1800FA598((__int64)v11, a2);
      return sub_1800FB3F8(a1 + 3, v11, a6);
    }
  }
  return result;
}
