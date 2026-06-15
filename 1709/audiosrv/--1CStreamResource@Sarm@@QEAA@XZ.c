/*
 * XREFs of ??1CStreamResource@Sarm@@QEAA@XZ @ 0x1800BF794
 * Callers:
 *     _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::dtor$1 @ 0x1800BFBAA (_util--InterfaceMap_IAudioStreamInfo_Sarm--CStreamResource_--Add_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1800C51B4 (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 */

void __fastcall Sarm::CStreamResource::~CStreamResource(Sarm::CStreamResource *this)
{
  Sarm::CStreamResource::Reclaim(this);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
}
