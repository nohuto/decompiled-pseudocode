/*
 * XREFs of MiFreeSubsectionProtos @ 0x1406EB778
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1406EB248 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 * Callees:
 *     MiGetControlAreaPartition @ 0x1400148E4 (MiGetControlAreaPartition.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiDeletePerSessionProtos @ 0x14022DCD4 (MiDeletePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeSubsectionProtos(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rcx
  __int64 ControlAreaPartition; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    v3 = *(__int64 **)(v2 + 24);
    *a1 = *(_QWORD *)v2;
    ControlAreaPartition = MiGetControlAreaPartition(*v3);
    v8 = MiDeletePerSessionProtos((unsigned __int64 *)v2, v5, v6, v7);
    MiReturnCommit(ControlAreaPartition, v8);
    ExFreePoolWithTag(*(PVOID *)(v2 + 32), 0);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
}
