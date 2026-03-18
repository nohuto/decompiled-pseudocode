/*
 * XREFs of ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18015DE28
 * Callers:
 *     ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18015DE60 (--_GVisualCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800C97B8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall VisualCaptureBitsResponse::~VisualCaptureBitsResponse(VisualCaptureBitsResponse *this, void *a2)
{
  wil::details *v3; // rcx

  *(_QWORD *)this = &VisualCaptureBitsResponse::`vftable';
  v3 = (wil::details *)*((_QWORD *)this + 18);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
