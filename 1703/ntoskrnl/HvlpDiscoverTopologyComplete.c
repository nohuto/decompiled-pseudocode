/*
 * XREFs of HvlpDiscoverTopologyComplete @ 0x1408326B4
 * Callers:
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x140687790 (HvlpDiscoverTopologyWorker.c)
 */

void HvlpDiscoverTopologyComplete()
{
  unsigned int v0; // r8d
  unsigned int v1; // edi
  unsigned int v2; // r9d
  unsigned int *v3; // rbx
  unsigned int v4; // r10d
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  bool v7; // zf
  char v8; // r11
  char v9; // si
  _DWORD *v10; // rdx
  char v11; // cl

  v0 = HvlpLogicalProcessorCount;
  v1 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v2 = dword_14036B990;
    v3 = (unsigned int *)&unk_1403E8DC0;
    v4 = dword_14036B994;
    do
    {
      if ( v3[2] == -1 )
      {
        HvlpDiscoverTopologyWorker();
        v0 = HvlpLogicalProcessorCount;
        v2 = dword_14036B990;
        v4 = dword_14036B994;
      }
      v5 = *v3;
      v6 = v3[1];
      if ( *v3 > v2 )
        v2 = *v3;
      dword_14036B990 = v2;
      if ( v6 > v4 )
        v4 = v6;
      v7 = *((_BYTE *)v3 + 88) == 0;
      dword_14036B994 = v4;
      if ( !v7 )
      {
        v8 = 1;
        v9 = 1;
        if ( HvlpLogicalProcessorRegions == (int *)(v3 - 4) )
          goto LABEL_19;
        v10 = &unk_1403E8DC0;
        do
        {
          if ( *((_BYTE *)v10 + 88) )
          {
            v11 = 0;
            if ( *v10 != v5 )
              v11 = v8;
            v8 = v11;
            if ( v10[1] == v6 )
              v9 = 0;
          }
          v10 += 28;
        }
        while ( v10 - 4 != v3 - 4 );
        if ( v8 )
LABEL_19:
          ++HvlpPackageCount;
        if ( v9 )
          ++HvlpCoreCount;
      }
      ++v1;
      v3 += 28;
    }
    while ( v1 < v0 );
  }
}
