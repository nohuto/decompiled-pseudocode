/*
 * XREFs of MiScanPagefiles @ 0x140080B38
 * Callers:
 *     MiWorkingSetManager @ 0x1400807C8 (MiWorkingSetManager.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     MiFreePageFileHashPfns @ 0x140080B6C (MiFreePageFileHashPfns.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 */

char __fastcall MiScanPagefiles(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  int v4; // edx
  __int64 i; // r8
  __int64 v6; // rcx
  __int64 v7; // r10

  MiFreePageFileHashPfns();
  v2 = MiSufficientAvailablePages(a1, 1056LL);
  if ( !v2 )
  {
    v3 = *(_DWORD *)(a1 + 6872);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 7536) && !*(_QWORD *)(a1 + 968) )
      {
        v2 = *(_DWORD *)(a1 + 976);
        if ( v2 >= 0x1E )
        {
          v4 = 0;
          for ( i = a1 + 6880; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL); i += 8LL )
          {
            if ( ++v4 >= v3 )
            {
              if ( *(_BYTE *)(a1 + 659) == 1 )
              {
                v6 = *(_QWORD *)(a1 + 168);
                *(_BYTE *)(a1 + 659) = 0;
                *(_DWORD *)(a1 + 976) = 0;
                LOBYTE(v2) = PsReferencePartitionSafe(v6);
                if ( (_BYTE)v2 )
                {
                  *(_QWORD *)(a1 + 968) = a1;
                  *(_QWORD *)(a1 + 960) = MiScanPagefileSpace;
                  *(_QWORD *)(a1 + 944) = v7;
                  LOBYTE(v2) = ExQueueWorkItemToPartition(a1 + 944);
                }
              }
              return v2;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 976) = ++v2;
        }
      }
    }
  }
  return v2;
}
