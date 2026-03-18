/*
 * XREFs of MiMakeProtoAddressValid @ 0x1400B4F10
 * Callers:
 *     MiLockProtoPage @ 0x1400B4D9C (MiLockProtoPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiAddLockedPageCharge @ 0x140058004 (MiAddLockedPageCharge.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 */

unsigned __int64 __fastcall MiMakeProtoAddressValid(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  __int16 v4; // r9
  __int64 v5; // rbx
  unsigned __int8 v6; // bp
  __int64 v7; // rax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    do
    {
      v9 = MI_READ_PTE_LOCK_FREE(v2);
      if ( (v9 & 1) == 0 )
        goto LABEL_9;
      v3 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFLL;
    }
    while ( !(unsigned int)MiIsPfnInline(v3) );
    if ( (v4 & 0x200) == 0 )
      break;
LABEL_9:
    MmAccessFault(2uLL, a1, 0, 0LL);
  }
  v5 = 48 * v3 - 0x58000000000LL;
  v6 = MiLockPageInline(v5);
  v7 = MI_READ_PTE_LOCK_FREE(v2);
  v9 = v7;
  if ( (v7 & 1) == 0
    || (v7 & 0x200) != 0
    || v3 != (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFLL) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
    goto LABEL_9;
  }
  MiAddLockedPageCharge(48 * v3 - 0x58000000000LL, 1);
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v6);
  return 48 * v3 - 0x58000000000LL;
}
