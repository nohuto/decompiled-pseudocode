/*
 * XREFs of ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C002580C
 * Callers:
 *     ?EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00255F0 (-EmitUpdateCommands@CSharedSectionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ReferenceDwmProcess @ 0x1C0027790 (ReferenceDwmProcess.c)
 *     GreLockDwmState @ 0x1C0027890 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00278D0 (GreUnlockDwmState.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
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
