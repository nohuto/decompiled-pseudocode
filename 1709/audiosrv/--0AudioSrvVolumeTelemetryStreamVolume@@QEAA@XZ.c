/*
 * XREFs of ??0AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180011920
 * Callers:
 *     ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@11W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18001D048 (--0CAudioStream@@QEAA@PEAUIAudioProcess@@_N11KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001.c)
 * Callees:
 *     ??0AudioSrvVolumeTelemetry@@QEAA@XZ @ 0x18003101C (--0AudioSrvVolumeTelemetry@@QEAA@XZ.c)
 */

AudioSrvVolumeTelemetryStreamVolume *__fastcall AudioSrvVolumeTelemetryStreamVolume::AudioSrvVolumeTelemetryStreamVolume(
        AudioSrvVolumeTelemetryStreamVolume *this)
{
  AudioSrvVolumeTelemetryStreamVolume *result; // rax

  AudioSrvVolumeTelemetry::AudioSrvVolumeTelemetry(this);
  *(_QWORD *)this = &AudioSrvVolumeTelemetryStreamVolume::`vftable';
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 15LL;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 16) = 7LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_WORD *)this + 52) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 21) = 7LL;
  result = this;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  *((_QWORD *)this + 22) = 0LL;
  return result;
}
