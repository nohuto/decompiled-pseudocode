/*
 * XREFs of sub_180082248 @ 0x180082248
 * Callers:
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 * Callees:
 *     sub_1800877B0 @ 0x1800877B0 (sub_1800877B0.c)
 *     ZwCompareSigningLevels @ 0x18009BDF0 (ZwCompareSigningLevels.c)
 *     sub_1800CBD88 @ 0x1800CBD88 (sub_1800CBD88.c)
 */

__int64 __fastcall sub_180082248(__int64 a1, __int64 a2, char a3, int a4)
{
  int v4; // esi
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rdx
  int v10; // ebx
  __int64 v11; // rcx
  bool v12; // cl
  int v13; // [rsp+40h] [rbp+8h] BYREF
  char v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = a3;
  v4 = 0;
  v5 = a2;
  v13 = 0;
  v6 = a1;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v7 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v7 + 280) & 0x8000) != 0
     || (LOBYTE(a1) = *(_BYTE *)(v7 + 284), LOBYTE(a2) = 12, (int)ZwCompareSigningLevels(a1, a2) >= 0)) )
  {
    v10 = sub_1800877B0(v5, *(_QWORD *)(v6 + 56), (unsigned int)&v13, a4, (__int64)&v14);
    if ( v10 < 0 )
    {
      v12 = 1;
      if ( v10 == -1073741701 || v10 == -1073740760 || v10 == -1073740285 || v10 == -1058471934 || byte_18015C2B0 )
      {
        v4 = v10;
        *(_BYTE *)(*(_QWORD *)(v6 + 56) + 284LL) = 1;
      }
    }
    else
    {
      v11 = *(_QWORD *)(v6 + 56);
      LOBYTE(v9) = 12;
      LOBYTE(v11) = *(_BYTE *)(v11 + 284);
      v4 = ZwCompareSigningLevels(v11, v9);
      v12 = v4 < 0;
    }
    if ( v12 )
      sub_1800CBD88(v6, v10, v13, v4, v14);
  }
  return (unsigned int)v4;
}
