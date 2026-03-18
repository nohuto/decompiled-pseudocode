/*
 * XREFs of MiAttemptCoalesce @ 0x1400849D0
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiAdjustPteBins @ 0x1400843F0 (MiAdjustPteBins.c)
 *     MiReplenishBitMap @ 0x140084610 (MiReplenishBitMap.c)
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x1400821DC (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400F9880 (RtlInterlockedSetClearRunEx.c)
 */

char __fastcall MiAttemptCoalesce(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // r8
  _QWORD *v14; // r9
  bool v15; // zf
  _QWORD *i; // r8

  v3 = 32LL;
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    v3 = 512LL;
  v5 = 0LL;
  LOBYTE(v6) = v3 + a2;
  v7 = ~(v3 - 1);
  v8 = a2 & v7;
  v9 = (v7 & (v3 + a2 + a3 - 1)) - (a2 & v7);
  if ( v9 )
  {
    do
    {
      v10 = v5 + v8;
      v11 = v3 - 1 + v5 + v8;
      if ( v11 < *(_QWORD *)a1 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v13 = (_QWORD *)(v12 + 8 * (v10 >> 6));
        v14 = (_QWORD *)(v12 + 8 * (v11 >> 6));
        if ( v13 == v14 )
        {
          v15 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v3) << v10) & *v13) == 0;
LABEL_7:
          LOBYTE(v6) = v15;
          if ( v15 )
          {
            v6 = RtlInterlockedSetClearRunEx(a1, v5 + v8, v3);
            if ( v6 == 1 )
              LOBYTE(v6) = MiReturnSystemPtes(a1, v5 + v8, v3, 0);
          }
          goto LABEL_8;
        }
        LOBYTE(v6) = ((-1LL << v10) & *v13) == 0;
        if ( ((-1LL << v10) & *v13) == 0 )
        {
          for ( i = v13 + 1; i != v14; ++i )
          {
            LOBYTE(v6) = *i == 0LL;
            if ( *i )
              goto LABEL_8;
          }
          v15 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11) & *i) == 0;
          goto LABEL_7;
        }
      }
LABEL_8:
      v5 += v3;
    }
    while ( v5 < v9 );
  }
  return v6;
}
