/*
 * XREFs of MiCanFlushMakeProgress @ 0x140224D4C
 * Callers:
 *     MiFlushAllHintedStorePages @ 0x1402258B8 (MiFlushAllHintedStorePages.c)
 *     MiFlushAllPagesWorker @ 0x140225AB0 (MiFlushAllPagesWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCanFlushMakeProgress(__int64 a1, int a2)
{
  unsigned int v3; // edx
  int v4; // r8d
  __int64 i; // r9
  __int64 v6; // r10
  __int16 v7; // ax

  if ( !a2 && *(_QWORD *)(a1 + 6336) != *(_QWORD *)(a1 + 6448) )
    return 1LL;
  v3 = *(_DWORD *)(a1 + 5784);
  if ( v3 )
  {
    v4 = 0;
    for ( i = 5792LL; ; i += 8LL )
    {
      v6 = *(_QWORD *)(i + a1);
      if ( *(_QWORD *)(v6 + 24) )
      {
        v7 = *(_WORD *)(v6 + 204);
        if ( (v7 & 0x40) == 0 )
        {
          if ( (v7 & 0x10) == 0 )
            break;
          a1 = *(_QWORD *)(v6 + 256);
          if ( *(_QWORD *)(a1 + 40LL * (v7 & 0xF) + 2688) )
            break;
        }
      }
      if ( ++v4 >= v3 )
        return 0LL;
    }
    return 1LL;
  }
  return 0LL;
}
