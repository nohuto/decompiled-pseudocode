/*
 * XREFs of MiUpdateOldPte @ 0x14021E890
 * Callers:
 *     <none>
 * Callees:
 *     MiWalkVaCheckCommon @ 0x140010EE4 (MiWalkVaCheckCommon.c)
 *     MiGetVaAge @ 0x1400E97AC (MiGetVaAge.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInsertVmAccessedEntry @ 0x14021D7A0 (MiInsertVmAccessedEntry.c)
 *     MiUpdateOldPteWorker @ 0x14021EA1C (MiUpdateOldPteWorker.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14021EA70 (MiUpdateOldWorkingSetPagesTail.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiUpdateOldPte(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // r15
  unsigned __int64 PteShadow; // rax
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int *v13; // rcx
  unsigned __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v6 = (__int64)(a2 << 25) >> 16;
  if ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  PteShadow = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v14 = PteShadow;
  v10 = MI_GET_PFN_FROM_PTE(&v14, a2, a3, a4);
  if ( !(unsigned int)MiWalkVaCheckCommon(v8, (__int64 *)a2, v10, 1, (__int64 *)&v14) || MiGetVaAge(v11, v6) != 6 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 144);
  if ( (*(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && ((*(_DWORD *)v12 & 1) == 0 || (*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0) )
  {
    if ( ((v14 >> 5) & 1) != 0 && (v13 = *(unsigned int **)(v12 + 208)) != 0LL && v6 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v13, v6) )
      {
        MiUpdateOldWorkingSetPagesTail(a1);
        return 1LL;
      }
    }
    else if ( ((v14 >> 5) & 1) == 0 )
    {
      MiUpdateOldPteWorker(v8, a2, v10, *(_QWORD *)(a1 + 144));
    }
  }
  return ++*(_QWORD *)(v12 + 16) >= *(_QWORD *)(v12 + 8) ? 3 : 0;
}
