/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x1404D7A24
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x1404D6CD0 (AlpcViewDestroyProcedure.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x140593430 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  _KPROCESS *Process; // rsi
  _BYTE v5[48]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(void **)(a1 + 64);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 )
  {
    if ( *(_KPROCESS **)(a1 + 32) != Process )
    {
      KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0, (__int64)v5);
      v3 = *(void **)(a1 + 64);
    }
    MmUnsecureVirtualMemory(v3);
    if ( *(_KPROCESS **)(a1 + 32) != Process )
      KiUnstackDetachProcess((__int64)v5, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = a1;
}
