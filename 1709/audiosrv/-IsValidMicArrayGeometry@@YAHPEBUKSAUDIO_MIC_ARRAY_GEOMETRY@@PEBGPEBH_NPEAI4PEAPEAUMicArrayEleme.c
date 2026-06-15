/*
 * XREFs of ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x1800E0B14
 * Callers:
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BE0F8 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x1800E0E80 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 */

__int64 __fastcall IsValidMicArrayGeometry(
        const struct KSAUDIO_MIC_ARRAY_GEOMETRY *a1,
        const unsigned __int16 *a2,
        const int *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  const char *v7; // r8
  USHORT usNumberOfMicrophones; // r10
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  SHORT wVerticalAngleEnd; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  USHORT usFrequencyBandLo; // ax
  int v22; // edx
  char v23; // r14
  char v24; // r12
  char v25; // r13
  __int64 v26; // rcx
  SHORT *p_wHorizontalAngle; // r8
  unsigned __int16 v28; // bp
  unsigned __int16 v29; // ax
  SHORT v30; // si
  __int16 v31; // di
  __int16 v32; // r15
  SHORT *p_wYCoord; // r9
  __int64 v34; // rcx
  __int16 v35; // ax
  int v36; // ecx
  __int64 v38; // [rsp+50h] [rbp+8h]

  v5 = 0;
  if ( !a1 )
  {
    v7 = "209";
LABEL_3:
    v5 = -2147024809;
    DumpTraceWin32((const char *)a1, "IsValidMicArrayGeometry", v7, -2147024809);
    return v5;
  }
  if ( !a5 )
  {
    v7 = "210";
    goto LABEL_3;
  }
  usNumberOfMicrophones = a1->usNumberOfMicrophones;
  v9 = 4096;
  if ( usNumberOfMicrophones )
    v9 = 0;
  v10 = v9;
  if ( a2 && *a2 != usNumberOfMicrophones )
    v10 = v9 | 1;
  if ( a3 && usNumberOfMicrophones > *a3 )
    v10 |= 2u;
  v11 = v10 | 8;
  if ( a1->usVersion == 256 )
    v11 = v10;
  v12 = v11 | 0x10;
  if ( a1->usMicArrayType <= 2u )
    v12 = v11;
  v13 = v12 | 0x100;
  wVerticalAngleEnd = a1->wVerticalAngleEnd;
  if ( a1->wHorizontalAngleBegin >= 0x8548u || a1->wHorizontalAngleBegin == 0 )
    v13 = v12;
  v15 = v13 | 0x200;
  if ( a1->wHorizontalAngleEnd <= 0x7AB8u )
    v15 = v13;
  v16 = v15 | 0x20;
  if ( (unsigned __int16)(a1->wVerticalAngleBegin + 15708) <= 0x7AB8u )
    v16 = v15;
  v17 = v16 | 0x40;
  if ( (unsigned __int16)(wVerticalAngleEnd + 15708) <= 0x7AB8u )
    v17 = v16;
  if ( a1->wHorizontalAngleBegin > 0 || (v18 = 1, a1->wHorizontalAngleEnd < 0) )
    v18 = 0;
  v19 = v17 | 0x400;
  if ( v18 )
    v19 = v17;
  v20 = v19 | 0x80;
  if ( a1->wVerticalAngleBegin <= wVerticalAngleEnd )
    v20 = v19;
  usFrequencyBandLo = a1->usFrequencyBandLo;
  v22 = v20 | 0x800;
  if ( usFrequencyBandLo < a1->usFrequencyBandHi )
    v22 = v20;
  if ( a1->usFrequencyBandHi < 0x14u || usFrequencyBandLo > 0x4E20u )
    v22 |= 0x20000u;
  v23 = 0;
  v24 = 1;
  v25 = 1;
  if ( !usNumberOfMicrophones )
    goto LABEL_74;
  v26 = usNumberOfMicrophones;
  p_wHorizontalAngle = &a1->KsMicCoord[0].wHorizontalAngle;
  v38 = usNumberOfMicrophones;
  v28 = 1;
  do
  {
    v29 = *(p_wHorizontalAngle - 5);
    if ( v29 > 5u )
    {
      if ( (v29 & 0xF) == 0xF )
        v22 |= 4u;
      else
        v22 |= 0x2000u;
    }
    v30 = *p_wHorizontalAngle;
    if ( (unsigned __int16)(*p_wHorizontalAngle + 31416) > 0xF570u )
      v22 |= 0x8000u;
    v31 = *(p_wHorizontalAngle - 1);
    if ( (unsigned __int16)(v31 + 15708) > 0x7AB8u )
      v22 |= 0x4000u;
    if ( (v31 == -15708 || v31 == 15708) && v30 )
      v22 |= 0x100000u;
    if ( (unsigned __int16)(v30 + 15707) <= 0x7AB6u )
      v23 = 1;
    if ( v30 || v31 )
      v24 = 0;
    v32 = *(p_wHorizontalAngle - 3);
    if ( v32 || *(p_wHorizontalAngle - 2) )
      v25 = 0;
    if ( v28 < usNumberOfMicrophones )
    {
      p_wYCoord = &a1->KsMicCoord[v28].wYCoord;
      v34 = (unsigned __int16)(usNumberOfMicrophones - v28);
      v35 = *(p_wHorizontalAngle - 4);
      do
      {
        if ( v35 == *(p_wYCoord - 1) && v32 == *p_wYCoord )
        {
          if ( *(p_wHorizontalAngle - 2) == p_wYCoord[1] && v30 == p_wYCoord[3] )
          {
            v35 = *(p_wHorizontalAngle - 4);
            if ( v31 == p_wYCoord[2] )
              v22 |= 0x10000u;
          }
          else
          {
            v35 = *(p_wHorizontalAngle - 4);
          }
        }
        p_wYCoord += 6;
        --v34;
      }
      while ( v34 );
      v26 = v38;
    }
    p_wHorizontalAngle += 6;
    ++v28;
    v38 = --v26;
  }
  while ( v26 );
  if ( v25 && v24 )
LABEL_74:
    v22 |= 0x40000u;
  v36 = v22 | 0x80000;
  if ( v23 )
    v36 = v22;
  *a5 = v36;
  return v5;
}
