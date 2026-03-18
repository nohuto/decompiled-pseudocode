/*
 * XREFs of MiCombineCandidate @ 0x1400A33A0
 * Callers:
 *     MiCapturePfnVm @ 0x140078F10 (MiCapturePfnVm.c)
 *     MiCombinePte @ 0x14008AB80 (MiCombinePte.c)
 *     MiMapArbitraryPage @ 0x1400A39B0 (MiMapArbitraryPage.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x1400FF430 (MiCrcStillIntact.c)
 *     MiRecheckCombineVm @ 0x14013055C (MiRecheckCombineVm.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1400A3660 (MiGetPagePrivilege.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MI_IS_RESET_PTE @ 0x140104D20 (MI_IS_RESET_PTE.c)
 *     MiIsSessionMetadata @ 0x1401305FC (MiIsSessionMetadata.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCombineCandidate(__int64 *a1, __int64 a2)
{
  __m128i v3; // xmm3
  __int64 v4; // rcx
  __int128 v5; // xmm1
  unsigned __int64 v6; // xmm2_8
  unsigned __int64 v7; // xmm3_8
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // edx
  int SystemRegionType; // eax
  __int64 v14; // rdx
  __m128i v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __m128i v17; // [rsp+40h] [rbp-18h]

  v3 = *(__m128i *)a2;
  v4 = *a1;
  v5 = *(_OWORD *)(a2 + 16);
  v17 = *(__m128i *)(a2 + 32);
  v15 = v3;
  v6 = _mm_srli_si128(v17, 8).m128i_u64[0];
  v7 = _mm_srli_si128(v3, 8).m128i_u64[0];
  v16 = v5;
  if ( *(_QWORD *)(qword_14036C8F8 + 8 * ((v6 >> 40) & 0x3FF)) != v4 && a1 != (__int64 *)&unk_14036C718 )
    return 0LL;
  if ( (v6 & 0x200000000000000LL) != 0
    || !v15.m128i_i64[0]
    || (v17.m128i_i8[3] & 8) != 0
    || v7 < 0xFFFFF68000000000uLL
    || v7 > 0xFFFFF6FFFFFFFFFFuLL
    || (*((_QWORD *)&v16 + 1) & 0x4000000000000000LL) != 0
    || ((v6 >> 54) & 7) == 4
    || (v7 | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (v7 | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && ((v17.m128i_u8[3] >> 5) & 1) != 0 )
  {
    return 0LL;
  }
  v9 = MI_READ_PTE_LOCK_FREE(&v16);
  if ( (unsigned int)MiInvalidPteConforms(v9) )
  {
    v11 = (v10 >> 5) & 0x1F;
    if ( (_DWORD)v11 != 24
      && (_DWORD)v11 != 31
      && (v11 & 0xFFFFFFF8) != 0x10
      && (unsigned int)v11 < 0x1E
      && !(unsigned int)MiGetPagePrivilege(&v15, 0LL, 0LL) )
    {
      if ( v7 > 0xFFFFF6BFFFFFFF78uLL )
      {
        SystemRegionType = MiGetSystemRegionType((__int64)(v7 << 25) >> 16);
        if ( SystemRegionType == 6 )
        {
          v12 = 2;
        }
        else
        {
          if ( SystemRegionType != 1 || (unsigned int)MiIsSessionMetadata(v14) )
            return 0LL;
          v12 = 3;
        }
      }
      else
      {
        v12 = 1;
      }
      if ( (unsigned __int8)((v17.m128i_i8[2] & 7) - 2) > 1u || v17.m128i_i16[0] )
      {
        if ( (v17.m128i_i8[2] & 7) != 6
          || (v17.m128i_i64[1] & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
          || v17.m128i_i16[0] != 1
          || (*((_QWORD *)&v16 + 1) & 0x3FFFFFFFFFFFFFFFLL) != 1
          || v12 == 1
          && (v9 & 1) == 0
          && (v9 & 0x400) == 0
          && (v9 & 0x800) == 0
          && (((unsigned __int8)v9 >> 2) & v17.m128i_i8[0]) == 0
          && (((unsigned __int8)v9 >> 1) & v17.m128i_i8[0]) == 0
          && MiGetPteTimeStamp(v9) == 1 )
        {
          return 0LL;
        }
      }
      else if ( v12 == 1 && (unsigned int)MI_IS_RESET_PTE(v9) )
      {
        return 0LL;
      }
      return v12;
    }
  }
  return 0LL;
}
