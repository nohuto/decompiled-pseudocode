/*
 * XREFs of MiQueryLeafPte @ 0x140078520
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPfnProtection @ 0x140078704 (MiGetPfnProtection.c)
 *     MiIdentifyPfnWrapper @ 0x1400DBBE0 (MiIdentifyPfnWrapper.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiQueryLeafPte(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  int PfnProtection; // eax
  __int64 v15; // r11
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2 << 25 >> 16;
  if ( (v2 < qword_14036C5C8 || v2 >= qword_14036C5C8 + 276840448)
    && (v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v19 = MI_READ_PTE_LOCK_FREE(a2);
    v3 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v19) - 0x58000000000LL;
    if ( (*(_DWORD *)v4 & 1) != 0 )
    {
      v5 = *(_QWORD *)(v4 + 16) + 1LL;
      *(_QWORD *)(v4 + 16) = v5;
      if ( v5 >= *(_QWORD *)(v4 + 24) )
        return 2LL;
      v7 = *(_QWORD *)(v4 + 8);
      v8 = v2 ^ ((unsigned __int16)v2 ^ (unsigned __int16)*(_QWORD *)(v7 + 8 * v5 - 8)) & 0xFFF;
      *(_QWORD *)(v7 + 8 * v5 - 8) = v8;
      v9 = v8 ^ ((unsigned __int16)v8 ^ (*(_QWORD *)(v3 + 40) >> 58 << 9)) & 0xE00;
      *(_QWORD *)(v7 + 8 * v5 - 8) = v9;
      v10 = v9 ^ ((unsigned __int16)v9 ^ (*(_QWORD *)(v3 + 40) >> 49)) & 0x100;
      *(_QWORD *)(v7 + 8 * v5 - 8) = v10;
      if ( (*(_QWORD *)(v3 + 40) & 0x200000000000000LL) != 0 )
      {
        v11 = *(_QWORD *)(v3 + 24);
        if ( (v11 & 0x3FFFFFFFFFFFFFFFuLL) >= 7 )
          v12 = 7LL;
        else
          v12 = v11 & 7;
        v13 = v10 & 0xFFFFFFFFFFFFFF1FuLL | (32 * v12);
        *(_QWORD *)(v7 + 8 * v5 - 8) = v13;
        PfnProtection = MiGetPfnProtection(v13, v2, v3);
        *(_QWORD *)(v7 + 8 * v15 - 8) ^= (*(_DWORD *)(v7 + 8 * v15 - 8) ^ PfnProtection) & 0x1F;
      }
      else
      {
        v16 = v10 & 0xFFFFFFFFFFFFFF1FuLL;
        *(_QWORD *)(v7 + 8 * v5 - 8) = v16;
        *(_QWORD *)(v7 + 8 * v5 - 8) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v3 + 16) >> 5)) & 0x1F;
      }
    }
    else if ( (*(_QWORD *)(v3 + 40) & 0x200000000000000LL) != 0 )
    {
      v17 = *(_QWORD *)(v4 + 16) + 1LL;
      *(_QWORD *)(v4 + 16) = v17;
      if ( v17 >= *(_QWORD *)(v4 + 24) )
        return 2LL;
      v18 = 32 * v17 + *(_QWORD *)(v4 + 8);
      MiIdentifyPfnWrapper(v3, v18 - 32);
      *(_QWORD *)(v18 - 8) = v2;
    }
  }
  return 0LL;
}
