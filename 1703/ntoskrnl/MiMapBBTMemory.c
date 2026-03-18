/*
 * XREFs of MiMapBBTMemory @ 0x14080308C
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MiObtainSystemVa @ 0x1401282A4 (MiObtainSystemVa.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x1401852C0 (KeZeroPages.c)
 */

void __fastcall MiMapBBTMemory(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 *v9; // r11
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r10
  __int64 v12; // rbp
  __int64 v13; // r10
  unsigned __int64 v14; // rbx

  if ( BBTPagesToReserve )
  {
    v2 = (BBTPagesToReserve + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2504LL);
    if ( !v3 )
    {
      v3 = MiObtainSystemVa(v2 >> 9, 9u);
      if ( !v3 )
      {
        BBTPagesToReserve = 0LL;
LABEL_21:
        BBTBuffer = v3;
        return;
      }
      v4 = (__int64 *)(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v5 = (__int64)&v4[v2 - 1];
      if ( !(unsigned int)MiMakeZeroedPageTables((__int64)v4, v5, 0, 9) )
      {
        MiReturnSystemVa(v3, ((v5 << 25) + 0x10000000) >> 16, 9, 0LL);
        v3 = 0LL;
        BBTPagesToReserve = 0LL;
        goto LABEL_21;
      }
      ValidPte = MiMakeValidPte(((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL, -1610612732);
      v7 = BBTPagesToReserve;
      v8 = (__int64 *)(a1 + 32);
      v9 = *(__int64 **)(a1 + 32);
      v10 = ValidPte;
      v2 = 0LL;
      while ( v9 != v8 )
      {
        if ( *((_DWORD *)v9 + 4) == 23 )
        {
          v11 = v9[4];
          v12 = v9[3];
          if ( v11 + v2 > v7 )
            v11 = v7 - v2;
          v2 += v11;
          do
          {
            *v4 = (v10 ^ (v12 << 12)) & 0xFFFFFFFFF000LL ^ v10;
            if ( MiPteInShadowRange((unsigned __int64)v4) )
              MiWritePteShadow();
            ++v4;
            ++v12;
          }
          while ( v13 != 1 );
          v7 = BBTPagesToReserve;
          if ( v2 == BBTPagesToReserve )
            goto LABEL_20;
        }
        v9 = (__int64 *)*v9;
      }
      if ( v2 < v7 )
        BBTPagesToReserve = v2;
    }
LABEL_20:
    v14 = v2 << 12;
    KeZeroPages((int *)v3, v14);
    *(_QWORD *)v3 = v14;
    goto LABEL_21;
  }
}
