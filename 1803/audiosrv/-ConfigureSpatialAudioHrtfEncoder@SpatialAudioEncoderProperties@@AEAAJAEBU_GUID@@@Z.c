/*
 * XREFs of ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180104BDC
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1801056A0 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062B98 (IsGetDefaultSpatialRenderingModePresent.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureSpatialAudioHrtfEncoder(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int16 v5; // ax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int16 v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+38h] [rbp+10h] BYREF

  *((_WORD *)this + 62) = 111;
  *((_DWORD *)this + 29) = 262142;
  v3 = (__int128)*a2;
  *((_DWORD *)this + 30) = 1;
  *(_OWORD *)((char *)this + 100) = v3;
  *(_OWORD *)((char *)this + 126) = xmmword_180152670;
  *(_OWORD *)((char *)this + 142) = xmmword_180152680;
  *(_OWORD *)((char *)this + 158) = xmmword_180152690;
  *(_OWORD *)((char *)this + 174) = xmmword_1801526A0;
  *(_OWORD *)((char *)this + 190) = xmmword_1801526B0;
  *(_OWORD *)((char *)this + 206) = xmmword_1801526C0;
  *(_OWORD *)((char *)this + 222) = xmmword_1801526D0;
  *(_DWORD *)((char *)this + 238) = 0;
  if ( IsGetDefaultSpatialRenderingModePresent() )
  {
    v14 = 0;
    v13 = 0;
    if ( (int)TryGetHrtfProcessingLimits(&v14, &v13) >= 0 )
    {
      *((_DWORD *)this + 29) = v14;
      *((_WORD *)this + 62) = v13;
    }
  }
  v4 = *((_OWORD *)this + 7);
  *(_OWORD *)((char *)this + 242) = *((_OWORD *)this + 6);
  v5 = *((_WORD *)this + 120);
  v6 = *((_OWORD *)this + 8);
  *(_OWORD *)((char *)this + 258) = v4;
  v7 = *((_OWORD *)this + 9);
  *(_OWORD *)((char *)this + 274) = v6;
  v8 = *((_OWORD *)this + 10);
  *(_OWORD *)((char *)this + 290) = v7;
  v9 = *((_OWORD *)this + 11);
  *(_OWORD *)((char *)this + 306) = v8;
  v10 = *((_OWORD *)this + 12);
  *(_OWORD *)((char *)this + 322) = v9;
  v11 = *((_OWORD *)this + 14);
  *(_OWORD *)((char *)this + 338) = v10;
  *(_OWORD *)((char *)this + 354) = *((_OWORD *)this + 13);
  *(_OWORD *)((char *)this + 370) = v11;
  *((_WORD *)this + 193) = v5;
  return 0LL;
}
