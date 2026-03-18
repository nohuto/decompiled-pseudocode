/*
 * XREFs of MiTrimWorkingSetEPTCallback @ 0x14021E730
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimmedEnough @ 0x140010FF0 (MiTrimmedEnough.c)
 *     MiTrimPteWorker @ 0x140011034 (MiTrimPteWorker.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiTrimWorkingSetEPTCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r11
  __int64 PteShadow; // r10
  int v14; // eax
  char v15; // r10
  __int64 v16; // r11

  v5 = a5;
  if ( MiTrimmedEnough(a2, a5) )
    return 1LL;
  PteShadow = *v11;
  if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  a5 = PteShadow;
  v14 = MI_GET_PFN_FROM_PTE(&a5, v8, v9, v10);
  return MiTrimPteWorker(a2, v16, a4, v14, v5, v15, 0LL);
}
