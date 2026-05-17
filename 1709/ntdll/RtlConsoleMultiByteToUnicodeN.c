/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x1800E3BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x18006B810 (RtlMultiByteToUnicodeN.c)
 */

__int64 __fastcall RtlConsoleMultiByteToUnicodeN(
        _WORD *a1,
        unsigned int a2,
        char *a3,
        char *a4,
        unsigned int a5,
        _DWORD *a6)
{
  int v6; // r10d
  bool v7; // zf
  _WORD *v8; // r11
  char *i; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r14
  int v17; // esi
  __int64 v18; // r15
  unsigned int v19; // edi
  __int64 v20; // rax
  unsigned __int16 v21; // bp
  __int16 v22; // cx

  v6 = 0;
  v7 = NlsActiveCodePageIsUTF8 == 0;
  v8 = a1;
  *a6 = 0;
  if ( v7 )
  {
    v11 = a2 >> 1;
    if ( NlsMbCodePageTag )
    {
      v16 = NlsMbAnsiCodePageTables;
      v17 = (int)a1;
      if ( v11 )
      {
        v18 = NlsAnsiToUnicodeData;
        v19 = a5;
        while ( v19 )
        {
          v20 = (unsigned __int8)*a4;
          --v11;
          --v19;
          v21 = NlsLeadByteInfoTable[v20];
          if ( v21 )
          {
            if ( !v19 )
            {
              *v8 = 0;
              LODWORD(v8) = (_DWORD)v8 + 2;
              break;
            }
            ++a4;
            --v19;
            v22 = *(_WORD *)(v16 + 2LL * (v21 + (unsigned int)(unsigned __int8)*a4));
          }
          else
          {
            if ( (unsigned __int8)v20 < 0x20u )
              *a6 = 1;
            v22 = *(_WORD *)(v18 + 2LL * (unsigned __int8)*a4);
          }
          *v8 = v22;
          ++a4;
          ++v8;
          if ( !v11 )
            break;
        }
      }
      if ( a3 )
        *(_DWORD *)a3 = (_DWORD)v8 - v17;
    }
    else
    {
      v12 = a5;
      if ( v11 < a5 )
        v12 = v11;
      if ( a3 )
        *(_DWORD *)a3 = 2 * v12;
      v13 = NlsAnsiToUnicodeData;
      if ( v12 )
      {
        v14 = v12;
        do
        {
          if ( (unsigned __int8)*a4 < 0x20u )
            *a6 = 1;
          v15 = (unsigned __int8)*a4++;
          *v8++ = *(_WORD *)(v13 + 2 * v15);
          --v14;
        }
        while ( v14 );
      }
    }
    return 0LL;
  }
  else
  {
    if ( a5 )
    {
      for ( i = a4; (unsigned __int8)*i >= 0x20u; ++i )
      {
        if ( ++v6 >= a5 )
          return RtlMultiByteToUnicodeN(a1, a2, a3, a4, a5);
      }
      *a6 = 1;
    }
    return RtlMultiByteToUnicodeN(a1, a2, a3, a4, a5);
  }
}
