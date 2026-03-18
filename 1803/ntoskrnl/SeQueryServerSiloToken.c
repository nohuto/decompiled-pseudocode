/*
 * XREFs of SeQueryServerSiloToken @ 0x14057B7C0
 * Callers:
 *     SepCreateClientSecurityEx @ 0x1404C9490 (SepCreateClientSecurityEx.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     SepUpdateSiloInClientSecurity @ 0x140792184 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     PsGetSiloBySessionId @ 0x1405019A0 (PsGetSiloBySessionId.c)
 */

__int64 __fastcall SeQueryServerSiloToken(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v5 = *(_DWORD *)(a1 + 120);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  return PsGetSiloBySessionId(v5, a2);
}
