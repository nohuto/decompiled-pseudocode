/*
 * XREFs of ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800CAC1C
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1800CBAEC (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureDolbyAtmosMATEncoder(
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

  *((_DWORD *)this + 27) = 8190;
  v3 = (__int128)*a2;
  *((_WORD *)this + 58) = 20;
  *(_OWORD *)((char *)this + 92) = v3;
  *((_DWORD *)this + 28) = 1;
  *(_OWORD *)((char *)this + 118) = xmmword_1801015C0;
  *(_OWORD *)((char *)this + 134) = xmmword_1801015D0;
  *(_OWORD *)((char *)this + 150) = xmmword_1801015E0;
  *(_OWORD *)((char *)this + 166) = xmmword_1801015F0;
  *(_OWORD *)((char *)this + 182) = xmmword_180101600;
  *(_OWORD *)((char *)this + 198) = xmmword_180101610;
  *(_OWORD *)((char *)this + 214) = xmmword_180101620;
  *(_DWORD *)((char *)this + 230) = 0;
  v4 = (char *)this + 234;
  v5 = *((_WORD *)this + 116);
  v6 = *(_OWORD *)((char *)this + 104);
  *(_OWORD *)v4 = *(_OWORD *)((char *)this + 88);
  v7 = *(_OWORD *)((char *)this + 120);
  *((_OWORD *)v4 + 1) = v6;
  v8 = *(_OWORD *)((char *)this + 136);
  *((_OWORD *)v4 + 2) = v7;
  v9 = *(_OWORD *)((char *)this + 152);
  *((_OWORD *)v4 + 3) = v8;
  v10 = *(_OWORD *)((char *)this + 168);
  *((_OWORD *)v4 + 4) = v9;
  v11 = *(_OWORD *)((char *)this + 184);
  *((_OWORD *)v4 + 5) = v10;
  v12 = *(_OWORD *)((char *)this + 216);
  *((_OWORD *)v4 + 6) = v11;
  *((_OWORD *)v4 + 7) = *(_OWORD *)((char *)this + 200);
  *((_OWORD *)v4 + 8) = v12;
  *((_WORD *)v4 + 72) = v5;
  *(_OWORD *)((char *)this + 264) = xmmword_180101540;
  *(_OWORD *)((char *)this + 280) = xmmword_180101550;
  *(_OWORD *)((char *)this + 296) = xmmword_180101560;
  *(_OWORD *)((char *)this + 312) = xmmword_180101570;
  *(_OWORD *)((char *)this + 328) = xmmword_180101580;
  *(_OWORD *)((char *)this + 344) = xmmword_180101590;
  *(_OWORD *)((char *)this + 360) = xmmword_1801015A0;
  *((_DWORD *)this + 94) = 1;
  return 0LL;
}
