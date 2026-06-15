/*
 * XREFs of ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x1400176F0
 * Callers:
 *     ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400157C0 (--_G-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??1?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14002E9EC (--1-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FB70 (--1-$CComAggObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FBD0 (--1-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14004FD98 (--1-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140050160 (--_G-$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_G?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400501E0 (--_G-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z @ 0x140050400 (--_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(
        CCrossProcessBaseServerEndpoint *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx

  *(_QWORD *)this = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseServerEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 48) = &CCrossProcessBaseServerEndpoint::`vftable';
  v2 = (char *)*((_QWORD *)this + 50);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 50) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 51);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 51) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 49);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 49) = 0LL;
  }
  v5 = (char *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v5);
    *((_QWORD *)this + 16) = 0LL;
  }
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this);
}
