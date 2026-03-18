/*
 * XREFs of MiCaptureProtectionFromProto @ 0x14021C6BC
 * Callers:
 *     MiGetPageProtection @ 0x1400D2870 (MiGetPageProtection.c)
 * Callees:
 *     MiCaptureProtectionFromLockedProto @ 0x140003868 (MiCaptureProtectionFromLockedProto.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiMakeProtoAddressValid @ 0x1400788F8 (MiMakeProtoAddressValid.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiCaptureProtectionFromProto(ULONG_PTR a1)
{
  ULONG_PTR i; // rbx
  int v2; // eax
  __int64 ProtoAddressValid; // rdi
  unsigned int locked; // esi
  unsigned __int64 v5; // rbx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  for ( i = a1; ; a1 = i )
  {
    v7 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v7 & 1) != 0 )
    {
      ProtoAddressValid = MiMakeProtoAddressValid(i);
      locked = MiCaptureProtectionFromLockedProto(i);
      v5 = (unsigned __int8)MiLockPageInline(ProtoAddressValid);
      MiRemoveLockedPageChargeAndDecRef(ProtoAddressValid);
      _InterlockedAnd64((volatile signed __int64 *)(ProtoAddressValid + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v5);
      return locked;
    }
    LOBYTE(v2) = MiInvalidPteConforms(v7);
    if ( v2 )
      break;
  }
  return MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE((__int64)&v7);
}
