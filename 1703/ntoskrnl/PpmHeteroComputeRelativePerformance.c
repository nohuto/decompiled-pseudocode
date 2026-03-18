/*
 * XREFs of PpmHeteroComputeRelativePerformance @ 0x1405C0B60
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140160800 (KeIsEqualAffinityEx.c)
 */

unsigned __int64 PpmHeteroComputeRelativePerformance()
{
  unsigned __int64 result; // rax
  int v1; // ebx
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  __int64 *v4; // rcx
  char v5; // r11
  unsigned int v6; // r11d
  unsigned __int64 v7; // r9
  unsigned int v8; // edi
  __int64 v9; // r10
  unsigned __int64 v10; // rcx
  unsigned int i; // edx
  __int64 v12; // r10
  __int64 v13; // rax
  char v14; // r10
  unsigned __int64 v15; // r11
  int j; // edx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  char v19; // r9
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx

  result = KeIsEmptyAffinityEx(PpmCheckRegistered);
  if ( !(_DWORD)result )
  {
    result = KeIsEqualAffinityEx(PpmPerfStatesRegistered, PpmCheckRegistered);
    if ( (_DWORD)result )
    {
      v1 = PpmPerfDomainCount;
      if ( PpmPerfDomainCount != 1 )
      {
        v2 = PpmPerfDomainHead;
        v3 = 0LL;
        v4 = (__int64 *)PpmPerfDomainHead;
        if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
        {
          do
          {
            result = v4[43];
            v4 = (__int64 *)*v4;
            if ( v3 <= result )
              v3 = result;
          }
          while ( v4 != &PpmPerfDomainHead );
          if ( v3 )
          {
            v5 = 0;
            result = 0x7FFFFFFFFFFFLL;
            if ( v3 >= 0x7FFFFFFFFFFFLL )
            {
              result = (unsigned int)(HIDWORD(v3) + 0xFFFF);
              _BitScanReverse(&v6, result);
              v5 = v6 - 14;
            }
            v7 = v3 >> v5;
            v8 = -1;
            if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
            {
              do
              {
                v9 = *(_QWORD *)(v2 + 344) >> v5;
                *(_BYTE *)(v2 + 352) = 100 * v9 / v7;
                if ( v9 == v7 )
                {
                  v10 = 0x10000LL;
                }
                else
                {
                  v10 = ((v7 >> 1) + (v9 << 16)) / v7;
                  if ( v10 <= 1 )
                    v10 = 1LL;
                }
                for ( i = 0; i < *(_DWORD *)(v2 + 200); ++i )
                {
                  v12 = *(_QWORD *)(v2 + 208);
                  v13 = 152LL * i;
                  if ( !*(_BYTE *)(v13 + v12 + 16) )
                    *(_DWORD *)(*(_QWORD *)(v13 + v12) + 24368LL) = v10;
                }
                v2 = *(_QWORD *)v2;
                result = v8;
                if ( v8 >= v10 )
                  v8 = v10;
              }
              while ( (__int64 *)v2 != &PpmPerfDomainHead );
              v2 = PpmPerfDomainHead;
            }
            v14 = 0;
            PpmHeteroMinRelativePerformance = v8;
            v15 = 0LL;
            for ( j = v1; j; v15 = v17 )
            {
              v17 = -1LL;
              result = v2;
              if ( (__int64 *)v2 != &PpmPerfDomainHead )
              {
                do
                {
                  v18 = *(_QWORD *)(result + 344);
                  if ( v18 > v15 && v17 >= v18 )
                    v17 = *(_QWORD *)(result + 344);
                  result = *(_QWORD *)result;
                }
                while ( (__int64 *)result != &PpmPerfDomainHead );
                if ( (__int64 *)v2 != &PpmPerfDomainHead )
                {
                  do
                  {
                    if ( *(_QWORD *)(v2 + 344) == v17 )
                    {
                      *(_BYTE *)(v2 + 205) = v14;
                      --j;
                    }
                    v2 = *(_QWORD *)v2;
                  }
                  while ( (__int64 *)v2 != &PpmPerfDomainHead );
                  v2 = PpmPerfDomainHead;
                }
              }
              ++v14;
            }
            v19 = 0;
            v20 = 0LL;
            while ( v1 )
            {
              v21 = 0xFFFFFFFFLL;
              result = v2;
              if ( (__int64 *)v2 != &PpmPerfDomainHead )
              {
                do
                {
                  v22 = *(_QWORD *)(result + 344) * *(unsigned int *)(result + 320);
                  if ( v22 > v20 && v21 >= v22 )
                    v21 = *(_QWORD *)(result + 344) * *(unsigned int *)(result + 320);
                  result = *(_QWORD *)result;
                }
                while ( (__int64 *)result != &PpmPerfDomainHead );
                if ( (__int64 *)v2 != &PpmPerfDomainHead )
                {
                  do
                  {
                    result = *(_QWORD *)(v2 + 344) * *(unsigned int *)(v2 + 320);
                    if ( result == v21 )
                    {
                      *(_BYTE *)(v2 + 206) = v19;
                      --v1;
                    }
                    v2 = *(_QWORD *)v2;
                  }
                  while ( (__int64 *)v2 != &PpmPerfDomainHead );
                  v2 = PpmPerfDomainHead;
                }
              }
              v20 = v21;
              ++v19;
            }
          }
        }
      }
    }
  }
  return result;
}
