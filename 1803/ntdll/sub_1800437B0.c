/*
 * XREFs of sub_1800437B0 @ 0x1800437B0
 * Callers:
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     sub_18006FF54 @ 0x18006FF54 (sub_18006FF54.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E2FC0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E33C0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     sub_1800E3AAC @ 0x1800E3AAC (sub_1800E3AAC.c)
 *     sub_1800E44C8 @ 0x1800E44C8 (sub_1800E44C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800437B0(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 i; // r8
  signed int v7; // ecx

  v3 = a2 >> 1;
  v5 = 0LL;
  if ( a1 && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( a3 )
  {
    if ( v7 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v5;
  }
  return (unsigned int)v7;
}
