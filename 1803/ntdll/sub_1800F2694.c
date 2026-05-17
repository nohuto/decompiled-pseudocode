/*
 * XREFs of sub_1800F2694 @ 0x1800F2694
 * Callers:
 *     RtlGetParentLocaleName @ 0x180031240 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180037850 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x1800F2550 (RtlIsValidLocaleName.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     sub_1800F2708 @ 0x1800F2708 (sub_1800F2708.c)
 *     sub_1800F2B6C @ 0x1800F2B6C (sub_1800F2B6C.c)
 */

__int64 __fastcall sub_1800F2694(__int64 a1, char a2, char a3, __int64 a4)
{
  int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  v7 = sub_1800F2B6C(a1, &v11, &v12);
  if ( v7 >= 0 )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    v7 = sub_1800F2708(v11, v12, v8, v9, a4);
    ZwUnmapViewOfSection();
  }
  return (unsigned int)v7;
}
