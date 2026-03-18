/*
 * XREFs of MI_GET_PFN_FROM_PTE @ 0x140264BA4
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MI_GET_PFN_FROM_PTE(unsigned __int64 a1)
{
  return 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
}
