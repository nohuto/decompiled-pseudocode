/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180163C20
 * Callers:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800525C0 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180163C20 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180163C20 (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?AddMultipleAndSet@?$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z @ 0x180176B80 (-AddMultipleAndSet@-$DynArray@UInputBoundsPair@@$0A@@@QEAAJPEFBUInputBoundsPair@@I@Z.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, _OWORD *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // ebx
  DWORD v6; // r9d
  __int64 v7; // rax
  __int128 v8; // xmm0
  int Bounds; // eax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  __m128i v15; // xmm1
  unsigned __int64 v16; // xmm0_8
  unsigned int v18; // [rsp+20h] [rbp-49h]
  int v19; // [rsp+30h] [rbp-39h]
  _OWORD *v20; // [rsp+38h] [rbp-31h]
  __int64 v21; // [rsp+40h] [rbp-29h]
  __int128 v23; // [rsp+50h] [rbp-19h] BYREF
  int v24; // [rsp+60h] [rbp-9h]
  int v25; // [rsp+64h] [rbp-5h]
  int v26; // [rsp+68h] [rbp-1h]
  _BYTE v27[20]; // [rsp+70h] [rbp+7h] BYREF
  int v28; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v29; // [rsp+8Ch] [rbp+23h]

  v3 = *(_DWORD *)(a1 + 32);
  v5 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v20 = a2;
  *(_DWORD *)(a1 + 32) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  v23 = 0LL;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) != 2 )
  {
    v5 = -2147467259;
    v18 = 232;
LABEL_3:
    v6 = v5;
    goto LABEL_4;
  }
  v7 = *(int *)(a1 + 152);
  if ( (_DWORD)v7 )
  {
    v10 = 0LL;
    v21 = *(int *)(a1 + 152);
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v10);
        v19 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v10);
        *(_OWORD *)v27 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v12 = *(_QWORD *)(v11 + 24);
        if ( v12 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 48LL))(v12, 49LL);
          v14 = *(_QWORD *)(v11 + 24);
          if ( v13 )
          {
            Bounds = CFilterEffect::GetBounds(v14, v20, v27);
            v5 = Bounds;
            if ( Bounds < 0 )
            {
              v18 = 258;
              goto LABEL_8;
            }
          }
          else
          {
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 48LL))(v14, 35LL) )
            {
              v5 = -2147467263;
              v18 = 276;
              goto LABEL_3;
            }
            v15 = *(__m128i *)(v11 + 4);
            *(_QWORD *)v27 = 0LL;
            v16 = _mm_srli_si128(v15, 8).m128i_u64[0];
            *(float *)&v27[12] = (float)(HIDWORD(v16) - v15.m128i_i32[1]);
            *(float *)&v27[8] = (float)((int)v16 - v15.m128i_i32[0]);
          }
        }
        else
        {
          *(_OWORD *)v27 = *a2;
        }
        v28 = v19;
        v29 = *(_OWORD *)v27;
        Bounds = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v23, &v28);
        v5 = Bounds;
        if ( Bounds < 0 )
          break;
        if ( ++v10 >= v21 )
          goto LABEL_22;
        a2 = v20;
      }
      v18 = 285;
      goto LABEL_8;
    }
LABEL_22:
    (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 184LL))(a1, &v23, a3);
    goto LABEL_23;
  }
  v8 = *a2;
  *(_DWORD *)v27 = 0;
  *(_OWORD *)&v27[4] = v8;
  Bounds = DynArray<InputBoundsPair,0>::AddMultipleAndSet(&v23, v27);
  v5 = Bounds;
  if ( Bounds >= 0 )
    goto LABEL_22;
  v18 = 238;
LABEL_8:
  v6 = Bounds;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, v18);
LABEL_23:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v23);
  return v5;
}
