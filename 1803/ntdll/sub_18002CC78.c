/*
 * XREFs of sub_18002CC78 @ 0x18002CC78
 * Callers:
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     sub_18002C9D0 @ 0x18002C9D0 (sub_18002C9D0.c)
 * Callees:
 *     sub_18002CD0C @ 0x18002CD0C (sub_18002CD0C.c)
 */

__int64 __fastcall sub_18002CC78(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v4; // rdx
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 328);
  v4 = (_QWORD *)(a2 + 288);
  v4[4] = v2;
  v4[3] = v4 + 2;
  v4[2] = v4 + 2;
  v4[1] = v4;
  *v4 = v4;
  sub_18002CD0C(a1 + 8);
  *(_QWORD *)(a2 + 280) = v5;
  *(_QWORD *)(a2 + 272) = a2 + 264;
  *(_QWORD *)(a2 + 264) = a2 + 264;
  *(_QWORD *)(a2 + 256) = a2 + 248;
  *(_QWORD *)(a2 + 248) = a2 + 248;
  result = sub_18002CD0C(v6 + 16);
  *(_BYTE *)(a2 + 354) |= 1u;
  *(_BYTE *)(a2 + 352) = 1;
  return result;
}
