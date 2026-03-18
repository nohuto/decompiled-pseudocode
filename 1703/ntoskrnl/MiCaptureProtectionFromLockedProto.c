/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x140003868
 * Callers:
 *     MiGetPageProtection @ 0x1400D2870 (MiGetPageProtection.c)
 *     MiCaptureProtectionFromProto @ 0x14021C6BC (MiCaptureProtectionFromProto.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCaptureProtectionFromLockedProto(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int8 v8; // r9
  __int64 result; // rax
  unsigned __int8 v10; // r9
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(a1);
    v2 = v11;
    if ( (v11 & 1) == 0 )
      break;
    v3 = MI_GET_PAGE_FRAME_FROM_PTE(&v11);
    if ( (unsigned int)MiIsPfnInline(v3, v4, v5, v3) )
    {
      v7 = 48 * v6 - 0x58000000000LL;
      MiLockPageInline(v7);
      if ( v2 == MI_READ_PTE_LOCK_FREE(a1) )
      {
        result = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v7 + 16);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v10);
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v8);
    }
  }
  return MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v11);
}
