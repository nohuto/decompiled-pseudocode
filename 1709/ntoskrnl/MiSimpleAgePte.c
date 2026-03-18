/*
 * XREFs of MiSimpleAgePte @ 0x14021E290
 * Callers:
 *     <none>
 * Callees:
 *     MiWalkVaCheckCommon @ 0x140010EE4 (MiWalkVaCheckCommon.c)
 *     MiComputeNextWalkPte @ 0x140010F78 (MiComputeNextWalkPte.c)
 *     MiGetVaAge @ 0x1400E97AC (MiGetVaAge.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiAgePteWorker @ 0x14021CBF0 (MiAgePteWorker.c)
 *     MiInsertVmAccessedEntry @ 0x14021D7A0 (MiInsertVmAccessedEntry.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14021E4C0 (MiSimpleAgeWorkingSetTail.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiSimpleAgePte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 PteShadow; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  BOOL v8; // r11d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  int v13; // r11d
  __int64 v14; // rcx
  __int64 v15; // rsi
  BOOL v16; // r15d
  unsigned int *v17; // rcx
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  PteShadow = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v19 = PteShadow;
  v7 = (__int64)(a2 << 25) >> 16;
  v8 = v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL;
  v6 = *(_QWORD *)(v2 + 16);
  *(_QWORD *)(v6 + 8) = MiComputeNextWalkPte(a2, v8);
  v12 = MI_GET_PFN_FROM_PTE(&v19, v9, v10, v11);
  if ( !(unsigned int)MiWalkVaCheckCommon(v2, (__int64 *)a2, v12, v13, &v19) )
    return 0LL;
  v15 = *(_QWORD *)(a1 + 144);
  v16 = MiGetVaAge(v14, (__int64)(a2 << 25) >> 16) == 0;
  if ( (v19 & 0x20) != 0 )
  {
    v17 = *(unsigned int **)(v15 + 256);
    if ( v17 && v7 <= 0x7FFFFFFEFFFFLL )
    {
      if ( (unsigned int)MiInsertVmAccessedEntry(v17, (__int64)(a2 << 25) >> 16) )
      {
        MiSimpleAgeWorkingSetTail(a1);
        return 1LL;
      }
    }
    else
    {
      MiAgePteWorker(v2, a2, (__int64)(a2 << 25) >> 16, v12, (int *)v15, 3);
    }
  }
  if ( v16 && (++*(_QWORD *)(v15 + 48), *(_QWORD *)(v15 + 48) >= *(_QWORD *)(v15 + 56)) )
    return 3LL;
  else
    return 0LL;
}
