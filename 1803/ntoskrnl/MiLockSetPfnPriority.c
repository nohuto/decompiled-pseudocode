/*
 * XREFs of MiLockSetPfnPriority @ 0x1400BB5D8
 * Callers:
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiUpdateOldPteWorker @ 0x14025A8AC (MiUpdateOldPteWorker.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
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
