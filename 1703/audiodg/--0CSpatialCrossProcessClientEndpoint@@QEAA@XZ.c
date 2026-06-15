/*
 * XREFs of ??0CSpatialCrossProcessClientEndpoint@@QEAA@XZ @ 0x140057864
 * Callers:
 *     ??0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x1400578F4 (--0CSpatialCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400576F8 (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 */

CSpatialCrossProcessClientEndpoint *__fastcall CSpatialCrossProcessClientEndpoint::CSpatialCrossProcessClientEndpoint(
        CSpatialCrossProcessClientEndpoint *this)
{
  CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint(this);
  *(_QWORD *)this = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 113) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 114) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 115) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_DWORD *)this + 236) = 0;
  *((_QWORD *)this + 119) = 0LL;
  *((_BYTE *)this + 960) = 0;
  return this;
}
