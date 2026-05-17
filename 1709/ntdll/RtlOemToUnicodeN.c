/*
 * XREFs of RtlOemToUnicodeN @ 0x18007B4F0
 * Callers:
 *     RtlCreateEnvironmentEx @ 0x18006B5D0 (RtlCreateEnvironmentEx.c)
 *     RtlOemStringToUnicodeString @ 0x18007B400 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180068230 (RtlUTF8ToUnicodeN.c)
 */

__int64 __fastcall RtlOemToUnicodeN(_WORD *a1, unsigned int a2, char *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // ebx
  _WORD *v7; // r10
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // r11
  __int64 v13; // rax
  char *v15; // r8
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int16 v20; // si
  char v21; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v7 = a1;
  if ( NlsOemCodePageIsUTF8 )
  {
    v15 = &v21;
    if ( a3 )
      v15 = a3;
    if ( a5 )
    {
      v16 = RtlUTF8ToUnicodeN(a1, a2, v15, a4, a5);
    }
    else
    {
      *(_DWORD *)v15 = 0;
      v16 = 0;
    }
    if ( v16 == -1073741789 )
      return (unsigned int)-2147483643;
    return v5;
  }
  else
  {
    v8 = a5;
    v9 = a2 >> 1;
    if ( NlsMbOemCodePageTag )
    {
      v17 = NlsMbOemCodePageTables;
      if ( v9 )
      {
        v18 = NlsOemToUnicodeData;
        while ( v8 )
        {
          v19 = (unsigned __int8)*a4;
          --v9;
          --v8;
          v20 = NlsOemLeadByteInfoTable[v19];
          if ( v20 )
          {
            if ( !v8 )
            {
              *v7 = 0;
              LODWORD(v7) = (_DWORD)v7 + 2;
              break;
            }
            ++a4;
            --v8;
            *v7 = *(_WORD *)(v17 + 2LL * (v20 + (unsigned int)(unsigned __int8)*a4));
          }
          else
          {
            *v7 = *(_WORD *)(v18 + 2 * v19);
          }
          ++v7;
          ++a4;
          if ( !v9 )
            break;
        }
      }
      if ( a3 )
        *(_DWORD *)a3 = (_DWORD)v7 - (_DWORD)a1;
    }
    else
    {
      v10 = a5;
      if ( v9 < a5 )
        v10 = v9;
      if ( a3 )
        *(_DWORD *)a3 = 2 * v10;
      v11 = NlsOemToUnicodeData;
      if ( v10 )
      {
        v12 = v10;
        do
        {
          v13 = (unsigned __int8)*a4++;
          *v7++ = *(_WORD *)(v11 + 2 * v13);
          --v12;
        }
        while ( v12 );
      }
    }
    return v9 < v8 ? 0x80000005 : 0;
  }
}
