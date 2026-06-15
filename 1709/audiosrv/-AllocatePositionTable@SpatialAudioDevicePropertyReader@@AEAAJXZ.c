/*
 * XREFs of ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x180028588
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x1800286D0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x180025510 (-CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::AllocatePositionTable(SpatialAudioDevicePropertyReader *this)
{
  unsigned int v2; // edi
  union __m128 *v3; // rax
  __int64 v4; // rbx
  union __m128 *v5; // r8
  SpatialAudioPositionCalc *v6; // rcx
  struct StaticObjectProjectionData *v7; // rdx
  __int64 (__fastcall *v8)(SpatialAudioPositionCalc *, struct StaticObjectProjectionData *, union __m128 *, int); // rax
  unsigned int v9; // eax
  union __m128 *v10; // rax
  union __m128 *v11; // r8
  SpatialAudioPositionCalc *v12; // rcx
  struct StaticObjectProjectionData *v13; // rdx
  __int64 (__fastcall *v14)(SpatialAudioPositionCalc *, struct StaticObjectProjectionData *, union __m128 *, int); // rax
  int v15; // eax
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  LPCGUID v20; // r8
  LPCGUID v21; // r9
  int v22; // [rsp+38h] [rbp-29h] BYREF
  int v23; // [rsp+3Ch] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+7h] BYREF
  int *v26; // [rsp+78h] [rbp+17h]
  __int64 v27; // [rsp+80h] [rbp+1Fh]
  int *v28; // [rsp+88h] [rbp+27h]
  __int64 v29; // [rsp+90h] [rbp+2Fh]

  v2 = -2147024882;
  v3 = (union __m128 *)_aligned_malloc(0x110uLL, 0x10uLL);
  v4 = 0LL;
  *((_QWORD *)this + 7) = v3;
  v5 = v3;
  if ( v3 )
  {
    v6 = (SpatialAudioPositionCalc *)*((_QWORD *)this + 51);
    v7 = (SpatialAudioDevicePropertyReader *)((char *)this + 142);
    v8 = *(__int64 (__fastcall **)(SpatialAudioPositionCalc *, struct StaticObjectProjectionData *, union __m128 *, int))(*(_QWORD *)v6 + 24LL);
    if ( v8 == SpatialAudioPositionCalc::CalculatePositions )
      v9 = SpatialAudioPositionCalc::CalculatePositions(v6, v7, v5, 272);
    else
      v9 = v8(v6, v7, v5, 272);
    v2 = v9;
  }
  v10 = (union __m128 *)_aligned_malloc(0x110uLL, 0x10uLL);
  *((_QWORD *)this + 8) = v10;
  v11 = v10;
  if ( v10 )
  {
    v12 = (SpatialAudioPositionCalc *)*((_QWORD *)this + 51);
    v13 = (SpatialAudioDevicePropertyReader *)((char *)this + 288);
    v14 = *(__int64 (__fastcall **)(SpatialAudioPositionCalc *, struct StaticObjectProjectionData *, union __m128 *, int))(*(_QWORD *)v12 + 24LL);
    if ( v14 == SpatialAudioPositionCalc::CalculatePositions )
      v15 = SpatialAudioPositionCalc::CalculatePositions(v12, v13, v11, 272);
    else
      v15 = v14(v12, v13, v11, 272);
    v23 = v15;
    v2 = v15;
    if ( v15 < 0 )
    {
      if ( (unsigned int)dword_18014A3B0 > 2 )
      {
        TlgCreateSz(&pDesc, "SpatialAudioDevicePropertyReader::AllocatePositionTable");
        v22 = 424;
        v26 = &v22;
        v28 = &v23;
        v27 = 4LL;
        v29 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112280, v20, v21, 5u, &pData);
      }
    }
    else
    {
      v16 = (__m128)*((unsigned int *)this + 73);
      v17 = (__m128)*((unsigned int *)this + 74);
      v16.m128_f32[0] = v16.m128_f32[0] * 0.5;
      v17.m128_f32[0] = v17.m128_f32[0] * 0.5;
      v18 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v17), (__m128)_xmm);
      do
      {
        *(__m128 *)(*((_QWORD *)this + 8) + v4) = _mm_add_ps(v18, *(__m128 *)(*((_QWORD *)this + 8) + v4));
        v4 += 16LL;
      }
      while ( v4 < 272 );
    }
  }
  return v2;
}
