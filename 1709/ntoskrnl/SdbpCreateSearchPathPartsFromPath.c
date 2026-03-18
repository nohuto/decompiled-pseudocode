/*
 * XREFs of SdbpCreateSearchPathPartsFromPath @ 0x140541990
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140541D04 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     wcschr @ 0x140160420 (wcschr.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCreateSearchPathPartsFromPath(const wchar_t *a1, _QWORD *a2)
{
  unsigned int v4; // r15d
  const wchar_t *v5; // rsi
  wchar_t v6; // bx
  wchar_t *v7; // rax
  int v8; // ebp
  _DWORD *v9; // rax
  _DWORD *v10; // r8
  __int64 v11; // rax
  const wchar_t *i; // rdx
  wchar_t v13; // cx
  const char *v15; // r9
  int v16; // r8d
  const wchar_t *v17; // rax
  __int64 v18; // rcx

  v4 = 0;
  v5 = 0LL;
  if ( a1 )
  {
    v6 = *a1;
    v7 = wcschr(a1, 0x3Bu);
    v8 = v6 != 0;
    while ( v7 )
    {
      ++v8;
      v7 = wcschr(v7 + 1, 0x3Bu);
    }
    v9 = (_DWORD *)AslAlloc((unsigned int)(v8 - 1), 48LL * (unsigned int)(v8 - 1) + 56);
    v10 = v9;
    if ( v9 )
    {
      *v9 = v8;
      v11 = -1LL;
      do
        ++v11;
      while ( a1[v11] );
      for ( i = &a1[v11]; ; --i )
      {
        if ( i < a1 )
        {
          *a2 = v10;
          return 1LL;
        }
        v13 = *i;
        if ( *i == 92 )
        {
          if ( v5 )
          {
LABEL_13:
            if ( a1 != i )
              continue;
            goto LABEL_8;
          }
          v5 = i;
        }
        if ( v13 != 59 )
          goto LABEL_13;
LABEL_8:
        if ( v5 )
        {
          v17 = i + 1;
          if ( v13 != 59 )
            v17 = i;
          i = v17;
          v18 = 12LL * v4++;
          v10[v18 + 4] = v5 - v17 + 1;
          v5 = 0LL;
          *(_QWORD *)&v10[v18 + 2] = v17;
        }
      }
    }
    v15 = "Failed to allocate search path parts";
    v16 = 1384;
  }
  else
  {
    v15 = "Invalid argument";
    v16 = 1355;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpCreateSearchPathPartsFromPath", v16, (_DWORD)v15);
  return 0LL;
}
