/*
 * XREFs of RaidRemapScatterGatherList @ 0x1C006A008
 * Callers:
 *     StorPortGetScatterGatherListVrfy @ 0x1C006A2A0 (StorPortGetScatterGatherListVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RaidRemapScatterGatherList(_DWORD *VirtualAddress, __int64 a2)
{
  unsigned __int64 v4; // rax
  ULONG v5; // eax
  struct _MDL *Mdl; // rax
  struct _MDL *v7; // rdi
  PVOID v8; // rsi

  if ( *(_QWORD *)(a2 + 120) )
    return *(PVOID *)(a2 + 128);
  v4 = 24LL * (unsigned int)*VirtualAddress;
  if ( v4 > 0xFFFFFFFF )
    return 0LL;
  v5 = v4 + 12;
  if ( 24 * *VirtualAddress + 12 < (unsigned int)(24 * *VirtualAddress) )
    return 0LL;
  Mdl = IoAllocateMdl(VirtualAddress, v5, 0, 0, 0LL);
  v7 = Mdl;
  if ( !Mdl )
  {
LABEL_7:
    *(_QWORD *)(a2 + 120) = 0LL;
    return 0LL;
  }
  MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
  v8 = MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( !v8 )
  {
    MmUnlockPages(v7);
    IoFreeMdl(v7);
    goto LABEL_7;
  }
  MmProtectMdlSystemAddress(v7, 2u);
  *(_QWORD *)(a2 + 120) = v7;
  *(_QWORD *)(a2 + 128) = v8;
  return v8;
}
