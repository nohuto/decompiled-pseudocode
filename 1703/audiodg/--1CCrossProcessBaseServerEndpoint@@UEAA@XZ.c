/*
 * XREFs of ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140018A88
 * Callers:
 *     ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140009320 (--_G-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x140020E51 (_ATL--CComObject_CCrossProcessServerInputEndpoint_--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     ??1CCrossProcessServerOutputEndpoint@@UEAA@XZ @ 0x14002FBD8 (--1CCrossProcessServerOutputEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z @ 0x140050970 (--_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z.c)
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
