/*
 * XREFs of ??1CD2DInk@@MEAA@XZ @ 0x180001630
 * Callers:
 *     ??_ECD2DInk@@MEAAPEAXI@Z @ 0x180001600 (--_ECD2DInk@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 */

void __fastcall CD2DInk::~CD2DInk(CD2DInk *this)
{
  *(_QWORD *)this = &CD2DInk::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 13));
  ReleaseInterfaceNoNULL<ID2D1Ink>(*((_QWORD *)this + 14));
  CD2DResource::~CD2DResource(this);
}
