/*
 * XREFs of MiUnmapFrameBuffer @ 0x1400C3D08
 * Callers:
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiReplaceRotateWithDemandZero @ 0x1400C39A0 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnmapFrameBuffer(unsigned __int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned __int64 v7; // rax
  __int64 DemandZeroPte; // rax
  int v9; // r8d
  ULONG_PTR v10; // r9
  unsigned __int64 *v11; // r10
  __int64 v12; // r11
  unsigned __int64 v13; // rdx
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int16 v15; // r11
  int v16; // eax
  unsigned __int16 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // [rsp+58h] [rbp+20h] BYREF

  *a4 = -1LL;
  v22 = MI_READ_PTE_LOCK_FREE(a1);
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22);
  MiIsPfnInline((v7 >> 12) & 0xFFFFFFFFFLL);
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v13 = DemandZeroPte;
  if ( a2 == 2 )
  {
    v13 = DemandZeroPte | 0x300;
  }
  else if ( a2 )
  {
    if ( a2 == 3 )
    {
      if ( v9 )
        v13 = 0LL;
      else
        v13 = v10 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    }
  }
  else
  {
    v13 = DemandZeroPte | 0x100;
  }
  BugCheckParameter4 = 48 * v12 - 0x58000000000LL;
  if ( v9 )
  {
    v15 = *(_WORD *)(BugCheckParameter4 + 32);
    v16 = 1;
    v17 = ((*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL) + 1;
    if ( v15 < v17 )
      KeBugCheckEx(0x1Au, 0x41301uLL, (ULONG_PTR)v11, v10, BugCheckParameter4);
    if ( v15 <= v17 )
      v16 = a3;
    a3 = v16;
  }
  else
  {
    *a4 = v12;
  }
  if ( a2 != 3 )
    v13 = (v13 & 0xFF1F ^ (v13 & 0xFF1F | (unsigned __int16)((v10 & 0x800) != 0 ? 128 : 32))) & 0x3E0 ^ v13 & 0xFFFFFFFFFFFFFF1FuLL;
  *v11 = v13;
  if ( MiPteInShadowRange((unsigned __int64)v11) )
    MiWritePteShadow(v19, v18, v20);
  return a3;
}
