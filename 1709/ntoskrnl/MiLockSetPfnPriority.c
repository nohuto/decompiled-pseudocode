/*
 * XREFs of MiLockSetPfnPriority @ 0x14011AF94
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiAgePte @ 0x14009DA30 (MiAgePte.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MiUpdateOldPteWorker @ 0x14021EA1C (MiUpdateOldPteWorker.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
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
