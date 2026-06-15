/*
 * XREFs of ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800D6918
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1800D73F8 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
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

  *((_WORD *)this + 66) = 111;
  *((_DWORD *)this + 31) = 262142;
  v3 = (__int128)*a2;
  *((_DWORD *)this + 32) = 1;
  *(_OWORD *)((char *)this + 108) = v3;
  *(_OWORD *)((char *)this + 134) = xmmword_1801199F0;
  *(_OWORD *)((char *)this + 150) = xmmword_180119A00;
  *(_OWORD *)((char *)this + 166) = xmmword_180119A10;
  *(_OWORD *)((char *)this + 182) = xmmword_180119A20;
  *(_OWORD *)((char *)this + 198) = xmmword_180119A30;
  *(_OWORD *)((char *)this + 214) = xmmword_180119A40;
  *(_OWORD *)((char *)this + 230) = xmmword_180119A50;
  *(_DWORD *)((char *)this + 246) = 0;
  if ( IsGetDefaultSpatialRenderingModePresent() )
  {
    v14 = 0;
    v13 = 0;
    if ( (int)TryGetHrtfProcessingLimits(&v14, &v13) >= 0 )
    {
      *((_DWORD *)this + 31) = v14;
      *((_WORD *)this + 66) = v13;
    }
  }
  v4 = *(_OWORD *)((char *)this + 120);
  *(_OWORD *)((char *)this + 250) = *(_OWORD *)((char *)this + 104);
  v5 = *((_WORD *)this + 124);
  v6 = *(_OWORD *)((char *)this + 136);
  *(_OWORD *)((char *)this + 266) = v4;
  v7 = *(_OWORD *)((char *)this + 152);
  *(_OWORD *)((char *)this + 282) = v6;
  v8 = *(_OWORD *)((char *)this + 168);
  *(_OWORD *)((char *)this + 298) = v7;
  v9 = *(_OWORD *)((char *)this + 184);
  *(_OWORD *)((char *)this + 314) = v8;
  v10 = *(_OWORD *)((char *)this + 200);
  *(_OWORD *)((char *)this + 330) = v9;
  v11 = *(_OWORD *)((char *)this + 232);
  *(_OWORD *)((char *)this + 346) = v10;
  *(_OWORD *)((char *)this + 362) = *(_OWORD *)((char *)this + 216);
  *(_OWORD *)((char *)this + 378) = v11;
  *((_WORD *)this + 197) = v5;
  return 0LL;
}
