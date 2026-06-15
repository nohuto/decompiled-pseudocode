/*
 * XREFs of ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x18004C710
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18004CBD0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x18005CFA0 (-CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::AllocatePositionTable(SpatialAudioDevicePropertyReader *this)
{
  unsigned int v2; // edi
  union __m128 *v3; // rax
  __int64 v4; // rbx
  union __m128 *v5; // r8
  SpatialAudioPositionCalc *v6; // rcx
  struct StaticObjectProjectionData *v7; // rdx
  int (*v8)(SpatialAudioPositionCalc *__hidden, struct StaticObjectProjectionData *, union __m128 *, unsigned int); // rax
  int v9; // eax
  union __m128 *v10; // rax
  union __m128 *v11; // r8
  SpatialAudioPositionCalc *v12; // rcx
  struct StaticObjectProjectionData *v13; // rdx
  int (*v14)(SpatialAudioPositionCalc *__hidden, struct StaticObjectProjectionData *, union __m128 *, unsigned int); // rax
  int v15; // eax
  const GUID *v16; // r8
  const GUID *v17; // r9
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  int v22; // [rsp+38h] [rbp-29h] BYREF
  int v23; // [rsp+3Ch] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  const char *v25; // [rsp+68h] [rbp+7h]
  __int64 v26; // [rsp+70h] [rbp+Fh]
  int *v27; // [rsp+78h] [rbp+17h]
  __int64 v28; // [rsp+80h] [rbp+1Fh]
  int *v29; // [rsp+88h] [rbp+27h]
  __int64 v30; // [rsp+90h] [rbp+2Fh]

  v2 = -2147024882;
  v3 = (union __m128 *)_aligned_malloc(0x110uLL, 0x10uLL);
  v4 = 0LL;
  *((_QWORD *)this + 6) = v3;
  v5 = v3;
  if ( v3 )
  {
    v6 = (SpatialAudioPositionCalc *)*((_QWORD *)this + 50);
    v7 = (SpatialAudioDevicePropertyReader *)((char *)this + 134);
    v8 = *(int (**)(SpatialAudioPositionCalc *__hidden, struct StaticObjectProjectionData *, union __m128 *, unsigned int))(*(_QWORD *)v6 + 24LL);
    if ( v8 == SpatialAudioPositionCalc::CalculatePositions )
      v9 = SpatialAudioPositionCalc::CalculatePositions(v6, v7, v5, 0x110u);
    else
      v9 = ((__int64 (__fastcall *)(SpatialAudioPositionCalc *, struct StaticObjectProjectionData *, union __m128 *, __int64))v8)(
             v6,
             v7,
             v5,
             272LL);
    v2 = v9;
  }
  v10 = (union __m128 *)_aligned_malloc(0x110uLL, 0x10uLL);
  *((_QWORD *)this + 7) = v10;
  v11 = v10;
  if ( v10 )
  {
    v12 = (SpatialAudioPositionCalc *)*((_QWORD *)this + 50);
    v13 = (SpatialAudioDevicePropertyReader *)((char *)this + 280);
    v14 = *(int (**)(SpatialAudioPositionCalc *__hidden, struct StaticObjectProjectionData *, union __m128 *, unsigned int))(*(_QWORD *)v12 + 24LL);
    if ( v14 == SpatialAudioPositionCalc::CalculatePositions )
      v15 = SpatialAudioPositionCalc::CalculatePositions(v12, v13, v11, 0x110u);
    else
      v15 = ((__int64 (__fastcall *)(SpatialAudioPositionCalc *, struct StaticObjectProjectionData *, union __m128 *, __int64))v14)(
              v12,
              v13,
              v11,
              272LL);
    v23 = v15;
    v2 = v15;
    if ( v15 < 0 )
    {
      if ( (unsigned int)dword_1801883B0 > 2 )
      {
        v26 = 56LL;
        v25 = "SpatialAudioDevicePropertyReader::AllocatePositionTable";
        v27 = &v22;
        v29 = &v23;
        v22 = 424;
        v28 = 4LL;
        v30 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_1801494A8, v16, v17, 5u, &pData);
      }
    }
    else
    {
      v18 = (__m128)*((unsigned int *)this + 71);
      v19 = (__m128)*((unsigned int *)this + 72);
      v18.m128_f32[0] = v18.m128_f32[0] * 0.5;
      v19.m128_f32[0] = v19.m128_f32[0] * 0.5;
      v20 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v19), (__m128)_xmm);
      do
      {
        *(__m128 *)(*((_QWORD *)this + 7) + v4) = _mm_add_ps(*(__m128 *)(*((_QWORD *)this + 7) + v4), v20);
        v4 += 16LL;
      }
      while ( v4 < 272 );
    }
  }
  return v2;
}
