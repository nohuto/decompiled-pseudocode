/*
 * XREFs of ??1CWARPDrawListEntry@@EEAA@XZ @ 0x180154B14
 * Callers:
 *     ??_GCWARPDrawListEntry@@EEAAPEAXI@Z @ 0x180154BD0 (--_GCWARPDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 */

void __fastcall CWARPDrawListEntry::~CWARPDrawListEntry(CWARPDrawListEntry *this)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)((char *)this + 176);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 13);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 12);
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 6));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
