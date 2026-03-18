/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x140143CE8
 * Callers:
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

__int64 __fastcall MiCaptureProtectionFromLockedProto(unsigned __int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rdi
  unsigned __int64 v6; // r9
  __int64 result; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v9 = MI_READ_PTE_LOCK_FREE(a1);
    v2 = v9;
    if ( (v9 & 1) == 0 )
      break;
    v3 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9);
    if ( MiIsPfnInline((v3 >> 12) & 0xFFFFFFFFFLL) )
    {
      v5 = 48 * v4 - 0x58000000000LL;
      MiLockPageInline(v5);
      if ( v2 == MI_READ_PTE_LOCK_FREE(a1) )
      {
        result = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v5 + 16);
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v8);
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v6);
    }
  }
  return MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v9);
}
