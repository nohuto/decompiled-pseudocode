/*
 * XREFs of ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x180038CF4
 * Callers:
 *     ?IsValidMicArrayForAEC@@YA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038BB0 (-IsValidMicArrayForAEC@@YA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 * Callees:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x1800D3750 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 */

__int64 __fastcall IsValidMicArrayGeometry(
        const struct KSAUDIO_MIC_ARRAY_GEOMETRY *a1,
        const unsigned __int16 *a2,
        const int *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  USHORT usNumberOfMicrophones; // r11
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  int v12; // edx
  SHORT wVerticalAngleEnd; // r10
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  bool v17; // zf
  int v18; // ecx
  int v19; // r8d
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  USHORT usFrequencyBandLo; // ax
  int v24; // edx
  char v25; // r14
  char v26; // r12
  char v27; // r13
  __int64 v28; // rcx
  SHORT *p_wHorizontalAngle; // r8
  unsigned __int16 v30; // bp
  unsigned __int16 v31; // ax
  SHORT v32; // si
  __int16 v33; // di
  __int16 v34; // r15
  SHORT *p_wYCoord; // r10
  __int64 v36; // rcx
  __int16 v37; // ax
  int v38; // ecx
  const char *v40; // r8
  __int64 v41; // [rsp+50h] [rbp+8h]

  v5 = 0;
  if ( !a1 )
  {
    v40 = "209";
LABEL_62:
    v5 = -2147024809;
    DumpTraceWin32((const char *)a1, "IsValidMicArrayGeometry", v40, -2147024809);
    return v5;
  }
  if ( !a5 )
  {
    v40 = "210";
    goto LABEL_62;
  }
  usNumberOfMicrophones = a1->usNumberOfMicrophones;
  v8 = 4096;
  if ( usNumberOfMicrophones )
    v8 = 0;
  v9 = v8;
  if ( a2 && *a2 != usNumberOfMicrophones )
    v9 = v8 | 1;
  if ( a3 && usNumberOfMicrophones > *a3 )
    v9 |= 2u;
  v10 = v9 | 8;
  if ( a1->usVersion == 256 )
    v10 = v9;
  if ( a1->usMicArrayType > 2u )
    v10 |= 0x10u;
  v11 = 0;
  v12 = v10 | 0x100;
  wVerticalAngleEnd = a1->wVerticalAngleEnd;
  v14 = 0;
  if ( a1->wHorizontalAngleBegin >= 0x8548u || a1->wHorizontalAngleBegin == 0 )
    v12 = v10;
  LOBYTE(v11) = a1->wHorizontalAngleEnd <= 0x7AB8u;
  v15 = v12 | 0x200;
  if ( v11 )
    v15 = v12;
  LOBYTE(v14) = (unsigned __int16)(a1->wVerticalAngleBegin + 15708) <= 0x7AB8u;
  v16 = v15 | 0x20;
  v17 = v14 == 0;
  v18 = 0;
  if ( !v17 )
    v16 = v15;
  LOBYTE(v18) = (unsigned __int16)(wVerticalAngleEnd + 15708) <= 0x7AB8u;
  v19 = v16 | 0x40;
  if ( v18 )
    v19 = v16;
  if ( a1->wHorizontalAngleBegin > 0 || (v20 = 1, a1->wHorizontalAngleEnd < 0) )
    v20 = 0;
  v21 = v19 | 0x400;
  if ( v20 )
    v21 = v19;
  v22 = v21 | 0x80;
  if ( a1->wVerticalAngleBegin <= wVerticalAngleEnd )
    v22 = v21;
  usFrequencyBandLo = a1->usFrequencyBandLo;
  v24 = v22 | 0x800;
  if ( usFrequencyBandLo < a1->usFrequencyBandHi )
    v24 = v22;
  if ( a1->usFrequencyBandHi < 0x14u || usFrequencyBandLo > 0x4E20u )
    v24 |= 0x20000u;
  v25 = 0;
  v26 = 1;
  v27 = 1;
  if ( !usNumberOfMicrophones )
    goto LABEL_79;
  v28 = usNumberOfMicrophones;
  p_wHorizontalAngle = &a1->KsMicCoord[0].wHorizontalAngle;
  v41 = usNumberOfMicrophones;
  v30 = 1;
  do
  {
    v31 = *(p_wHorizontalAngle - 5);
    if ( v31 > 5u )
    {
      if ( (v31 & 0xF) == 0xF )
        v24 |= 4u;
      else
        v24 |= 0x2000u;
    }
    v32 = *p_wHorizontalAngle;
    if ( (unsigned __int16)(*p_wHorizontalAngle + 31416) > 0xF570u )
      v24 |= 0x8000u;
    v33 = *(p_wHorizontalAngle - 1);
    if ( (unsigned __int16)(v33 + 15708) > 0x7AB8u )
      v24 |= 0x4000u;
    if ( (v33 == -15708 || v33 == 15708) && v32 )
      v24 |= 0x100000u;
    if ( (unsigned __int16)(v32 + 15707) <= 0x7AB6u )
      v25 = 1;
    if ( v32 || v33 )
      v26 = 0;
    v34 = *(p_wHorizontalAngle - 3);
    if ( v34 || *(p_wHorizontalAngle - 2) )
      v27 = 0;
    if ( v30 < usNumberOfMicrophones )
    {
      p_wYCoord = &a1->KsMicCoord[v30].wYCoord;
      v36 = (unsigned __int16)(usNumberOfMicrophones - v30);
      v37 = *(p_wHorizontalAngle - 4);
      do
      {
        if ( v37 == *(p_wYCoord - 1) && v34 == *p_wYCoord )
        {
          if ( *(p_wHorizontalAngle - 2) == p_wYCoord[1] && v32 == p_wYCoord[3] )
          {
            v37 = *(p_wHorizontalAngle - 4);
            if ( v33 == p_wYCoord[2] )
              v24 |= 0x10000u;
          }
          else
          {
            v37 = *(p_wHorizontalAngle - 4);
          }
        }
        p_wYCoord += 6;
        --v36;
      }
      while ( v36 );
      v28 = v41;
    }
    p_wHorizontalAngle += 6;
    ++v30;
    v41 = --v28;
  }
  while ( v28 );
  if ( v27 && v26 )
LABEL_79:
    v24 |= 0x40000u;
  v38 = v24 | 0x80000;
  if ( v25 )
    v38 = v24;
  *a5 = v38;
  return v5;
}
