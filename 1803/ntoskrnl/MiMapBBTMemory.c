/*
 * XREFs of MiMapBBTMemory @ 0x14089D6E4
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x140049998 (MiObtainSystemVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x1401AE9B0 (KeZeroPages.c)
 */

void __fastcall MiMapBBTMemory(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 *v7; // r14
  unsigned __int64 ValidPte; // rdx
  __int64 *v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r11
  unsigned __int64 v15; // rbx

  if ( BBTPagesToReserve )
  {
    v2 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2504LL);
    if ( !v3 )
    {
      v3 = MiObtainSystemVa(v2 >> 9, 9);
      if ( !v3 )
      {
        BBTPagesToReserve = 0LL;
LABEL_21:
        BBTBuffer = v3;
        return;
      }
      v4 = (unsigned __int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v5 = (__int64)&v4[v2 - 1];
      if ( !(unsigned int)MiMakeZeroedPageTables((__int64)v4, v5, 0, 9) )
      {
        MiReturnSystemVa(v3, ((v5 << 25) + 0x10000000) >> 16, 9);
        v3 = 0LL;
        BBTPagesToReserve = 0LL;
        goto LABEL_21;
      }
      v7 = (__int64 *)(a1 + 32);
      ValidPte = MiMakeValidPte(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, 2684354564LL, v6);
      v9 = *(__int64 **)(a1 + 32);
      v2 = 0LL;
      while ( v9 != v7 )
      {
        if ( *((_DWORD *)v9 + 4) == 23 )
        {
          v10 = v9[4];
          v11 = v9[3];
          if ( v10 + v2 > BBTPagesToReserve )
            v10 = BBTPagesToReserve - v2;
          v2 += v10;
          do
          {
            *v4 = (ValidPte ^ (v11 << 12)) & 0xFFFFFFFFF000LL ^ ValidPte;
            if ( MiPteInShadowRange((unsigned __int64)v4) )
              MiWritePteShadow(v12, ValidPte, v13);
            ++v4;
            ++v11;
          }
          while ( v14 != 1 );
          if ( v2 == BBTPagesToReserve )
            goto LABEL_20;
        }
        v9 = (__int64 *)*v9;
      }
      if ( v2 < BBTPagesToReserve )
        BBTPagesToReserve = v2;
    }
LABEL_20:
    v15 = v2 << 12;
    KeZeroPages((__m128i *)v3, v15);
    *(_QWORD *)v3 = v15;
    goto LABEL_21;
  }
}
