/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x140585040
 * Callers:
 *     MiMapSystemImage @ 0x1404B12D8 (MiMapSystemImage.c)
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x1406BF840 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140097F34 (MiGetSubsectionDriverProtos.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     MiDeletePerSessionProtos @ 0x140221048 (MiDeletePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSessionDriverProtos(__int64 a1)
{
  __int64 ControlAreaPartition; // rsi
  __int64 v2; // rcx
  unsigned __int64 i; // rbx
  unsigned __int64 *SubsectionDriverProtos; // rax
  PVOID *v5; // rdi
  unsigned __int64 v6; // rax

  ControlAreaPartition = MiGetControlAreaPartition(a1);
  for ( i = v2 + 128; i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_BYTE *)(i + 34) & 2) == 0 )
    {
      SubsectionDriverProtos = (unsigned __int64 *)MiGetSubsectionDriverProtos((_QWORD *)i);
      v5 = (PVOID *)SubsectionDriverProtos;
      if ( SubsectionDriverProtos )
      {
        *(_QWORD *)(i + 24) = 0LL;
        SubsectionDriverProtos[3] = i;
        v6 = MiDeletePerSessionProtos(SubsectionDriverProtos);
        MiReturnCommit(ControlAreaPartition, v6);
        ExFreePoolWithTag(v5[4], 0);
        ExFreePoolWithTag(v5, 0);
      }
    }
  }
}
