/*
 * XREFs of HvlUpdateMicrocode @ 0x140717DD0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400948D0 (MmBuildMdlForNonPagedPool.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     HvcallInitiateHypercall @ 0x14015D800 (HvcallInitiateHypercall.c)
 *     HvlpDepositPages @ 0x140227578 (HvlpDepositPages.c)
 *     HvlpHvToNtStatus @ 0x14022DF28 (HvlpHvToNtStatus.c)
 *     HvcallInitInputControl @ 0x1402C0D94 (HvcallInitInputControl.c)
 *     HvlpLogMicrocodeUpdateStatus @ 0x140717B14 (HvlpLogMicrocodeUpdateStatus.c)
 */

__int64 __fastcall HvlUpdateMicrocode(void *a1, ULONG a2)
{
  struct _MDL *Mdl; // rax
  struct _MDL *v3; // rdi
  int v5; // ebx
  unsigned __int16 v6; // ax
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v3 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmBuildMdlForNonPagedPool(Mdl);
  HvcallInitInputControl(7, &v7);
  LODWORD(v7) = v7 | 0x10000;
  while ( 1 )
  {
    v6 = HvcallInitiateHypercall();
    if ( v6 != 11 )
      break;
    v5 = HvlpDepositPages(0);
    if ( v5 < 0 )
      goto LABEL_7;
  }
  v5 = HvlpHvToNtStatus(v6);
LABEL_7:
  IoFreeMdl(v3);
  if ( v5 >= 0 )
    HvlpLogMicrocodeUpdateStatus();
  return (unsigned int)v5;
}
