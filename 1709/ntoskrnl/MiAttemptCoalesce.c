/*
 * XREFs of MiAttemptCoalesce @ 0x1400E6760
 * Callers:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReplenishBitMap @ 0x1400E6290 (MiReplenishBitMap.c)
 *     MiAdjustPteBins @ 0x1400F09DC (MiAdjustPteBins.c)
 * Callees:
 *     RtlInterlockedSetClearRunEx @ 0x1400E5400 (RtlInterlockedSetClearRunEx.c)
 *     MiReturnSystemPtes @ 0x1400F60D0 (MiReturnSystemPtes.c)
 */

char __fastcall MiAttemptCoalesce(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // r8
  _QWORD *v14; // r9
  bool v15; // zf
  _QWORD *v16; // r8

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
LABEL_10:
          LOBYTE(v6) = v15;
          if ( v15 )
          {
            LODWORD(v6) = RtlInterlockedSetClearRunEx(a1, v5 + v8, v3);
            if ( (_DWORD)v6 == 1 )
              LOBYTE(v6) = MiReturnSystemPtes(a1, v5 + v8, v3, 0LL);
          }
          goto LABEL_7;
        }
        v6 = -1LL << v10;
        if ( ((-1LL << v10) & *v13) == 0 )
        {
          v16 = v13 + 1;
          if ( v16 != v14 )
          {
            while ( !*v16 )
            {
              if ( ++v16 == v14 )
                goto LABEL_16;
            }
            goto LABEL_7;
          }
LABEL_16:
          v15 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11) & *v16) == 0;
          goto LABEL_10;
        }
      }
LABEL_7:
      v5 += v3;
    }
    while ( v5 < v9 );
  }
  return v6;
}
