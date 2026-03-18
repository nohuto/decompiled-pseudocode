/*
 * XREFs of MiShadowTopLevelPxes @ 0x14017CC48
 * Callers:
 *     MiCopyTopLevelMappings @ 0x1400639EC (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChange @ 0x140164BE0 (MiReplicatePteChange.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiShadowTopLevelPxes(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r11d
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // r10
  __int64 v7; // rax

  v3 = a3;
  if ( (MiFlags & 0x1800000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 1544);
    if ( v4 )
    {
      if ( PsInitialSystemProcess )
      {
        v5 = PsInitialSystemProcess[2].Affinity.Bitmap[0];
        v6 = (a2 >> 3) & 0x1FF;
        do
        {
          if ( _bittest64(qword_14036C4FC, (unsigned int)(v6 - 256)) )
          {
            v7 = MI_READ_PTE_LOCK_FREE(v5 + 8 * v6);
            *(_QWORD *)(v4 + 8 * v6) = v7;
          }
          v6 = (unsigned int)(v6 + 1);
          --v3;
        }
        while ( v3 );
      }
    }
  }
}
