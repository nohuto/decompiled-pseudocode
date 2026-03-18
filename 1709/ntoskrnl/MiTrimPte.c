/*
 * XREFs of MiTrimPte @ 0x140010D30
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimWorkingSetTail @ 0x140010B30 (MiTrimWorkingSetTail.c)
 *     MiWalkVaCheckCommon @ 0x140010EE4 (MiWalkVaCheckCommon.c)
 *     MiComputeNextWalkPte @ 0x140010F78 (MiComputeNextWalkPte.c)
 *     MiTrimmedEnough @ 0x140010FF0 (MiTrimmedEnough.c)
 *     MiTrimPteWorker @ 0x140011034 (MiTrimPteWorker.c)
 *     MiGetVaAge @ 0x1400E97AC (MiGetVaAge.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInsertVmAccessedEntry @ 0x14021D7A0 (MiInsertVmAccessedEntry.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiTrimPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 PteShadow; // rax
  __int64 v7; // rbx
  unsigned int v8; // r11d
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r13d
  int v14; // r11d
  __int64 v15; // rcx
  unsigned int VaAge; // r12d
  unsigned int v17; // r14d
  unsigned __int64 v18; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = (__int64)(a2 << 25) >> 16;
  PteShadow = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
  v7 = *(_QWORD *)(a1 + 144);
  v18 = PteShadow;
  if ( (unsigned int)MiTrimmedEnough(v4, v7) )
    return 3LL;
  **(_QWORD **)(v4 + 16) = MiComputeNextWalkPte(a2, v8);
  v13 = MI_GET_PFN_FROM_PTE(a2, v10, v11, v12);
  result = MiWalkVaCheckCommon(v4, a2, v13, v14, (__int64)&v18);
  if ( (_DWORD)result )
  {
    VaAge = (unsigned __int8)MiGetVaAge(v15, v5);
    v17 = *(_DWORD *)v7 & 0xF;
    if ( (unsigned int)MiTrimPteWorker(v4, a2, v5, v13, v7, (v18 >> 5) & 1, (__int64)&v18) )
      return 3LL;
    if ( (_DWORD)v18 && (unsigned int)MiInsertVmAccessedEntry(*(_QWORD *)(v7 + 240), v5) )
    {
      MiTrimWorkingSetTail(a1);
      return 1LL;
    }
    if ( VaAge >= v17 && (++*(_QWORD *)(v7 + 32), *(_QWORD *)(v7 + 32) >= *(_QWORD *)(v7 + 40)) )
      return 3LL;
    else
      return 0LL;
  }
  return result;
}
