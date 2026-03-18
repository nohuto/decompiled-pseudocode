/*
 * XREFs of MxZeroBootMappings @ 0x1408BBFD4
 * Callers:
 *     MiZeroBootMappings @ 0x1408BBF64 (MiZeroBootMappings.c)
 *     MxZeroBootMappings @ 0x1408BBFD4 (MxZeroBootMappings.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MxZeroBootMappings @ 0x1408BBFD4 (MxZeroBootMappings.c)
 *     MiFreeBootPageTable @ 0x1408BC09C (MiFreeBootPageTable.c)
 */

void __fastcall MxZeroBootMappings(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 < a2 )
  {
    v5 = a1;
    do
    {
      v6 = MI_READ_PTE_LOCK_FREE(v5);
      v11 = v6;
      if ( v6 )
      {
        if ( (v6 & 1) != 0 && (v6 & 0x80u) == 0LL )
        {
          if ( a3 > 1 )
            MxZeroBootMappings((__int64)(v5 << 25) >> 16, ((__int64)(v5 << 25) >> 16) + 4096);
          v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
          MiFreeBootPageTable((v7 >> 12) & 0xFFFFFFFFFLL);
        }
        *(_QWORD *)v5 = ZeroPte;
        if ( MiPteInShadowRange(v5) )
          MiWritePteShadow(v9, v8, v10);
      }
      v5 += 8LL;
    }
    while ( v5 < a2 );
  }
}
