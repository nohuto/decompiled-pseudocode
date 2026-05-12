/*
 * XREFs of RaidRemapScatterGatherList @ 0x1C0067008
 * Callers:
 *     StorPortGetScatterGatherListVrfy @ 0x1C0067230 (StorPortGetScatterGatherListVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RaidRemapScatterGatherList(unsigned int *VirtualAddress, __int64 a2)
{
  unsigned __int64 v4; // rdx
  int v5; // eax
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // rdi
  PVOID v8; // rsi

  if ( *(_QWORD *)(a2 + 120) )
    return *(PVOID *)(a2 + 128);
  v4 = 24LL * *VirtualAddress;
  if ( v4 > 0xFFFFFFFF )
  {
    LODWORD(v4) = -1;
    v5 = -1073741675;
  }
  else
  {
    v5 = 0;
  }
  if ( v5 < 0 || (int)v4 + 12 < (unsigned int)v4 )
    return 0LL;
  Mdl = IoAllocateMdl(VirtualAddress, (int)v4 + 12, 0, 0, 0LL);
  v7 = Mdl;
  if ( !Mdl )
  {
LABEL_10:
    *(_QWORD *)(a2 + 120) = 0LL;
    return 0LL;
  }
  MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
  v8 = MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( !v8 )
  {
    MmUnlockPages(v7);
    IoFreeMdl(v7);
    goto LABEL_10;
  }
  MmProtectMdlSystemAddress(v7, 2u);
  *(_QWORD *)(a2 + 120) = v7;
  *(_QWORD *)(a2 + 128) = v8;
  return v8;
}
