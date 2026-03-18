/*
 * XREFs of MiUnmapFrameBuffer @ 0x140009B04
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140009834 (MiReplaceRotateWithDemandZero.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiUnmapFrameBuffer(__int64 *a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 PteShadow; // r10
  __int64 v8; // rax
  int IsPfnInline; // ebp
  unsigned __int64 DemandZeroPte; // rax
  __int64 v11; // r9
  ULONG_PTR v12; // r10
  unsigned __int64 *v13; // r11
  __int16 v14; // dx
  ULONG_PTR BugCheckParameter4; // r8
  unsigned __int16 v16; // r9
  int v17; // ecx
  unsigned __int16 v18; // dx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1LL;
  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a1, *a1);
  v20 = PteShadow;
  v8 = MI_GET_PAGE_FRAME_FROM_PTE(&v20);
  IsPfnInline = MiIsPfnInline(v8);
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  HIBYTE(v14) = 0;
  if ( a2 == 2 )
  {
    DemandZeroPte |= 0x300uLL;
  }
  else if ( a2 )
  {
    if ( a2 == 3 )
    {
      if ( IsPfnInline )
        DemandZeroPte = 0LL;
      else
        DemandZeroPte = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    }
  }
  else
  {
    DemandZeroPte |= 0x100uLL;
  }
  BugCheckParameter4 = 48 * v11 - 0x58000000000LL;
  if ( IsPfnInline )
  {
    v16 = *(_WORD *)(BugCheckParameter4 + 32);
    v17 = 1;
    LOBYTE(v14) = (*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL;
    v18 = v14 + 1;
    if ( v16 < v18 )
      KeBugCheckEx(0x1Au, 0x41301uLL, (ULONG_PTR)v13, v12, BugCheckParameter4);
    if ( v16 <= v18 )
      v17 = a3;
    a3 = v17;
  }
  else
  {
    *a4 = v11;
  }
  if ( a2 != 3 )
    DemandZeroPte = (DemandZeroPte & 0xFF1F ^ (DemandZeroPte & 0xFF1F | (unsigned __int16)((v12 & 0x800) != 0 ? 128 : 32))) & 0x3E0 ^ DemandZeroPte & 0xFFFFFFFFFFFFFF1FuLL;
  *v13 = DemandZeroPte;
  if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v13, DemandZeroPte);
  return a3;
}
