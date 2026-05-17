/*
 * XREFs of sub_1800F6DD8 @ 0x1800F6DD8
 * Callers:
 *     sub_1800F6ECC @ 0x1800F6ECC (sub_1800F6ECC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800F6DD8(unsigned __int16 *a1)
{
  unsigned __int64 v1; // r8
  _WORD *i; // rdx

  if ( *a1 )
  {
    v1 = *((_QWORD *)a1 + 1);
    for ( i = (_WORD *)(v1 - 2 + 2 * ((unsigned __int64)*a1 >> 1)); (unsigned __int64)i >= v1 && *i != 92; --i )
    {
      if ( *i < 0x40u && (byte_18012F450[(unsigned __int16)*i] & 8) != 0 )
        return 1;
    }
  }
  return 0;
}
