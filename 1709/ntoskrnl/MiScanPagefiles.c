/*
 * XREFs of MiScanPagefiles @ 0x1400F0444
 * Callers:
 *     MiWorkingSetManager @ 0x1400F0224 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     MiSufficientAvailablePages @ 0x1400649E0 (MiSufficientAvailablePages.c)
 *     MiFreePageFileHashPfns @ 0x1400F0478 (MiFreePageFileHashPfns.c)
 */

signed __int64 __fastcall MiScanPagefiles(__int64 a1)
{
  signed __int64 result; // rax
  unsigned int v3; // ecx
  int v4; // edx
  __int64 i; // r8
  __int64 v6; // rdx
  signed __int64 v7; // rtt

  MiFreePageFileHashPfns();
  result = MiSufficientAvailablePages(a1, 0x420uLL);
  if ( !(_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 5784);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 6448) && !*(_QWORD *)(a1 + 968) )
      {
        result = *(unsigned int *)(a1 + 976);
        if ( (unsigned int)result >= 0x1E )
        {
          v4 = 0;
          for ( i = a1 + 5792; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL); i += 8LL )
          {
            if ( ++v4 >= v3 )
            {
              if ( *(_BYTE *)(a1 + 659) == 1 )
              {
                v6 = *(_QWORD *)(a1 + 168);
                *(_BYTE *)(a1 + 659) = 0;
                *(_DWORD *)(a1 + 976) = 0;
                _m_prefetchw((const void *)(v6 + 24));
                result = *(_QWORD *)(v6 + 24);
                while ( (unsigned __int64)(result + 1) > 1 )
                {
                  v7 = result;
                  result = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), result + 1, result);
                  if ( v7 == result )
                  {
                    *(_QWORD *)(a1 + 968) = a1;
                    *(_QWORD *)(a1 + 960) = MiScanPagefileSpace;
                    *(_QWORD *)(a1 + 944) = 0LL;
                    return ExQueueWorkItemToPartition(a1 + 944, 2, 0xFFFFFFFF, *(_QWORD *)(a1 + 168));
                  }
                }
                if ( result )
                  __fastfail(0xEu);
              }
              return result;
            }
          }
        }
        else
        {
          result = (unsigned int)(result + 1);
          *(_DWORD *)(a1 + 976) = result;
        }
      }
    }
  }
  return result;
}
