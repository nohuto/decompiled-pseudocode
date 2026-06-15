/*
 * XREFs of ??1CStreamResource@Sarm@@QEAA@XZ @ 0x1800F1F8C
 * Callers:
 *     _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::dtor$1 @ 0x1800F23DA (_util--InterfaceMap_IAudioStreamInfo_Sarm--CStreamResource_--Add_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1800F7690 (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 */

void __fastcall Sarm::CStreamResource::~CStreamResource(Sarm::CStreamResource *this)
{
  Sarm::CStreamResource::Reclaim(this);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
