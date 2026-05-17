/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x18002E8B0
 * Callers:
 *     RtlUnicodeStringToAnsiString @ 0x18002E7D0 (RtlUnicodeStringToAnsiString.c)
 *     EtwpAddDebugInfoEvents @ 0x1800677C4 (EtwpAddDebugInfoEvents.c)
 *     wcstombs @ 0x180096D70 (wcstombs.c)
 *     _wctomb_s_l @ 0x18009A8C8 (_wctomb_s_l.c)
 *     _safecrt_wctomb_s @ 0x18009D03C (_safecrt_wctomb_s.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180067AA0 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall RtlUnicodeToMultiByteN(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  _BYTE *v5; // r10
  unsigned int v6; // ecx
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int *v11; // rax
  int v12; // ebx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int16 v15; // di
  unsigned int v16; // eax
  char v17; // [rsp+30h] [rbp-18h] BYREF

  v5 = a1;
  if ( NlsActiveCodePageIsUTF8 )
  {
    v11 = (unsigned int *)&v17;
    if ( a3 )
      v11 = a3;
    if ( a5 )
      RtlUnicodeToUTF8N((_DWORD)a1, a2, (_DWORD)v11, (_DWORD)a4, a5);
    else
      *v11 = 0;
  }
  else
  {
    v6 = a5 >> 1;
    if ( NlsMbCodePageTag )
    {
      v12 = (int)v5;
      if ( v6 )
      {
        v13 = NlsUnicodeToMbAnsiData;
        do
        {
          if ( !a2 )
            break;
          v14 = *a4++;
          v15 = *(_WORD *)(v13 + 2 * v14);
          if ( HIBYTE(v15) )
          {
            v16 = a2--;
            if ( v16 < 2 )
              break;
            *v5++ = HIBYTE(v15);
          }
          *v5 = v15;
          --a2;
          ++v5;
          --v6;
        }
        while ( v6 );
      }
      if ( a3 )
        *a3 = (_DWORD)v5 - v12;
    }
    else
    {
      if ( v6 < a2 )
        a2 = a5 >> 1;
      if ( a3 )
        *a3 = a2;
      v7 = NlsUnicodeToAnsiData;
      if ( a2 )
      {
        v8 = a2;
        do
        {
          v9 = *a4++;
          *v5++ = *(_BYTE *)(v9 + v7);
          --v8;
        }
        while ( v8 );
      }
    }
  }
  return 0LL;
}
