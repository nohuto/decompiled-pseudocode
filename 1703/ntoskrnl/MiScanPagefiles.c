/*
 * XREFs of MiScanPagefiles @ 0x140083F50
 * Callers:
 *     MiWorkingSetManager @ 0x140083BF0 (MiWorkingSetManager.c)
 * Callees:
 *     MiFreePageFileHashPfns @ 0x140083F7C (MiFreePageFileHashPfns.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 */

void __fastcall MiScanPagefiles(__int64 a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // eax
  int v4; // edx
  __int64 i; // r8

  MiFreePageFileHashPfns();
  if ( *(_QWORD *)(a1 + 5760) <= 0x420uLL )
  {
    v2 = *(_DWORD *)(a1 + 5592);
    if ( v2 )
    {
      if ( *(_QWORD *)(a1 + 6256) && !*(_QWORD *)(a1 + 1016) )
      {
        v3 = *(_DWORD *)(a1 + 1024);
        if ( v3 >= 0x1E )
        {
          v4 = 0;
          for ( i = a1 + 5600; (*(_BYTE *)(*(_QWORD *)i + 204LL) & 0x50) != 0 || !*(_QWORD *)(*(_QWORD *)i + 24LL); i += 8LL )
          {
            if ( ++v4 >= v2 )
            {
              if ( *(_BYTE *)(a1 + 706) == 1 )
              {
                *(_BYTE *)(a1 + 706) = 0;
                *(_DWORD *)(a1 + 1024) = 0;
                *(_QWORD *)(a1 + 1008) = MiScanPagefileSpace;
                *(_QWORD *)(a1 + 1016) = a1;
                *(_QWORD *)(a1 + 992) = 0LL;
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 992), HyperCriticalWorkQueue);
              }
              return;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1024) = v3 + 1;
        }
      }
    }
  }
}
