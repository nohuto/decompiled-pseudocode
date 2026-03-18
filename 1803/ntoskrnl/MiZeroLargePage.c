/*
 * XREFs of MiZeroLargePage @ 0x140138310
 * Callers:
 *     MiZeroAndConvertLargePage @ 0x14013825C (MiZeroAndConvertLargePage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiReserveLowPrioritySystemPtes @ 0x14003CAA0 (MiReserveLowPrioritySystemPtes.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiZeroPhysicalPage @ 0x14010F800 (MiZeroPhysicalPage.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MiDeleteUltraThreadContext @ 0x14013A5C4 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14013A724 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1401AE9B0 (KeZeroPages.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

char __fastcall MiZeroLargePage(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 *v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  int ProtectionPfnCompatible; // r14d
  unsigned __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned __int64 ValidPte; // rdx
  _QWORD *v15; // r10
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r9
  unsigned __int64 UltraMapping; // r12
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  BOOL v27; // ebp
  __int64 v28; // r8
  __int64 v29; // r8
  _OWORD v31[8]; // [rsp+20h] [rbp-C8h] BYREF

  v5 = a2;
  v6 = (a1 + 0x58000000000LL) / 48;
  v7 = &MiLargePageSizes[a2];
  v8 = *v7;
  v9 = 0LL;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, a1);
  if ( a2 <= 1
    && (memset(v31, 0, sizeof(v31)), (unsigned int)MiCreateUltraThreadContext(v31, 0LL, 2 - (unsigned int)(a2 == 0))) )
  {
    UltraMapping = MiGetUltraMapping(&v31[2 * v5], a2, *v7);
    v23 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( !a2 )
    {
      v24 = 1LL;
      do
      {
        v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v24;
      }
      while ( v24 );
    }
    *(_QWORD *)v23 = MiMakeValidPte(v23, v6, ProtectionPfnCompatible | 0xA4000000, v21);
    v27 = MiPteInShadowRange(v23);
    if ( v27 )
      MiWritePteShadow(v26, v25, v28);
    KeZeroPages(UltraMapping, v8 << 12);
    *(_QWORD *)v23 = ZeroPte;
    if ( v27 )
      MiWritePteShadow(v23, ZeroPte, v29);
    LOBYTE(v11) = MiDeleteUltraThreadContext(v31);
  }
  else
  {
    v11 = MiReserveLowPrioritySystemPtes(v8);
    v13 = v11;
    if ( v11 )
    {
      ValidPte = MiMakeValidPte(v11, v6, ProtectionPfnCompatible | 0xA0000000, v12);
      if ( v8 )
      {
        v15 = (_QWORD *)v13;
        v16 = v6 << 12;
        do
        {
          *v15 = (ValidPte ^ v16) & 0xFFFFFFFFF000LL ^ ValidPte;
          if ( MiPteInShadowRange((unsigned __int64)v15) )
            MiWritePteShadow(v17, ValidPte, v18);
          v16 += 4096LL;
          v15 = (_QWORD *)(v19 + 8);
        }
        while ( v20 != 1 );
      }
      KeZeroPages((__int64)(v13 << 25) >> 16, v8 << 12);
      LOBYTE(v11) = MiReleasePtes((__int64)&qword_1403CC5E0, v13, (unsigned int)v8);
    }
    else if ( v8 )
    {
      do
      {
        LOBYTE(v11) = MiZeroPhysicalPage(v9 + v6, 2, a3, v12);
        ++v9;
      }
      while ( v9 < v8 );
    }
  }
  return v11;
}
