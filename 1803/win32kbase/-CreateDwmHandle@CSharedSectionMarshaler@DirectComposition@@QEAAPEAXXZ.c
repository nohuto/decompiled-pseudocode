/*
 * XREFs of ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C0011B2C
 * Callers:
 *     ?EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0011930 (-EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     GreLockDwmState @ 0x1C004D1D0 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C004D210 (GreUnlockDwmState.c)
 *     ReferenceDwmProcess @ 0x1C0066A40 (ReferenceDwmProcess.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void *__fastcall DirectComposition::CSharedSectionMarshaler::CreateDwmHandle(PVOID *this)
{
  struct _KPROCESS *v2; // rax
  struct _KPROCESS *v3; // rbx
  void *Handle; // [rsp+40h] [rbp-48h] BYREF
  _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  GreLockDwmState();
  v2 = (struct _KPROCESS *)ReferenceDwmProcess();
  v3 = v2;
  if ( v2 )
  {
    KeStackAttachProcess(v2, &ApcState);
    ObOpenObjectByPointer(this[5], 0xC0000000, 0LL, 6u, MmSectionObjectType, 1, &Handle);
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(v3);
  }
  GreUnlockDwmState();
  return Handle;
}
