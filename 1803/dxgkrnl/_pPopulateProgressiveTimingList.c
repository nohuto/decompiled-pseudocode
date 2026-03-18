/*
 * XREFs of _pPopulateProgressiveTimingList @ 0x1C0234D78
 * Callers:
 *     _pLoadAdditinalMode @ 0x1C0234914 (_pLoadAdditinalMode.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

_DWORD *__fastcall pPopulateProgressiveTimingList(_DWORD *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  _DWORD *v4; // rdx
  int v5; // esi
  _DWORD *v6; // rcx
  __int64 v7; // r8
  bool v8; // zf
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rcx

  v1 = a1[4];
  v2 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( v1 )
  {
    v6 = a1 + 7;
    v7 = v1;
    do
    {
      v8 = (*v6 & 0x10000000) == 0;
      v9 = v5 + 1;
      v6 += 7;
      if ( !v8 )
        v9 = v5;
      v5 = v9;
      --v7;
    }
    while ( v7 );
    if ( v9 )
    {
      v4 = operator new[]((unsigned int)(28 * v9 + 20), 0x4D677844u, PagedPool);
      if ( !v4 )
      {
        v11 = WdLogNewEntry5_WdLowResource(v10);
        WdLogEvent5_WdLowResource(v11);
        return 0LL;
      }
      v13 = 0;
      v4[2] = a1[2];
      *((_BYTE *)v4 + 12) = 1;
      for ( v4[4] = v5; v13 < a1[4]; ++v13 )
      {
        v14 = 7LL * v13;
        if ( (a1[v14 + 7] & 0x10000000) == 0 )
        {
          v15 = 7LL * v2++;
          *(_OWORD *)&v4[v15 + 5] = *(_OWORD *)&a1[v14 + 5];
          *(_QWORD *)&v4[v15 + 9] = *(_QWORD *)&a1[v14 + 9];
          v4[v15 + 11] = a1[v14 + 11];
        }
      }
    }
  }
  return v4;
}
