/*
 * XREFs of MiInvalidateHiberPhasePages @ 0x14040A880
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiIsPfn @ 0x1400DC8A0 (MiIsPfn.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiInvalidateHiberPhasePages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 i; // r10
  unsigned __int64 *v7; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r11
  unsigned __int64 PteAddress; // rax
  unsigned __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a4 )
  {
    for ( i = a2; i <= a3; i = (unsigned __int64)(v7 + 1) )
    {
      v12[0] = MI_READ_PTE_LOCK_FREE(i);
      if ( (v12[0] & 1) != 0 )
      {
        v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v12);
        if ( MiIsPfn((v8 >> 12) & 0xFFFFFFFFFLL) )
        {
          if ( v10 != qword_14036CEE0 && v10 != qword_14036CEC8
            || (PteAddress = MiGetPteAddress((unsigned __int64)v7), (MI_READ_PTE_LOCK_FREE(PteAddress) & 0x800) != 0) )
          {
            if ( _bittest64(*(const signed __int64 **)(a1 + 8), (unsigned int)v10) )
              return;
            v12[0] = v9 & 0xFFFFFFFFFFFFFBFAuLL | 0x404;
            *v7 = v12[0];
            if ( MiPteInShadowRange((unsigned __int64)v7) )
              MiWritePteShadow();
          }
        }
      }
    }
  }
}
