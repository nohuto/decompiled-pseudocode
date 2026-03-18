/*
 * XREFs of IcIsActiveBothPrimaryInterrupt @ 0x1C00A610C
 * Callers:
 *     IcCheckIrqConflict @ 0x1C00884E0 (IcCheckIrqConflict.c)
 * Callees:
 *     <none>
 */

bool __fastcall IcIsActiveBothPrimaryInterrupt(__int64 a1, unsigned int a2)
{
  return (*(_DWORD *)(a1 + 28) & 4) == 0 && (unsigned int)(*(_DWORD *)(200LL * a2 + a1 + 148) - 3) <= 1;
}
