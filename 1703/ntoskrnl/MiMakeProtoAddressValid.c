/*
 * XREFs of MiMakeProtoAddressValid @ 0x1400788F8
 * Callers:
 *     MiLockProtoPage @ 0x140078790 (MiLockProtoPage.c)
 *     MiCaptureProtectionFromProto @ 0x14021C6BC (MiCaptureProtectionFromProto.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiAddLockedPageCharge @ 0x140109894 (MiAddLockedPageCharge.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMakeProtoAddressValid(ULONG_PTR a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int16 v7; // r9
  __int64 v8; // rbx
  unsigned __int8 v9; // bp
  __int64 v10; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    do
    {
      v12 = MI_READ_PTE_LOCK_FREE(v2);
      if ( (v12 & 1) == 0 )
        goto LABEL_9;
      v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v12) >> 12) & 0xFFFFFFFFFLL;
    }
    while ( !(unsigned int)MiIsPfnInline(v3, v4, v5, v6) );
    if ( (v7 & 0x200) == 0 )
      break;
LABEL_9:
    MmAccessFault(2uLL, a1);
  }
  v8 = 48 * v3 - 0x58000000000LL;
  v9 = MiLockPageInline(v8);
  v10 = MI_READ_PTE_LOCK_FREE(v2);
  v12 = v10;
  if ( (v10 & 1) == 0 || (v10 & 0x200) != 0 || v3 != MI_GET_PAGE_FRAME_FROM_PTE(&v12) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v9);
    goto LABEL_9;
  }
  MiAddLockedPageCharge(48 * v3 - 0x58000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v9);
  return 48 * v3 - 0x58000000000LL;
}
