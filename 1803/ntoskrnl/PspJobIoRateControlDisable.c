/*
 * XREFs of PspJobIoRateControlDisable @ 0x14052F770
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x140489B40 (PspSetJobIoRateControl.c)
 * Callees:
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x14008A150 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PspIoRateEntryDeactivate @ 0x140489E6C (PspIoRateEntryDeactivate.c)
 */

__int64 __fastcall PspJobIoRateControlDisable(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int64 Count; // rsi
  unsigned int v2; // edi
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v6; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  Count = a1[178].Count;
  v2 = 0;
  if ( Count )
    PspIoRateEntryDeactivate(a1 + 173);
  P[1] = P;
  P[0] = P;
  PspJobIoRateVolumeEntryRemoveAll((__int64)a1, (__int64)P);
  LOBYTE(v2) = Count != 0;
  while ( 1 )
  {
    v4 = (struct _EX_RUNDOWN_REF *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v6 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v6 + 8) = P;
    PspIoRateEntryDeactivate(v4);
    ExFreePoolWithTag(v4, 0);
    ++v2;
  }
  return v2;
}
