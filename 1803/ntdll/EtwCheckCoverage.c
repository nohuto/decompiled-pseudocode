/*
 * XREFs of EtwCheckCoverage @ 0x180083AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall EtwCheckCoverage(__int64 a1)
{
  unsigned int *AnsiCodePageData; // rdx
  int v4; // r8d
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // r10
  unsigned int *v8; // rcx
  unsigned int *i; // rax

  AnsiCodePageData = (unsigned int *)NtCurrentPeb()[2].AnsiCodePageData;
  if ( !AnsiCodePageData || (*((_BYTE *)AnsiCodePageData + 2) & 1) != 0 )
    return 0;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = AnsiCodePageData[1];
  v6 = v4 & AnsiCodePageData[2];
  v7 = (unsigned __int64)&AnsiCodePageData[v5 + 13];
  if ( v6 >= (unsigned int)v5 )
    v6 = v6 - (unsigned int)v5 < (unsigned int)v5 ? v6 - v5 : 0;
  v8 = &AnsiCodePageData[v6 + 13];
  i = v8;
  if ( (unsigned __int64)v8 >= v7 )
  {
LABEL_10:
    for ( i = AnsiCodePageData + 13; i < v8; ++i )
    {
      if ( !*i )
        goto LABEL_8;
      if ( *i == v4 )
        goto LABEL_9;
    }
    i = 0LL;
  }
  else
  {
    while ( *i )
    {
      if ( *i == v4 )
        goto LABEL_9;
      if ( (unsigned __int64)++i >= v7 )
        goto LABEL_10;
    }
  }
LABEL_8:
  if ( *i != v4 )
    return 0;
LABEL_9:
  *(_DWORD *)(a1 + 12) = AnsiCodePageData[6];
  return 1;
}
