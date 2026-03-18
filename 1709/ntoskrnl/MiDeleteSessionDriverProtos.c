/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x1405ED4B4
 * Callers:
 *     MiMapSystemImage @ 0x1404F5F10 (MiMapSystemImage.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x1406ED2F8 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetSubsectionDriverProtos @ 0x1400B6F28 (MiGetSubsectionDriverProtos.c)
 *     MiDeletePerSessionProtos @ 0x14022DCD4 (MiDeletePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSessionDriverProtos(__int64 a1)
{
  __int64 ControlAreaPartition; // rsi
  __int64 v2; // rcx
  unsigned __int64 i; // rbx
  unsigned __int64 *SubsectionDriverProtos; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  PVOID *v8; // rdi
  unsigned __int64 v9; // rax

  ControlAreaPartition = MiGetControlAreaPartition(a1);
  for ( i = v2 + 128; i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_BYTE *)(i + 34) & 2) == 0 )
    {
      SubsectionDriverProtos = (unsigned __int64 *)MiGetSubsectionDriverProtos((_QWORD *)i);
      v8 = (PVOID *)SubsectionDriverProtos;
      if ( SubsectionDriverProtos )
      {
        *(_QWORD *)(i + 24) = 0LL;
        SubsectionDriverProtos[3] = i;
        v9 = MiDeletePerSessionProtos(SubsectionDriverProtos, v5, v6, v7);
        MiReturnCommit(ControlAreaPartition, v9);
        ExFreePoolWithTag(v8[4], 0);
        ExFreePoolWithTag(v8, 0);
      }
    }
  }
}
