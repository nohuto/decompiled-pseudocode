/*
 * XREFs of AudioEncoderIdToRenderingMode @ 0x1800D11CC
 * Callers:
 *     ?GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x1800D1B90 (-GetCurrentSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 *     ?GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z @ 0x1800D30B0 (-GetUserSelectedSpatialAudioRenderingMode@SpatialAudioDevicePropertyReader@@UEAAJPEAI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioEncoderIdToRenderingMode(_QWORD *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v11; // [rsp+30h] [rbp-19h] BYREF
  int v12; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  int *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  v1 = 0;
  v2 = *a1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *a1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v2 = a1[1] - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( v2 )
  {
    v3 = *a1 - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
    if ( *a1 == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
      v3 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
    if ( v3 )
    {
      v4 = *a1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
      if ( *a1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
        v4 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
      if ( v4 )
      {
        v5 = *a1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
        if ( *a1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
          v5 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
        if ( v5 )
        {
          v6 = *a1 - MULTICHANNEL_SPATIAL_ENCODER;
          if ( *a1 == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
            v6 = a1[1] - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
          if ( v6 )
          {
            v7 = *a1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
            if ( *a1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
              v7 = a1[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
            if ( v7 && (unsigned int)dword_18014A3B0 > 2 )
            {
              TlgCreateSz(&pDesc, "AudioEncoderIdToRenderingMode");
              v17 = 0;
              v20 = 0;
              v15 = &v11;
              v18 = &v12;
              v11 = 443;
              v16 = 4;
              v12 = -2147418113;
              v19 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_180112236, v8, v9, 5u, &pData);
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
  return v1;
}
