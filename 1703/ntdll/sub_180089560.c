/*
 * XREFs of sub_180089560 @ 0x180089560
 * Callers:
 *     sub_18004C7E0 @ 0x18004C7E0 (sub_18004C7E0.c)
 * Callees:
 *     sub_18008BF68 @ 0x18008BF68 (sub_18008BF68.c)
 *     sub_1800D65C8 @ 0x1800D65C8 (sub_1800D65C8.c)
 */

__int64 __fastcall sub_180089560(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v6 = 0;
  if ( (*(_DWORD *)(a1 + 24) & 0x400000) != 0
    || (v4 = *(_QWORD *)(a1 + 40)) != 0 && ((*(_DWORD *)(v4 + 280) & 0x8000) != 0 || *(_BYTE *)(v4 + 284) >= 0xCu) )
  {
    v2 = sub_18008BF68(a2, *(_QWORD *)(a1 + 48), &v6);
    if ( v2 >= 0 && *(_BYTE *)(*(_QWORD *)(a1 + 48) + 284LL) < 0xCu )
      v2 = -1073740760;
    if ( v2 < 0 )
      sub_1800D65C8(a1, (unsigned int)v2, v6);
  }
  return (unsigned int)v2;
}
