/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18018DF28
 * Callers:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180049FD0 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18018DF28 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18018DF28 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // r8
  int v6; // ebx
  int v7; // r9d
  __int64 v8; // rax
  __int128 v9; // xmm0
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rcx
  int Bounds; // eax
  __m128i v17; // xmm1
  unsigned __int64 v18; // xmm0_8
  unsigned int v19; // r9d
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-49h]
  int v27; // [rsp+30h] [rbp-39h]
  unsigned int v28; // [rsp+34h] [rbp-35h]
  __int128 v29; // [rsp+38h] [rbp-31h] BYREF
  __int64 v30; // [rsp+48h] [rbp-21h]
  unsigned int v31; // [rsp+50h] [rbp-19h]
  __int64 v32; // [rsp+58h] [rbp-11h]
  __int128 *v33; // [rsp+60h] [rbp-9h]
  __int64 v34; // [rsp+68h] [rbp-1h]
  __int64 v35; // [rsp+70h] [rbp+7h]
  __int128 v36; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v37[20]; // [rsp+88h] [rbp+1Fh] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v35 = a3;
  v33 = a2;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v5 = 0LL;
  *(_DWORD *)(a1 + 32) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2 )
  {
    v8 = *(int *)(a1 + 152);
    if ( !(_DWORD)v8 )
    {
      v9 = *a2;
      *(_DWORD *)v37 = 0;
      *(_OWORD *)&v37[4] = v9;
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v29, 0x14u, 1, v37);
      v6 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
      if ( v6 < 0 )
      {
        v26 = 238;
LABEL_9:
        v7 = v6;
LABEL_10:
        LODWORD(v5) = 0;
        goto LABEL_3;
      }
LABEL_35:
      (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 184LL))(a1, &v29, v35);
      goto LABEL_36;
    }
    v34 = *(int *)(a1 + 152);
    v6 = 0;
    if ( v8 <= 0 )
      goto LABEL_35;
    v11 = 0LL;
    v32 = 0LL;
    while ( 1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v11);
      v27 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v11);
      v36 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v13 = *(_QWORD *)(v12 + 24);
      if ( v13 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, 55LL, v5);
        v15 = *(_QWORD *)(v12 + 24);
        if ( v14 )
        {
          Bounds = CFilterEffect::GetBounds(v15, v33, &v36);
          v6 = Bounds;
          if ( Bounds < 0 )
          {
            v26 = 258;
            v7 = Bounds;
            goto LABEL_10;
          }
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 48LL))(v15, 37LL) )
          {
            v6 = -2147467263;
            v26 = 276;
            goto LABEL_9;
          }
          v17 = *(__m128i *)(v12 + 4);
          *(_QWORD *)&v36 = 0LL;
          v18 = _mm_srli_si128(v17, 8).m128i_u64[0];
          *((float *)&v36 + 3) = (float)(HIDWORD(v18) - v17.m128i_i32[1]);
          *((float *)&v36 + 2) = (float)((int)v18 - v17.m128i_i32[0]);
        }
        LODWORD(v5) = v31;
      }
      else
      {
        v36 = *a2;
      }
      v19 = v28;
      *(_DWORD *)v37 = v27;
      v20 = v5 + 1;
      *(_OWORD *)&v37[4] = v36;
      if ( (int)v5 + 1 >= (unsigned int)v5 )
        v19 = v5 + 1;
      v6 = v20 < (unsigned int)v5 ? 0x80070216 : 0;
      v28 = v19;
      if ( v20 < (unsigned int)v5 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
      }
      else
      {
        if ( v19 <= HIDWORD(v30) )
        {
          v21 = v29;
          v22 = (unsigned int)v5;
          v5 = v19;
          v23 = 5 * v22;
          *(_OWORD *)(v29 + 4 * v23) = *(_OWORD *)v37;
          *(_DWORD *)(v21 + 4 * v23 + 16) = *(_DWORD *)&v37[16];
          v31 = v19;
          goto LABEL_30;
        }
        v24 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v29, 0x14u, 1, v37);
        v6 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC0u);
      }
      v5 = v31;
LABEL_30:
      if ( v6 < 0 )
      {
        v26 = 285;
        goto LABEL_9;
      }
      v11 = v32 + 1;
      v32 = v11;
      if ( v11 >= v34 )
        goto LABEL_35;
      a2 = v33;
    }
  }
  v6 = -2147467259;
  v26 = 232;
  v7 = -2147467259;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, v5, v7, v26);
LABEL_36:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v29);
  return (unsigned int)v6;
}
