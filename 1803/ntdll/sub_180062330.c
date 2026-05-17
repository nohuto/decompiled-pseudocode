/*
 * XREFs of sub_180062330 @ 0x180062330
 * Callers:
 *     sub_180061F8C @ 0x180061F8C (sub_180061F8C.c)
 * Callees:
 *     sub_18006337C @ 0x18006337C (sub_18006337C.c)
 *     sub_1801053D0 @ 0x1801053D0 (sub_1801053D0.c)
 */

__int64 __fastcall sub_180062330(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned int v7; // r11d
  unsigned __int64 *v8; // rax
  _QWORD *v9; // r11

  v3 = a1;
  if ( *a2 )
  {
    v8 = (unsigned __int64 *)sub_18006337C(a1);
    v5 = (unsigned __int64)v9;
    if ( v8 )
    {
      v5 = *v8;
      if ( !*v8 )
      {
        v5 = v8[1];
        if ( !v5 )
        {
          while ( v8 != *(unsigned __int64 **)(v3 + 80) )
          {
            v5 = *(_QWORD *)((v8[2] & 0xFFFFFFFFFFFFFFFCuLL) + 8);
            if ( v8 != (unsigned __int64 *)v5 && v5 )
              goto LABEL_15;
            v8 = (unsigned __int64 *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
          }
          return (unsigned int)-2147483622;
        }
      }
    }
    goto LABEL_15;
  }
  v4 = a1 + 80;
  if ( (*(_BYTE *)(a1 + 88) & 1) == 0 )
  {
    v6 = *(_QWORD *)v4;
    v5 = *(_QWORD *)v4;
LABEL_6:
    if ( !v6 )
      return (unsigned int)-2147483622;
LABEL_15:
    sub_1801053D0(v3, v5, a2);
    return v7;
  }
  v5 = *(_QWORD *)v4;
  if ( *(_QWORD *)v4 )
  {
    v6 = v4 ^ v5;
    goto LABEL_6;
  }
  return (unsigned int)-2147483622;
}
