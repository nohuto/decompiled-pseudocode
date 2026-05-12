/*
 * XREFs of RaidBusEnumeratorAllocateReportLunsResources @ 0x1C00157C4
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C0014A40 (RaidBusEnumeratorIssueReportLuns.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005758 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     RaidLogAllocationFailure @ 0x1C0039648 (RaidLogAllocationFailure.c)
 *     RaidPrepareSrbForReuse @ 0x1C005F420 (RaidPrepareSrbForReuse.c)
 */

__int64 __fastcall RaidBusEnumeratorAllocateReportLunsResources(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  void *v5; // rcx
  SIZE_T v6; // r14
  void *v7; // rcx
  __int64 v8; // rbp
  PVOID PoolWithTag; // rdi
  struct _MDL *v10; // rcx
  PMDL Mdl; // rax
  _BYTE *Srb; // rax
  PVOID Pool; // rax
  PIRP Irp; // rax

  v3 = *a1;
  v5 = *(void **)(a3 + 16);
  v6 = a2;
  if ( v5 )
  {
    RaidPrepareSrbForReuse(v5);
  }
  else
  {
    Srb = RaidAllocateSrb(*(_QWORD *)(v3 + 8), 0, *(_BYTE *)(v3 + 402), 1);
    *(_QWORD *)(a3 + 16) = Srb;
    if ( !Srb )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)(a3 + 24) )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x12uLL, 0x4E536152u, *(_QWORD *)(v3 + 8));
    *(_QWORD *)(a3 + 24) = Pool;
    if ( !Pool )
      return 3221225495LL;
  }
  if ( *(_QWORD *)a3 )
  {
    IoReuseIrp(*(PIRP *)a3, -1073741823);
    goto LABEL_6;
  }
  Irp = IoAllocateIrp(1, 0);
  *(_QWORD *)a3 = Irp;
  if ( !Irp )
    return 3221225495LL;
LABEL_6:
  v7 = *(void **)(a3 + 32);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6C526152u);
  v8 = *(_QWORD *)(v3 + 8);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6C526152u);
  if ( !PoolWithTag )
    RaidLogAllocationFailure(v8, 512LL, v6, 1817338194LL);
  *(_QWORD *)(a3 + 32) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  v10 = *(struct _MDL **)(a3 + 8);
  *(_DWORD *)(a3 + 40) = v6;
  if ( v10 )
    IoFreeMdl(v10);
  Mdl = IoAllocateMdl(*(PVOID *)(a3 + 32), *(_DWORD *)(a3 + 40), 0, 0, 0LL);
  *(_QWORD *)(a3 + 8) = Mdl;
  return Mdl == 0LL ? 0xC0000017 : 0;
}
