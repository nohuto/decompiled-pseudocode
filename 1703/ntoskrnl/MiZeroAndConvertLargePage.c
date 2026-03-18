/*
 * XREFs of MiZeroAndConvertLargePage @ 0x140225624
 * Callers:
 *     MiGet64KPage @ 0x1402240A0 (MiGet64KPage.c)
 *     MiGetFastLargePage @ 0x1406BECF0 (MiGetFastLargePage.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiZeroPhysicalPage @ 0x1400A59A0 (MiZeroPhysicalPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiChangePageAttributeBatch @ 0x14010346C (MiChangePageAttributeBatch.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeZeroPages @ 0x1401852C0 (KeZeroPages.c)
 */

void __fastcall MiZeroAndConvertLargePage(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v4; // rsi
  bool v5; // zf
  __int64 v7; // rbp
  BOOL v8; // ebx
  unsigned __int64 v9; // r8
  unsigned __int8 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  ULONG_PTR v14; // r15
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rdx
  _QWORD *v17; // r10
  __int64 v18; // rbx
  __int64 v19; // r10
  __int64 v20; // r11
  unsigned __int64 i; // r14
  unsigned __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+42h] [rbp-26h]

  v22 = 0LL;
  v4 = a3;
  v5 = (*(_BYTE *)(a1 + 34) & 7) == 0;
  v23 = v23 & 0x3F | 0x40;
  if ( !v5 )
    MiSetOriginalPtePfnFromFreeList(&v22);
  v7 = 0LL;
  v8 = MiPfnZeroingNeeded();
  if ( (_DWORD)v4 == 1 )
  {
LABEL_10:
    if ( !v8 )
      return;
    goto LABEL_11;
  }
  v11 = a1;
  if ( a2 )
  {
    v12 = a2;
    do
    {
      *(_QWORD *)(v11 + 16) = v7;
      v7 = v11;
      v11 += 48LL;
      --v12;
    }
    while ( v12 );
  }
  if ( !v8 )
    goto LABEL_20;
  if ( *((_DWORD *)&unk_14036C220 + 4 * ((unsigned __int64)v10 >> 6) + v4) == (_DWORD)v4 )
  {
    MiChangePageAttributeBatch(v7, (unsigned int)v4, 0LL);
    v7 = 0LL;
    goto LABEL_10;
  }
LABEL_11:
  v13 = (a1 + 0x58000000000LL) / 48;
  v14 = MiReservePtes((__int64)&qword_14036D0A0, (unsigned int)a2, v9);
  if ( v14 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a1);
    ValidPte = MiMakeValidPte(v14, (a1 + 0x58000000000LL) / 48, ProtectionPfnCompatible | 0xA0000000);
    if ( a2 )
    {
      v17 = (_QWORD *)v14;
      v18 = v13 << 12;
      do
      {
        *v17 = (ValidPte ^ v18) & 0xFFFFFFFFF000LL ^ ValidPte;
        if ( MiPteInShadowRange((unsigned __int64)v17) )
          MiWritePteShadow();
        v18 += 4096LL;
        v17 = (_QWORD *)(v19 + 8);
      }
      while ( v20 != 1 );
    }
    KeZeroPages((int *)((__int64)(v14 << 25) >> 16), a2 << 12);
    MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v14, a2);
  }
  else
  {
    for ( i = 0LL; i < a2; ++i )
      MiZeroPhysicalPage(v13 + i, 2, v4);
  }
LABEL_20:
  if ( v7 )
    MiChangePageAttributeBatch(v7, (unsigned int)v4, 0LL);
}
