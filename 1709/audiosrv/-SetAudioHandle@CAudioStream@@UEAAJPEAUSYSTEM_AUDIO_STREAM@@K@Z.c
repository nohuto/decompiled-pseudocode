/*
 * XREFs of ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18001CB20
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 * Callees:
 *     ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x18001CB4C (-SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z.c)
 */

int __fastcall CAudioStream::SetAudioHandle(
        CAudioStream *this,
        struct SYSTEM_AUDIO_STREAM *a2,
        struct IAudioDeviceGraph *a3)
{
  int result; // eax

  result = CAudioStream::SetAudioHandle(
             (CAudioStream *)((char *)this - 8),
             *((_QWORD *)a2 + 6),
             a3,
             *((_QWORD *)a2 + 8),
             (unsigned int)a3);
  *((_QWORD *)a2 + 8) = 0LL;
  return result;
}
