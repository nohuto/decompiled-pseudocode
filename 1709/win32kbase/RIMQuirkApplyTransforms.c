/*
 * XREFs of RIMQuirkApplyTransforms @ 0x1C0115AB4
 * Callers:
 *     rimTransformGeometry @ 0x1C01129FC (rimTransformGeometry.c)
 * Callees:
 *     RIMConvertPointCoordinates @ 0x1C0105E80 (RIMConvertPointCoordinates.c)
 *     RIMQuirkSetContactBoundary @ 0x1C0115B8C (RIMQuirkSetContactBoundary.c)
 *     ApiSetUseDisplaySizeFromRegistry @ 0x1C013D460 (ApiSetUseDisplaySizeFromRegistry.c)
 */

__int64 __fastcall RIMQuirkApplyTransforms(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  int v7; // ecx
  __m128i v8; // xmm0
  __int64 v9; // rcx
  int v10; // eax
  __int128 v11; // xmm0
  _DWORD *v12; // rdi
  __int64 result; // rax
  _OWORD *v14; // rdx
  __m128i v15; // [rsp+30h] [rbp-28h] BYREF
  int v16[6]; // [rsp+40h] [rbp-18h] BYREF

  *a5 = 0;
  if ( (unsigned int)ApiSetUseDisplaySizeFromRegistry(0LL) || (*(_DWORD *)(a1 + 276) & 0x20) != 0 )
  {
    v12 = (_DWORD *)(a3 + 112);
    *(_QWORD *)(a3 + 112) = *(_QWORD *)(a3 + 4);
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 4);
    v15 = *(__m128i *)(a1 + 124);
    v8 = v15;
    ++v15.m128i_i32[3];
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
    v11 = *(_OWORD *)(a1 + 160);
    v12 = (_DWORD *)(a3 + 112);
    v15.m128i_i32[2] = v10 + 1;
    *(_OWORD *)v16 = v11;
    if ( !(unsigned int)RIMConvertPointCoordinates(v9, v15.m128i_i32, v16, (_QWORD *)(a3 + 112)) )
    {
      *v12 = 0;
      *(_DWORD *)(a3 + 116) = 0;
    }
  }
  result = *(_QWORD *)v12;
  *(_QWORD *)(a3 + 96) = *(_QWORD *)v12;
  if ( *(_DWORD *)(a3 + 20) )
  {
    result = RIMQuirkSetContactBoundary(
               v7,
               (int)a3 + 184,
               *(_QWORD *)(a3 + 12),
               *(_DWORD *)(a3 + 24),
               *(_DWORD *)(a3 + 28));
    *(_OWORD *)(a3 + 168) = *v14;
  }
  return result;
}
