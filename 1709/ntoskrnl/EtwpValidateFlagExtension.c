/*
 * XREFs of EtwpValidateFlagExtension @ 0x14059E32C
 * Callers:
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateFlagExtension(unsigned int *a1)
{
  int v1; // r8d
  unsigned __int16 v2; // r9
  unsigned __int64 v4; // r10
  unsigned __int16 *v5; // r11
  unsigned __int16 v6; // dx
  unsigned __int16 *v7; // rcx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // ax

  v1 = a1[18];
  v2 = 0;
  if ( v1 >= 0 )
    return 0LL;
  if ( BYTE2(v1) != 0xFF )
    return 3221225485LL;
  if ( !(_WORD)v1 )
    return 3221225485LL;
  v4 = *a1;
  if ( v4 < (unsigned __int64)(unsigned __int16)v1 + 4 )
    return 3221225485LL;
  v5 = (unsigned __int16 *)((char *)a1 + (unsigned __int16)v1);
  if ( (((_BYTE)v1 + (_BYTE)a1) & 1) != 0 )
    return 3221226181LL;
  v6 = *v5;
  if ( !*v5 || 4 * (unsigned __int64)v6 > (unsigned int)v4 - (unsigned __int16)v1 )
    return 3221225485LL;
  v7 = v5 + 2;
  v8 = v6 - 1;
  while ( v2 < v5[1] )
  {
    if ( ((unsigned __int8)v7 & 1) != 0 )
      return 3221226181LL;
    if ( !v8 )
      return 3221225485LL;
    v9 = *v7;
    if ( v8 < *v7 )
      return 3221225485LL;
    v8 -= v9;
    ++v2;
    v7 += 2 * v9;
  }
  return v8 != 0 ? 0xC000000D : 0;
}
