/*
 * XREFs of RtlUnicodeToOemN @ 0x18006CFA0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x18006CEE0 (RtlUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800E8D20 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToUTF8N @ 0x180067AA0 (RtlUnicodeToUTF8N.c)
 */

__int64 __fastcall RtlUnicodeToOemN(_BYTE *a1, int a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v6; // r11d
  _BYTE *v7; // r10
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int *v14; // rax
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rax
  __int16 v18; // si
  unsigned int v19; // eax
  char v20; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v6 = a2;
  v7 = a1;
  if ( NlsOemCodePageIsUTF8 )
  {
    v14 = (unsigned int *)&v20;
    if ( a3 )
      v14 = a3;
    if ( a5 )
    {
      v15 = RtlUnicodeToUTF8N(a1, a2, v14, a4, a5);
    }
    else
    {
      *v14 = 0;
      v15 = 0;
    }
    if ( v15 == -1073741789 )
      return (unsigned int)-2147483643;
    return v5;
  }
  else
  {
    v8 = a5 >> 1;
    if ( NlsMbOemCodePageTag )
    {
      if ( v8 )
      {
        v16 = NlsUnicodeToMbOemData;
        do
        {
          if ( !v6 )
            break;
          v17 = *(unsigned __int16 *)a4;
          a4 = (unsigned int *)((char *)a4 + 2);
          v18 = *(_WORD *)(v16 + 2 * v17);
          if ( HIBYTE(v18) )
          {
            v19 = v6--;
            if ( v19 < 2 )
              break;
            *v7++ = HIBYTE(v18);
          }
          *v7 = v18;
          --v6;
          ++v7;
          --v8;
        }
        while ( v8 );
      }
      if ( a3 )
        *a3 = (_DWORD)v7 - (_DWORD)a1;
    }
    else
    {
      v9 = v6;
      if ( v8 < v6 )
        v9 = a5 >> 1;
      if ( a3 )
        *a3 = v9;
      v10 = NlsUnicodeToOemData;
      if ( v9 )
      {
        v11 = v9;
        do
        {
          v12 = *(unsigned __int16 *)a4;
          a4 = (unsigned int *)((char *)a4 + 2);
          *v7++ = *(_BYTE *)(v12 + v10);
          --v11;
        }
        while ( v11 );
      }
    }
    return v6 < v8 ? 0x80000005 : 0;
  }
}
