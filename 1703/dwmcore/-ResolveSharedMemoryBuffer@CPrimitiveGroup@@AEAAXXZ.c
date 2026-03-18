/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18004C5A8
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x18004CB80 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 * Callees:
 *     ?ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z @ 0x18004C834 (-ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800584C0 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180165E28 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx
  CSharedSection *v4; // rcx
  __m128i *v5; // rax
  CPrimitiveGroup *v6; // rcx
  __m128i *v7; // rdi
  __int64 v8; // xmm9_8
  char *v9; // r12
  __int32 v10; // ebp
  __m128i v11; // xmm6
  __m128i v12; // xmm8
  __m128 v13; // xmm7
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned int v16; // r11d
  unsigned __int64 v17; // r9
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // ecx

  ReleaseInterface<ID2D1Geometry>((char *)this + 72);
  ReleaseInterface<ID2D1Geometry>((char *)this + 80);
  v2 = *((unsigned int *)this + 76);
  v3 = *((unsigned int *)this + 77);
  v4 = (CSharedSection *)*((_QWORD *)this + 37);
  *((_BYTE *)this + 88) = 0;
  v5 = (__m128i *)CSharedSection::ResolveAllocation(v4, v3, v2);
  v7 = v5;
  if ( !v5 )
    goto LABEL_13;
  v8 = v5[3].m128i_i64[0];
  v9 = &v5[3].m128i_i8[12];
  v10 = v5[3].m128i_i32[2];
  v11 = v5[1];
  v12 = *v5;
  v13 = (__m128)v5[2];
  v14 = (unsigned int)_mm_cvtsi128_si32(v11);
  if ( (int)CPrimitiveGroup::ValidateBatches(v6, (char *)&v5[3].m128i_u64[1] + 4, v14) < 0 )
    goto LABEL_13;
  v15 = v14 + 60;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
  if ( v16 + v14 + 60 >= v14 + 60
    && (v17 = v16 + v15, v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4)), v17 + v18 >= v17)
    && *((unsigned int *)this + 76) >= v17 + v18
    && (v19 = v16 / 0x94, v20 = v19 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)), v20 >= v19)
    && ((v21 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12)), v21 == -1) || v16 >= 0x94 && v21 <= v16 - 148) )
  {
    *(__m128i *)((char *)this + 312) = v12;
    *((_QWORD *)this + 49) = (char *)v7 + v15;
    *(__m128i *)((char *)this + 328) = v11;
    *((_QWORD *)this + 51) = (char *)v7 + v17;
    *(__m128 *)((char *)this + 344) = v13;
    *((_QWORD *)this + 47) = v9;
    *((_QWORD *)this + 45) = v8;
    *((_DWORD *)this + 111) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 4));
    *((_DWORD *)this + 108) = v8;
    *((_DWORD *)this + 107) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
    *((_BYTE *)this + 448) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 8)) != 0;
    *((_DWORD *)this + 109) = HIDWORD(v8);
    *((_DWORD *)this + 110) = v10;
    *((_DWORD *)this + 92) = v10;
    *((_QWORD *)this + 48) = v14;
    *((_QWORD *)this + 50) = v16;
    *((_QWORD *)this + 52) = v18;
    *((_DWORD *)this + 106) = v20;
  }
  else
  {
LABEL_13:
    *((_DWORD *)this + 111) = -1;
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 47) = 0LL;
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
    *((_QWORD *)this + 51) = 0LL;
    *((_QWORD *)this + 52) = 0LL;
    *((_QWORD *)this + 53) = 0LL;
    *((_BYTE *)this + 448) = 0;
    *(_QWORD *)((char *)this + 436) = 0LL;
    *((_DWORD *)this + 108) = 0;
  }
  *((_BYTE *)this + 450) = (unsigned int)(*((_QWORD *)this + 50) / 0x94uLL) < 0x15E;
  if ( *((_BYTE *)this + 449) )
    CPrimitiveGroup::BuildHeatMap(this);
}
