/*
 * XREFs of ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1800CB024
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x1800CBAEC (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureSpatialAudioHrtfEncoder(
        SpatialAudioEncoderProperties *this,
        const struct _GUID *a2)
{
  bool v4; // zf
  __int128 v5; // xmm0
  __int16 v6; // ax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v15, 0LL);
  v4 = v15 == 5;
  *((_DWORD *)this + 27) = 262142;
  *((_WORD *)this + 58) = v4 ? 16 : 112;
  v5 = (__int128)*a2;
  *((_DWORD *)this + 28) = 1;
  *(_OWORD *)((char *)this + 92) = v5;
  *(_OWORD *)((char *)this + 118) = xmmword_180101640;
  *(_OWORD *)((char *)this + 134) = xmmword_180101650;
  *(_OWORD *)((char *)this + 150) = xmmword_180101660;
  *(_OWORD *)((char *)this + 166) = xmmword_180101670;
  *(_OWORD *)((char *)this + 182) = xmmword_180101680;
  *(_OWORD *)((char *)this + 198) = xmmword_180101690;
  *(_OWORD *)((char *)this + 214) = xmmword_1801016A0;
  *(_DWORD *)((char *)this + 230) = 0;
  v6 = *((_WORD *)this + 116);
  v7 = *(_OWORD *)((char *)this + 104);
  *(_OWORD *)((char *)this + 234) = *(_OWORD *)((char *)this + 88);
  v8 = *(_OWORD *)((char *)this + 120);
  *(_OWORD *)((char *)this + 250) = v7;
  v9 = *(_OWORD *)((char *)this + 136);
  *(_OWORD *)((char *)this + 266) = v8;
  v10 = *(_OWORD *)((char *)this + 152);
  *(_OWORD *)((char *)this + 282) = v9;
  v11 = *(_OWORD *)((char *)this + 168);
  *(_OWORD *)((char *)this + 298) = v10;
  v12 = *(_OWORD *)((char *)this + 184);
  *(_OWORD *)((char *)this + 314) = v11;
  v13 = *(_OWORD *)((char *)this + 216);
  *(_OWORD *)((char *)this + 330) = v12;
  *(_OWORD *)((char *)this + 346) = *(_OWORD *)((char *)this + 200);
  *(_OWORD *)((char *)this + 362) = v13;
  *((_WORD *)this + 189) = v6;
  return 0LL;
}
