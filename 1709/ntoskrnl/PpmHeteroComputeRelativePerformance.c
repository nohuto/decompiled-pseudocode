/*
 * XREFs of PpmHeteroComputeRelativePerformance @ 0x1405B6D34
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1405B6434 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140138DD0 (KeIsEqualAffinityEx.c)
 */

char PpmHeteroComputeRelativePerformance()
{
  char v0; // di
  __int64 *v1; // rcx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  char v4; // r10
  unsigned int v5; // r10d
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // r11
  unsigned __int64 v10; // rcx
  unsigned int i; // edx
  __int64 v12; // r11
  unsigned __int64 v13; // rax
  int v14; // edx
  char v15; // r9
  unsigned __int64 v16; // r10
  __int64 *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 j; // rax
  int v21; // r8d
  char v22; // r9
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 k; // rcx

  v0 = 0;
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered) )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, PpmCheckRegistered) )
    {
      if ( PpmPerfDomainCount != 1 )
      {
        v1 = (__int64 *)PpmPerfDomainHead;
        v2 = 0LL;
        if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
        {
          do
          {
            v3 = v1[43];
            v1 = (__int64 *)*v1;
            if ( v2 <= v3 )
              v2 = v3;
          }
          while ( v1 != &PpmPerfDomainHead );
          if ( v2 )
          {
            v4 = 0;
            if ( v2 >= 0x7FFFFFFFFFFFLL )
            {
              _BitScanReverse(&v5, HIDWORD(v2) + 0xFFFF);
              v4 = v5 - 14;
            }
            v6 = PpmPerfDomainHead;
            v7 = v2 >> v4;
            v8 = -1;
            while ( (__int64 *)v6 != &PpmPerfDomainHead )
            {
              v9 = *(_QWORD *)(v6 + 344) >> v4;
              *(_BYTE *)(v6 + 352) = 100 * v9 / v7;
              if ( v9 == v7 )
              {
                v10 = 0x10000LL;
              }
              else
              {
                v10 = ((v9 << 16) + (v7 >> 1)) / v7;
                if ( v10 <= 1 )
                  v10 = 1LL;
              }
              for ( i = 0; i < *(_DWORD *)(v6 + 200); ++i )
              {
                v12 = *(_QWORD *)(v6 + 208);
                v13 = (unsigned __int64)i << 7;
                if ( !*(_BYTE *)(v13 + v12 + 16) )
                  *(_DWORD *)(*(_QWORD *)(v13 + v12) + 24240LL) = v10;
              }
              v6 = *(_QWORD *)v6;
              if ( v8 >= v10 )
                v8 = v10;
            }
            v14 = PpmPerfDomainCount;
            v15 = 0;
            v16 = 0LL;
            PpmHeteroMinRelativePerformance = v8;
            while ( v14 )
            {
              v17 = (__int64 *)PpmPerfDomainHead;
              v18 = -1LL;
              while ( v17 != &PpmPerfDomainHead )
              {
                v19 = v17[43];
                if ( v19 > v16 && v18 >= v19 )
                  v18 = v17[43];
                v17 = (__int64 *)*v17;
              }
              for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
              {
                if ( *(_QWORD *)(j + 344) == v18 )
                {
                  *(_BYTE *)(j + 205) = v15;
                  --v14;
                }
              }
              v16 = v18;
              ++v15;
            }
            v21 = PpmPerfDomainCount;
            v22 = 0;
            v23 = 0LL;
            while ( v21 )
            {
              v24 = PpmPerfDomainHead;
              v25 = 0xFFFFFFFFLL;
              while ( (__int64 *)v24 != &PpmPerfDomainHead )
              {
                v26 = *(_QWORD *)(v24 + 344) * *(unsigned int *)(v24 + 320);
                if ( v26 > v23 && v25 >= v26 )
                  v25 = *(_QWORD *)(v24 + 344) * *(unsigned int *)(v24 + 320);
                v24 = *(_QWORD *)v24;
              }
              for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
              {
                if ( *(_QWORD *)(k + 344) * *(unsigned int *)(k + 320) == v25 )
                {
                  if ( *(_BYTE *)(k + 206) != v22 )
                  {
                    v0 = 1;
                    *(_BYTE *)(k + 206) = v22;
                  }
                  --v21;
                }
              }
              v23 = v25;
              ++v22;
            }
          }
        }
      }
    }
  }
  return v0;
}
