/*
 * XREFs of MiQueryLeafPte @ 0x140008180
 * Callers:
 *     <none>
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1400011F0 (MiIdentifyPfnWrapper.c)
 *     MiGetPfnProtection @ 0x1400E69D0 (MiGetPfnProtection.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiQueryLeafPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdi
  __int64 PteShadow; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // r11
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  int PfnProtection; // eax
  __int64 v17; // r11
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = a2;
  v4 = (__int64)(a2 << 25) >> 16;
  if ( (v4 < qword_140388950 || v4 >= qword_140388950 + 276840448)
    && (v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    PteShadow = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
    v21 = PteShadow;
    v6 = MI_GET_PFN_FROM_PTE(&v21, a2, v3, v2);
    if ( (*(_DWORD *)v7 & 1) != 0 )
    {
      v8 = *(_QWORD *)(v7 + 16) + 1LL;
      *(_QWORD *)(v7 + 16) = v8;
      if ( v8 >= *(_QWORD *)(v7 + 24) )
        return 2LL;
      v10 = *(_QWORD *)(v7 + 8);
      v11 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)*(_QWORD *)(v10 + 8 * v8 - 8)) & 0xFFF;
      *(_QWORD *)(v10 + 8 * v8 - 8) = v11;
      v12 = v11 ^ ((unsigned __int16)v11 ^ (*(_QWORD *)(v6 + 40) >> 58 << 9)) & 0xE00;
      *(_QWORD *)(v10 + 8 * v8 - 8) = v12;
      v13 = v12 & 0xFFFFFFFFFFFFFEFFuLL | (((*(_QWORD *)(v6 + 40) >> 57) & 1LL) << 8);
      *(_QWORD *)(v10 + 8 * v8 - 8) = v13;
      if ( (*(_QWORD *)(v6 + 40) & 0x200000000000000LL) != 0 )
      {
        LOBYTE(v14) = 7;
        if ( (*(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
          v14 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        v15 = v13 ^ (unsigned __int8)(v13 ^ (32 * v14)) & 0xE0;
        *(_QWORD *)(v10 + 8 * v8 - 8) = v15;
        PfnProtection = MiGetPfnProtection(v15, v4, v6);
        *(_QWORD *)(v10 + 8 * v17 - 8) ^= (*(_DWORD *)(v10 + 8 * v17 - 8) ^ PfnProtection) & 0x1F;
      }
      else
      {
        v18 = v13 & 0xFFFFFFFFFFFFFF1FuLL;
        *(_QWORD *)(v10 + 8 * v8 - 8) = v18;
        *(_QWORD *)(v10 + 8 * v8 - 8) = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v6 + 16) >> 5)) & 0x1F;
      }
    }
    else if ( (*(_QWORD *)(v6 + 40) & 0x200000000000000LL) != 0 )
    {
      v19 = *(_QWORD *)(v7 + 16) + 1LL;
      *(_QWORD *)(v7 + 16) = v19;
      if ( v19 >= *(_QWORD *)(v7 + 24) )
        return 2LL;
      v20 = 32 * v19 + *(_QWORD *)(v7 + 8);
      MiIdentifyPfnWrapper(v6, v20 - 32);
      *(_QWORD *)(v20 - 8) = v4;
    }
  }
  return 0LL;
}
