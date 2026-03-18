/*
 * XREFs of PfSnCleanupPrefetchSectionInfo @ 0x1404A23B8
 * Callers:
 *     PfSnSectionInfoCleanupWorkItem @ 0x1404A1840 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x1404A1900 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchHeader @ 0x1404A22AC (PfSnCleanupPrefetchHeader.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PfpOpenHandleClose @ 0x1404A25EC (PfpOpenHandleClose.c)
 */

void __fastcall PfSnCleanupPrefetchSectionInfo(void *a1, __int64 a2, char a3)
{
  int v5; // eax
  void *v6; // rcx
  void *v7; // rcx

  if ( a3 )
  {
    v5 = *((_DWORD *)a1 + 12);
    if ( (v5 & 1) != 0 )
    {
      ObfDereferenceObject(*((PVOID *)a1 + 4));
      *((_QWORD *)a1 + 4) = 0LL;
      *((_DWORD *)a1 + 12) &= ~1u;
      v5 = *((_DWORD *)a1 + 12);
    }
    if ( (v5 & 2) != 0 )
    {
      ObfDereferenceObject(*((PVOID *)a1 + 5));
      *((_QWORD *)a1 + 5) = 0LL;
      *((_DWORD *)a1 + 12) &= ~2u;
      v5 = *((_DWORD *)a1 + 12);
    }
    if ( (v5 & 4) != 0 )
    {
      PfpOpenHandleClose(a1, *(_QWORD *)(a2 + 8));
      memset(a1, 0, 0x20uLL);
      *((_QWORD *)a1 + 3) = 0x200000000LL;
      *((_DWORD *)a1 + 12) &= ~4u;
    }
  }
  else
  {
    v6 = (void *)*((_QWORD *)a1 + 4);
    if ( v6 )
      ObfDereferenceObject(v6);
    v7 = (void *)*((_QWORD *)a1 + 5);
    if ( v7 )
      ObfDereferenceObject(v7);
    if ( (*((_QWORD *)a1 + 3) & 0x400000000LL) != 0 )
      PfpOpenHandleClose(a1, *(_QWORD *)(a2 + 8));
  }
}
