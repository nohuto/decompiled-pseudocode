/*
 * XREFs of MiResetAccessBitsEPTCallback @ 0x14025A010
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResetAccessBitPteWorker @ 0x140259F10 (MiResetAccessBitPteWorker.c)
 */

__int64 __fastcall MiResetAccessBitsEPTCallback(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *v7; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  char v10; // r11
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (*v7 & 2) != 0 || (*v7 & 1) != 0 )
  {
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
    MiResetAccessBitPteWorker(a2, a3, a4, 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v9, v10);
  }
  return 0LL;
}
