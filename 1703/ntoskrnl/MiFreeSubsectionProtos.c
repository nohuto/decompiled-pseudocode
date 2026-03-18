/*
 * XREFs of MiFreeSubsectionProtos @ 0x1406BE328
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1406BDE0C (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406BDF80 (MiDereferencePerSessionProtos.c)
 * Callees:
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetControlAreaPartition @ 0x140118AE8 (MiGetControlAreaPartition.c)
 *     MiDeletePerSessionProtos @ 0x140221048 (MiDeletePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeSubsectionProtos(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rcx
  __int64 ControlAreaPartition; // rbx
  unsigned __int64 v5; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    v3 = *(__int64 **)(v2 + 24);
    *a1 = *(_QWORD *)v2;
    ControlAreaPartition = MiGetControlAreaPartition(*v3);
    v5 = MiDeletePerSessionProtos((unsigned __int64 *)v2);
    MiReturnCommit(ControlAreaPartition, v5);
    ExFreePoolWithTag(*(PVOID *)(v2 + 32), 0);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
}
