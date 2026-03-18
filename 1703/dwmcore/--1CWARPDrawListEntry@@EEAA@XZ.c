/*
 * XREFs of ??1CWARPDrawListEntry@@EEAA@XZ @ 0x18015EA34
 * Callers:
 *     ??_GCWARPDrawListEntry@@EEAAPEAXI@Z @ 0x18015EA80 (--_GCWARPDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C4A14 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 */

void __fastcall CWARPDrawListEntry::~CWARPDrawListEntry(CWARPDrawListEntry *this)
{
  *(_QWORD *)this = &CWARPDrawListEntry::`vftable';
  ReleaseInterfaceNoNULL<IImageSource>(*((CRenderTargetImageSource **)this + 14));
  ReleaseInterfaceNoNULL<IImageSource>(*((CRenderTargetImageSource **)this + 22));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 6));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
