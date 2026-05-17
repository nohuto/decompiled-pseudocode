/*
 * XREFs of sub_1800583B8 @ 0x1800583B8
 * Callers:
 *     sub_180057618 @ 0x180057618 (sub_180057618.c)
 * Callees:
 *     sub_180058424 @ 0x180058424 (sub_180058424.c)
 *     sub_18007E9AC @ 0x18007E9AC (sub_18007E9AC.c)
 */

__int64 __fastcall sub_1800583B8(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 248) = 0;
  LOBYTE(a3) = 1;
  v5 = sub_180058424(a1 + 8, a2, a3);
  if ( v5 >= 0 )
  {
    v5 = sub_180058424(a1 + 128, a2, 0LL);
    if ( v5 < 0 )
      sub_18007E9AC(a1 + 8);
  }
  return (unsigned int)v5;
}
