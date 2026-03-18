/*
 * XREFs of MiAddExpansionNonPagedPool @ 0x14017021C
 * Callers:
 *     MiFreeInitializationCode @ 0x1405F84EC (MiFreeInitializationCode.c)
 *     MxConsumeImageSlush @ 0x140897E90 (MxConsumeImageSlush.c)
 *     MiInitializeNonPagedPool @ 0x14089CAE8 (MiInitializeNonPagedPool.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiReturnPhysicalPoolPages @ 0x14017039C (MiReturnPhysicalPoolPages.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

void __fastcall MiAddExpansionNonPagedPool(__int64 a1, __int64 a2)
{
  __int64 DemandZeroPte; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int16 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // r15
  char v11; // cl
  char v12; // al
  char v13; // cl

  if ( a2 )
  {
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
    v4 = 48 * v3 - 0x58000000000LL;
    v6 = 0LL;
    v7 = v4 + 48 * v5;
    v8 = -1;
    do
    {
      v9 = *(_QWORD *)(v4 + 40);
      if ( v8 != v9 >> 58 )
      {
        if ( v6 )
        {
          MiReturnPhysicalPoolPages(v6, 0LL);
          v9 = *(_QWORD *)(v4 + 40);
          v6 = 0LL;
        }
        v8 = v9 >> 58;
      }
      v10 = MiLockPageInline(v4);
      v11 = *(_BYTE *)(v4 + 34) & 0xC7;
      *(_WORD *)(v4 + 32) = 0;
      *(_QWORD *)(v4 + 16) = DemandZeroPte;
      *(_QWORD *)(v4 + 40) &= ~0x200000000000000uLL;
      *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
      *(_QWORD *)(v4 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
      *(_BYTE *)(v4 + 34) = v11;
      v12 = *(_BYTE *)(v4 + 35) & 0xDF;
      *(_BYTE *)(v4 + 35) = v12;
      v13 = *(_BYTE *)(v4 + 34);
      *(_BYTE *)(v4 + 35) = v12 | 0x10;
      *(_QWORD *)(v4 + 40) &= 0xFFFFFFF000000000uLL;
      if ( (v13 & 0xC0) != 0x40 )
      {
        MiChangePageAttribute(v4, 1, 3u);
        v13 = *(_BYTE *)(v4 + 34);
      }
      *(_QWORD *)(v4 + 8) = -8LL;
      *(_BYTE *)(v4 + 34) = v13 & 0xF8 | 5;
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v10);
      *(_QWORD *)v4 = v6;
      v6 = v4;
      v4 += 48LL;
    }
    while ( v4 < v7 );
    MiReturnPhysicalPoolPages(v6, 0LL);
  }
}
