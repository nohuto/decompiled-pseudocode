/*
 * XREFs of ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800D6804
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1800D73F8 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureMultiChannel(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2)
{
  __int128 v3; // xmm0
  char *v4; // rcx
  __int16 v5; // ax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  *((_DWORD *)this + 31) = 262142;
  v3 = (__int128)*a2;
  *((_WORD *)this + 66) = 0;
  *(_OWORD *)((char *)this + 108) = v3;
  *((_DWORD *)this + 32) = 1;
  *(_OWORD *)((char *)this + 134) = xmmword_180119A70;
  *(_OWORD *)((char *)this + 150) = xmmword_180119A80;
  *(_OWORD *)((char *)this + 166) = xmmword_180119A90;
  *(_OWORD *)((char *)this + 182) = xmmword_180119AA0;
  *(_OWORD *)((char *)this + 198) = xmmword_180119AB0;
  *(_OWORD *)((char *)this + 214) = xmmword_180119AC0;
  *(_OWORD *)((char *)this + 230) = xmmword_180119AD0;
  *(_DWORD *)((char *)this + 246) = 0;
  v4 = (char *)this + 250;
  v5 = *((_WORD *)this + 124);
  v6 = *(_OWORD *)((char *)this + 120);
  *(_OWORD *)v4 = *(_OWORD *)((char *)this + 104);
  v7 = *(_OWORD *)((char *)this + 136);
  *((_OWORD *)v4 + 1) = v6;
  v8 = *(_OWORD *)((char *)this + 152);
  *((_OWORD *)v4 + 2) = v7;
  v9 = *(_OWORD *)((char *)this + 168);
  *((_OWORD *)v4 + 3) = v8;
  v10 = *(_OWORD *)((char *)this + 184);
  *((_OWORD *)v4 + 4) = v9;
  v11 = *(_OWORD *)((char *)this + 200);
  *((_OWORD *)v4 + 5) = v10;
  v12 = *(_OWORD *)((char *)this + 232);
  *((_OWORD *)v4 + 6) = v11;
  *((_OWORD *)v4 + 7) = *(_OWORD *)((char *)this + 216);
  *((_OWORD *)v4 + 8) = v12;
  *((_WORD *)v4 + 72) = v5;
  return 0LL;
}
