/*
 * XREFs of MiCombineCandidate @ 0x140030060
 * Callers:
 *     MiMapArbitraryPage @ 0x1400323B0 (MiMapArbitraryPage.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140040950 (MiCombinePte.c)
 *     MiCrcStillIntact @ 0x1400ADE10 (MiCrcStillIntact.c)
 *     MiCapturePfnVm @ 0x140124730 (MiCapturePfnVm.c)
 *     MiRecheckCombineVm @ 0x140143918 (MiRecheckCombineVm.c)
 *     MiCombineAllPhysicalMemory @ 0x1405BECC0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x1400303C0 (MiGetPagePrivilege.c)
 *     MI_IS_RESET_PTE @ 0x140053CF0 (MI_IS_RESET_PTE.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiIsSessionMetadata @ 0x1401439C4 (MiIsSessionMetadata.c)
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MiCombineCandidate(__int64 *a1, unsigned int a2, __int64 a3)
{
  __m128i v3; // xmm2
  __int64 v4; // rcx
  __int128 v5; // xmm1
  unsigned __int64 v6; // xmm3_8
  unsigned __int64 v7; // xmm2_8
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // edx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __m128i v21; // [rsp+40h] [rbp-18h]

  v3 = *(__m128i *)a3;
  v4 = *a1;
  v5 = *(_OWORD *)(a3 + 16);
  v21 = *(__m128i *)(a3 + 32);
  *(__m128i *)BugCheckParameter2 = v3;
  v6 = _mm_srli_si128(v21, 8).m128i_u64[0];
  v7 = _mm_srli_si128(v3, 8).m128i_u64[0];
  v20 = v5;
  if ( *(_QWORD *)(qword_1403CBD88 + 8 * ((v6 >> 40) & 0x3FF)) != v4 && (a2 & 1) == 0 )
    return 0LL;
  if ( (v6 & 0x200000000000000LL) != 0
    || (v21.m128i_i8[3] & 8) != 0
    || v7 < 0xFFFFF68000000000uLL
    || v7 > 0xFFFFF6FFFFFFFFFFuLL
    || (*((_QWORD *)&v20 + 1) & 0x4000000000000000LL) != 0
    || ((v6 >> 54) & 7) == 4
    || (v7 | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
    && (v7 | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
    && (v21.m128i_i8[3] & 0x20) != 0 )
  {
    return 0LL;
  }
  v9 = v20;
  if ( (unsigned __int64)&v20 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v20 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v20, &v20, a2)
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v12 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v12 )
    {
      v9 |= 0x20uLL;
      v13 = *(_QWORD *)(v12 + 8 * ((v11 >> 3) & 0x1FF));
      if ( (v13 & 0x20) == 0 )
        v9 = v10;
      if ( (v13 & 0x42) != 0 )
        v9 |= 0x42uLL;
    }
    else
    {
      v9 = v20;
    }
  }
  if ( (unsigned int)MiInvalidPteConforms(v9) )
  {
    v15 = (v14 >> 5) & 0x1F;
    if ( (_DWORD)v15 != 24
      && (_DWORD)v15 != 31
      && (v15 & 0xFFFFFFF8) != 0x10
      && (unsigned int)v15 < 0x1E
      && !(unsigned int)MiGetPagePrivilege((ULONG_PTR)BugCheckParameter2) )
    {
      v16 = (__int64)(v7 << 25) >> 16;
      if ( v16 >= 0xFFFF800000000000uLL )
        v17 = (unsigned __int8)byte_1403CCF90[((v16 >> 39) & 0x1FF) - 256];
      else
        v17 = 0;
      if ( v7 > 0xFFFFF6BFFFFFFF78uLL )
      {
        if ( v17 == 6 )
        {
          v18 = 2;
        }
        else
        {
          if ( v17 != 1 || (unsigned int)MiIsSessionMetadata() )
            return 0LL;
          v18 = 3;
        }
      }
      else
      {
        v18 = 1;
      }
      if ( (unsigned __int8)((v21.m128i_i8[2] & 7) - 2) > 1u || v21.m128i_i16[0] )
      {
        if ( (v21.m128i_i8[2] & 7) != 6
          || (BugCheckParameter2[0] & 1) == 0
          || (v21.m128i_i64[1] & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
          || v21.m128i_i16[0] != 1
          || (*((_QWORD *)&v20 + 1) & 0x3FFFFFFFFFFFFFFFLL) != 1
          || v18 == 1
          && (v9 & 1) == 0
          && (v9 & 0x400) == 0
          && (v9 & 0x800) == 0
          && (((unsigned __int8)v9 >> 2) & v21.m128i_i8[0]) == 0
          && (((unsigned __int8)v9 >> 1) & v21.m128i_i8[0]) == 0
          && MiGetPteTimeStamp(v9) == 1 )
        {
          return 0LL;
        }
      }
      else if ( v18 == 1 && (unsigned int)MI_IS_RESET_PTE(v9) )
      {
        return 0LL;
      }
      return v18;
    }
  }
  return 0LL;
}
