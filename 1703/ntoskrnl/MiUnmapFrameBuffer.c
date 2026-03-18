/*
 * XREFs of MiUnmapFrameBuffer @ 0x140122FFC
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122D2C (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUnmapFrameBuffer(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned __int64 v6; // rdi
  __int64 DemandZeroPte; // rax
  int v8; // r8d
  unsigned __int64 *v9; // r9
  ULONG_PTR v10; // r10
  unsigned __int64 *v11; // r11
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 v14; // r9
  int v15; // eax
  unsigned __int16 v16; // r8
  __int64 v17; // rcx
  __int64 v19; // [rsp+58h] [rbp+20h] BYREF

  *a4 = -1LL;
  v19 = MI_READ_PTE_LOCK_FREE(a1);
  v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v19);
  MiIsPfnInline(v6);
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v12 = DemandZeroPte;
  if ( a2 == 2 )
  {
    v12 = DemandZeroPte | 0x300;
  }
  else if ( a2 )
  {
    if ( a2 == 3 )
    {
      if ( v8 )
        v12 = 0LL;
      else
        v12 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    }
  }
  else
  {
    v12 = DemandZeroPte | 0x100;
  }
  v13 = 48 * v6 - 0x58000000000LL;
  if ( v8 )
  {
    v14 = *(_WORD *)(v13 + 32);
    v15 = 1;
    v16 = ((*(_QWORD *)(v13 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL) + 1;
    if ( v14 < v16 )
      KeBugCheckEx(0x1Au, 0x41301uLL, (ULONG_PTR)v11, v10, 48 * v6 - 0x58000000000LL);
    if ( v14 <= v16 )
      v15 = a3;
    a3 = v15;
  }
  else
  {
    *v9 = v6;
  }
  if ( a2 != 3 )
    v12 = (v12 & 0xFF1F ^ (v12 & 0xFF1F | (unsigned __int16)((v10 & 0x800) != 0 ? 128 : 32))) & 0x3E0 ^ v12 & 0xFFFFFFFFFFFFFF1FuLL;
  *v11 = v12;
  if ( (unsigned int)MiPteInShadowRange(v11) )
    MiWritePteShadow(v17);
  return a3;
}
