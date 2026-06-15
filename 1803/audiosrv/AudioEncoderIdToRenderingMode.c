/*
 * XREFs of AudioEncoderIdToRenderingMode @ 0x1801003AC
 * Callers:
 *     ?GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x180100BE0 (-GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 *     ?GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x180101D20 (-GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioEncoderIdToRenderingMode(_QWORD *a1, __int64 a2, const GUID *a3, const GUID *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // [rsp+30h] [rbp-19h] BYREF
  int v13; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  const char *v15; // [rsp+60h] [rbp+17h]
  __int64 v16; // [rsp+68h] [rbp+1Fh]
  int *v17; // [rsp+70h] [rbp+27h]
  __int64 v18; // [rsp+78h] [rbp+2Fh]
  int *v19; // [rsp+80h] [rbp+37h]
  __int64 v20; // [rsp+88h] [rbp+3Fh]

  v4 = *a1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  v5 = 0;
  if ( *a1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v4 = a1[1] - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( v4 )
  {
    v6 = *a1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
    if ( *a1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
      v6 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
    if ( v6 )
    {
      v7 = *a1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
      if ( *a1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
        v7 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
      if ( v7 )
      {
        v8 = *a1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
        if ( *a1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
          v8 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
        if ( v8 )
        {
          v9 = *a1 - MULTICHANNEL_SPATIAL_ENCODER;
          if ( *a1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
            v9 = a1[1] - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
          if ( v9 )
          {
            v10 = *a1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
            if ( *a1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
              v10 = a1[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
            if ( v10 && (unsigned int)dword_1801883B0 > 2 )
            {
              v16 = 30LL;
              v15 = "AudioEncoderIdToRenderingMode";
              v17 = &v12;
              v19 = &v13;
              v12 = 443;
              v18 = 4LL;
              v13 = -2147418113;
              v20 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801883B0, &unk_180149424, a3, a4, 5u, &pData);
            }
          }
        }
        else
        {
          return 4;
        }
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}
