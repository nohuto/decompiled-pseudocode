/*
 * XREFs of ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x180179210
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180092DA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall CDwmMetaRegion::ExcludeRegionFromRect(float *a1, const struct FastRegion::Internal::CRgnData **a2)
{
  int v2; // r8d
  char v3; // di
  int v5; // r9d
  int v6; // eax
  int v7; // r10d
  FastRegion::Internal::CRgnData *v8; // rcx
  __m128 v10; // [rsp+30h] [rbp-59h]
  int v11; // [rsp+3Ch] [rbp-4Dh]
  _BYTE v12[8]; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-41h]
  int *v14; // [rsp+50h] [rbp-39h]
  __int64 v15; // [rsp+58h] [rbp-31h]
  int v16; // [rsp+60h] [rbp-29h]
  __int128 v17; // [rsp+70h] [rbp-19h]
  FastRegion::Internal::CRgnData *v18; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v19[3]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD v20[2]; // [rsp+94h] [rbp+Bh] BYREF
  _DWORD v21[13]; // [rsp+9Ch] [rbp+13h] BYREF

  v2 = (int)*a1;
  v18 = (FastRegion::Internal::CRgnData *)v19;
  v3 = 0;
  v5 = (int)a1[2];
  v11 = (int)a1[3];
  if ( v2 >= v5 || (int)a1[1] >= v11 )
  {
    v19[0] = 0;
  }
  else
  {
    v20[0] = (int)a1[1];
    v19[0] = 2;
    v19[1] = v2;
    v19[2] = v5;
    v20[1] = (unsigned int)v19 + 1 + 27 - (unsigned int)v20;
    v21[2] = v2;
    v21[3] = v5;
    v21[1] = (unsigned int)v19 + 1 + 27 - (unsigned int)v21 + 8;
    v21[0] = v11;
  }
  v6 = FastRegion::CRegion::Subtract(&v18, a2);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x31Cu);
  }
  else
  {
    FastRegion::Internal::CRgnData::BeginIterator(v18, (struct FastRegion::CRegion::Iterator *)v12);
    while ( (unsigned __int64)v14 < v13 )
    {
      v7 = *(_DWORD *)(v15 + 8LL * v16);
      v8 = (FastRegion::Internal::CRgnData *)(unsigned int)((v14[2] - *v14)
                                                          * (*(_DWORD *)(v15 + 4LL * (2 * v16 + 1)) - v7));
      if ( (int)v8 > 0 )
      {
        v3 = 1;
        v10.m128_f32[0] = (float)v7;
        v10.m128_f32[1] = (float)*v14;
        v10.m128_f32[2] = (float)*(int *)(v15 + 4LL * (2 * v16 + 1));
        v10.m128_f32[3] = (float)v14[2];
        *(float *)&v17 = (float)v7;
        HIDWORD(v17) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
        DWORD1(v17) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
        DWORD2(v17) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
        *(_OWORD *)a1 = v17;
      }
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v12);
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v18);
  return v3;
}
