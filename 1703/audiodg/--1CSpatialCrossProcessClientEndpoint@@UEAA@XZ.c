/*
 * XREFs of ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140057F88
 * Callers:
 *     ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x140058020 (--1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ.c)
 *     ??_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z @ 0x1400584A0 (--_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140019480 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(
        CSpatialCrossProcessClientEndpoint *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 113) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 114) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 115) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
  v2 = (void *)*((_QWORD *)this + 117);
  if ( v2 )
    AERTDestroyZoneHeap(v2);
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
}
