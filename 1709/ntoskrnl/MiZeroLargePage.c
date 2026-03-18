/*
 * XREFs of MiZeroLargePage @ 0x1400CFBFC
 * Callers:
 *     MiZeroAndConvertLargePage @ 0x1400CFECC (MiZeroAndConvertLargePage.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiZeroPhysicalPage @ 0x140075D00 (MiZeroPhysicalPage.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiDeleteUltraThreadContext @ 0x1400CF060 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x1400CF818 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeZeroPages @ 0x140184D60 (KeZeroPages.c)
 *     memset @ 0x140192F40 (memset.c)
 */

unsigned __int64 __fastcall MiZeroLargePage(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 *v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  int ProtectionPfnCompatible; // r14d
  unsigned __int64 UltraMapping; // r12
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 ValidPte; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // r10
  __int64 v20; // rbp
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r9
  unsigned __int64 v23[16]; // [rsp+20h] [rbp-C8h] BYREF

  v5 = a2;
  v6 = (a1 + 0x58000000000LL) / 48;
  v7 = &MiLargePageSizes[a2];
  v8 = *v7;
  v9 = 0LL;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a1);
  if ( a2 <= 1
    && (memset(v23, 0, sizeof(v23)),
        (unsigned int)MiCreateUltraThreadContext((__int64)v23, 0, 2 - (unsigned int)(a2 == 0))) )
  {
    UltraMapping = MiGetUltraMapping(&v23[4 * v5], a2, *v7, 0);
    v13 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( !a2 )
    {
      v14 = 1LL;
      do
      {
        v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v14;
      }
      while ( v14 );
    }
    ValidPte = MiMakeValidPte(v13, v6, ProtectionPfnCompatible | 0xA4000000);
    *(_QWORD *)v13 = ValidPte;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v13, ValidPte);
    KeZeroPages(UltraMapping, v8 << 12);
    *(_QWORD *)v13 = 0LL;
    if ( v13 >= 0xFFFFF6FB7DBED000uLL && v13 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v13, 0LL);
    return MiDeleteUltraThreadContext((__int64)v23);
  }
  else
  {
    result = MiReservePtes((__int64)&qword_140389360, (unsigned int)v8, v10);
    v17 = result;
    if ( result )
    {
      v18 = MiMakeValidPte(result, v6, ProtectionPfnCompatible | 0xA0000000);
      if ( v8 )
      {
        v19 = (_QWORD *)v17;
        v20 = v6 << 12;
        v21 = v8;
        do
        {
          v18 ^= (v18 ^ v20) & 0xFFFFFFFFF000LL;
          *v19 = v18;
          if ( (unsigned __int64)v19 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v19 <= 0xFFFFF6FB7DBED7F8uLL )
            MiWritePteShadow(v19, v18);
          v20 += 4096LL;
          ++v19;
          --v21;
        }
        while ( v21 );
      }
      KeZeroPages((__int64)(v17 << 25) >> 16, v8 << 12);
      return MiReleasePtes((__int64)&qword_140389360, v17, v8, v22);
    }
    else if ( v8 )
    {
      do
      {
        result = MiZeroPhysicalPage(v9 + v6, 2, a3);
        ++v9;
      }
      while ( v9 < v8 );
    }
  }
  return result;
}
