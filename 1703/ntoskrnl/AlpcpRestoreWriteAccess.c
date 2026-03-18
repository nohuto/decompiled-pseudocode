/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x14047A4EC
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x14047A980 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x140511FC0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  __int64 v2; // rdi
  _KPROCESS *v3; // rcx
  _KPROCESS *Process; // rsi
  $5BC46E0569261879018906DEC3127961 v5; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_KPROCESS **)(a1 + 32);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 != Process )
    KiStackAttachProcess(v3, 0, (__int64)&v5);
  MmUnsecureVirtualMemory(*(HANDLE *)(a1 + 64));
  if ( *(_KPROCESS **)(a1 + 32) != Process )
    KiUnstackDetachProcess(&v5, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = a1;
}
