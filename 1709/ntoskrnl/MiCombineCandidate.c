/*
 * XREFs of MiCombineCandidate @ 0x14005BD10
 * Callers:
 *     MiMapArbitraryPage @ 0x140008F00 (MiMapArbitraryPage.c)
 *     MiCombinePte @ 0x14009F2D0 (MiCombinePte.c)
 *     MiCapturePfnVm @ 0x1400E6A5C (MiCapturePfnVm.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x1400EA158 (MiCrcStillIntact.c)
 *     MiRecheckCombineVm @ 0x140231A64 (MiRecheckCombineVm.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14005AE80 (MiGetPagePrivilege.c)
 *     MiValidCombineProtection @ 0x14005BF8C (MiValidCombineProtection.c)
 *     MI_IS_RESET_PTE @ 0x14005BFC0 (MI_IS_RESET_PTE.c)
 *     MiIsPfnCommitNotCharged @ 0x140078050 (MiIsPfnCommitNotCharged.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MiIsSessionMetadata @ 0x140221BFC (MiIsSessionMetadata.c)
 */

__int64 __fastcall MiCombineCandidate(__int64 *a1, char a2, __int64 a3)
{
  __m128i v4; // xmm3
  __int64 v5; // rcx
  __int128 v6; // xmm1
  unsigned __int64 v7; // xmm2_8
  unsigned __int64 v8; // xmm3_8
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  int SystemRegionType; // eax
  __int64 v18; // rdx
  __m128i v19; // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __m128i v21; // [rsp+40h] [rbp-18h]

  v4 = *(__m128i *)a3;
  v5 = *a1;
  v6 = *(_OWORD *)(a3 + 16);
  v21 = *(__m128i *)(a3 + 32);
  v19 = v4;
  v7 = _mm_srli_si128(v21, 8).m128i_u64[0];
  v8 = _mm_srli_si128(v4, 8).m128i_u64[0];
  v9 = (v7 >> 40) & 0x3FF;
  v20 = v6;
  if ( *(_QWORD *)(qword_140388AF0 + 8 * v9) != v5 && (a2 & 1) == 0 )
    return 0LL;
  if ( (v7 & 0x200000000000000LL) != 0
    || (v19.m128i_i8[0] & 1) == 0
    || (v21.m128i_i8[3] & 8) != 0
    || v8 < 0xFFFFF68000000000uLL
    || v8 > 0xFFFFF6FFFFFFFFFFuLL
    || (*((_QWORD *)&v20 + 1) & 0x4000000000000000LL) != 0
    || ((v7 >> 54) & 7) == 4
    || (unsigned int)MiIsPfnCommitNotCharged(&v19, v9) )
  {
    return 0LL;
  }
  v14 = v20;
  if ( (unsigned __int64)&v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)&v20 <= 0xFFFFF6FB7DBED7F8uLL )
    v14 = MiReadPteShadow(&v20, v20);
  if ( !(unsigned int)MiInvalidPteConforms(v14, v11, v12, v13)
    || !(unsigned int)MiValidCombineProtection((v15 >> 5) & 0x1F)
    || (unsigned int)MiGetPagePrivilege((__int64)&v19, 0, 0LL) )
  {
    return 0LL;
  }
  if ( v8 > 0xFFFFF6BFFFFFFF78uLL )
  {
    SystemRegionType = MiGetSystemRegionType((__int64)(v8 << 25) >> 16);
    if ( SystemRegionType == 6 )
    {
      v16 = 2;
    }
    else
    {
      if ( SystemRegionType != 1 || (unsigned int)MiIsSessionMetadata(v18) )
        return 0LL;
      v16 = 3;
    }
  }
  else
  {
    v16 = 1;
  }
  if ( (unsigned __int8)((v21.m128i_i8[2] & 7) - 2) > 1u || v21.m128i_i16[0] )
  {
    if ( (v21.m128i_i8[2] & 7) != 6
      || (v21.m128i_i64[1] & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
      || v21.m128i_i16[0] != 1
      || (*((_QWORD *)&v20 + 1) & 0x3FFFFFFFFFFFFFFFLL) != 1
      || v16 == 1 && (unsigned int)MI_IS_RESET_PTE(v14) )
    {
      return 0LL;
    }
  }
  else if ( v16 == 1 && (unsigned int)MI_IS_RESET_PTE(v14) )
  {
    return 0LL;
  }
  return v16;
}
