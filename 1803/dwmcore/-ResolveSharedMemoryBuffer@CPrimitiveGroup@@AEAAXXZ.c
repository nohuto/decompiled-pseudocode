/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180097C88
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x180097F7C (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 * Callees:
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x18002BC88 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z @ 0x180097F44 (-ValidateBatches@CPrimitiveGroup@@AEBAJPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x18019E698 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  CSharedSection *v6; // rcx
  __m128i *v7; // rax
  CPrimitiveGroup *v8; // rcx
  __m128i *v9; // rdi
  __int64 v10; // xmm9_8
  char *v11; // r12
  __int32 v12; // r15d
  __m128i v13; // xmm6
  __m128i v14; // xmm8
  __m128 v15; // xmm7
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r8
  unsigned int v18; // esi
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // r14
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned int v24; // ecx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 10) = 0LL;
  }
  v4 = *((unsigned int *)this + 108);
  v5 = *((unsigned int *)this + 109);
  v6 = (CSharedSection *)*((_QWORD *)this + 53);
  *((_BYTE *)this + 88) = 0;
  v7 = (__m128i *)CSharedSection::ResolveAllocation(v6, v5, v4);
  v9 = v7;
  if ( !v7 )
    goto LABEL_17;
  v10 = v7[3].m128i_i64[0];
  v11 = &v7[3].m128i_i8[12];
  v12 = v7[3].m128i_i32[2];
  v13 = v7[1];
  v14 = *v7;
  v15 = (__m128)v7[2];
  v16 = (unsigned int)_mm_cvtsi128_si32(v13);
  if ( (int)CPrimitiveGroup::ValidateBatches(v8, (char *)&v7[3].m128i_u64[1] + 4, v16) < 0 )
    goto LABEL_17;
  v17 = v16 + 60;
  v18 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 12));
  v19 = v18;
  if ( v18 + v16 + 60 < v16 + 60 )
    goto LABEL_17;
  v20 = v18 + v17;
  v21 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v13, 4));
  if ( v20 + v21 >= v20
    && *((unsigned int *)this + 108) >= v20 + v21
    && (v22 = v18 / 0x94, v23 = v22 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v13, 8)), v23 >= v22)
    && ((v24 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 12)), v24 == -1) || v18 >= 0x94 && v24 <= v18 - 148) )
  {
    *(__m128i *)((char *)this + 440) = v14;
    *((_QWORD *)this + 63) = v11;
    *((_QWORD *)this + 65) = (char *)v9 + v17;
    *(__m128i *)((char *)this + 456) = v13;
    *((_QWORD *)this + 64) = v16;
    *(__m128 *)((char *)this + 472) = v15;
    *((_QWORD *)this + 67) = (char *)v9 + v20;
    *((_DWORD *)this + 143) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15, 4));
    *((_DWORD *)this + 140) = v10;
    *((_QWORD *)this + 61) = v10;
    *((_BYTE *)this + 576) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v15, 8)) != 0;
    *((_DWORD *)this + 139) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
    *((_DWORD *)this + 141) = HIDWORD(v10);
    *((_DWORD *)this + 142) = v12;
    *((_DWORD *)this + 124) = v12;
    *((_QWORD *)this + 66) = v18;
    *((_QWORD *)this + 68) = v21;
    *((_DWORD *)this + 138) = v23;
  }
  else
  {
LABEL_17:
    *((_DWORD *)this + 143) = -1;
    *((_QWORD *)this + 66) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 63) = 0LL;
    *((_QWORD *)this + 64) = 0LL;
    *((_QWORD *)this + 65) = 0LL;
    *((_QWORD *)this + 67) = 0LL;
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
    *((_BYTE *)this + 576) = 0;
    *(_QWORD *)((char *)this + 564) = 0LL;
    *((_DWORD *)this + 140) = 0;
    v19 = *((_QWORD *)this + 66);
  }
  *((_BYTE *)this + 578) = (unsigned int)(v19 / 0x94) < 0x15E;
  if ( *((_BYTE *)this + 577) )
    CPrimitiveGroup::BuildHeatMap(this);
}
