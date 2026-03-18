/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x140540BA0
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x140540240 (AlpcViewDestroyProcedure.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1405401E0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  __int64 v2; // rdi
  _KPROCESS *Process; // rsi
  _KPROCESS *v4; // rcx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v5; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v4 = *(_KPROCESS **)(a1 + 32);
    if ( v4 != Process )
      KiStackAttachProcess(v4, 0, (__int64)&v5);
    MmUnsecureVirtualMemory(*(HANDLE *)(a1 + 64));
    if ( *(_KPROCESS **)(a1 + 32) != Process )
      KiUnstackDetachProcess(&v5, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = a1;
}
