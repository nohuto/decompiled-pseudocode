/*
 * XREFs of MiTrimSegmentCache @ 0x140167B80
 * Callers:
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     MiScanLeafNonPagedPool @ 0x1400ACC90 (MiScanLeafNonPagedPool.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiAllocatePagedPoolPages @ 0x1400F8A60 (MiAllocatePagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MmResourcesAvailable @ 0x14012A820 (MmResourcesAvailable.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 */

void MiTrimSegmentCache()
{
  int v0; // ecx
  int v1; // eax

  v0 = dword_14036BE20;
  if ( !dword_14036BE20 )
  {
    v1 = 0;
    if ( (__int64 *)qword_140380818 != &qword_140380818 )
    {
      dword_14036BE20 = 31;
LABEL_10:
      KeSetEvent(&stru_140380770, 0, 0);
      return;
    }
    if ( (__int64 *)qword_140380828 != &qword_140380828 )
    {
      v0 = 31;
      v1 = 1;
      dword_14036BE20 = 31;
    }
    if ( (unsigned __int64)qword_14036BE18 < 0x4000 && !v1 )
    {
      if ( v0 )
        return;
      v1 = 1;
      dword_14036BE20 = 31;
    }
    if ( v1 == 1 )
      goto LABEL_10;
  }
}
