/*
 * XREFs of ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x18015E798
 * Callers:
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x18015EACC (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x180130C90 (--0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::CWARPDrawListEntry(
        CWARPDrawListEntry *this,
        const struct WARPDrawListEntryParams *a2)
{
  const __m128i *v4; // rax
  __m128 v5; // xmm2
  float *v6; // rax
  __int64 v7; // rcx
  float v8; // xmm3_4
  char *v9; // rdx
  char *v10; // r8
  float v11; // xmm0_4
  _OWORD *v12; // rcx
  bool v13; // al
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v17; // [rsp+20h] [rbp-29h]
  __m256i v18; // [rsp+30h] [rbp-19h]
  __int128 v19; // [rsp+50h] [rbp+7h]
  float v20[6]; // [rsp+68h] [rbp+1Fh] BYREF
  __int128 v21; // [rsp+80h] [rbp+37h] BYREF

  CDrawListEntry::CDrawListEntry(this, a2);
  *(_QWORD *)this = &CWARPDrawListEntry::`vftable';
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_BYTE *)this + 384) = *((_BYTE *)a2 + 200);
  *((_BYTE *)this + 385) = *((_BYTE *)a2 + 201);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 6) = *(_OWORD *)((char *)a2 + 56);
  v4 = (const __m128i *)*((_QWORD *)a2 + 2);
  if ( v4 )
  {
    v5 = (__m128)_mm_loadu_si128(v4 + 7);
    v6 = (float *)*((_QWORD *)a2 + 3);
    v7 = 4LL;
    v8 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
    v9 = (char *)(this - (CWARPDrawListEntry *)v6);
    v10 = (char *)((char *)&v21 - (char *)v6);
    v20[2] = _mm_shuffle_ps(v5, v5, 170).m128_f32[0] * v8;
    v20[0] = v8 * v5.m128_f32[0];
    v20[1] = _mm_shuffle_ps(v5, v5, 85).m128_f32[0] * v8;
    v20[3] = v8;
    v21 = *(_OWORD *)v20;
    do
    {
      v11 = *(float *)((char *)v6 + (_QWORD)v10) * *v6;
      *(float *)((char *)++v6 + (_QWORD)v9 + 92) = v11;
      --v7;
    }
    while ( v7 );
  }
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  if ( *((_QWORD *)a2 + 9) )
  {
    *((_OWORD *)this + 7) = *(_OWORD *)((char *)a2 + 72);
    *((_OWORD *)this + 8) = *(_OWORD *)((char *)a2 + 88);
    *((_OWORD *)this + 9) = *(_OWORD *)((char *)a2 + 104);
    *((_OWORD *)this + 10) = *(_OWORD *)((char *)a2 + 120);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 8LL))(*((_QWORD *)this + 14));
  }
  if ( *((_QWORD *)a2 + 17) )
  {
    *((_OWORD *)this + 11) = *(_OWORD *)((char *)a2 + 136);
    *((_OWORD *)this + 12) = *(_OWORD *)((char *)a2 + 152);
    *((_OWORD *)this + 13) = *(_OWORD *)((char *)a2 + 168);
    *((_OWORD *)this + 14) = *(_OWORD *)((char *)a2 + 184);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 8LL))(*((_QWORD *)this + 22));
  }
  v12 = (_OWORD *)((char *)this + 316);
  v13 = *((_QWORD *)a2 + 26) != 0LL;
  *((_BYTE *)this + 386) = v13;
  if ( v13 )
  {
    v14 = *((_QWORD *)a2 + 26);
    HIDWORD(v17) = 0;
    *(_QWORD *)((char *)&v17 + 4) = *(unsigned int *)(v14 + 4);
    LODWORD(v17) = *(_DWORD *)v14;
    v18.m256i_i64[0] = *(_QWORD *)(v14 + 8);
    *(_OWORD *)&v18.m256i_u64[1] = 0LL;
    v18.m256i_i64[3] = 1065353216LL;
    *(_QWORD *)((char *)&v19 + 4) = *(unsigned int *)(v14 + 20);
    HIDWORD(v19) = 1065353216;
    LODWORD(v19) = *(_DWORD *)(v14 + 16);
    *v12 = v17;
    *(__m256i *)((char *)this + 332) = v18;
    *(_OWORD *)((char *)this + 364) = v19;
    *((_DWORD *)this + 95) = 0;
    *(_OWORD *)v20 = *(_OWORD *)((char *)this + 56);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v12, (__int64)v20, (float *)&v21);
    v15 = v21;
    *(_OWORD *)v20 = v21;
  }
  else
  {
    CMILMatrix::operator=((__int64)v12);
    v15 = *(_OWORD *)((char *)this + 56);
  }
  *(_OWORD *)((char *)this + 72) = v15;
  return this;
}
