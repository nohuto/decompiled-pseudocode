/*
 * XREFs of sub_180058198 @ 0x180058198
 * Callers:
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     sub_18006BEBC @ 0x18006BEBC (sub_18006BEBC.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E8260 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E8650 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     sub_1800E8CE4 @ 0x1800E8CE4 (sub_1800E8CE4.c)
 *     sub_1800E9278 @ 0x1800E9278 (sub_1800E9278.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180058198(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
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
