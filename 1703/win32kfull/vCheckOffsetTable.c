/*
 * XREFs of vCheckOffsetTable @ 0x1C02350F0
 * Callers:
 *     bConvertFontRes @ 0x1C0234348 (bConvertFontRes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vCheckOffsetTable(__int16 *a1, _QWORD *a2)
{
  int v3; // r10d
  unsigned __int16 *v4; // rcx
  __int16 v5; // ax
  unsigned __int16 v6; // dx
  unsigned int v7; // r10d
  __int64 v8; // r9
  __int64 v9; // r11
  unsigned __int16 v10; // r9
  __int64 result; // rax

  v3 = *((unsigned __int8 *)a1 + 5) - *((unsigned __int8 *)a1 + 4);
  v4 = (unsigned __int16 *)(*a2 + *((int *)a1 + 4));
  v5 = *a1;
  v6 = 0;
  a1[1] = 0;
  v7 = v3 + 1;
  if ( v7 )
  {
    v8 = 4LL;
    if ( v5 != 512 )
      v8 = 6LL;
    v9 = v7;
    do
    {
      if ( *v4 > v6 )
        v6 = *v4;
      if ( !*v4 )
        a1[1] |= 1u;
      v4 = (unsigned __int16 *)((char *)v4 + v8);
      --v9;
    }
    while ( v9 );
  }
  v10 = v6;
  result = (unsigned __int16)a1[5];
  *((_DWORD *)a1 + 7) = (((unsigned __int16)a1[4] * (((unsigned int)v6 + 7) >> 3) + 3) & 0xFFFFFFFC) + 16;
  if ( (unsigned __int16)result > v6 )
    v10 = result;
  a1[5] = v10;
  return result;
}
