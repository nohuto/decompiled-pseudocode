/*
 * XREFs of MiResetAccessBitPte @ 0x14021DF00
 * Callers:
 *     <none>
 * Callees:
 *     MiWalkVaCheckCommon @ 0x140010EE4 (MiWalkVaCheckCommon.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInsertVmAccessedEntry @ 0x14021D7A0 (MiInsertVmAccessedEntry.c)
 *     MiResetAccessBitPteWorker @ 0x14021E03C (MiResetAccessBitPteWorker.c)
 *     MiResetAccessBitsTail @ 0x14021E1E0 (MiResetAccessBitsTail.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiResetAccessBitPte(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // r14
  __int64 PteShadow; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  BOOL v11; // r9d
  unsigned int *v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 144);
  v6 = *(_QWORD *)(a1 + 8);
  PteShadow = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v14 = PteShadow;
  if ( (PteShadow & 0x20) != 0 )
  {
    v9 = MI_GET_PFN_FROM_PTE(&v14, a2, a3, a4);
    v10 = (__int64)(a2 << 25) >> 16;
    v11 = v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL;
    if ( (unsigned int)MiWalkVaCheckCommon(v6, (__int64 *)a2, v9, v11, &v14) )
    {
      v12 = *(unsigned int **)(v4 + 16);
      if ( v12 && v10 <= 0x7FFFFFFEFFFFLL )
      {
        if ( (unsigned int)MiInsertVmAccessedEntry(v12, (__int64)(a2 << 25) >> 16) )
        {
          MiResetAccessBitsTail(a1);
          return 1LL;
        }
      }
      else
      {
        MiResetAccessBitPteWorker(v6, a2, (__int64)(a2 << 25) >> 16, v9, v4, 0);
      }
    }
  }
  return 0LL;
}
