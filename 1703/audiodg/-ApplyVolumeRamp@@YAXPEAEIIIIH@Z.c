/*
 * XREFs of ?ApplyVolumeRamp@@YAXPEAEIIIIH@Z @ 0x140056E78
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140018D40 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z @ 0x140056AF8 (--$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z.c)
 *     ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z @ 0x140056C74 (--$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z.c)
 */

void __fastcall ApplyVolumeRamp(
        unsigned __int8 *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  int v6; // r10d
  float (__fastcall *v7)(unsigned __int8 *); // rax
  float (__fastcall *v8)(unsigned __int8 *); // rax
  void (__fastcall *v9)(__int64); // [rsp+20h] [rbp-18h]
  void (__fastcall *v10)(__int64); // [rsp+28h] [rbp-10h]

  if ( a4 != 8 )
  {
    v6 = 16;
    if ( a4 == 16 )
    {
      v10 = (void (__fastcall *)(__int64))F32TOI16;
      v8 = I16TOF32;
    }
    else
    {
      v6 = 24;
      if ( a4 != 24 )
      {
        if ( a6 )
        {
          if ( a5 == 3 )
          {
            v10 = (void (__fastcall *)(__int64))F32OutTOF32;
            v7 = F32InTOF32;
          }
          else
          {
            v10 = (void (__fastcall *)(__int64))F32TOI32;
            v7 = I32TOF32;
          }
          goto LABEL_18;
        }
        if ( a5 == 3 )
        {
          v10 = (void (__fastcall *)(__int64))F32OutTOF32;
          v7 = F32InTOF32;
        }
        else
        {
          v10 = (void (__fastcall *)(__int64))F32TOI32;
          v7 = I32TOF32;
        }
        goto LABEL_10;
      }
      v10 = (void (__fastcall *)(__int64))F32TOI24;
      v8 = I24TOF32;
    }
    a4 = v6;
    v9 = (void (__fastcall *)(__int64))v8;
    if ( a6 )
      goto LABEL_19;
LABEL_11:
    ApplyVolumeRampDown_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
      (__int64)a1,
      a2,
      a3,
      a4,
      v9,
      v10);
    return;
  }
  v10 = (void (__fastcall *)(__int64))F32TOUI8;
  a4 = 8;
  v7 = UI8TOF32;
  if ( !a6 )
  {
LABEL_10:
    v9 = (void (__fastcall *)(__int64))v7;
    goto LABEL_11;
  }
LABEL_18:
  v9 = (void (__fastcall *)(__int64))v7;
LABEL_19:
  ApplyVolumeRampUp_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
    (__int64)a1,
    a2,
    a3,
    a4,
    v9,
    v10);
}
