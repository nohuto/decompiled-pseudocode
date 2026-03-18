/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180162E00
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059BA0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z @ 0x180176B80 (-AddMultipleAndSet@-$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  int v5; // xmm6_4
  int v6; // ebx
  int v7; // xmm7_4
  __int64 v8; // r14
  int v9; // xmm8_4
  int v10; // xmm9_4
  __int32 v11; // r8d
  DWORD v13; // r9d
  int v14; // eax
  __int128 v15; // xmm0
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rbx
  int v20; // r13d
  __int64 v21; // rcx
  _OWORD *v22; // r14
  __int128 v23; // xmm0
  signed int v24; // eax
  unsigned int v25; // eax
  __m128i v26; // xmm0
  int v27; // eax
  float *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r9
  unsigned int v32; // [rsp+28h] [rbp-E0h]
  _QWORD v33[3]; // [rsp+38h] [rbp-D0h] BYREF
  int v34; // [rsp+50h] [rbp-B8h]
  int v35; // [rsp+54h] [rbp-B4h]
  __m256i v36; // [rsp+58h] [rbp-B0h] BYREF
  int v37; // [rsp+78h] [rbp-90h]
  int v38; // [rsp+80h] [rbp-88h] BYREF
  int v39; // [rsp+84h] [rbp-84h]
  int v40; // [rsp+88h] [rbp-80h]
  int v41; // [rsp+8Ch] [rbp-7Ch]
  __int128 v42; // [rsp+90h] [rbp-78h] BYREF
  int v43; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v44; // [rsp+A4h] [rbp-64h]
  int v45; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v46; // [rsp+BCh] [rbp-4Ch]

  v3 = *(_DWORD *)(a1 + 32);
  v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = 0;
  v7 = DWORD1(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v8 = a3;
  v9 = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v10 = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v34 = 0;
  v35 = 0;
  v33[0] = a3;
  v11 = 0;
  *(_DWORD *)(a1 + 32) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  v38 = v5;
  v39 = v7;
  v40 = v9;
  v41 = v10;
  v36.m256i_i32[0] = 0;
  *(_OWORD *)&v33[1] = 0LL;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) != 2 )
  {
    v6 = -2147467259;
    v32 = 563;
    v13 = -2147467259;
    goto LABEL_3;
  }
  v14 = *(_DWORD *)(a1 + 152);
  if ( !v14 )
  {
    v15 = *a2;
    v43 = 0;
    v44 = v15;
    v16 = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v33[1], &v43);
    v6 = v16;
    if ( v16 < 0 )
    {
      v32 = 570;
      goto LABEL_7;
    }
LABEL_19:
    v11 = v36.m256i_i32[0];
    goto LABEL_20;
  }
  v17 = 0LL;
  v18 = *(int *)(a1 + 152);
  if ( v14 <= 0 )
  {
LABEL_20:
    if ( v11 )
    {
      v28 = (float *)(v33[1] + 4LL);
      do
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v38, v28);
        v28 = (float *)(v29 + 20);
      }
      while ( v30 != 1 );
      v10 = v41;
      v9 = v40;
      v7 = v39;
      v5 = v38;
    }
    *(_DWORD *)(a1 + 160) = v5;
    *(_DWORD *)(a1 + 164) = v7;
    *(_DWORD *)(a1 + 168) = v9;
    *(_DWORD *)(a1 + 172) = v10;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v17);
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v17);
    v42 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v21 = *(_QWORD *)(v19 + 24);
    if ( !v21 )
    {
      v42 = *a2;
      goto LABEL_17;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, 49LL) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 24) + 48LL))(
             *(_QWORD *)(v19 + 24),
             35LL) )
      {
        v25 = *(_DWORD *)(v19 + 12) - *(_DWORD *)(v19 + 4);
        v43 = 0;
        LODWORD(v44) = 0;
        v26 = _mm_cvtsi32_si128(v25);
        v27 = *(_DWORD *)(v19 + 16) - *(_DWORD *)(v19 + 8);
        DWORD1(v44) = _mm_cvtepi32_ps(v26).m128_u32[0];
        *((float *)&v44 + 2) = (float)v27;
        CMILMatrix::Transform2DBoundsHelper<1>(v8, (__int64)&v43, (float *)&v42);
        goto LABEL_17;
      }
      v6 = -2147467263;
      v32 = 615;
LABEL_28:
      v13 = v6;
      goto LABEL_3;
    }
    v22 = *(_OWORD **)(v19 + 24);
    v6 = (*(__int64 (__fastcall **)(_OWORD *, __int128 *, _QWORD))(*(_QWORD *)v22 + 216LL))(v22, a2, v33[0]);
    if ( v6 < 0 )
    {
      v32 = 588;
      goto LABEL_28;
    }
    memset(&v36.m256i_u64[1], 0, 24);
    v37 = 0;
    v23 = v22[10];
    v45 = v20;
    v46 = v23;
    v24 = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v36.m256i_u64[1], &v45);
    v6 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x250u);
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v36.m256i_i64[1]);
      goto LABEL_25;
    }
    (*(void (__fastcall **)(_OWORD *, unsigned __int64 *, __int128 *))(*(_QWORD *)v22 + 184LL))(
      v22,
      &v36.m256i_u64[1],
      &v42);
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v36.m256i_i64[1]);
    v8 = v33[0];
LABEL_17:
    v45 = v20;
    v46 = v42;
    v16 = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v33[1], &v45);
    v6 = v16;
    if ( v16 < 0 )
      break;
    if ( ++v17 >= v18 )
      goto LABEL_19;
  }
  v32 = 623;
LABEL_7:
  v13 = v16;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, v32);
LABEL_25:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v33[1]);
  return (unsigned int)v6;
}
