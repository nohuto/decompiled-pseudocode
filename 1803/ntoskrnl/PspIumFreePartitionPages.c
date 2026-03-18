/*
 * XREFs of PspIumFreePartitionPages @ 0x14028536C
 * Callers:
 *     PspIumFreePhysicalPages @ 0x1402854F4 (PspIumFreePhysicalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     MmFreeNonChargedSecurePages @ 0x1402551CC (MmFreeNonChargedSecurePages.c)
 */

void __fastcall PspIumFreePartitionPages(__int64 a1, int a2, ULONG_PTR *a3)
{
  __int64 v3; // r12
  __int64 v6; // rbx
  KIRQL v7; // r15
  __int64 v8; // rax
  unsigned int v9; // esi

  v3 = *(_QWORD *)(a1 + 160);
  LODWORD(v6) = a2;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v8 = *(unsigned int *)(a1 + 156);
  v9 = *(_DWORD *)(a1 + 152) - v8 - *(_DWORD *)(a1 + 4);
  if ( v9 > (unsigned int)v6 )
    v9 = v6;
  if ( v9 )
  {
    v6 = (unsigned int)v6 - v9;
    memmove((void *)(v3 + 8 * (v8 + 6)), &a3[v6], 8LL * v9);
    *(_DWORD *)(a1 + 156) += v9;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
  __writecr8(v7);
  if ( (_DWORD)v6 )
    MmFreeNonChargedSecurePages(*(ULONG_PTR ***)(a1 + 8), v6, a3);
}
