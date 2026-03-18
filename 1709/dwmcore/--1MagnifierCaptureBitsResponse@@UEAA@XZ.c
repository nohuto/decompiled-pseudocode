/*
 * XREFs of ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x18014A210
 * Callers:
 *     ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18014A250 (--_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(MagnifierCaptureBitsResponse *this)
{
  CMILCOMBase *v2; // rcx

  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  v2 = (CMILCOMBase *)*((_QWORD *)this + 18);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
