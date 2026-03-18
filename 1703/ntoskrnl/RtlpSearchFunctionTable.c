/*
 * XREFs of RtlpSearchFunctionTable @ 0x14001BE20
 * Callers:
 *     RtlMarkExceptionHandlingPages @ 0x1405128E0 (RtlMarkExceptionHandlingPages.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpSearchFunctionTable(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r10
  unsigned int *v7; // rdx
  int v8; // r9d
  int v9; // r8d
  int v10; // eax

  if ( !a2 )
    return 0LL;
  v6 = a3 - a4;
  v7 = (unsigned int *)(a1 + 12LL * (unsigned int)(a2 - 1));
  if ( v6 < *v7 )
  {
    v8 = 0;
    v9 = a2 - 2;
    if ( v9 >= 0 )
    {
      do
      {
        v10 = (v9 + v8) >> 1;
        v7 = (unsigned int *)(a1 + 12LL * v10);
        if ( v6 < *v7 )
        {
          v9 = v10 - 1;
        }
        else
        {
          if ( v6 < v7[3] )
            break;
          v8 = v10 + 1;
        }
      }
      while ( v9 >= v8 );
    }
  }
  if ( v6 >= *v7 && v6 < v7[1] )
    return v7;
  else
    return 0LL;
}
