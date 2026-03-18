/*
 * XREFs of MiShadowTopLevelPxes @ 0x14017C4E4
 * Callers:
 *     MiCopyTopLevelMappings @ 0x1400B7AC8 (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChange @ 0x140152B20 (MiReplicatePteChange.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

void __fastcall MiShadowTopLevelPxes(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r10d
  __int64 v4; // r11
  unsigned __int64 v5; // rdi
  __int64 v6; // r9
  __int64 *v7; // rcx
  __int64 PteShadow; // rax

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
          if ( _bittest64(qword_140388884, (unsigned int)(v6 - 256)) )
          {
            v7 = (__int64 *)(v5 + 8 * v6);
            PteShadow = *v7;
            if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow();
            *(_QWORD *)(v4 + 8 * v6) = PteShadow;
          }
          v6 = (unsigned int)(v6 + 1);
          --v3;
        }
        while ( v3 );
      }
    }
  }
}
