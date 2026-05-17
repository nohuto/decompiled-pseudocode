/*
 * XREFs of sub_1800FB4E4 @ 0x1800FB4E4
 * Callers:
 *     sub_180045810 @ 0x180045810 (sub_180045810.c)
 *     sub_18006E860 @ 0x18006E860 (sub_18006E860.c)
 *     sub_1800FA3D4 @ 0x1800FA3D4 (sub_1800FA3D4.c)
 *     sub_1800FAF00 @ 0x1800FAF00 (sub_1800FAF00.c)
 *     sub_1800FBF74 @ 0x1800FBF74 (sub_1800FBF74.c)
 *     sub_1800FC4A0 @ 0x1800FC4A0 (sub_1800FC4A0.c)
 *     sub_1800FD028 @ 0x1800FD028 (sub_1800FD028.c)
 * Callees:
 *     sub_180045EFC @ 0x180045EFC (sub_180045EFC.c)
 *     sub_1800FB648 @ 0x1800FB648 (sub_1800FB648.c)
 */

__int64 __fastcall sub_1800FB4E4(__int64 a1, const wchar_t *a2, char a3, __int16 *a4)
{
  __int16 v4; // bp
  int v9; // edi
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  if ( a1 && a2 && *a2 )
  {
    v9 = *(_DWORD *)a1 & 2;
    if ( !a3 || (v10 = 1, !v9) )
      v10 = 0;
    v4 = sub_180045EFC(*(_QWORD *)(a1 + 32), a2, v10, &v15);
    if ( v4 >= 0 )
    {
LABEL_12:
      result = 0LL;
      goto LABEL_14;
    }
    if ( a3 )
    {
      LOBYTE(v12) = v9 == 0;
      v13 = sub_1800FB648(*(_QWORD *)(a1 + 32), v11, v15, v12);
      if ( !v13 || (*(_DWORD *)a1 |= 2u, *(_QWORD *)(a1 + 32) = v13, v4 = sub_180045EFC(v13, a2, 1, 0LL), v4 < 0) )
      {
        result = 3221225495LL;
        goto LABEL_14;
      }
      goto LABEL_12;
    }
  }
  result = 3221225485LL;
LABEL_14:
  if ( a4 )
    *a4 = v4;
  return result;
}
