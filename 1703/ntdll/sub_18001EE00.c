/*
 * XREFs of sub_18001EE00 @ 0x18001EE00
 * Callers:
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 * Callees:
 *     sub_180021F28 @ 0x180021F28 (sub_180021F28.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 */

__int64 __fastcall sub_18001EE00(__int64 a1)
{
  __int64 v1; // rbp
  __int64 i; // rsi
  __int64 result; // rax

  v1 = a1 + 336;
  for ( i = *(_QWORD *)(a1 + 344); i != v1; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i - 5) != (*(_BYTE *)(i - 8) ^ (unsigned __int8)(*(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6))) )
        sub_1800FDA30(a1, i - 16);
    }
    result = 256LL;
    if ( *(_WORD *)(i - 8) <= 0x100u )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(i - 5) = *(_BYTE *)(i - 8) ^ *(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6);
        result = *(unsigned int *)(a1 + 136);
        *(_DWORD *)(i - 8) ^= result;
      }
      return result;
    }
    if ( (*(_BYTE *)(i - 6) & 8) != 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(i - 5) = *(_BYTE *)(i - 8) ^ *(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6);
        result = *(unsigned int *)(a1 + 136);
        *(_DWORD *)(i - 8) ^= result;
      }
    }
    else
    {
      result = sub_180021F28(a1);
    }
  }
  return result;
}
