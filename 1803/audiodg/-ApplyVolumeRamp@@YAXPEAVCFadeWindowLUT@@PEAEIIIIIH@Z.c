/*
 * XREFs of ?ApplyVolumeRamp@@YAXPEAVCFadeWindowLUT@@PEAEIIIIIH@Z @ 0x14001A508
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140017B40 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140019380 (--$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@.c)
 *     ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x1400550A8 (--$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@.c)
 */

void __fastcall ApplyVolumeRamp(
        struct CFadeWindowLUT *a1,
        float *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  float (__fastcall *v8)(unsigned __int8 *); // rax
  unsigned int v9; // eax
  void (__fastcall *v10)(unsigned __int8 *, float); // rax
  float (__fastcall *v11)(unsigned __int8 *); // r10
  void (__fastcall *v12)(unsigned __int8 *, float); // r10
  float (__fastcall *v13)(unsigned __int8 *); // r11
  float (__fastcall *v14)(unsigned __int8 *); // r11
  float (__fastcall *v15)(unsigned __int8 *); // [rsp+28h] [rbp-20h]
  void (__fastcall *v16)(unsigned __int8 *, float); // [rsp+30h] [rbp-18h]
  void (__fastcall *v17)(unsigned __int8 *, float); // [rsp+30h] [rbp-18h]

  if ( a6 == 16 )
  {
    v16 = F32TOI16;
    v8 = I16TOF32;
    goto LABEL_3;
  }
  if ( a6 == 8 )
  {
    v17 = F32TOUI8;
    v15 = UI8TOF32;
    if ( !a8 )
    {
LABEL_12:
      v9 = a5;
LABEL_13:
      ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        (__int64)a1,
        a2,
        a3,
        a4,
        v9,
        v15,
        v17);
      return;
    }
    goto LABEL_35;
  }
  if ( a6 != 20 )
  {
    if ( a6 == 24 )
    {
      v12 = F32TOI24W;
      v9 = a5;
      if ( !a8 )
      {
        if ( a5 != 32 )
          v12 = F32TOI24;
        v14 = I24WTOF32;
        if ( a5 != 32 )
          v14 = I24TOF32;
        v17 = v12;
        v15 = v14;
        goto LABEL_13;
      }
      if ( a5 != 32 )
        v12 = F32TOI24;
      v13 = I24WTOF32;
      if ( a5 != 32 )
        v13 = I24TOF32;
      v17 = v12;
      v15 = v13;
LABEL_36:
      ApplyVolumeRampUp_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        (_DWORD)a1,
        (_DWORD)a2,
        a3,
        a4,
        v9,
        (__int64)v15,
        (__int64)v17);
      return;
    }
    if ( !a8 )
    {
      if ( a7 == 3 )
      {
        v17 = F32OutTOF32;
        v15 = F32InTOF32;
      }
      else
      {
        v17 = F32TOI32;
        v15 = I32TOF32;
      }
      goto LABEL_12;
    }
    v10 = F32OutTOF32;
    if ( a7 != 3 )
      v10 = F32TOI32;
    v11 = F32InTOF32;
    v17 = v10;
    if ( a7 != 3 )
      v11 = I32TOF32;
    v15 = v11;
LABEL_35:
    v9 = a5;
    goto LABEL_36;
  }
  v16 = F32TOI20;
  v8 = I20TOF32;
LABEL_3:
  if ( a8 )
    ApplyVolumeRampUp_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
      (_DWORD)a1,
      (_DWORD)a2,
      a3,
      a4,
      a5,
      (__int64)v8,
      (__int64)v16);
  else
    ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
      (__int64)a1,
      a2,
      a3,
      a4,
      a5,
      v8,
      v16);
}
