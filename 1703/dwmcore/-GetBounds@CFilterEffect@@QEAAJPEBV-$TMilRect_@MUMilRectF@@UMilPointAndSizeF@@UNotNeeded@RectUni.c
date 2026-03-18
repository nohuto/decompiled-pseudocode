/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800034B0
 * Callers:
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800034B0 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180086400 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180088340 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800034B0 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, __int128 *a2, __int64 a3)
{
  unsigned int v4; // ecx
  __int128 *v5; // r9
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int128 v10; // xmm0
  int v11; // eax
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // rcx
  int Bounds; // eax
  __m128i v20; // xmm1
  unsigned __int64 v21; // xmm0_8
  unsigned int v22; // r8d
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-49h]
  int v29; // [rsp+30h] [rbp-39h]
  unsigned int v30; // [rsp+34h] [rbp-35h]
  __int128 v31; // [rsp+38h] [rbp-31h] BYREF
  __int64 v32; // [rsp+48h] [rbp-21h]
  unsigned int v33; // [rsp+50h] [rbp-19h]
  __int64 v34; // [rsp+58h] [rbp-11h]
  __int128 *v35; // [rsp+60h] [rbp-9h]
  __int64 v36; // [rsp+68h] [rbp-1h]
  __int64 v37; // [rsp+70h] [rbp+7h]
  __int128 v38; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v39[20]; // [rsp+88h] [rbp+1Fh] BYREF

  v37 = a3;
  v35 = a2;
  v32 = 0LL;
  v4 = 0;
  v5 = a2;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 32) & 0xFFFFFFFE;
  v33 = 0;
  v8 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ (v7 + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v8;
  v31 = 0LL;
  if ( (v8 & 6) != 2 )
  {
    v6 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xE8u);
    goto LABEL_7;
  }
  v9 = *(int *)(a1 + 168);
  if ( (_DWORD)v9 )
  {
    v36 = *(int *)(a1 + 168);
    v14 = 0LL;
    v34 = 0LL;
    if ( v9 <= 0 )
    {
LABEL_6:
      (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 152LL))(a1, &v31, v37);
      goto LABEL_7;
    }
    while ( 1 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v14);
      v29 = *(_DWORD *)(*(_QWORD *)(a1 + 152) + 4 * v14);
      v38 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v16 = *(_QWORD *)(v15 + 24);
      if ( v16 )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v16 + 48LL))(*(_QWORD *)(v15 + 24), 8LL);
        v18 = *(_QWORD *)(v15 + 24);
        if ( v17 )
        {
          Bounds = CFilterEffect::GetBounds(v18, v35, &v38);
          v6 = Bounds;
          if ( Bounds < 0 )
          {
            v28 = 258;
            v13 = Bounds;
            goto LABEL_11;
          }
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 48LL))(v18, 97LL) )
          {
            v6 = -2147467263;
            v28 = 276;
            goto LABEL_10;
          }
          v20 = *(__m128i *)(v15 + 4);
          *(_QWORD *)&v38 = 0LL;
          v21 = _mm_srli_si128(v20, 8).m128i_u64[0];
          *((float *)&v38 + 3) = (float)(HIDWORD(v21) - v20.m128i_i32[1]);
          *((float *)&v38 + 2) = (float)((int)v21 - v20.m128i_i32[0]);
        }
        v4 = v33;
      }
      else
      {
        v38 = *v5;
      }
      v22 = v30;
      *(_DWORD *)v39 = v29;
      v23 = v4 + 1;
      *(_OWORD *)&v39[4] = v38;
      if ( v4 + 1 >= v4 )
        v22 = v4 + 1;
      v6 = v23 < v4 ? 0x80070216 : 0;
      v30 = v22;
      if ( v23 < v4 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
      }
      else
      {
        if ( v22 <= HIDWORD(v32) )
        {
          v24 = v4;
          v25 = v31;
          v26 = 5 * v24;
          *(_OWORD *)(v31 + 4 * v26) = *(_OWORD *)v39;
          *(_DWORD *)(v25 + 4 * v26 + 16) = *(_DWORD *)&v39[16];
          v4 = v22;
          v33 = v22;
          goto LABEL_30;
        }
        v27 = DynArrayImpl<0>::AddMultipleAndSet(&v31, 20LL, 1LL, v39);
        v6 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC0u);
      }
      v4 = v33;
LABEL_30:
      if ( v6 < 0 )
      {
        v28 = 285;
        goto LABEL_10;
      }
      v14 = v34 + 1;
      v34 = v14;
      if ( v14 >= v36 )
        goto LABEL_6;
      v5 = v35;
    }
  }
  v10 = *a2;
  *(_DWORD *)v39 = 0;
  *(_OWORD *)&v39[4] = v10;
  v11 = DynArrayImpl<0>::AddMultipleAndSet(&v31, 20LL, 1LL, v39);
  v6 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
  if ( v6 >= 0 )
    goto LABEL_6;
  v28 = 238;
LABEL_10:
  v13 = v6;
LABEL_11:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v28);
LABEL_7:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>(&v31);
  return (unsigned int)v6;
}
