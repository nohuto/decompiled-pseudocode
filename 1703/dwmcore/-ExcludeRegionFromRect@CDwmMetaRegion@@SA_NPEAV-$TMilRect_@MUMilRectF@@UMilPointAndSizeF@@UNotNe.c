/*
 * XREFs of ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x18015A398
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800537B0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180025700 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180075160 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800751C4 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

char __fastcall CDwmMetaRegion::ExcludeRegionFromRect(float *a1, const struct FastRegion::Internal::CRgnData **a2)
{
  int v2; // r8d
  char v3; // di
  int v5; // r9d
  int v6; // eax
  int v7; // r10d
  FastRegion::Internal::CRgnData *v8; // rcx
  __m128 v10; // [rsp+30h] [rbp-69h]
  _BYTE v11[8]; // [rsp+40h] [rbp-59h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-51h]
  int *v13; // [rsp+50h] [rbp-49h]
  __int64 v14; // [rsp+58h] [rbp-41h]
  int v15; // [rsp+60h] [rbp-39h]
  __int128 v16; // [rsp+70h] [rbp-29h]
  FastRegion::Internal::CRgnData *v17; // [rsp+90h] [rbp-9h] BYREF
  _DWORD v18[3]; // [rsp+98h] [rbp-1h] BYREF
  _DWORD v19[2]; // [rsp+A4h] [rbp+Bh] BYREF
  _DWORD v20[13]; // [rsp+ACh] [rbp+13h] BYREF

  v2 = (int)*a1;
  v17 = (FastRegion::Internal::CRgnData *)v18;
  v3 = 0;
  *(_QWORD *)&v16 = __PAIR64__((int)a1[1], v2);
  v5 = (int)a1[2];
  *((_QWORD *)&v16 + 1) = __PAIR64__((int)a1[3], v5);
  if ( v2 >= v5 || SDWORD1(v16) >= SHIDWORD(v16) )
  {
    v18[0] = 0;
  }
  else
  {
    v19[0] = DWORD1(v16);
    v18[0] = 2;
    v18[1] = v2;
    v18[2] = v5;
    v19[1] = (unsigned int)v18 + 1 + 27 - (unsigned int)v19;
    v20[2] = v2;
    v20[3] = v5;
    v20[1] = (unsigned int)v18 + 1 + 27 - (unsigned int)v20 + 8;
    v20[0] = HIDWORD(v16);
  }
  v6 = FastRegion::CRegion::Subtract(&v17, a2);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x31Cu);
  }
  else
  {
    FastRegion::Internal::CRgnData::BeginIterator(v17, (struct FastRegion::CRegion::Iterator *)v11);
    while ( (unsigned __int64)v13 < v12 )
    {
      v7 = *(_DWORD *)(v14 + 8LL * v15);
      v8 = (FastRegion::Internal::CRgnData *)(unsigned int)((v13[2] - *v13)
                                                          * (*(_DWORD *)(v14 + 4LL * (2 * v15 + 1)) - v7));
      if ( (int)v8 > 0 )
      {
        v3 = 1;
        v10.m128_f32[0] = (float)v7;
        v10.m128_f32[1] = (float)*v13;
        v10.m128_f32[2] = (float)*(int *)(v14 + 4LL * (2 * v15 + 1));
        v10.m128_f32[3] = (float)v13[2];
        *(float *)&v16 = (float)v7;
        HIDWORD(v16) = _mm_shuffle_ps(v10, v10, 255).m128_u32[0];
        DWORD1(v16) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
        DWORD2(v16) = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
        *(_OWORD *)a1 = v16;
      }
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v11);
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v17);
  return v3;
}
