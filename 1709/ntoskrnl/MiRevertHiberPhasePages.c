/*
 * XREFs of MiRevertHiberPhasePages @ 0x14042F570
 * Callers:
 *     <none>
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

void __fastcall MiRevertHiberPhasePages(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // r11
  __int64 *i; // r10
  __int64 PteShadow; // rax

  if ( !a4 )
  {
    v4 = a3;
    for ( i = a2; (unsigned __int64)i <= v4; ++i )
    {
      PteShadow = *i;
      if ( (unsigned __int64)i >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      if ( (PteShadow & 1) == 0 && (PteShadow & 0x400) != 0 && (PteShadow & 4) != 0 )
      {
        *i = PteShadow & 0xFFFFFFFFFFFFFBFAuLL | 1;
        if ( (unsigned __int64)i >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)i <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
      }
    }
  }
}
