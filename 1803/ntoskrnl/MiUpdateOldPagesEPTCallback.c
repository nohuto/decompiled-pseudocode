/*
 * XREFs of MiUpdateOldPagesEPTCallback @ 0x14025A6C0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateOldPteWorker @ 0x14025A8AC (MiUpdateOldPteWorker.c)
 */

__int64 __fastcall MiUpdateOldPagesEPTCallback(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 *v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = MI_READ_PTE_LOCK_FREE(a3);
  v7 = *v6;
  v12 = v5;
  if ( (v7 & 2) != 0 )
  {
    if ( (v5 & 0x20) != 0 )
      return 0LL;
    goto LABEL_5;
  }
  if ( (v7 & 1) == 0 )
  {
LABEL_5:
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
    MiUpdateOldPteWorker(v10, v9, 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, a5);
  }
  return 0LL;
}
