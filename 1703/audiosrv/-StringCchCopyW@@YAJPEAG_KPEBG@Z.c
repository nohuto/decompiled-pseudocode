/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002A820
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180001980 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x18001F4A0 (-GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180021180 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18002A560 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x180031A04 (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180039FA8 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z @ 0x18003BF98 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBG@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBG@Z @ 0x18003C358 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBG@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18003DBB0 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x18004D5A4 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ServiceDeviceEventCallback @ 0x1800B9470 (ServiceDeviceEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  int v3; // r10d
  __int64 v4; // r9
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v3;
  }
  else
  {
    v3 = 0;
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - a1;
      while ( v4 + a2 )
      {
        v6 = *(_WORD *)&a1[v5];
        if ( !v6 )
          break;
        *(_WORD *)a1 = v6;
        a1 += 2;
        if ( !--a2 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      a1 -= 2;
      v3 = -2147024774;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v3;
}
