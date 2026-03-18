/*
 * XREFs of MiAgeWorkingSetEPTCallback @ 0x140259260
 * Callers:
 *     <none>
 * Callees:
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAgeWorkingSetEPTCallback(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // rax
  unsigned int *v8; // r10
  char v9; // r11
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = MI_READ_PTE_LOCK_FREE(a3);
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
  MiAgePteWorker(a2, a3, a4, 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v8, v9);
  return 0LL;
}
