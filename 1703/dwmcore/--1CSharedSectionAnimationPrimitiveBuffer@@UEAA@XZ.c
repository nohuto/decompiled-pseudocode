/*
 * XREFs of ??1CSharedSectionAnimationPrimitiveBuffer@@UEAA@XZ @ 0x1800BD77C
 * Callers:
 *     ??_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x1800BD7B0 (--_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CSharedSectionAnimationPrimitiveBuffer::~CSharedSectionAnimationPrimitiveBuffer(
        CSharedSectionAnimationPrimitiveBuffer *this)
{
  CMILCOMBase *v2; // rcx

  *(_QWORD *)this = &CSharedSectionAnimationPrimitiveBuffer::`vftable';
  v2 = (CMILCOMBase *)*((_QWORD *)this + 2);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
