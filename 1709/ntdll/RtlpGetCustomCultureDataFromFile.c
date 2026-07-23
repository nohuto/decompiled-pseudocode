/*
 * XREFs of RtlpGetCustomCultureDataFromFile @ 0x1800F6198
 * Callers:
 *     RtlpGetCustomCultureData @ 0x1800F6124 (RtlpGetCustomCultureData.c)
 * Callees:
 *     RtlpInitUnicodeStringUsingBuffer @ 0x1800520B4 (RtlpInitUnicodeStringUsingBuffer.c)
 */

__int64 __fastcall RtlpGetCustomCultureDataFromFile(
        unsigned int *a1,
        unsigned __int64 a2,
        char a3,
        char a4,
        _UNICODE_STRING *a5)
{
  __int64 v8; // rcx
  char *v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  char *v12; // r11
  __int64 v13; // r10
  unsigned int v14; // edx
  unsigned int v15; // r8d

  if ( a2 >= 0x19C )
  {
    v8 = *a1;
    if ( (_DWORD)v8 )
    {
      if ( v8 + 68 <= a2 && (int)v8 + 68 >= (unsigned int)v8 )
      {
        v9 = (char *)a1 + (unsigned int)v8;
        if ( ((unsigned __int8)v9 & 1) == 0 )
        {
          v10 = *((unsigned int *)v9 + 7);
          if ( (_DWORD)v10 )
          {
            if ( (v10 & 1) == 0
              && (unsigned int)v10 + *((unsigned __int16 *)v9 + 13) <= a2
              && (unsigned int)v10 + *((unsigned __int16 *)v9 + 13) >= (unsigned int)v10 )
            {
              v11 = *((unsigned int *)v9 + 14);
              if ( v11 <= a2 && (_DWORD)v11 && (a3 || *(unsigned int *)((char *)a1 + v10 + 156)) )
              {
                if ( !a5 )
                  return 0LL;
                v12 = (char *)a1 + v11;
                if ( (((_BYTE)v11 + (_BYTE)a1) & 1) == 0 )
                {
                  v13 = *(unsigned int *)((char *)a1 + v10 + 184);
                  v14 = (unsigned int)(a2 - v11) >> 1;
                  if ( (int)v13 + 2 <= v14 && (int)v13 + 2 >= (unsigned int)v13 )
                  {
                    v15 = *(unsigned __int16 *)&v12[2 * v13];
                    if ( v15 + (unsigned int)v13 + 2 <= v14 && !*(_WORD *)&v12[2 * v15 + 2 + 2 * (unsigned int)v13] )
                      return RtlpInitUnicodeStringUsingBuffer(
                               a4,
                               (const WCHAR *)&v12[2 * (unsigned int)(v13 + 1)],
                               v15,
                               a5);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 3221225473LL;
}
