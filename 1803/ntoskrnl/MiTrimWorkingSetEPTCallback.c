/*
 * XREFs of MiTrimWorkingSetEPTCallback @ 0x14025A5A0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTrimPteWorker @ 0x14025A4D0 (MiTrimPteWorker.c)
 *     MiTrimmedEnough @ 0x14025A674 (MiTrimmedEnough.c)
 */

__int64 __fastcall MiTrimWorkingSetEPTCallback(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  unsigned __int64 v8; // r11
  unsigned __int64 v10; // rax
  char v11; // r10
  _BYTE *v12; // r11

  v5 = a5;
  if ( (unsigned int)MiTrimmedEnough(a2, a5) )
    return 1LL;
  a5 = MI_READ_PTE_LOCK_FREE(v8);
  v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&a5);
  return MiTrimPteWorker(a2, v12, a4, 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v5, v11, 0LL);
}
