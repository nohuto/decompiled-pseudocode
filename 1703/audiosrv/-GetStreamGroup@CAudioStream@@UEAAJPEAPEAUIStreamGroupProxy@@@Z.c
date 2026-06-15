/*
 * XREFs of ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180018120
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::GetStreamGroup(CAudioStream *this, struct IStreamGroupProxy **a2)
{
  CProcessSubmixProxy *v2; // rcx
  __int64 (__fastcall *v3)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax

  v2 = (CProcessSubmixProxy *)*((_QWORD *)this + 6);
  v3 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v2 + 80LL);
  if ( v3 == CProcessSubmixProxy::GetConnectedStreamGroup )
    return CProcessSubmixProxy::GetConnectedStreamGroup(v2, a2);
  else
    return v3(v2, a2);
}
