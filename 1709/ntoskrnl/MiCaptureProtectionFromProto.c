/*
 * XREFs of MiCaptureProtectionFromProto @ 0x1402292FC
 * Callers:
 *     MiGetPageProtection @ 0x14003DEB0 (MiGetPageProtection.c)
 * Callees:
 *     MiCaptureProtectionFromLockedProto @ 0x140008CD8 (MiCaptureProtectionFromLockedProto.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiMakeProtoAddressValid @ 0x14010C53C (MiMakeProtoAddressValid.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiCaptureProtectionFromProto(__int64 *BugCheckParameter1)
{
  __int64 v1; // r9
  unsigned __int64 PteShadow; // rax
  int v4; // eax
  unsigned __int64 ProtoAddressValid; // rdi
  unsigned int locked; // esi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *BugCheckParameter1;
  while ( 1 )
  {
    PteShadow = v1;
    if ( (unsigned __int64)BugCheckParameter1 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)BugCheckParameter1 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      PteShadow = MiReadPteShadow();
    }
    v9 = PteShadow;
    if ( (PteShadow & 1) != 0 )
      break;
    LOBYTE(v4) = MiInvalidPteConforms(PteShadow);
    if ( v4 )
      return MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v9);
  }
  ProtoAddressValid = MiMakeProtoAddressValid((ULONG_PTR)BugCheckParameter1);
  locked = MiCaptureProtectionFromLockedProto(BugCheckParameter1);
  v8 = (unsigned __int8)MiLockPageInline(ProtoAddressValid);
  MiRemoveLockedPageChargeAndDecRef(ProtoAddressValid);
  _InterlockedAnd64((volatile signed __int64 *)(ProtoAddressValid + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v8);
  return locked;
}
