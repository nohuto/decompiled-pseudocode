/*
 * XREFs of MiConvertHiberPhasePte @ 0x140475650
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiIsPfn @ 0x140106380 (MiIsPfn.c)
 *     MiReadPteShadow @ 0x140122630 (MiReadPteShadow.c)
 */

__int64 __fastcall MiConvertHiberPhasePte(__int64 a1, __int64 *a2, int a3)
{
  __int64 PteShadow; // r9
  _QWORD *v5; // r10
  __int64 v6; // r11
  __int64 v7; // r11
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int64 *v11; // r10
  __int64 v12; // r11
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  PteShadow = *a2;
  v5 = a2;
  v6 = a1;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a2, *a2);
  v7 = *(_QWORD *)(v6 + 168);
  v17 = PteShadow;
  if ( v7 )
  {
    if ( (PteShadow & 1) != 0 && !a3 )
    {
      v9 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFLL;
      if ( MiIsPfn(v9)
        && v9 != qword_1403CC420
        && v9 != qword_1403CC408
        && !_bittest64(*(const signed __int64 **)(v12 + 8), (unsigned int)v9) )
      {
        v17 = v10 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
        *v11 = v17;
        if ( MiPteInShadowRange((unsigned __int64)v11) )
          goto LABEL_19;
      }
    }
  }
  else if ( (PteShadow & 1) == 0 && (PteShadow & 0x400) != 0 && (PteShadow & 4) != 0 )
  {
    v17 = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 1;
    *v5 = v17;
    if ( MiPteInShadowRange((unsigned __int64)v5) )
LABEL_19:
      MiWritePteShadow(v14, v16, v15);
  }
  return 0LL;
}
