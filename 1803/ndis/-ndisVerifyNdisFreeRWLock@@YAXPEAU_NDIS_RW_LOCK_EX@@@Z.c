/*
 * XREFs of ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C007A790
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeRWLock @ 0x1C0021BE0 (NdisFreeRWLock.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

void __fastcall ndisVerifyNdisFreeRWLock(KSPIN_LOCK *BugCheckParameter3)
{
  unsigned int i; // ecx

  if ( !KeTestSpinLock(BugCheckParameter3 + 2) )
    ndisBugCheckEx(0x30uLL, 2uLL, (ULONG_PTR)BugCheckParameter3, 0LL);
  for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
  {
    if ( *(_QWORD *)((i << 12) + BugCheckParameter3[4]) )
      ndisBugCheckEx(0x30uLL, 2uLL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
  NdisFreeRWLock((PNDIS_RW_LOCK_EX)BugCheckParameter3);
}
