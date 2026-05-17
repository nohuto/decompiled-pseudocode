/*
 * XREFs of RtlCompareMemoryUlong @ 0x1800A97E0
 * Callers:
 *     sub_18000DDA0 @ 0x18000DDA0 (sub_18000DDA0.c)
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_18001D964 @ 0x18001D964 (sub_18001D964.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareMemoryUlong(_DWORD *a1, unsigned __int64 a2, int a3)
{
  bool v4; // zf
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  v5 = a2 >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *a1++ == a3;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
