/*
 * XREFs of SeGetTokenControlInformation @ 0x1406F69EC
 * Callers:
 *     SepCreateClientSecurityEx @ 0x14050AF80 (SepCreateClientSecurityEx.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x14059A7BC (AlpcpQueryTokenModifiedIdMessage.c)
 *     SepUpdateSiloInClientSecurity @ 0x1406F644C (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

void __fastcall SeGetTokenControlInformation(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax

  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 56);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
}
