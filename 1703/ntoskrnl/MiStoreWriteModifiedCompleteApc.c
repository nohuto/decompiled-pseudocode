/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x1400140B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  return MiWriteComplete(*a4, *a4 + 16LL, 0LL);
}
