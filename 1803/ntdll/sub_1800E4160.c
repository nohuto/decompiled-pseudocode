/*
 * XREFs of sub_1800E4160 @ 0x1800E4160
 * Callers:
 *     sub_1800E433C @ 0x1800E433C (sub_1800E433C.c)
 * Callees:
 *     sub_180035D8C @ 0x180035D8C (sub_180035D8C.c)
 */

char __fastcall sub_1800E4160(__int64 a1)
{
  __int64 v3; // r11
  unsigned int v4; // r8d
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int k; // eax
  unsigned int j; // eax
  unsigned int i; // ecx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  if ( !a1 )
    return 0;
  if ( !*(_QWORD *)a1 )
    return 0;
  if ( (int)sub_180035D8C(*(_WORD **)a1, 0xFFFFuLL, &v10) < 0 || v10 == v3 )
    return 0;
  if ( *(_WORD *)(a1 + 10) != (_WORD)v3 )
    return 0;
  if ( (*(_DWORD *)(a1 + 12) & 0xFFC0) != 0 )
    return 0;
  v4 = *(_DWORD *)(a1 + 16);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 )
    return 0;
  v6 = *(unsigned __int16 *)(a1 + 8);
  if ( *(_WORD *)(a1 + 8) )
  {
    if ( v6 <= 2 )
      return 1;
    switch ( v6 )
    {
      case 3u:
        for ( i = v3; i < v4; ++i )
        {
          if ( *(_QWORD *)(v5 + 8LL * i) == v3 )
            return 0;
        }
        return 1;
      case 5u:
        for ( j = v3; j < v4; ++j )
        {
          if ( *(_QWORD *)(v5 + 16LL * j) == v3 || *(_DWORD *)(v5 + 16LL * j + 8) == (_DWORD)v3 )
            return 0;
        }
        return 1;
      case 6u:
        while ( (unsigned int)v3 < v4 )
        {
          if ( *(_QWORD *)(v5 + 8LL * (unsigned int)v3) >= 2uLL )
            return 0;
          LODWORD(v3) = v3 + 1;
        }
        return 1;
      case 0x10u:
        for ( k = v3; k < v4; ++k )
        {
          if ( *(_QWORD *)(v5 + 16LL * k) != v3 )
            goto LABEL_27;
          if ( *(_DWORD *)(v5 + 16LL * k + 8) != (_DWORD)v3 )
            return 0;
          if ( *(_QWORD *)(v5 + 16LL * k) != v3 )
          {
LABEL_27:
            if ( *(_DWORD *)(v5 + 16LL * k + 8) == (_DWORD)v3 )
              return 0;
          }
        }
        return 1;
    }
  }
  return 0;
}
