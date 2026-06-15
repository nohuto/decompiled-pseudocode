/*
 * XREFs of ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@KW4_AUDCLNT_SHAREMODE@@HHPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x180030D64
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800268C0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026F70 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x18008BC44 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetConnectorTypeForStream(
        struct IMMDevice *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        int a5,
        const struct tWAVEFORMATEX *a6,
        struct IProcessSubmixProxy *a7)
{
  char v7; // di
  void *v8; // rbx
  LPVOID pv[3]; // [rsp+20h] [rbp-18h] BYREF

  pv[1] = (LPVOID)-2LL;
  v7 = a2;
  if ( (a2 & 0x400000) != 0 )
    return 3LL;
  v8 = 0LL;
  if ( a7 && (a2 & 0x20000) != 0 )
    return 0LL;
  if ( a4 && (a2 & 0x20000) != 0 )
    return 2LL;
  if ( a3 != AUDCLNT_SHAREMODE_EXCLUSIVE )
    return ((unsigned __int8)~v7 >> 1) & 1;
  pv[0] = 0LL;
  if ( !a5 || !a6 )
  {
LABEL_16:
    CoTaskMemFree(v8);
    return ((unsigned __int8)~v7 >> 1) & 1;
  }
  if ( IsFormatSupportedByHwAudioEngine(a1, a2, a6, (struct tWAVEFORMATEX **)pv) )
  {
    v8 = pv[0];
    goto LABEL_16;
  }
  CoTaskMemFree(pv[0]);
  return 1LL;
}
