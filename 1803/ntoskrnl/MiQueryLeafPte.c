/*
 * XREFs of MiQueryLeafPte @ 0x140140950
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPfnProtection @ 0x1400B4D10 (MiGetPfnProtection.c)
 *     MiIdentifyPfnWrapper @ 0x140105640 (MiIdentifyPfnWrapper.c)
 */

__int64 __fastcall MiQueryLeafPte(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // r11
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  int PfnProtection; // eax
  unsigned __int64 v14; // rcx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64)(a2 << 25) >> 16;
  if ( v3 >= qword_1403CBB68 && v3 < qword_1403CBB68 + 276840448 )
    return 0LL;
  if ( a3 >= 1 )
    return 0LL;
  v19 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v19 & 1) == 0 )
    return 0LL;
  v4 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v19) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( (*(_DWORD *)v5 & 1) == 0 )
  {
    if ( (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) != 0 )
    {
      v17 = *(_QWORD *)(v5 + 16) + 1LL;
      *(_QWORD *)(v5 + 16) = v17;
      if ( v17 >= *(_QWORD *)(v5 + 24) )
        return 4LL;
      v18 = 32 * v17 + *(_QWORD *)(v5 + 8);
      MiIdentifyPfnWrapper(v4, v18 - 32);
      *(_QWORD *)(v18 - 8) = v3;
    }
    return 0LL;
  }
  v6 = *(_QWORD *)(v5 + 16) + 1LL;
  *(_QWORD *)(v5 + 16) = v6;
  if ( v6 < *(_QWORD *)(v5 + 24) )
  {
    v7 = *(_QWORD *)(v5 + 8);
    v8 = v3 ^ (*(_DWORD *)(v7 + 8 * v6 - 8) ^ (unsigned int)v3) & 0xFFF;
    *(_QWORD *)(v7 + 8 * v6 - 8) = v8;
    v9 = v8 ^ ((unsigned __int16)v8 ^ (*(_QWORD *)(v4 + 40) >> 58 << 9)) & 0xE00;
    *(_QWORD *)(v7 + 8 * v6 - 8) = v9;
    v10 = v9 & 0xFFFFFFFFFFFFFEFFuLL | (((*(_QWORD *)(v4 + 40) >> 57) & 1LL) << 8);
    *(_QWORD *)(v7 + 8 * v6 - 8) = v10;
    if ( (*(_QWORD *)(v4 + 40) & 0x200000000000000LL) != 0 )
    {
      LOBYTE(v11) = 7;
      if ( (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
        v11 = *(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v12 = v10 ^ (unsigned __int8)(v10 ^ (32 * v11)) & 0xE0;
      *(_QWORD *)(v7 + 8 * v6 - 8) = v12;
      PfnProtection = MiGetPfnProtection(v12, v3);
      v14 = *(_QWORD *)(v7 + 8 * v6 - 8) ^ (*(_DWORD *)(v7 + 8 * v6 - 8) ^ PfnProtection) & 0x1F;
    }
    else
    {
      v16 = v10 & 0xFFFFFFFFFFFFFF1FuLL;
      *(_QWORD *)(v7 + 8 * v6 - 8) = v16;
      v14 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v4 + 16) >> 5)) & 0x1F;
    }
    *(_QWORD *)(v7 + 8 * v6 - 8) = v14;
    return 0LL;
  }
  return 4LL;
}
