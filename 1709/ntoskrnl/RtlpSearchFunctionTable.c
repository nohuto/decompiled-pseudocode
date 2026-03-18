/*
 * XREFs of RtlpSearchFunctionTable @ 0x140143878
 * Callers:
 *     RtlMarkExceptionHandlingPages @ 0x1404D0FC0 (RtlMarkExceptionHandlingPages.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpSearchFunctionTable(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int64 v6; // r8
  unsigned int *v7; // rcx
  bool v8; // sf
  int v9; // edx
  int v10; // r11d
  int v11; // r9d

  v4 = 0LL;
  if ( a2 )
  {
    v6 = a3 - a4;
    v7 = (unsigned int *)(a1 + 12LL * (unsigned int)(a2 - 1));
    if ( v6 < *v7 )
    {
      v8 = a2 - 2 < 0;
      v9 = a2 - 2;
      v10 = 0;
      if ( !v8 )
      {
        do
        {
          v11 = (v9 + v10) >> 1;
          v7 = (unsigned int *)(a1 + 12LL * v11);
          if ( v6 < *v7 )
          {
            v9 = v11 - 1;
          }
          else
          {
            if ( v6 < v7[3] )
              break;
            v10 = v11 + 1;
          }
        }
        while ( v9 >= v10 );
      }
    }
    if ( v6 >= *v7 && v6 < v7[1] )
      return v7;
  }
  return (unsigned int *)v4;
}
