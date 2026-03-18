/*
 * XREFs of ParseModeCap @ 0x1C0105DF4
 * Callers:
 *     ParseResolutionKeyName @ 0x1C0105D5C (ParseResolutionKeyName.c)
 *     ParseFreqRangeValue @ 0x1C01E5CFC (ParseFreqRangeValue.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x1C0105EFC (-xwtol@@YAKPEBG@Z.c)
 *     xwcschr @ 0x1C0105F38 (xwcschr.c)
 */

char __fastcall ParseModeCap(_WORD *a1, char a2, _DWORD *a3, int *a4, _DWORD *a5, _DWORD *a6)
{
  int v6; // esi
  int v8; // eax
  int v9; // ecx
  __int64 v12; // r8
  unsigned int v13; // edi
  _WORD *v14; // rax
  const unsigned __int16 *v15; // r10
  unsigned int v16; // r9d
  __int64 v17; // r11
  __int64 v18; // rax
  int v19; // ecx
  unsigned int v21; // r11d
  _WORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r10
  _WORD *v25; // rdi
  _WORD *v26; // rax
  const unsigned __int16 *v27; // r10
  unsigned int v28; // r11d
  _WORD *v29; // rsi
  unsigned int v30; // eax
  unsigned int v31; // r11d
  unsigned int v32; // r9d
  int v33; // r11d
  __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-20h]
  int v36; // [rsp+24h] [rbp-1Ch]
  int v37; // [rsp+28h] [rbp-18h]
  int v38; // [rsp+2Ch] [rbp-14h]

  v6 = -1;
  v35 = 0;
  v36 = -1;
  v8 = 0;
  v37 = 0;
  v9 = -1;
  v38 = -1;
  v12 = 0LL;
  if ( a2 )
  {
    v21 = 0;
    if ( a1 )
    {
      do
      {
        if ( v21 >= 4 )
          break;
        v22 = (_WORD *)xwcschr(a1, 44LL, v12);
        v25 = v22;
        if ( v22 )
          *v22 = 0;
        v26 = (_WORD *)xwcschr(v24, 45LL, v23);
        v29 = v26;
        if ( v26 )
        {
          *v26 = 0;
          v30 = xwtol(v27);
          v27 = v29 + 1;
          *(&v35 + v31) = v30;
        }
        else
        {
          *(&v35 + v28) = 0;
        }
        v32 = xwtol(v27);
        a1 = v25 + 1;
        v34 = (unsigned int)(v33 + 1);
        v21 = v33 + 2;
        *(&v35 + v34) = v32;
      }
      while ( v25 );
      v9 = v38;
      v8 = v37;
      v6 = v36;
      LODWORD(v12) = v35;
    }
    if ( a3 )
      *a3 = v8;
    if ( a4 )
      *a4 = v9;
    if ( a5 )
      *a5 = 1000 * v12;
    if ( a6 )
      *a6 = 1000 * v6;
    return 1;
  }
  v13 = 0;
  if ( a1 )
  {
    do
    {
      if ( v13 >= 4 )
        break;
      v14 = (_WORD *)xwcschr(a1, 44LL, v12);
      if ( v14 )
        *v14 = 0;
      v16 = xwtol(v15);
      a1 = (_WORD *)(v17 + 2);
      v18 = v13++;
      *(&v35 + v18) = v16;
    }
    while ( v17 );
    if ( v35 )
    {
      v19 = v36;
      if ( v36 != -1 )
      {
        if ( a3 )
          *a3 = v35;
        if ( a4 )
          *a4 = v19;
        if ( a5 )
          *a5 = v37;
        if ( a6 )
          *a6 = 0;
        return 1;
      }
    }
  }
  return 0;
}
