/*
 * XREFs of ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x1400582F4
 * Callers:
 *     ??1?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140057F1C (--1-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140058008 (--1-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x14005837C (--1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400585B0 (--_G-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z @ 0x1400587B0 (--_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140018648 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
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
  *((_QWORD *)this + 114) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 115) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 116) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
  v2 = (void *)*((_QWORD *)this + 118);
  if ( v2 )
    AERTDestroyZoneHeap(v2);
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
}
