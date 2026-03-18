/*
 * XREFs of ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801544B8
 * Callers:
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180145DBC (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV-$DynArray@UMilRectF@@$0A@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CDirtyRegion::GetIntersectingRedrawRects(__int64 a1, float *a2, __int64 a3)
{
  unsigned int v6; // esi
  unsigned int v7; // r14d
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm4_4
  float v13; // xmm4_4
  float v14; // xmm4_4
  float v15; // xmm4_4
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // [rsp+30h] [rbp-20h]
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF

  *(_DWORD *)(a3 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a3, 0x10u);
  if ( *(_BYTE *)(a1 + 824) )
  {
    v6 = 0;
    if ( *(_DWORD *)(a1 + 956) )
    {
      v7 = v19;
      do
      {
        v8 = *a2;
        v9 = a2[1];
        v10 = a2[2];
        v11 = a2[3];
        *(_QWORD *)&v20 = __PAIR64__(LODWORD(v9), LODWORD(v8));
        *((_QWORD *)&v20 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v10));
        v12 = *(float *)(a1 + 16LL * v6 + 828);
        if ( v12 > v8 )
        {
          LODWORD(v20) = *(_DWORD *)(a1 + 16LL * v6 + 828);
          v8 = v12;
        }
        v13 = *(float *)(a1 + 16LL * v6 + 832);
        if ( v13 > v9 )
        {
          DWORD1(v20) = *(_DWORD *)(a1 + 16LL * v6 + 832);
          v9 = v13;
        }
        v14 = *(float *)(a1 + 16LL * v6 + 836);
        if ( v10 > v14 )
        {
          DWORD2(v20) = *(_DWORD *)(a1 + 16LL * v6 + 836);
          v10 = v14;
        }
        v15 = *(float *)(a1 + 16LL * v6 + 840);
        if ( v11 > v15 )
        {
          HIDWORD(v20) = *(_DWORD *)(a1 + 16LL * v6 + 840);
          v11 = v15;
        }
        if ( v10 <= v8 || v11 <= v9 )
          v20 = 0uLL;
        if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v20) )
        {
          v16 = *(_DWORD *)(a3 + 24);
          v17 = v16 + 1;
          if ( v16 + 1 >= v16 )
            v7 = v16 + 1;
          if ( v17 < v16 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17 < v16 ? 0x80070216 : 0, 0xB5u);
          }
          else if ( v7 > *(_DWORD *)(a3 + 20) )
          {
            v18 = DynArrayImpl<0>::AddMultipleAndSet(a3, 0x10u, 1, &v20);
            if ( v18 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
          }
          else
          {
            *(_OWORD *)(*(_QWORD *)a3 + 16LL * v16) = v20;
            *(_DWORD *)(a3 + 24) = v7;
          }
        }
        ++v6;
      }
      while ( v6 < *(_DWORD *)(a1 + 956) );
    }
  }
}
