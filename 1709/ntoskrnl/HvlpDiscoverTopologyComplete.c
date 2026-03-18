/*
 * XREFs of HvlpDiscoverTopologyComplete @ 0x1408695A8
 * Callers:
 *     HvlPhase2Initialize @ 0x14015CA00 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x1406B31B4 (HvlpDiscoverTopologyWorker.c)
 */

__int64 HvlpDiscoverTopologyComplete()
{
  __int64 result; // rax
  unsigned int v1; // edi
  unsigned int v2; // edx
  int *v3; // rbx
  unsigned int v4; // r8d
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  bool v7; // zf
  char v8; // r10
  char v9; // r11
  _DWORD *v10; // r9
  char v11; // cl

  result = (unsigned int)HvlpLogicalProcessorCount;
  v1 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v2 = dword_140387C10;
    v3 = &dword_140408358;
    v4 = dword_140387C14;
    do
    {
      if ( v3[4] == -1 )
      {
        result = HvlpDiscoverTopologyWorker();
        v2 = dword_140387C10;
        v4 = dword_140387C14;
      }
      v5 = v3[2];
      v6 = v3[3];
      if ( v5 > v2 )
        v2 = v3[2];
      dword_140387C10 = v2;
      if ( v6 > v4 )
        v4 = v6;
      v7 = *((_BYTE *)v3 + 104) == 0;
      dword_140387C14 = v4;
      if ( !v7 )
      {
        v8 = 1;
        result = (__int64)HvlpLogicalProcessorRegions;
        v9 = 1;
        if ( HvlpLogicalProcessorRegions == v3 - 2 )
          goto LABEL_19;
        v10 = &unk_140408360;
        do
        {
          if ( *((_BYTE *)v10 + 96) )
          {
            v11 = 0;
            if ( *v10 != v5 )
              v11 = v8;
            v8 = v11;
            if ( v10[1] == v6 )
              v9 = 0;
          }
          v10 += 30;
          result = (__int64)(v10 - 4);
        }
        while ( v10 - 4 != v3 - 2 );
        if ( v8 )
LABEL_19:
          ++HvlpPackageCount;
        if ( v9 )
          ++HvlpCoreCount;
      }
      ++v1;
      v3 += 30;
    }
    while ( v1 < (unsigned int)HvlpLogicalProcessorCount );
  }
  return result;
}
