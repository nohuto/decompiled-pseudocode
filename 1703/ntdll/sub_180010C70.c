/*
 * XREFs of sub_180010C70 @ 0x180010C70
 * Callers:
 *     sub_18001094C @ 0x18001094C (sub_18001094C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010C70(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  signed int v5; // ecx

  v3 = 0LL;
  if ( a1 )
  {
    v4 = 16LL;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --v4;
    }
    while ( v4 );
    v5 = v4 == 0 ? 0x80070057 : 0;
    if ( v4 )
      v3 = 16 - v4;
    else
      v3 = 0LL;
  }
  else
  {
    v5 = -2147024809;
  }
  if ( a3 )
  {
    if ( v5 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v3;
  }
  return (unsigned int)v5;
}
