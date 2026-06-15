/*
 * XREFs of ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14004FE3C
 * Callers:
 *     ??1?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FAB0 (--1-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FB10 (--1-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FC30 (--1-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FCE4 (--1-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FEB0 (--1-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050060 (--_E-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_E?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400500E0 (--_E-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCCrossProcessBaseClientEndpoint@@UEAAPEAXI@Z @ 0x140050380 (--_GCCrossProcessBaseClientEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint(
        CCrossProcessBaseClientEndpoint *this)
{
  char *v2; // rcx

  *(_QWORD *)this = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 48) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 49) = &CCrossProcessBaseClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 50) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
  v2 = (char *)*((_QWORD *)this + 51);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 51) = 0LL;
  }
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this);
}
