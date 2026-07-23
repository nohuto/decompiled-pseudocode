/*
 * XREFs of sub_180082248 @ 0x180082248
 * Callers:
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 * Callees:
 *     sub_1800877B0 @ 0x1800877B0 (sub_1800877B0.c)
 *     ZwCompareSigningLevels @ 0x18009BDF0 (ZwCompareSigningLevels.c)
 *     sub_1800CBD88 @ 0x1800CBD88 (sub_1800CBD88.c)
 */

__int64 __fastcall sub_180082248(__int64 a1, __int64 a2, char a3)
{
  NTSTATUS v3; // esi
  __int64 v6; // rax
  int v8; // ebx
  bool v9; // cl
  int v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+50h] [rbp+18h]

  v11 = a3;
  v3 = 0;
  v10 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v6 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v6 + 280) & 0x8000) != 0 || ZwCompareSigningLevels(*(_BYTE *)(v6 + 284), 0xCu) >= 0) )
  {
    v8 = sub_1800877B0(a2, *(_QWORD *)(a1 + 56), &v10);
    if ( v8 < 0 )
    {
      v9 = 1;
      if ( v8 == -1073741701 || v8 == -1073740760 || v8 == -1073740285 || v8 == -1058471934 || byte_18015C2B0 )
      {
        v3 = v8;
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
      }
    }
    else
    {
      v3 = ZwCompareSigningLevels(*(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL), 0xCu);
      v9 = v3 < 0;
    }
    if ( v9 )
      sub_1800CBD88(a1, v8, v10, v3, v11);
  }
  return (unsigned int)v3;
}
