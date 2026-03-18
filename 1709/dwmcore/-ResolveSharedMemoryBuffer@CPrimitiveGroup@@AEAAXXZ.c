/*
 * XREFs of ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x1800272D4
 * Callers:
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800276E0 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180174A80 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 */

void __fastcall CPrimitiveGroup::ResolveSharedMemoryBuffer(CPrimitiveGroup *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // r12d
  __int64 v10; // rbp
  __m128i v11; // xmm1
  __int64 v12; // xmm5_8
  __m128 v13; // xmm3
  __int64 i; // rax
  unsigned __int64 v15; // r9
  unsigned int v16; // edi
  unsigned __int64 v17; // r10
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned int v21; // ecx

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
  v4 = *((_QWORD *)this + 53);
  v5 = *((unsigned int *)this + 109);
  *((_BYTE *)this + 88) = 0;
  v6 = *(unsigned int *)(v4 + 64);
  if ( v5 >= v6 || *((unsigned int *)this + 108) > v6 - v5 || (v7 = *(_QWORD *)(v4 + 72), v8 = v7 + v5, !v7) )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 56);
    v10 = v8 + 60;
    v11 = *(__m128i *)(v8 + 16);
    v12 = *(_QWORD *)(v8 + 48);
    v13 = *(__m128 *)(v8 + 32);
    for ( i = 0LL; (unsigned int)(i + 144) <= v11.m128i_i32[0]; i = (unsigned int)(i + 144) )
    {
      if ( *(_DWORD *)(i + v10) > 3u || *(_DWORD *)(i + v10 + 12) > 7u )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x17Cu);
        goto LABEL_26;
      }
    }
    v15 = v11.m128i_u32[0] + 60LL;
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v8, 12));
    if ( v16 + v15 >= v15 )
    {
      v17 = v16 + v15;
      v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4));
      if ( v17 + v18 >= v17 && *((unsigned int *)this + 108) >= v17 + v18 )
      {
        v19 = v16 / 0x94;
        v20 = v19 + (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
        if ( v20 >= v19 )
        {
          v21 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12));
          if ( v21 == -1 || v16 >= 0x94 && v21 <= v16 - 148 )
          {
            *(_OWORD *)((char *)this + 440) = *(_OWORD *)v8;
            *((_QWORD *)this + 63) = v10;
            *(__m128i *)((char *)this + 456) = v11;
            *((_QWORD *)this + 65) = v15 + v8;
            *((_QWORD *)this + 67) = v17 + v8;
            *(__m128 *)((char *)this + 472) = v13;
            *((_QWORD *)this + 64) = v11.m128i_u32[0];
            *((_DWORD *)this + 143) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 4));
            *((_DWORD *)this + 140) = v12;
            *((_QWORD *)this + 61) = v12;
            *((_BYTE *)this + 576) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v13, 8)) != 0;
            *((_DWORD *)this + 139) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
            *((_DWORD *)this + 141) = HIDWORD(v12);
            *((_DWORD *)this + 142) = v9;
            *((_DWORD *)this + 124) = v9;
            *((_QWORD *)this + 66) = v16;
            *((_QWORD *)this + 68) = v18;
            *((_DWORD *)this + 138) = v20;
            goto LABEL_20;
          }
        }
      }
    }
  }
LABEL_26:
  *((_DWORD *)this + 143) = -1;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_BYTE *)this + 576) = 0;
  *(_QWORD *)((char *)this + 564) = 0LL;
  *((_DWORD *)this + 140) = 0;
LABEL_20:
  *((_BYTE *)this + 578) = (unsigned int)(*((_QWORD *)this + 66) / 0x94uLL) < 0x15E;
  if ( *((_BYTE *)this + 577) )
    CPrimitiveGroup::BuildHeatMap(this);
}
