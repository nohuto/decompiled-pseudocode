/*
 * XREFs of MiMapBBTMemory @ 0x14085826C
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1400F61D8 (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x1400F6A90 (MiReturnSystemVa.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x140184D60 (KeZeroPages.c)
 */

void __fastcall MiMapBBTMemory(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int64 *v7; // rsi
  __int64 v8; // rbp
  __int64 **v9; // r14
  unsigned __int64 ValidPte; // rdx
  __int64 *i; // r10
  unsigned __int64 v12; // r11
  __int64 v13; // rbp
  unsigned __int64 v14; // rbx

  v3 = 0LL;
  if ( BBTPagesToReserve )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2504LL);
    if ( v5 )
    {
      v3 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
LABEL_22:
      v14 = v3 << 12;
      KeZeroPages((int *)v5, v14);
      *(_QWORD *)v5 = v14;
      goto LABEL_23;
    }
    v6 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v5 = MiObtainSystemVa(v6 >> 9, 9LL, a3);
    if ( v5 )
    {
      v7 = (unsigned __int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v8 = (__int64)&v7[v6 - 1];
      if ( (unsigned int)MiMakeZeroedPageTables((__int64)v7, v8, 0, 9) )
      {
        v9 = (__int64 **)(a1 + 32);
        ValidPte = MiMakeValidPte(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, -1610612732);
        for ( i = *v9; i != (__int64 *)v9; i = (__int64 *)*i )
        {
          if ( *((_DWORD *)i + 4) == 23 )
          {
            v12 = i[4];
            v13 = i[3];
            if ( v12 + v3 > BBTPagesToReserve )
              v12 = BBTPagesToReserve - v3;
            v3 += v12;
            do
            {
              ValidPte ^= (ValidPte ^ (v13 << 12)) & 0xFFFFFFFFF000LL;
              *v7 = ValidPte;
              if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
                MiWritePteShadow();
              ++v7;
              ++v13;
              --v12;
            }
            while ( v12 );
            if ( v3 == BBTPagesToReserve )
              goto LABEL_22;
          }
        }
        if ( v3 < BBTPagesToReserve )
          BBTPagesToReserve = v3;
        goto LABEL_22;
      }
      MiReturnSystemVa(v5, ((v8 << 25) + 0x10000000) >> 16, 9, 0LL);
      v5 = 0LL;
    }
    BBTPagesToReserve = 0LL;
LABEL_23:
    BBTBuffer = v5;
  }
}
