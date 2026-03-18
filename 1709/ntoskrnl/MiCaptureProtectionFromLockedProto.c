/*
 * XREFs of MiCaptureProtectionFromLockedProto @ 0x140008CD8
 * Callers:
 *     MiGetPageProtection @ 0x14003DEB0 (MiGetPageProtection.c)
 *     MiCaptureProtectionFromProto @ 0x1402292FC (MiCaptureProtectionFromProto.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiCaptureProtectionFromLockedProto(__int64 *a1)
{
  __int64 PteShadow; // rbx
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rsi
  unsigned __int8 v6; // r9
  __int64 v7; // rax
  __int64 result; // rax
  unsigned __int8 v9; // r9
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    PteShadow = *a1;
    if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a1, *a1);
    v10 = PteShadow;
    if ( (PteShadow & 1) == 0 )
      break;
    v3 = MI_GET_PAGE_FRAME_FROM_PTE(&v10);
    if ( (unsigned int)MiIsPfnInline(v3) )
    {
      v5 = 48 * v4 - 0x58000000000LL;
      v6 = MiLockPageInline(v5);
      v7 = *a1;
      if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
        v7 = MiReadPteShadow(a1, *a1);
      if ( PteShadow == v7 )
      {
        result = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v5 + 16);
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v9);
        return result;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v6);
    }
  }
  return MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v10);
}
