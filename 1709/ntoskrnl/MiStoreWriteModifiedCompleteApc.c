/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x14022CE60
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteComplete @ 0x1400EF800 (MiWriteComplete.c)
 */

int __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  return MiWriteComplete(*a4, (int *)(*a4 + 16), 0LL, (__int64)a4);
}
