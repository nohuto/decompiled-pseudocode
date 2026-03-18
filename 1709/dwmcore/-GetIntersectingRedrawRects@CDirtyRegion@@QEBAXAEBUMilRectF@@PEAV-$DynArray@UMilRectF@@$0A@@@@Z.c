/*
 * XREFs of ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180147CF4
 * Callers:
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180135E48 (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV-$DynArray@UMilRectF@@$0A@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CDirtyRegion::GetIntersectingRedrawRects(__int64 a1, float *a2, __int64 a3)
{
  unsigned int i; // esi
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm4_4
  float v13; // xmm4_4
  float v14; // xmm4_4
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // r14d
  signed int v19; // eax
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF

  *(_DWORD *)(a3 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a3, 0x10u);
  if ( *(_BYTE *)(a1 + 2720) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 952); ++i )
    {
      v7 = *a2;
      v8 = a2[1];
      v9 = a2[2];
      v10 = a2[3];
      *(_QWORD *)&v20 = __PAIR64__(LODWORD(v8), LODWORD(v7));
      *((_QWORD *)&v20 + 1) = __PAIR64__(LODWORD(v10), LODWORD(v9));
      v11 = *(float *)(a1 + 16LL * i + 824);
      if ( v11 > v7 )
      {
        LODWORD(v20) = *(_DWORD *)(a1 + 16LL * i + 824);
        v7 = v11;
      }
      v12 = *(float *)(a1 + 16LL * i + 828);
      if ( v12 > v8 )
      {
        DWORD1(v20) = *(_DWORD *)(a1 + 16LL * i + 828);
        v8 = v12;
      }
      v13 = *(float *)(a1 + 16LL * i + 832);
      if ( v9 > v13 )
      {
        DWORD2(v20) = *(_DWORD *)(a1 + 16LL * i + 832);
        v9 = v13;
      }
      v14 = *(float *)(a1 + 16LL * i + 836);
      if ( v10 > v14 )
      {
        HIDWORD(v20) = *(_DWORD *)(a1 + 16LL * i + 836);
        v10 = v14;
      }
      if ( v9 <= v7 || v10 <= v8 )
        v20 = 0uLL;
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v20) )
      {
        v16 = *(_DWORD *)(a3 + 24);
        v17 = v16 + 1;
        v18 = v16 + 1;
        if ( v16 + 1 < v16 )
          v18 = v15;
        if ( v17 < v16 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17 < v16 ? 0x80070216 : 0, 0xB5u);
        }
        else if ( v18 > *(_DWORD *)(a3 + 20) )
        {
          v19 = DynArrayImpl<0>::AddMultipleAndSet(a3, 0x10u, 1, &v20);
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0xC0u);
        }
        else
        {
          *(_OWORD *)(*(_QWORD *)a3 + 16LL * v16) = v20;
          *(_DWORD *)(a3 + 24) = v18;
        }
      }
    }
  }
}
