/*
 * XREFs of ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x18014F9D4
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180089710 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char __fastcall CDwmMetaRegion::ExcludeRegionFromRect(float *a1, const struct FastRegion::Internal::CRgnData **a2)
{
  int v2; // r8d
  char v5; // di
  int v6; // r9d
  unsigned __int64 v7; // rdx
  signed int v8; // eax
  int v9; // r10d
  FastRegion::Internal::CRgnData *v10; // rcx
  __m128 v12; // [rsp+30h] [rbp-59h]
  int v13; // [rsp+3Ch] [rbp-4Dh]
  _BYTE v14[8]; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-41h]
  int *v16; // [rsp+50h] [rbp-39h]
  __int64 v17; // [rsp+58h] [rbp-31h]
  int v18; // [rsp+60h] [rbp-29h]
  __int128 v19; // [rsp+70h] [rbp-19h]
  FastRegion::Internal::CRgnData *v20; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v21[4]; // [rsp+88h] [rbp-1h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+9Ch] [rbp+13h]
  unsigned int v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A4h] [rbp+1Bh]
  int v26; // [rsp+A8h] [rbp+1Fh]

  v2 = (int)*a1;
  v20 = (FastRegion::Internal::CRgnData *)v21;
  v5 = 0;
  v6 = (int)a1[2];
  v7 = __PAIR64__((int)a1[1], v2) >> 32;
  v13 = (int)a1[3];
  if ( v2 >= v6 || (int)a1[1] >= v13 )
  {
    v21[0] = 0;
  }
  else
  {
    v21[0] = 2;
    v21[1] = v2;
    v21[2] = v6;
    v21[3] = v7;
    v22 = (unsigned int)v21 + 1 + 27 - (unsigned int)v21 - 12;
    v24 = v22;
    v25 = v2;
    v26 = v6;
    v23 = v13;
  }
  v8 = FastRegion::CRegion::Subtract(&v20, a2);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x31Cu);
  }
  else
  {
    FastRegion::Internal::CRgnData::BeginIterator(v20, (struct FastRegion::CRegion::Iterator *)v14);
    while ( (unsigned __int64)v16 < v15 )
    {
      v9 = *(_DWORD *)(v17 + 8LL * v18);
      v10 = (FastRegion::Internal::CRgnData *)(unsigned int)((v16[2] - *v16)
                                                           * (*(_DWORD *)(v17 + 4LL * (2 * v18 + 1)) - v9));
      if ( (int)v10 > 0 )
      {
        v5 = 1;
        v12.m128_f32[0] = (float)v9;
        v12.m128_f32[1] = (float)*v16;
        v12.m128_f32[2] = (float)*(int *)(v17 + 4LL * (2 * v18 + 1));
        v12.m128_f32[3] = (float)v16[2];
        *(float *)&v19 = (float)v9;
        HIDWORD(v19) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
        DWORD1(v19) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
        DWORD2(v19) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
        *(_OWORD *)a1 = v19;
      }
      FastRegion::Internal::CRgnData::StepIterator(v10, (struct FastRegion::CRegion::Iterator *)v14);
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v20);
  return v5;
}
