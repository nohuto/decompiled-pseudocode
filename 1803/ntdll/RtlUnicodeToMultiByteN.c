/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x18006CF00
 * Callers:
 *     wcstombs @ 0x180091250 (wcstombs.c)
 *     sub_180094E8C @ 0x180094E8C (sub_180094E8C.c)
 *     sub_180097788 @ 0x180097788 (sub_180097788.c)
 *     sub_180107B08 @ 0x180107B08 (sub_180107B08.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180065170 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall RtlUnicodeToMultiByteN(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
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
  if ( byte_18015ADB1 )
  {
    v11 = (unsigned int *)&v17;
    if ( a3 )
      v11 = a3;
    if ( a5 )
      RtlUnicodeToUTF8N(a1, a2, v11, a4, a5);
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
        v13 = qword_18015ADB8;
        do
        {
          if ( !a2 )
            break;
          v14 = *(unsigned __int16 *)a4;
          a4 = (unsigned int *)((char *)a4 + 2);
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
      v7 = qword_18015B218;
      if ( a2 )
      {
        v8 = a2;
        do
        {
          v9 = *(unsigned __int16 *)a4;
          a4 = (unsigned int *)((char *)a4 + 2);
          *v5++ = *(_BYTE *)(v9 + v7);
          --v8;
        }
        while ( v8 );
      }
    }
  }
  return 0LL;
}
