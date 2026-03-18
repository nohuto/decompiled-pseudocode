/*
 * XREFs of MiRevertHiberPhasePages @ 0x14040A970
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiRevertHiberPhasePages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // r10
  __int64 v5; // rax
  unsigned __int64 *v6; // r10
  unsigned __int64 v7; // r11

  v4 = a2;
  if ( !a4 && a2 <= a3 )
  {
    do
    {
      v5 = MI_READ_PTE_LOCK_FREE(v4);
      if ( (v5 & 1) == 0 && (v5 & 0x400) != 0 && (v5 & 4) != 0 )
      {
        *v6 = v5 & 0xFFFFFFFFFFFFFBFAuLL | 1;
        if ( MiPteInShadowRange((unsigned __int64)v6) )
          MiWritePteShadow();
      }
      v4 = (unsigned __int64)(v6 + 1);
    }
    while ( v4 <= v7 );
  }
}
