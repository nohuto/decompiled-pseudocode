/*
 * XREFs of ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x140057998
 * Callers:
 *     ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140057A8C (--0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400576F8 (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CSpatialCrossProcessServerEndpoint *__fastcall CSpatialCrossProcessServerEndpoint::CSpatialCrossProcessServerEndpoint(
        CSpatialCrossProcessServerEndpoint *this)
{
  CSpatialCrossProcessServerEndpoint *result; // rax

  CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 113) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 114) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_DWORD *)this + 248) = 0;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_DWORD *)this + 254) = 0;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_DWORD *)this + 262) = 0;
  *(_QWORD *)((char *)this + 1052) = 0LL;
  *(_QWORD *)((char *)this + 1060) = 0LL;
  result = this;
  *((_QWORD *)this + 134) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  return result;
}
