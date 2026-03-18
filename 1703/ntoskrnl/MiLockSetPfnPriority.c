/*
 * XREFs of MiLockSetPfnPriority @ 0x140075EE0
 * Callers:
 *     MiResolvePageFileFault @ 0x140073C40 (MiResolvePageFileFault.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiUpdateOldPte @ 0x140215910 (MiUpdateOldPte.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiLockSetPfnPriority(__int64 a1, char a2)
{
  __int64 result; // rax

  MiLockPageAtDpcInline(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_BYTE *)(a1 + 35) ^= (*(_BYTE *)(a1 + 35) ^ a2) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
