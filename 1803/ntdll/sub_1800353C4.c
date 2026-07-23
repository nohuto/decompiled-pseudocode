/*
 * XREFs of sub_1800353C4 @ 0x1800353C4
 * Callers:
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     sub_180035E90 @ 0x180035E90 (sub_180035E90.c)
 *     sub_18006FD80 @ 0x18006FD80 (sub_18006FD80.c)
 *     sub_1800F8384 @ 0x1800F8384 (sub_1800F8384.c)
 *     sub_1800F9170 @ 0x1800F9170 (sub_1800F9170.c)
 *     sub_1800FA524 @ 0x1800FA524 (sub_1800FA524.c)
 *     sub_1800FAA50 @ 0x1800FAA50 (sub_1800FAA50.c)
 *     sub_1800FB5E4 @ 0x1800FB5E4 (sub_1800FB5E4.c)
 * Callees:
 *     sub_1800366B4 @ 0x1800366B4 (sub_1800366B4.c)
 *     sub_1800F97D4 @ 0x1800F97D4 (sub_1800F97D4.c)
 */

__int64 __fastcall sub_1800353C4(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4)
{
  __int16 v4; // bp
  char v6; // r15
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  v6 = a3;
  if ( !a1 || !a2 || !*a2 )
    goto LABEL_8;
  if ( !(_BYTE)a3 || (LOBYTE(a3) = 1, (*(_DWORD *)a1 & 2) == 0) )
    LOBYTE(a3) = 0;
  v4 = sub_1800366B4(*(_QWORD *)(a1 + 32), a2, a3, &v12);
  if ( v4 >= 0 )
    goto LABEL_12;
  if ( !v6 )
  {
LABEL_8:
    result = 3221225485LL;
    goto LABEL_9;
  }
  v10 = sub_1800F97D4(*(PVOID *)(a1 + 32));
  if ( v10
    && (*(_DWORD *)a1 |= 2u, LOBYTE(v11) = 1, *(_QWORD *)(a1 + 32) = v10, v4 = sub_1800366B4(v10, a2, v11, 0LL), v4 >= 0) )
  {
LABEL_12:
    result = 0LL;
  }
  else
  {
    result = 3221225495LL;
  }
LABEL_9:
  if ( a4 )
    *a4 = v4;
  return result;
}
