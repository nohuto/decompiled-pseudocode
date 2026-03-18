/*
 * XREFs of ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C00FF39C
 * Callers:
 *     FreeWindowMessageFilter @ 0x1C0060840 (FreeWindowMessageFilter.c)
 *     FreeProcessMessageFilter @ 0x1C00FF370 (FreeProcessMessageFilter.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgLookupTableCleanUp(void **a1, __int64 a2, __int64 a3)
{
  void **v4; // rdi
  __int64 v5; // rbp
  void *v6; // rsi
  _QWORD *v7; // r14
  __int64 v8; // r15

  if ( a1 )
  {
    v4 = a1;
    v5 = 8LL;
    do
    {
      v6 = *v4;
      if ( *v4 )
      {
        v7 = *v4;
        v8 = 16LL;
        do
        {
          if ( *v7 )
            Win32FreePool(*v7, a2, a3);
          ++v7;
          --v8;
        }
        while ( v8 );
        Win32FreePool(v6, a2, a3);
      }
      ++v4;
      --v5;
    }
    while ( v5 );
    Win32FreePool(a1, a2, a3);
  }
}
