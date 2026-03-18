/*
 * XREFs of MiResetAccessBitsEPTCallback @ 0x14021E130
 * Callers:
 *     <none>
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiResetAccessBitPteWorker @ 0x14021E03C (MiResetAccessBitPteWorker.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiResetAccessBitsEPTCallback(__int64 *a1, __int64 a2, __int64 *a3, unsigned __int64 a4, __int64 a5)
{
  __int64 PteShadow; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // r10
  unsigned __int64 v13; // r11
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  PteShadow = *a3;
  if ( (unsigned __int64)a3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a3 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v15 = PteShadow;
  v9 = *a1;
  v10 = a5;
  if ( (v9 & 2) != 0 || (v9 & 1) != 0 )
  {
    v11 = MI_GET_PFN_FROM_PTE(&v15, a2, a3, a4);
    MiResetAccessBitPteWorker(a2, v13, a4, v11, v10, v12);
  }
  return 0LL;
}
