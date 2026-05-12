/*
 * XREFs of RaidBusEnumeratorAllocateUnitResources @ 0x1C0015734
 * Callers:
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0014F80 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0015634 (RaidBusEnumeratorGetUnit.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C0005EF4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RaidPrepareSrbForReuse @ 0x1C0062658 (RaidPrepareSrbForReuse.c)
 */

__int64 __fastcall RaidBusEnumeratorAllocateUnitResources(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  void *v5; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  void *v10; // rcx
  SIZE_T v12; // rdx
  PVOID v13; // rax
  _BYTE *Srb; // rax
  PVOID Pool; // rax
  PIRP Irp; // rax
  PMDL Mdl; // rax
  void *MappedSystemVa; // rcx
  struct _MDL *v19; // rdx

  v3 = *a1;
  v5 = *(void **)(a2 + 16);
  if ( v5 )
  {
    RaidPrepareSrbForReuse(v5);
  }
  else
  {
    Srb = RaidAllocateSrb(*(_QWORD *)(v3 + 8), 0, *(_BYTE *)(v3 + 402), 1);
    *(_QWORD *)(a2 + 16) = Srb;
    if ( !Srb )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x12uLL, 0x4E536152u, *(_QWORD *)(v3 + 8));
    *(_QWORD *)(a2 + 24) = Pool;
    if ( !Pool )
      return 3221225495LL;
  }
  if ( *(_QWORD *)a2 )
  {
    IoReuseIrp(*(PIRP *)a2, -1073741823);
  }
  else
  {
    Irp = IoAllocateIrp(1, 0);
    *(_QWORD *)a2 = Irp;
    if ( !Irp )
      return 3221225495LL;
  }
  v7 = *(void **)(a2 + 32);
  if ( v7 )
  {
    if ( *(_DWORD *)(a2 + 40) >= a3 )
      goto LABEL_8;
    ExFreePoolWithTag(v7, 0x32316152u);
  }
  v12 = 512LL;
  if ( a3 >= 0x200 )
    v12 = a3;
  *(_DWORD *)(a2 + 40) = v12;
  v13 = RaidAllocatePool(NonPagedPoolNx, v12, 0x32316152u, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a2 + 32) = v13;
  if ( !v13 )
  {
    *(_DWORD *)(a2 + 40) = 0;
    return 3221225495LL;
  }
LABEL_8:
  v8 = *(_QWORD *)(a2 + 8);
  if ( !v8 )
  {
    Mdl = IoAllocateMdl(*(PVOID *)(a2 + 32), *(_DWORD *)(a2 + 40), 0, 0, 0LL);
    *(_QWORD *)(a2 + 8) = Mdl;
    if ( Mdl )
    {
      if ( (Mdl->MdlFlags & 0x20) == 0 )
        goto LABEL_10;
      MappedSystemVa = Mdl->MappedSystemVa;
      v19 = Mdl;
LABEL_31:
      MmUnmapLockedPages(MappedSystemVa, v19);
      goto LABEL_10;
    }
    return 3221225495LL;
  }
  if ( (*(_BYTE *)(v8 + 10) & 0x20) != 0 )
  {
    v19 = *(struct _MDL **)(a2 + 8);
    MappedSystemVa = *(void **)(v8 + 24);
    goto LABEL_31;
  }
LABEL_10:
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 )
  {
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_WORD *)(v9 + 16) = 0;
  }
  v10 = *(void **)(a2 + 32);
  if ( v10 )
    memset(v10, 0, *(unsigned int *)(a2 + 40));
  return 0LL;
}
