/*
 * XREFs of MiMakeProtoAddressValid @ 0x14010C53C
 * Callers:
 *     MiLockProtoPage @ 0x14010C430 (MiLockProtoPage.c)
 *     MiCaptureProtectionFromProto @ 0x1402292FC (MiCaptureProtectionFromProto.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x140027170 (MiAddLockedPageCharge.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

unsigned __int64 __fastcall MiMakeProtoAddressValid(ULONG_PTR BugCheckParameter1)
{
  __int64 *v2; // rbx
  __int64 PteShadow; // r9
  unsigned __int64 v4; // rsi
  __int16 v5; // r9
  __int64 v6; // rdi
  unsigned __int8 v7; // bp
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  do
  {
    while ( 1 )
    {
      PteShadow = *v2;
      if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v2, *v2);
      v11 = PteShadow;
      if ( (PteShadow & 1) != 0 )
        break;
LABEL_15:
      MmAccessFault(2uLL, BugCheckParameter1, 0LL, 0LL);
    }
    v4 = MI_GET_PAGE_FRAME_FROM_PTE(&v11);
  }
  while ( !MiIsPfnInline(v4) );
  if ( (v5 & 0x200) != 0 )
    goto LABEL_15;
  v6 = 48 * v4 - 0x58000000000LL;
  v7 = MiLockPageInline(v6);
  v8 = *v2;
  if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
    v8 = MiReadPteShadow(v2, *v2);
  v11 = v8;
  if ( (v8 & 1) == 0 || (v8 & 0x200) != 0 || v4 != MI_GET_PAGE_FRAME_FROM_PTE(&v11) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v7);
    goto LABEL_15;
  }
  MiAddLockedPageCharge(48 * v4 - 0x58000000000LL, 1LL, v9);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v7);
  return 48 * v4 - 0x58000000000LL;
}
