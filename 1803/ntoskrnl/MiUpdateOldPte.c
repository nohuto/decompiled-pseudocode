/*
 * XREFs of MiUpdateOldPte @ 0x14025A740
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWalkVaCheckCommon @ 0x1400AD024 (MiWalkVaCheckCommon.c)
 *     MiGetVaAge @ 0x14012A280 (MiGetVaAge.c)
 *     MiInsertVmAccessedEntry @ 0x1402598E8 (MiInsertVmAccessedEntry.c)
 *     MiUpdateOldPteWorker @ 0x14025A8AC (MiUpdateOldPteWorker.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14025A900 (MiUpdateOldWorkingSetPagesTail.c)
 */

__int64 __fastcall MiUpdateOldPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rbx
  unsigned int *v11; // rcx
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 >= 1 )
    return 0LL;
  v6 = *(_QWORD *)(a1 + 24);
  v12 = MI_READ_PTE_LOCK_FREE(a2);
  v7 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( !(unsigned int)MiWalkVaCheckCommon(v6, a2, v7, 1, (__int64 *)&v12)
    || MiGetVaAge(v8, (__int64)(a2 << 25) >> 16) != 6 )
  {
    return 0LL;
  }
  v10 = *(_QWORD *)(a1 + 168);
  if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && ((*(_DWORD *)v10 & 1) == 0 || (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) == 0) )
  {
    if ( ((v12 >> 5) & 1) != 0 && (v11 = *(unsigned int **)(v10 + 208)) != 0LL && v9 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v11, v9) )
        return MiUpdateOldWorkingSetPagesTail(a1);
    }
    else if ( ((v12 >> 5) & 1) == 0 )
    {
      MiUpdateOldPteWorker(v6, a2, v7, *(_QWORD *)(a1 + 168));
    }
  }
  return ++*(_QWORD *)(v10 + 16) >= *(_QWORD *)(v10 + 8) ? 3 : 0;
}
